#include "def.h"
#include "ehalcon.utils/windowManager.h"

namespace elib{
	namespace Function{
		using namespace Halcon;
		// Procedure declarations 
		// External procedures 
		// Chapter: Matching / Shape-Based
		// Short Description: Display the results of Shape-Based Matching.
		void dev_display_shape_matching_results (__tuple ModelID, __tuple Color, 
			__tuple Row, __tuple Column, __tuple Angle, __tuple ScaleR, 
			__tuple ScaleC, __tuple Model);
		// Chapter: Develop
		// Short Description: Open a new graphics window that preserves the aspect ratio of the given image.
		Herror dev_open_window_fit_image (__obj Image, __tuple Row, __tuple Column, 
			__tuple WidthLimit, __tuple HeightLimit, __tuple *WindowHandle);
		// Chapter: Develop
		// Short Description: Open a new graphics window that preserves the aspect ratio of the given image size.
		Herror dev_open_window_fit_size (__tuple Row, __tuple Column, __tuple Width, 
			__tuple Height, __tuple WidthLimit, __tuple HeightLimit, 
			__tuple *WindowHandle);
		// Chapter: Develop
		// Short Description: Changes the size of a graphics window with a given maximum and minimum extent such that it preserves the aspect ratio of the given image
		void dev_resize_window_fit_image (__obj Image, __tuple Row, __tuple Column, 
			__tuple WidthLimit, __tuple HeightLimit);
		// Chapter: Develop
		// Short Description: Resizes a graphics window with a given maximum extent such that it preserves the aspect ratio of a given width and height
		void dev_resize_window_fit_size (__tuple Row, __tuple Column, __tuple Width, 
			__tuple Height, __tuple WidthLimit, __tuple HeightLimit);
		// Chapter: Develop
		// Short Description: Switch dev_update_pc, dev_update_var and dev_update_window to 'off'.
		void dev_update_off ();
		// Chapter: Develop
		// Short Description: Switch dev_update_pc, dev_update_var and dev_update_window to 'on'.
		void dev_update_on ();
		// Chapter: Graphics / Output
		// Short Description: Display the axes of a 3d coordinate system
		void disp_3d_coord_system (__tuple WindowHandle, __tuple CamParam, 
			__tuple Pose, __tuple CoordAxesLength);
		// Chapter: XLD / Creation
		// Short Description: Creates an arrow shaped XLD contour.
		void gen_arrow_contour_xld (__obj *Arrow, __tuple Row1, __tuple Column1, 
			__tuple Row2, __tuple Column2, __tuple HeadLength, __tuple HeadWidth);
		// Chapter: File
		// Short Description: Get all image files under the given path
		void list_image_files (__tuple ImageDirectory, __tuple Extensions, 
			__tuple Options, __tuple *ImageFiles);
		// Chapter: File
		// Short Description: Parse a filename into directory, base filename, and extension
		void parse_filename (__tuple FileName, __tuple *BaseName, __tuple *Extension, 
			__tuple *Directory);
		// Chapter: Filter / Arithmetic
		// Short Description: Scale the gray values of an image from the interval [Min,Max] to [0,255]
		void scale_image_range (__obj Image, __obj *ImageScaled, __tuple Min, 
			__tuple Max);
		// Chapter: Tools / Geometry
		// Short Description: Sort tuple pairs.
		void sort_pairs (__tuple T1, __tuple T2, __tuple SortMode, __tuple *Sorted1, 
			__tuple *Sorted2);
		// Chapter: Tuple / Creation
		// Short Description: This procedure generates a tuple with a sequence of equidistant values.
		void tuple_gen_sequence (__tuple Start, __tuple End, __tuple Step, 
			__tuple *Sequence);

		Herror disp_message(__tuple WindowHandle, __tuple String, __tuple CoordSystem,
			__tuple Row, __tuple Column, __tuple Color, bool Box);

		void display_found_data_codes(
			__obj& ho_SymbolXLDs, 
			__tuple hv_WindowHandle,
			__tuple hv_DecodedDataStrings, 
			__tuple hv_TitleMessage, 
			__tuple hv_ResultMessage,
			__tuple hv_ColorDecodedStrings, 
			__tuple hv_ColorResult)
		{
			// Local iconic variables 
			__obj  ho_SymbolXLD;

			// Local control variables 
			__tuple  hv_J, hv_Row, hv_Column, hv_Row1, hv_Column1;
			__tuple  hv_Width, hv_Height, hv_Ascent, hv_Descent, hv_TWidth;
			__tuple  hv_THeight, hv_DecodedData, hv_DecodedDataSubstrings;
			__tuple  hv_TPosRow, hv_TPosColumn;

			//This procedure displays the results of the search for
			//2d data codes. The data strings are displayed accordingly
			//to their length so that the whole string is visible.
			//If the data strings are too long only the first 50 chars
			//are displayed.
			//
			//Input parameters are the XLD contours of the decoded
			//data symbols, the decoded data strings, the windowhandle,
			//a title message, a result message, the color of the decoded
			//strings and the color of the result message.
			//
			//Display the result of the search for each found data code
			{
				__tuple end_val12 = (hv_DecodedDataStrings.Num()) - 1;
				__tuple step_val12 = 1;
				for (hv_J = 0; hv_J.Continue(end_val12, step_val12); hv_J += step_val12)
				{
					//
					//Display the XLD contour
					select_obj(ho_SymbolXLDs, &ho_SymbolXLD, hv_J + 1);
					get_contour_xld(ho_SymbolXLD, &hv_Row, &hv_Column);
					disp_obj(ho_SymbolXLD, hv_WindowHandle);
					
					//Display messages
					//------------------
					//Determine the length of the dislayed decoded data string
					get_window_extents(hv_WindowHandle, &hv_Row1, &hv_Column1, &hv_Width, &hv_Height);
					get_string_extents(hv_WindowHandle, hv_DecodedDataStrings.Select(hv_J), &hv_Ascent,
						&hv_Descent, &hv_TWidth, &hv_THeight);
					if (0 != (hv_TWidth > hv_Width))
					{
						hv_DecodedDataStrings.ReplaceElements(hv_J, ((hv_DecodedDataStrings.Select(hv_J)).Substr(0, 50)) + "...");
						get_string_extents(hv_WindowHandle, hv_DecodedDataStrings.Select(hv_J), &hv_Ascent,
							&hv_Descent, &hv_TWidth, &hv_THeight);
					}
					//
					//Split the decoded string in new lines for better readability
					tuple_regexp_replace(hv_DecodedDataStrings.Select(hv_J), (__tuple("[\\r\\f,^#;]").Append("replace_all")),
						"\n", &hv_DecodedData);
					tuple_split(hv_DecodedData, "\n", &hv_DecodedDataSubstrings);
					//
					//Determine the position of the displayed decoded data string
					if (0 != (__tuple((hv_Row.Max()) > 420).And((hv_Row.Min())<40)))
					{
						hv_TPosRow = (hv_Row.Max()) - 30;
					}
					else if (0 != ((hv_Row.Max())>420))
					{
						hv_TPosRow = (hv_Row.Min()) - 20;
					}
					else if (0 != ((hv_Row.Min()) < 100))
					{
						hv_TPosRow = (hv_Row.Max()) - 20;
					}
					else
					{
						hv_TPosRow = (hv_Row.Max()) - 30;
					}
					hv_TPosColumn = (((((hv_Column.Mean()) - (hv_TWidth / 2)).Concat((hv_Width - 32) - hv_TWidth)).Min()).Concat(12)).Max();
					disp_message(hv_WindowHandle, hv_DecodedDataStrings.Select(hv_J), "image", hv_TPosRow,
						hv_TPosColumn, hv_ColorDecodedStrings, "true");
				}
			}
			//
			//Display the title message and result message
			disp_message(hv_WindowHandle, hv_TitleMessage, "window", 12, 12, "black", "true");
			disp_message(hv_WindowHandle, hv_ResultMessage, "window", 40, 12, hv_ColorResult,
				"true");
			return;
		}

		Herror set_display_font (__tuple WindowHandle, __tuple Size, __tuple Font, 
			__tuple Bold, __tuple Slant)
		{
			using namespace Halcon;

			Herror err = errOk;
			// Local control variables 
			__tuple  OS, Exception, AllowedFontSizes, Distances;
			__tuple  Indices;


			// Install default exception handler 

			//This procedure sets the text font of the current window with
			//the specified attributes.
			//It is assumed that following fonts are installed on the system:
			//Windows: Courier New, Arial Times New Roman
			//Linux: courier, helvetica, times
			//Because fonts are displayed smaller on Linux than on Windows,
			//a scaling factor of 1.25 is used the get comparable results.
			//For Linux, only a limited number of font sizes is supported,
			//to get comparable results, it is recommended to use one of the
			//following sizes: 9, 11, 14, 16, 20, 27
			//(which will be mapped internally on Linux systems to 11, 14, 17, 20, 25, 34)
			//
			//input parameters:
			//WindowHandle: The graphics window for which the font will be set
			//Size: The font size. If Size=-1, the default of 16 is used.
			//Bold: If set to 'true', a bold font is used
			//Slant: If set to 'true', a slanted font is used
			//
			get_system("operating_system", &OS);
			if (0 != (__tuple(Size==__tuple()).Or(Size==-1)))
			{
				Size = 16;
			}
			if (0 != ((OS.Substring(0,2))==__tuple("Win")))
			{
				//set font on Windows systems
				if (0 != (__tuple(__tuple(Font==__tuple("mono")).Or(Font==__tuple("Courier"))).Or(Font==__tuple("courier"))))
				{
					Font = "Courier New";
				}
				else if (0 != (Font==__tuple("sans")))
				{
					Font = "Arial";
				}
				else if (0 != (Font==__tuple("serif")))
				{
					Font = "Times New Roman";
				}
				if (0 != (Bold==__tuple("true")))
				{
					Bold = 1;
				}
				else if (0 != (Bold==__tuple("false")))
				{
					Bold = 0;
				}
				else
				{
					Exception = "Wrong value of control parameter Bold";
					throw HException(Exception);
				}
				if (0 != (Slant==__tuple("true")))
				{
					Slant = 1;
				}
				else if (0 != (Slant==__tuple("false")))
				{
					Slant = 0;
				}
				else
				{
					Exception = "Wrong value of control parameter Slant";
					throw HException(Exception);
				}
				err = set_font(WindowHandle, ((((((("-"+Font)+"-")+Size)+"-*-")+Slant)+"-*-*-")+Bold)+"-");
			}
			else
			{
				//set font for UNIX systems
				Size = Size*1.25;
				AllowedFontSizes.Reset();
				AllowedFontSizes[0] = 11;
				AllowedFontSizes[1] = 14;
				AllowedFontSizes[2] = 17;
				AllowedFontSizes[3] = 20;
				AllowedFontSizes[4] = 25;
				AllowedFontSizes[5] = 34;
				if (0 != ((AllowedFontSizes.Find(Size))==-1))
				{
					Distances = (AllowedFontSizes-Size).Abs();
					tuple_sort_index(Distances, &Indices);
					Size = AllowedFontSizes[__tuple(Indices[0])];
				}
				if (0 != (__tuple(Font==__tuple("mono")).Or(Font==__tuple("Courier"))))
				{
					Font = "courier";
				}
				else if (0 != (Font==__tuple("sans")))
				{
					Font = "helvetica";
				}
				else if (0 != (Font==__tuple("serif")))
				{
					Font = "times";
				}
				if (0 != (Bold==__tuple("true")))
				{
					Bold = "bold";
				}
				else if (0 != (Bold==__tuple("false")))
				{
					Bold = "medium";
				}
				else
				{
					Exception = "Wrong value of control parameter Bold";
					throw HException(Exception);
				}
				if (0 != (Slant==__tuple("true")))
				{
					if (0 != (Font==__tuple("times")))
					{
						Slant = "i";
					}
					else
					{
						Slant = "o";
					}
				}
				else if (0 != (Slant==__tuple("false")))
				{
					Slant = "r";
				}
				else
				{
					Exception = "Wrong value of control parameter Slant";
					throw HException(Exception);
				}
				err = set_font(WindowHandle, ((((((("-adobe-"+Font)+"-")+Bold)+"-")+Slant)+"-normal-*-")+Size)+"-*-*-*-*-*-*-*");
			}
			return err;
		}

		Herror disp_message (__tuple WindowHandle, __tuple String, __tuple CoordSystem, 
			__tuple Row, __tuple Column, __tuple Color, bool Box)
		{
			using namespace Halcon;

			// Local control variables 
			__tuple  Red, Green, Blue, Row1Part, Column1Part;
			__tuple  Row2Part, Column2Part, RowWin, ColumnWin, WidthWin;
			__tuple  HeightWin, MaxAscent, MaxDescent, MaxWidth, MaxHeight;
			__tuple  R1, C1, FactorRow, FactorColumn, Width, Index, Ascent;
			__tuple  Descent, W, H, FrameHeight, FrameWidth, R2, C2;
			__tuple  DrawMode, Exception, CurrentColor;


			// Install default exception handler 
			//HException::InstallHHandler(&CPPExpDefaultExceptionHandler);

			//This procedure displays text in a graphics window.
			//
			//Input parameters:
			//WindowHandle: The WindowHandle of the graphics window, where
			//   the message should be displayed
			//String: A tuple of strings containing the text message to be displayed
			//CoordSystem: If set to 'window', the text position is given
			//   with respect to the window coordinate system.
			//   If set to 'image', image coordinates are used.
			//   (This may be useful in zoomed images.)
			//Row: The row coordinate of the desired text position
			//   If set to -1, a default value of 12 is used.
			//Column: The column coordinate of the desired text position
			//   If set to -1, a default value of 12 is used.
			//Color: defines the color of the text as string.
			//   If set to [], '' or 'auto' the currently set color is used.
			//   If a tuple of strings is passed, the colors are used cyclically
			//   for each new textline.
			//Box: If set to 'true', the text is written within a white box.
			//
			//prepare window
			get_rgb(WindowHandle, &Red, &Green, &Blue);
			get_part(WindowHandle, &Row1Part, &Column1Part, &Row2Part, &Column2Part);
			get_window_extents(WindowHandle, &RowWin, &ColumnWin, &WidthWin, &HeightWin);
			set_part(WindowHandle, 0, 0, HeightWin-1, WidthWin-1);
			//
			//default settings
			if (0 != (Row==-1))
			{
				Row = 12;
			}
			if (0 != (Column==-1))
			{
				Column = 12;
			}
			if (0 != (Color==__tuple()))
			{
				Color = "";
			}
			//
			String = (String + "").RegexpReplace("\r", "");
			String = ((""+String)+"").Split("\n");
			//
			//Estimate extentions of text depending on font size.
			get_font_extents(WindowHandle, &MaxAscent, &MaxDescent, &MaxWidth, &MaxHeight);
			if (0 != (CoordSystem==__tuple("window")))
			{
				R1 = Row;
				C1 = Column;
			}
			else
			{
				//transform image to window coordinates
				FactorRow = (1.0*HeightWin)/((Row2Part-Row1Part)+1);
				FactorColumn = (1.0*WidthWin)/((Column2Part-Column1Part)+1);
				R1 = ((Row-Row1Part)+0.5)*FactorRow;
				C1 = ((Column-Column1Part)+0.5)*FactorColumn;
			}
			//
			//display text box depending on text size
			if (Box)
			{
				//calculate box extents
				String = (" "+String)+" ";
				Width = __tuple();
				for (Index=0; Index<=(String.Num())-1; Index+=1)
				{
					get_string_extents(WindowHandle, __tuple(String[Index]), &Ascent, &Descent, 
						&W, &H);
					Width.Append(W);
				}
				FrameHeight = MaxHeight*(String.Num());
				FrameWidth = (__tuple(0).Concat(Width)).Max();
				R2 = R1+FrameHeight;
				C2 = C1+FrameWidth;
				//display rectangles
				get_draw(WindowHandle, &DrawMode);
				set_draw(WindowHandle, "fill");
				set_color(WindowHandle, "light gray");
				disp_rectangle1(WindowHandle, R1+3, C1+3, R2+3, C2+3);
				set_color(WindowHandle, "white");
				disp_rectangle1(WindowHandle, R1, C1, R2, C2);
				set_draw(WindowHandle, DrawMode);
			}

			//Write text.
			for (Index=0; Index<=(String.Num())-1; Index+=1)
			{
				CurrentColor = Color[Index%(Color.Num())];
				if (0 != (__tuple(CurrentColor!=__tuple("")).And(CurrentColor!=__tuple("auto"))))
				{
					set_color(WindowHandle, CurrentColor);
				}
				else
				{
					set_rgb(WindowHandle, Red, Green, Blue);
				}
				Row = R1+(MaxHeight*Index);
				set_tposition(WindowHandle, Row, C1);
				write_string(WindowHandle, __tuple(String[Index]));
			}
			//reset changed window settings
			set_rgb(WindowHandle, Red, Green, Blue);
			return set_part(WindowHandle, Row1Part, Column1Part, Row2Part, Column2Part);
		}

		Herror disp_continue_message (__tuple WindowHandle, __tuple Color, bool Box)
		{
			using namespace Halcon;

			// Local control variables 
			__tuple  ContinueMessage, Row, Column, Width, Height;
			__tuple  Ascent, Descent, TextWidth, TextHeight;

			//This procedure displays 'Press Run (F5) to continue' in the
			//lower right corner of the screen.
			//It uses the procedure disp_message.
			//
			//Input parameters:
			//WindowHandle: The window, where the text shall be displayed
			//Color: defines the text color.
			//   If set to '' or 'auto', the currently set color is used.
			//Box: If set to 'true', the text is displayed in a box.
			//
			ContinueMessage = "Press Run (F5) to continue";
			get_window_extents(WindowHandle, &Row, &Column, &Width, &Height);
			get_string_extents(WindowHandle, (" "+ContinueMessage)+" ", &Ascent, &Descent, 
				&TextWidth, &TextHeight);
			return disp_message(WindowHandle, ContinueMessage, "window", (Height-TextHeight)-12, (Width-TextWidth)-12, 
				Color, Box);
		}


		// Procedures 
		// External procedures 
		// Chapter: Matching / Shape-Based
		// Short Description: Display the results of Shape-Based Matching.
		void dev_display_shape_matching_results (__tuple ModelID, __tuple Color, 
			__tuple Row, __tuple Column, __tuple Angle, __tuple ScaleR, 
			__tuple ScaleC, __tuple Model)
		{
			using namespace Halcon;

			// Local iconic variables 
			__obj  ModelContours, ContoursAffinTrans;


			// Local control variables 
			__tuple  NumMatches, Index, Match, HomMat2DIdentity;
			__tuple  HomMat2DScale, HomMat2DRotate, HomMat2DTranslate;

			//This procedure displays the results of Shape-Based Matching.
			//
			NumMatches = Row.Num();
			if (0 != (NumMatches>0))
			{
				if (0 != ((ScaleR.Num())==1))
				{
					tuple_gen_const(NumMatches, ScaleR, &ScaleR);
				}
				if (0 != ((ScaleC.Num())==1))
				{
					tuple_gen_const(NumMatches, ScaleC, &ScaleC);
				}
				if (0 != ((Model.Num())==0))
				{
					tuple_gen_const(NumMatches, 0, &Model);
				}
				else if (0 != ((Model.Num())==1))
				{
					tuple_gen_const(NumMatches, Model, &Model);
				}
				for (Index=0; Index<=(ModelID.Num())-1; Index+=1)
				{
					get_shape_model_contours(&ModelContours, __tuple(ModelID[Index]), 1);
					if (ehalcon::WindowManager::isopen())
						set_color(ehalcon::WindowManager::active(),__tuple(Color[Index%(Color.Num())]));
					for (Match=0; Match<=NumMatches-1; Match+=1)
					{
						if (0 != (Index==__tuple(Model[Match])))
						{
							hom_mat2d_identity(&HomMat2DIdentity);
							hom_mat2d_scale(HomMat2DIdentity, __tuple(ScaleR[Match]), __tuple(ScaleC[Match]), 
								0, 0, &HomMat2DScale);
							hom_mat2d_rotate(HomMat2DScale, __tuple(Angle[Match]), 0, 0, &HomMat2DRotate);
							hom_mat2d_translate(HomMat2DRotate, __tuple(Row[Match]), __tuple(Column[Match]), 
								&HomMat2DTranslate);
							affine_trans_contour_xld(ModelContours, &ContoursAffinTrans, HomMat2DTranslate);
							if (ehalcon::WindowManager::isopen())
								disp_obj(ContoursAffinTrans, ehalcon::WindowManager::active());
						}
					}
				}
			}
			return;
		}

		// Chapter: Develop
		// Short Description: Open a new graphics window that preserves the aspect ratio of the given image.
		Herror dev_open_window_fit_image (__obj Image, __tuple Row, __tuple Column, 
			__tuple WidthLimit, __tuple HeightLimit, __tuple *WindowHandle)
		{
			using namespace Halcon;

			// Local control variables 
			__tuple  MinWidth, MaxWidth, MinHeight, MaxHeight;
			__tuple  ResizeFactor, ImageWidth, ImageHeight, TempWidth;
			__tuple  TempHeight, WindowWidth, WindowHeight;

			//This procedure opens a new graphics window and adjusts the size
			//such that it fits into the limits specified by WidthLimit
			//and HeightLimit, but also maintains the correct image aspect ratio.
			//
			//If it is impossible to match the minimum and maximum extent requirements
			//at the same time (f.e. if the image is very long but narrow),
			//the maximum value gets a higher priority,
			//
			//Parse input tuple WidthLimit
			if (0 != (__tuple((WidthLimit.Num())==0).Or(WidthLimit<0)))
			{
				MinWidth = 500;
				MaxWidth = 800;
			}
			else if (0 != ((WidthLimit.Num())==1))
			{
				MinWidth = 0;
				MaxWidth = WidthLimit;
			}
			else
			{
				MinWidth = WidthLimit[0];
				MaxWidth = WidthLimit[1];
			}
			//Parse input tuple HeightLimit
			if (0 != (__tuple((HeightLimit.Num())==0).Or(HeightLimit<0)))
			{
				MinHeight = 400;
				MaxHeight = 600;
			}
			else if (0 != ((HeightLimit.Num())==1))
			{
				MinHeight = 0;
				MaxHeight = HeightLimit;
			}
			else
			{
				MinHeight = HeightLimit[0];
				MaxHeight = HeightLimit[1];
			}
			//
			//Test, if window size has to be changed.
			ResizeFactor = 1;
			get_image_size(Image, &ImageWidth, &ImageHeight);
			//First, expand window to the minimum extents (if necessary).
			if (0 != (__tuple(MinWidth>ImageWidth).Or(MinHeight>ImageHeight)))
			{
				ResizeFactor = (((MinWidth.Real())/ImageWidth).Concat((MinHeight.Real())/ImageHeight)).Max();
			}
			TempWidth = ImageWidth*ResizeFactor;
			TempHeight = ImageHeight*ResizeFactor;
			//Then, shrink window to maximum extents (if necessary).
			if (0 != (__tuple(MaxWidth<TempWidth).Or(MaxHeight<TempHeight)))
			{
				ResizeFactor = ResizeFactor*((((MaxWidth.Real())/TempWidth).Concat((MaxHeight.Real())/TempHeight)).Min());
			}
			WindowWidth = ImageWidth*ResizeFactor;
			WindowHeight = ImageHeight*ResizeFactor;
			//Resize window
			set_window_attr("background_color","black");
			//ehalconWindowManager::attach((*WindowHandle)[0]);
			//HDevWindowStack::Push((*WindowHandle));
			//if (HDevWindowStack::IsOpen())
			//	set_part(HDevWindowStack::GetActive(),0, 0, ImageHeight-1, ImageWidth-1);
			Hlong wndID = 0;
			Herror err = ehalcon::WindowManager::open(Row[0],Column[0],WindowWidth[0],WindowHeight[0],0,"","", &wndID);
			if(WindowHandle != 0) *WindowHandle = wndID;
			set_part(*WindowHandle, 0, 0, ImageHeight-1, ImageWidth-1);
			return err;
		}

		// Chapter: Develop
		// Short Description: Open a new graphics window that preserves the aspect ratio of the given image size.
		Herror dev_open_window_fit_size (__tuple Row, __tuple Column, __tuple Width, 
			__tuple Height, __tuple WidthLimit, __tuple HeightLimit, 
			__tuple *WindowHandle)
		{
			using namespace Halcon;

			// Local control variables 
			__tuple  MinWidth, MaxWidth, MinHeight, MaxHeight;
			__tuple  ResizeFactor, TempWidth, TempHeight, WindowWidth;
			__tuple  WindowHeight;

			//This procedure open a new graphic window
			//such that it fits into the limits specified by WidthLimit
			//and HeightLimit, but also maintains the correct aspect ratio
			//given by Width and Height.
			//
			//If it is impossible to match the minimum and maximum extent requirements
			//at the same time (f.e. if the image is very long but narrow),
			//the maximum value gets a higher priority.
			//
			//Parse input tuple WidthLimit
			if (0 != (__tuple((WidthLimit.Num())==0).Or(WidthLimit<0)))
			{
				MinWidth = 500;
				MaxWidth = 800;
			}
			else if (0 != ((WidthLimit.Num())==1))
			{
				MinWidth = 0;
				MaxWidth = WidthLimit;
			}
			else
			{
				MinWidth = WidthLimit[0];
				MaxWidth = WidthLimit[1];
			}
			//Parse input tuple HeightLimit
			if (0 != (__tuple((HeightLimit.Num())==0).Or(HeightLimit<0)))
			{
				MinHeight = 400;
				MaxHeight = 600;
			}
			else if (0 != ((HeightLimit.Num())==1))
			{
				MinHeight = 0;
				MaxHeight = HeightLimit;
			}
			else
			{
				MinHeight = HeightLimit[0];
				MaxHeight = HeightLimit[1];
			}
			//
			//Test, if window size has to be changed.
			ResizeFactor = 1;
			//First, expand window to the minimum extents (if necessary).
			if (0 != (__tuple(MinWidth>Width).Or(MinHeight>Height)))
			{
				ResizeFactor = (((MinWidth.Real())/Width).Concat((MinHeight.Real())/Height)).Max();
			}
			TempWidth = Width*ResizeFactor;
			TempHeight = Height*ResizeFactor;
			//Then, shrink window to maximum extents (if necessary).
			if (0 != (__tuple(MaxWidth<TempWidth).Or(MaxHeight<TempHeight)))
			{
				ResizeFactor = ResizeFactor*((((MaxWidth.Real())/TempWidth).Concat((MaxHeight.Real())/TempHeight)).Min());
			}
			WindowWidth = Width*ResizeFactor;
			WindowHeight = Height*ResizeFactor;
			//Resize window
			set_window_attr("background_color","black");
			//Herror err = open_window(Row,Column,WindowWidth,WindowHeight,0,"","",&(*WindowHandle));
			//ehalconWindowManager::attach((*WindowHandle)[0]);
			//HDevWindowStack::Push((*WindowHandle));
			//if (HDevWindowStack::IsOpen())
			//	set_part(HDevWindowStack::GetActive(),0, 0, Height-1, Width-1);
			Hlong wndID = 0;
			Herror err = ehalcon::WindowManager::open(Row[0],Column[0],WindowWidth[0],WindowHeight[0],0,"","", &wndID);
			if(WindowHandle != 0) *WindowHandle = wndID;
			return err;
		}

		// Chapter: Develop
		// Short Description: Changes the size of a graphics window with a given maximum and minimum extent such that it preserves the aspect ratio of the given image
		void dev_resize_window_fit_image (__obj Image, __tuple Row, __tuple Column, 
			__tuple WidthLimit, __tuple HeightLimit)
		{
			using namespace Halcon;

			// Local control variables 
			__tuple  MinWidth, MaxWidth, MinHeight, MaxHeight;
			__tuple  ResizeFactor, Pointer, Type, ImageWidth, ImageHeight;
			__tuple  TempWidth, TempHeight, WindowWidth, WindowHeight;

			//This procedure adjusts the size of the current window
			//such that it fits into the limits specified by WidthLimit
			//and HeightLimit, but also maintains the correct image aspect ratio.
			//
			//If it is impossible to match the minimum and maximum extent requirements
			//at the same time (f.e. if the image is very long but narrow),
			//the maximum value gets a higher priority,
			//
			//Parse input tuple WidthLimit
			if (0 != (__tuple((WidthLimit.Num())==0).Or(WidthLimit<0)))
			{
				MinWidth = 500;
				MaxWidth = 800;
			}
			else if (0 != ((WidthLimit.Num())==1))
			{
				MinWidth = 0;
				MaxWidth = WidthLimit;
			}
			else
			{
				MinWidth = WidthLimit[0];
				MaxWidth = WidthLimit[1];
			}
			//Parse input tuple HeightLimit
			if (0 != (__tuple((HeightLimit.Num())==0).Or(HeightLimit<0)))
			{
				MinHeight = 400;
				MaxHeight = 600;
			}
			else if (0 != ((HeightLimit.Num())==1))
			{
				MinHeight = 0;
				MaxHeight = HeightLimit;
			}
			else
			{
				MinHeight = HeightLimit[0];
				MaxHeight = HeightLimit[1];
			}
			//
			//Test, if window size has to be changed.
			ResizeFactor = 1;
			get_image_pointer1(Image, &Pointer, &Type, &ImageWidth, &ImageHeight);
			//First, expand window to the minimum extents (if necessary).
			if (0 != (__tuple(MinWidth>ImageWidth).Or(MinHeight>ImageHeight)))
			{
				ResizeFactor = (((MinWidth.Real())/ImageWidth).Concat((MinHeight.Real())/ImageHeight)).Max();
			}
			TempWidth = ImageWidth*ResizeFactor;
			TempHeight = ImageHeight*ResizeFactor;
			//Then, shrink window to maximum extents (if necessary).
			if (0 != (__tuple(MaxWidth<TempWidth).Or(MaxHeight<TempHeight)))
			{
				ResizeFactor = ResizeFactor*((((MaxWidth.Real())/TempWidth).Concat((MaxHeight.Real())/TempHeight)).Min());
			}
			WindowWidth = ImageWidth*ResizeFactor;
			WindowHeight = ImageHeight*ResizeFactor;
			//Resize window
			if (ehalcon::WindowManager::isopen())
				set_window_extents(ehalcon::WindowManager::active(),Row, Column, WindowWidth, WindowHeight);
			if (ehalcon::WindowManager::isopen())
				set_part(ehalcon::WindowManager::active(),0, 0, ImageHeight-1, ImageWidth-1);
			return;
		}

		// Chapter: Develop
		// Short Description: Resizes a graphics window with a given maximum extent such that it preserves the aspect ratio of a given width and height
		void dev_resize_window_fit_size (__tuple Row, __tuple Column, __tuple Width, 
			__tuple Height, __tuple WidthLimit, __tuple HeightLimit)
		{
			using namespace Halcon;

			// Local control variables 
			__tuple  MinWidth, MaxWidth, MinHeight, MaxHeight;
			__tuple  ResizeFactor, TempWidth, TempHeight, WindowWidth;
			__tuple  WindowHeight;

			//This procedure adjusts the size of the current window
			//such that it fits into the limits specified by WidthLimit
			//and HeightLimit, but also maintains the correct aspect ratio
			//given by Width and Height.
			//
			//If it is impossible to match the minimum and maximum extent requirements
			//at the same time (f.e. if the image is very long but narrow),
			//the maximum value gets a higher priority.
			//
			//Parse input tuple WidthLimit
			if (0 != (__tuple((WidthLimit.Num())==0).Or(WidthLimit<0)))
			{
				MinWidth = 500;
				MaxWidth = 800;
			}
			else if (0 != ((WidthLimit.Num())==1))
			{
				MinWidth = 0;
				MaxWidth = WidthLimit;
			}
			else
			{
				MinWidth = WidthLimit[0];
				MaxWidth = WidthLimit[1];
			}
			//Parse input tuple HeightLimit
			if (0 != (__tuple((HeightLimit.Num())==0).Or(HeightLimit<0)))
			{
				MinHeight = 400;
				MaxHeight = 600;
			}
			else if (0 != ((HeightLimit.Num())==1))
			{
				MinHeight = 0;
				MaxHeight = HeightLimit;
			}
			else
			{
				MinHeight = HeightLimit[0];
				MaxHeight = HeightLimit[1];
			}
			//
			//Test, if window size has to be changed.
			ResizeFactor = 1;
			//First, expand window to the minimum extents (if necessary).
			if (0 != (__tuple(MinWidth>Width).Or(MinHeight>Height)))
			{
				ResizeFactor = (((MinWidth.Real())/Width).Concat((MinHeight.Real())/Height)).Max();
			}
			TempWidth = Width*ResizeFactor;
			TempHeight = Height*ResizeFactor;
			//Then, shrink window to maximum extents (if necessary).
			if (0 != (__tuple(MaxWidth<TempWidth).Or(MaxHeight<TempHeight)))
			{
				ResizeFactor = ResizeFactor*((((MaxWidth.Real())/TempWidth).Concat((MaxHeight.Real())/TempHeight)).Min());
			}
			WindowWidth = Width*ResizeFactor;
			WindowHeight = Height*ResizeFactor;
			//Resize window
			if (ehalcon::WindowManager::isopen())
				set_window_extents(ehalcon::WindowManager::active(),Row, Column, WindowWidth, WindowHeight);
			if (ehalcon::WindowManager::isopen())
				set_part(ehalcon::WindowManager::active(),0, 0, Height-1, Width-1);
			return;
		}

		// Chapter: Develop
		// Short Description: Switch dev_update_pc, dev_update_var and dev_update_window to 'off'.
		void dev_update_off ()
		{
			using namespace Halcon;
			//This procedure sets different update settings to 'off'.
			//This is useful to get the best performance and reduce overhead.
			//
			// dev_update_pc(...); only in hdevelop
			// dev_update_var(...); only in hdevelop
			// dev_update_window(...); only in hdevelop
			return;
		}

		// Chapter: Develop
		// Short Description: Switch dev_update_pc, dev_update_var and dev_update_window to 'on'.
		void dev_update_on ()
		{
			using namespace Halcon;
			//This procedure sets different update settings to 'on'.
			//
			// dev_update_pc(...); only in hdevelop
			// dev_update_var(...); only in hdevelop
			// dev_update_window(...); only in hdevelop
			return;
		}

		// Chapter: Graphics / Output
		// Short Description: Display the axes of a 3d coordinate system
		void disp_3d_coord_system (__tuple WindowHandle, __tuple CamParam, 
			__tuple Pose, __tuple CoordAxesLength)
		{
			using namespace Halcon;

			// Local iconic variables 
			__obj  Arrows;


			// Local control variables 
			__tuple  TransWorld2Cam, OrigCamX, OrigCamY, OrigCamZ;
			__tuple  Row0, Column0, X, Y, Z, RowAxX, ColumnAxX, RowAxY;
			__tuple  ColumnAxY, RowAxZ, ColumnAxZ, Red, Green, Blue;

			//This procedure displays a 3D coordinate system.
			//It needs the procedure gen_arrow_contour_xld.
			//
			//Input parameters:
			//WindowHandle: The window where the coordinate system shall be displayed
			//CamParam: The camera paramters
			//Pose: The pose to be displayed
			//CoordAxesLength: The length of the coordinate axes in world coordinates
			//
			//Check, if Pose is a correct pose tuple.
			if (0 != ((Pose.Num())!=7))
			{
				return;
			}
			//
			//Poses with Z position zero cannot be projected
			//(that would lead to a division by zero error).
			if (0 != (__tuple(Pose[2])==0.0))
			{
				return;
			}
			//Convert to pose to a transformation matrix
			pose_to_hom_mat3d(Pose, &TransWorld2Cam);
			//Project the world origin into the image
			affine_trans_point_3d(TransWorld2Cam, 0, 0, 0, &OrigCamX, &OrigCamY, &OrigCamZ);
			project_3d_point(OrigCamX, OrigCamY, OrigCamZ, CamParam, &Row0, &Column0);
			//Project the coordinate axes into the image
			affine_trans_point_3d(TransWorld2Cam, CoordAxesLength, 0, 0, &X, &Y, &Z);
			project_3d_point(X, Y, Z, CamParam, &RowAxX, &ColumnAxX);
			affine_trans_point_3d(TransWorld2Cam, 0, CoordAxesLength, 0, &X, &Y, &Z);
			project_3d_point(X, Y, Z, CamParam, &RowAxY, &ColumnAxY);
			affine_trans_point_3d(TransWorld2Cam, 0, 0, CoordAxesLength, &X, &Y, &Z);
			project_3d_point(X, Y, Z, CamParam, &RowAxZ, &ColumnAxZ);
			//
			//Generate an XLD contour for each axis
			gen_arrow_contour_xld(&Arrows, (Row0.Concat(Row0)).Concat(Row0), (Column0.Concat(Column0)).Concat(Column0), 
				(RowAxX.Concat(RowAxY)).Concat(RowAxZ), (ColumnAxX.Concat(ColumnAxY)).Concat(ColumnAxZ), 
				5, 5);
			//
			//Display coordinate system
			disp_xld(Arrows, WindowHandle);
			//
			get_rgb(WindowHandle, &Red, &Green, &Blue);
			set_rgb(WindowHandle, __tuple(Red[0]), __tuple(Green[0]), __tuple(Blue[0]));
			set_tposition(WindowHandle, RowAxX+3, ColumnAxX+3);
			write_string(WindowHandle, "X");
			set_rgb(WindowHandle, __tuple(Red[1%(Red.Num())]), __tuple(Green[1%(Green.Num())]), 
				__tuple(Blue[1%(Blue.Num())]));
			set_tposition(WindowHandle, RowAxY+3, ColumnAxY+3);
			write_string(WindowHandle, "Y");
			set_rgb(WindowHandle, __tuple(Red[2%(Red.Num())]), __tuple(Green[2%(Green.Num())]), 
				__tuple(Blue[2%(Blue.Num())]));
			set_tposition(WindowHandle, RowAxZ+3, ColumnAxZ+3);
			write_string(WindowHandle, "Z");
			set_rgb(WindowHandle, Red, Green, Blue);
			return;
		}

		// Chapter: XLD / Creation
		// Short Description: Creates an arrow shaped XLD contour.
		void gen_arrow_contour_xld (__obj *Arrow, __tuple Row1, __tuple Column1, 
			__tuple Row2, __tuple Column2, __tuple HeadLength, __tuple HeadWidth)
		{
			using namespace Halcon;

			// Local iconic variables 
			__obj  TempArrow;


			// Local control variables 
			__tuple  Length, ZeroLengthIndices, DR, DC, HalfHeadWidth;
			__tuple  RowP1, ColP1, RowP2, ColP2, Index;

			//This procedure generates arrow shaped XLD contours,
			//pointing from (Row1, Column1) to (Row2, Column2).
			//If starting and end point are identical, a contour consisting
			//of a single point is returned.
			//
			//input parameteres:
			//Row1, Column1: Coordinates of the arrows' starting points
			//Row2, Column2: Coordinates of the arrows' end points
			//HeadLength, HeadWidth: Size of the arrow heads in pixels
			//
			//output parameter:
			//Arrow: The resulting XLD contour
			//
			//The input tuples Row1, Column1, Row2, and Column2 have to be of
			//the same length.
			//HeadLength and HeadWidth either have to be of the same length as
			//Row1, Column1, Row2, and Column2 or have to be a single element.
			//If one of the above restrictions is violated, an error will occur.
			//
			//
			//Init
			gen_empty_obj(&(*Arrow));
			//
			//Calculate the arrow length
			distance_pp(Row1, Column1, Row2, Column2, &Length);
			//
			//Mark arrows with identical start and end point
			//(set Length to -1 to avoid division-by-zero exception)
			ZeroLengthIndices = Length.Find(0);
			if (0 != (ZeroLengthIndices!=-1))
			{
				Length[ZeroLengthIndices] = -1;
			}
			//
			//Calculate auxiliary variables.
			DR = (1.0*(Row2-Row1))/Length;
			DC = (1.0*(Column2-Column1))/Length;
			HalfHeadWidth = HeadWidth/2.0;
			//
			//Calculate end points of the arrow head.
			RowP1 = (Row1+((Length-HeadLength)*DR))+(HalfHeadWidth*DC);
			ColP1 = (Column1+((Length-HeadLength)*DC))-(HalfHeadWidth*DR);
			RowP2 = (Row1+((Length-HeadLength)*DR))-(HalfHeadWidth*DC);
			ColP2 = (Column1+((Length-HeadLength)*DC))+(HalfHeadWidth*DR);
			//
			//Finally create output XLD contour for each input point pair
			for (Index=0; Index<=(Length.Num())-1; Index+=1)
			{
				if (0 != (__tuple(Length[Index])==-1))
				{
					//Create_ single points for arrows with identical start and end point
					gen_contour_polygon_xld(&TempArrow, __tuple(Row1[Index]), __tuple(Column1[Index]));
				}
				else
				{
					//Create arrow contour
					gen_contour_polygon_xld(&TempArrow, ((((__tuple(Row1[Index]).Concat(__tuple(Row2[Index]))).Concat(__tuple(RowP1[Index]))).Concat(__tuple(Row2[Index]))).Concat(__tuple(RowP2[Index]))).Concat(__tuple(Row2[Index])), 
						((((__tuple(Column1[Index]).Concat(__tuple(Column2[Index]))).Concat(__tuple(ColP1[Index]))).Concat(__tuple(Column2[Index]))).Concat(__tuple(ColP2[Index]))).Concat(__tuple(Column2[Index])));
				}
				concat_obj((*Arrow), TempArrow, &(*Arrow));
			}
			return;
		}

		// Chapter: File
		// Short Description: Get all image files under the given path
		void list_image_files (__tuple ImageDirectory, __tuple Extensions, 
			__tuple Options, __tuple *ImageFiles)
		{
			using namespace Halcon;

			// Local control variables 
			__tuple  HalconImages, OS, Directories, Index;
			__tuple  FileExists, AllFiles, i, Selection;

			//This procedure returns all files in a given directory
			//with one of the suffixes specified in Extensions.
			//
			//input parameters:
			//ImageDirectory: as the name says
			//   If a tuple of directories is given, only the images in the first
			//   existing directory are returned.
			//   If a local directory is not found, the directory is searched
			//   under %HALCONIMAGES%/ImageDirectory. If %HALCONIMAGES% is not set,
			//   %HALCONROOT%/images is used instead.
			//Extensions: A string tuple containing the extensions to be found
			//   e.g. ['png','tif',jpg'] or others
			//If Extensions is set to 'default' or the empty string '',
			//   all image suffixes supported by HALCON are used.
			//Options: as in the operator list_files, except that the 'files'
			//   option is always used. Note that the 'directories' option
			//   has no effect but increases runtime, because only files are
			//   returned.
			//
			//output parameter:
			//ImageFiles: A tuple of all found image file names
			//
			if (0 != (__tuple(__tuple(Extensions==__tuple()).Or(Extensions==__tuple(""))).Or(Extensions==__tuple("default"))))
			{
				Extensions.Reset();
				Extensions[0] = "ima";
				Extensions[1] = "bmp";
				Extensions[2] = "jpg";
				Extensions[3] = "png";
				Extensions[4] = "tiff";
				Extensions[5] = "tif";
				Extensions[6] = "gif";
				Extensions[7] = "jpeg";
				Extensions[8] = "pcx";
				Extensions[9] = "pgm";
				Extensions[10] = "ppm";
				Extensions[11] = "pbm";
				Extensions[12] = "xwd";
				Extensions[13] = "pnm";
			}
			if (0 != (ImageDirectory==__tuple("")))
			{
				ImageDirectory = ".";
			}
			get_system("image_dir", &HalconImages);
			get_system("operating_system", &OS);
			if (0 != ((OS.Substring(0,2))==__tuple("Win")))
			{
				HalconImages = HalconImages.Split(";");
			}
			else
			{
				HalconImages = HalconImages.Split(":");
			}
			Directories.Reset();
			Directories.Append(ImageDirectory);
			Directories.Append((HalconImages+"/")+ImageDirectory);
			(*ImageFiles) = __tuple();
			for (Index=0; Index<=(Directories.Num())-1; Index+=1)
			{
				file_exists(__tuple(Directories[Index]), &FileExists);
				if (0 != FileExists)
				{
					list_files(__tuple(Directories[Index]), __tuple("files").Concat(Options), &AllFiles);
					(*ImageFiles) = __tuple();
					for (i=0; i<=(Extensions.Num())-1; i+=1)
					{
						tuple_regexp_select(AllFiles, ((".*"+__tuple(Extensions[i]))+"$").Concat("ignore_case"), 
							&Selection);
						(*ImageFiles).Append(Selection);
					}
					tuple_regexp_replace((*ImageFiles), (__tuple("\\\\").Append("replace_all")), 
						"/", &(*ImageFiles));
					tuple_regexp_replace((*ImageFiles), (__tuple("//").Append("replace_all")), "/", 
						&(*ImageFiles));
					return;
				}
			}
			return;
		}

		// Chapter: File
		// Short Description: Parse a filename into directory, base filename, and extension
		void parse_filename (__tuple FileName, __tuple *BaseName, __tuple *Extension, 
			__tuple *Directory)
		{
			using namespace Halcon;

			// Local control variables 
			__tuple  DirectoryTmp;

			//This procedure gets a filename (with full path) as input
			//and returns the directory path, the base filename and the extension
			//in three different strings.
			//
			//In the output path the path separators will be replaced
			//by '/' in all cases.
			//
			//The procedure shows the possibilities of regular expressions in HALCON.
			//
			//Input parameters:
			//FileName: The input filename
			//
			//Output parameters:
			//BaseName: The filename without directory description and file extension
			//Extension: The file extension
			//Directory: The directory path
			//
			//Example:
			//basename('C:/images/part_01.png',...) returns
			//BaseName = 'part_01'
			//Extension = 'png'
			//Directory = 'C:\\images\\' (on Windows systems)
			//
			//Explanation of the regular expressions:
			//
			//'([^\\\\/]*?)(?:\\.[^.]*)?$':
			//To start at the end, the '$' matches the end of the string,
			//so it is best to read the expression from right to left.
			//The part in brackets (?:\\.[^.}*) denotes a non-capturing group.
			//That means, that this part is matched, but not captured
			//in contrast to the first bracketed group ([^\\\\/], see below.)
			//\\.[^.]* matches a dot '.' followed by as many non-dots as possible.
			//So (?:\\.[^.]*)? matches the file extension, if any.
			//The '?' at the end assures, that even if no extension exists,
			//a correct match is returned.
			//The first part in brackets ([^\\\\/]*?) is a capture group,
			//which means, that if a match is found, only the part in
			//brackets is returned as a result.
			//Because both HDevelop strings and regular expressions need a '\\'
			//to describe a backslash, inside regular expressions within HDevelop
			//a backslash has to be written as '\\\\'.
			//[^\\\\/] matches any character but a slash or backslash ('\\' in HDevelop)
			//[^\\\\/]*? matches a string od 0..n characters (except '/' or '\\')
			//where the '?' after the '*' switches the greediness off,
			//that means, that the shortest possible match is returned.
			//This option is necessary to cut off the extension
			//but only if (?:\\.[^.]*)? is able to match one.
			//To summarize, the regular expression matches that part of
			//the input string, that follows after the last '/' or '\\' and
			//cuts off the extension (if any) after the last '.'.
			//
			//'\\.([^.]*)$':
			//This matches everything after the last '.' of the input string.
			//Because ([^.]) is a capturing group,
			//only the part after the dot is returned.
			//
			//'.*[\\\\/]':
			//This matches the longest substring with a '/' or a '\\' at the end.
			//
			tuple_regexp_match(FileName, "([^\\\\/]*?)(?:\\.[^.]*)?$", &(*BaseName));
			tuple_regexp_match(FileName, "\\.([^.]*)$", &(*Extension));
			tuple_regexp_match(FileName, ".*[\\\\/]", &DirectoryTmp);
			//
			//Finally all found backslashes ('\\') are converted
			//to a slash to get consistent paths
			tuple_regexp_replace(DirectoryTmp, (__tuple("\\\\").Append("replace_all")), "/", 
				&(*Directory));
			return;
		}

		// Chapter: Filter / Arithmetic
		// Short Description: Scale the gray values of an image from the interval [Min,Max] to [0,255]
		void scale_image_range (__obj Image, __obj *ImageScaled, __tuple Min, 
			__tuple Max)
		{
			using namespace Halcon;

			// Local iconic variables 
			__obj  SelectedChannel, LowerRegion, UpperRegion;


			// Local control variables 
			__tuple  LowerLimit, UpperLimit, Mult, Add, Channels;
			__tuple  Index, MinGray, MaxGray, Range;

			//Convenience procedure to scale the gray values of the
			//input image Image from the interval [Min,Max]
			//to the interval [0,255] (default).
			//Gray values < 0 or > 255 (after scaling) are clipped.
			//
			//If the image shall be scaled to an interval different from [0,255],
			//this can be achieved by passing tuples with 2 values [From, To]
			//as Min and Max.
			//Example:
			//scale_image_range(Image:ImageScaled:[100,50],[200,250])
			//maps the gray values of Image from the interval [100,200] to [50,250].
			//All other gray values will be clipped.
			//
			//input parameters:
			//Image: the input image
			//Min: the minimum gray value which will be mapped to 0
			//     If a tuple with two values is given, the first value will
			//     be mapped to the second value.
			//Max: The maximum gray value which will be mapped to 255
			//     If a tuple with two values is given, the first value will
			//     be mapped to the second value.
			//
			//output parameter:
			//ImageScale: the resulting scaled image
			//
			if (0 != ((Min.Num())==2))
			{
				LowerLimit = Min[1];
				Min = Min[0];
			}
			else
			{
				LowerLimit = 0.0;
			}
			if (0 != ((Max.Num())==2))
			{
				UpperLimit = Max[1];
				Max = Max[0];
			}
			else
			{
				UpperLimit = 255.0;
			}
			//
			//Calculate scaling parameters
			Mult = ((UpperLimit-LowerLimit).Real())/(Max-Min);
			Add = ((-Mult)*Min)+LowerLimit;
			//
			//Scale image
			scale_image(Image, &Image, Mult, Add);
			//
			//Clip gray values if necessary
			//This must be done for each channel separately
			count_channels(Image, &Channels);
			for (Index=1; Index<=Channels; Index+=1)
			{
				access_channel(Image, &SelectedChannel, Index);
				min_max_gray(SelectedChannel, SelectedChannel, 0, &MinGray, &MaxGray, &Range);
				threshold(SelectedChannel, &LowerRegion, (MinGray.Concat(LowerLimit)).Min(), 
					LowerLimit);
				threshold(SelectedChannel, &UpperRegion, UpperLimit, (UpperLimit.Concat(MaxGray)).Max());
				paint_region(LowerRegion, SelectedChannel, &SelectedChannel, LowerLimit, "fill");
				paint_region(UpperRegion, SelectedChannel, &SelectedChannel, UpperLimit, "fill");
				if (0 != (Index==1))
				{
					copy_obj(SelectedChannel, &(*ImageScaled), 1, 1);
				}
				else
				{
					append_channel((*ImageScaled), SelectedChannel, &(*ImageScaled));
				}
			}
			return;
		}

		// Chapter: Tools / Geometry
		// Short Description: Sort tuple pairs.
		void sort_pairs (__tuple T1, __tuple T2, __tuple SortMode, __tuple *Sorted1, 
			__tuple *Sorted2)
		{
			using namespace Halcon;

			// Local control variables 
			__tuple  Indices1, Indices2;

			//Sort tuple pairs.
			//
			//input parameters:
			//T1: first tuple
			//T2: second tuple
			//SortMode: if set to '1', sort by the first tuple,
			//   if set to '2', sort by the second tuple
			//
			if (0 != (__tuple(SortMode==__tuple("1")).Or(SortMode==1)))
			{
				tuple_sort_index(T1, &Indices1);
				(*Sorted1) = T1.Subset(Indices1);
				(*Sorted2) = T2.Subset(Indices1);
			}
			else if (0 != (__tuple(__tuple(SortMode==__tuple("column")).Or(SortMode==__tuple("2"))).Or(SortMode==2)))
			{
				tuple_sort_index(T2, &Indices2);
				(*Sorted1) = T1.Subset(Indices2);
				(*Sorted2) = T2.Subset(Indices2);
			}
			return;
		}

		// Chapter: Tuple / Creation
		// Short Description: This procedure generates a tuple with a sequence of equidistant values.
		void tuple_gen_sequence (__tuple Start, __tuple End, __tuple Step, 
			__tuple *Sequence)
		{
			using namespace Halcon;
			//
			//This procedure generates a tuple with a sequence of equidistant values.
			//[Start, Start + Step, Start + 2*Step, ... End]
			//
			//Input parameters:
			//Start: Start value of the tuple
			//End:   Maximum value for the last entry.
			//       Note that the last entry of the resulting tuple may be less than End
			//Step:  Increment value
			//Assure that Step#0 and sgn(Start-End)#sgn(Step), else an error occurs
			//
			//Output parameter:
			//Sequence: The resulting tuple [Start, Start + Step, Start + 2*Step, ... End]
			//
			(*Sequence) = (Start-Step)+(__tuple((((End-Start)/Step).Int())+1,Step).Cumul());
			return;
		}
	}
}