#include "def.h"
#include "ehalcon.core/ehalcon.core.h"
#include "ehalcon.utils/ehalcon.utils.h"
#include "ehalcon.utils/windowManager.h"
#include "ehalcon.utils/objectInfo.h"
#include "e.lib.core/e.lib.core.h"
#include "e.lib.utils/e.lib.utils.h"

//带有try开始的程序头
#define defFunctionBegin_Try(f)					void f (PMDATA_INF r, INT c, PMDATA_INF a){offsetRemoveThisPtr; Herror err = errOk;try{

//程序结束：返回值为错误代码
#define defFunctionEnd_SetErrorCode					}catch(__hException& e){err = e.err; sysLog(errOutRuntime(e.err, e.message));} r->m_int = err;ehalcon::Core::setSystemCheckError(err);}  //这个函数捕获例外，并输出信息和设置返回值

//程序结束：返回值为tuple
#define defFunctionEnd_ReturnTuple	        }catch(__hException& e){rv_tupleset(ehalcon::Core::newTuple()); err = e.err; sysLog(errOutRuntime(e.err, e.message));}ehalcon::Core::setSystemCheckError(err);}  //这个函数捕获例外，并输出信息和设置返回值

//程序结束：返回值为obj
#define defFunctionEnd_ReturnObj				}catch(__hException& e){rv_objset(ehalcon::Core::newObj()); err = e.err; sysLog(errOutRuntime(e.err, e.message));}ehalcon::Core::setSystemCheckError(err);}  //这个函数捕获例外，并输出信息和设置返回值

//程序结束：返回值为空
#define defFunctionEnd_NoSetErrorCode					}catch(__hException& e){err = e.err; sysLog(errOutRuntime(e.err, e.message));}ehalcon::Core::setSystemCheckError(err);}  //这个函数捕获例外，并输出信息和设置返回值

//没有try的普通函数头
#define defFunctionBegin(f)				void f (PMDATA_INF r, INT c, PMDATA_INF a){offsetRemoveThisPtr;

//函数结束：啥都没有的
#define defFunctionEnd					} 

//定义一个函数头
#define defFunctionImplement(n) void n (PMDATA_INF r, INT c, PMDATA_INF a)

namespace elib{
	namespace Function{
		defFunctionImplement(__tuple_construct); defFunctionImplement(__tuple_copy); defFunctionImplement(__tuple_free);
		defFunctionImplement(__obj_construct); defFunctionImplement(__obj_copy); defFunctionImplement(__obj_free);

		defFunctionImplement(xx_show_obj);
		defFunctionImplement(xx_get_window_id_from_name);
		defFunctionImplement(xx_debug_config); defFunctionImplement(xx_set_err_callback); defFunctionImplement(xx_make_error);
		defFunctionImplement(xx_gen_tuple);
		defFunctionImplement(xx_tuple_s); defFunctionImplement(xx_tuple_d); defFunctionImplement(xx_tuple_l);
		defFunctionImplement(xx_tuple_ss); defFunctionImplement(xx_tuple_dd); defFunctionImplement(xx_tuple_ll);
		defFunctionImplement(xx_tuple_num);
		defFunctionImplement(xx_get_tuple_element_type);
		defFunctionImplement(xx_is_true);
		defFunctionImplement(xx_tuple_reset);
		defFunctionImplement(xx_obj_reset);
		defFunctionImplement(xx_tuple_setter);
		defFunctionImplement(xx_cvt_bytes2hImage);
		defFunctionImplement(xx_cvt_hImage2bytes);
		defFunctionImplement(xx_out);
		defFunctionImplement(xx_wait_key);

		//////////////////////////////////////////////////////////////////////////
		defFunctionImplement(xx_x_strlen);
		defFunctionImplement(xx_x_insert);
		defFunctionImplement(xx_x_split);
		defFunctionImplement(xx_x_uniq);
		defFunctionImplement(xx_x_remove);
		defFunctionImplement(xx_x_strchr);
		defFunctionImplement(xx_x_regexp_select);
		defFunctionImplement(xx_x_strstr);
		defFunctionImplement(xx_x_lsh);
		defFunctionImplement(xx_x_rsh);
		//////////////////////////////////////////////////////////////////////////

		defFunctionImplement(xx_x_find);
		defFunctionImplement(xx_x_clone_obj);
		defFunctionImplement(xx_x_clone_tuple);
		defFunctionImplement(xx_x_set);
		defFunctionImplement(xx_x_not);
		defFunctionImplement(xx_x_bnot);
		defFunctionImplement(xx_x_getcount);
		defFunctionImplement(xx_x_get_value);
		defFunctionImplement(xx_x_get_value_range);
		defFunctionImplement(xx_x_get_value_string);
		defFunctionImplement(xx_x_get_value_string_range);
		defFunctionImplement(xx_x_add);
		defFunctionImplement(xx_x_sub);
		defFunctionImplement(xx_x_mul);
		defFunctionImplement(xx_x_div);
		defFunctionImplement(xx_x_mod);
		defFunctionImplement(xx_x_regexp);
		defFunctionImplement(xx_x_band);
		defFunctionImplement(xx_x_bxor);
		defFunctionImplement(xx_x_bor);
		defFunctionImplement(xx_x_format);
		defFunctionImplement(xx_x_and);
		defFunctionImplement(xx_x_or);
		defFunctionImplement(xx_x_xor);
		defFunctionImplement(xx_x_less);
		defFunctionImplement(xx_x_greater);
		defFunctionImplement(xx_x_less_equal);
		defFunctionImplement(xx_x_greater_equal);
		defFunctionImplement(xx_x_equal);
		defFunctionImplement(xx_x_not_equal);

		//////////////////////////////////////////////////////////////////////////
		defFunctionImplement(xx_x_sin);
		defFunctionImplement(xx_x_cos);
		defFunctionImplement(xx_x_tan);
		defFunctionImplement(xx_x_asin);
		defFunctionImplement(xx_x_acos);
		defFunctionImplement(xx_x_atan);
		defFunctionImplement(xx_x_atan2);
		defFunctionImplement(xx_x_sinh);
		defFunctionImplement(xx_x_cosh);
		defFunctionImplement(xx_x_tanh);
		defFunctionImplement(xx_x_exp);
		defFunctionImplement(xx_x_log);
		defFunctionImplement(xx_x_log10);
		defFunctionImplement(xx_x_pow);
		defFunctionImplement(xx_x_ldexp);
		defFunctionImplement(xx_x_min);
		defFunctionImplement(xx_x_min2);
		defFunctionImplement(xx_x_max);
		defFunctionImplement(xx_x_max2);
		defFunctionImplement(xx_x_sum);
		defFunctionImplement(xx_x_mean);
		defFunctionImplement(xx_x_deviation);
		defFunctionImplement(xx_x_cumul);
		defFunctionImplement(xx_x_median);
		defFunctionImplement(xx_x_select_rank);
		defFunctionImplement(xx_x_sqrt);
		defFunctionImplement(xx_x_deg);
		defFunctionImplement(xx_x_rad);
		defFunctionImplement(xx_x_real);
		defFunctionImplement(xx_x_int);
		defFunctionImplement(xx_x_round);
		defFunctionImplement(xx_x_abs);
		defFunctionImplement(xx_x_fabs);
		defFunctionImplement(xx_x_ceil);
		defFunctionImplement(xx_x_floor);
		defFunctionImplement(xx_x_fmod);
		defFunctionImplement(xx_x_sgn);
		defFunctionImplement(xx_x_sort);
		defFunctionImplement(xx_x_sort_index);
		defFunctionImplement(xx_x_inverse);
		defFunctionImplement(xx_x_is_number);
		defFunctionImplement(xx_x_number);
		defFunctionImplement(xx_x_environment);
		defFunctionImplement(xx_x_ord);
		defFunctionImplement(xx_x_chr);
		defFunctionImplement(xx_x_ords);
		defFunctionImplement(xx_x_chrt);
		defFunctionImplement(xx_x_rand);
		defFunctionImplement(xx_subset);
		defFunctionImplement(xx_x_regexp_test);

		//dev函数
		defFunctionImplement(xx_gen_tuple_const);
		defFunctionImplement(xx_dev_set_part);
		defFunctionImplement(xx_open_window);
		defFunctionImplement(xx_close_all_window);
		defFunctionImplement(xx_os_window_hand);
		defFunctionImplement(xx_aw);
		defFunctionImplement(xx_dev_close_window);
		defFunctionImplement(xx_dev_clear_window);
		defFunctionImplement(xx_dev_open_window);
		defFunctionImplement(xx_dev_set_draw);
		defFunctionImplement(xx_dev_set_color);
		defFunctionImplement(xx_dev_set_line_width);
		defFunctionImplement(xx_set_display_font);
		defFunctionImplement(xx_dev_display);
		defFunctionImplement(xx_disp_message);
		defFunctionImplement(xx_dev_set_window);
		defFunctionImplement(xx_disp_continue_message);
		defFunctionImplement(xx_stop);
		defFunctionImplement(xx_dev_update_window);
		defFunctionImplement(xx_dev_update_var);
		defFunctionImplement(xx_dev_update_pc);
		defFunctionImplement(xx_dev_update_time);
		defFunctionImplement(xx_dev_map_par);
		defFunctionImplement(xx_dev_map_prog);
		defFunctionImplement(xx_dev_map_var);
		defFunctionImplement(xx_dev_unmap_par);
		defFunctionImplement(xx_dev_unmap_prog);
		defFunctionImplement(xx_dev_unmap_var);
		defFunctionImplement(xx_dev_set_window_extents);
		defFunctionImplement(xx_dev_clear_obj);
		defFunctionImplement(xx_dev_error_var);
		defFunctionImplement(xx_dev_get_exception_data);
		defFunctionImplement(xx_dev_set_check);
		defFunctionImplement(xx_dev_close_inspect_ctrl);
		defFunctionImplement(xx_dev_get_preferences);
		defFunctionImplement(xx_dev_inspect_ctrl);
		defFunctionImplement(xx_dev_set_colored);
		defFunctionImplement(xx_dev_set_lut);
		defFunctionImplement(xx_dev_set_paint);
		defFunctionImplement(xx_dev_set_preferences);
		defFunctionImplement(xx_dev_set_shape);


		defFunctionImplement(xx_dev_update_off);
		defFunctionImplement(xx_dev_update_on);
		defFunctionImplement(xx_dev_display_shape_matching_results);
		defFunctionImplement(xx_dev_open_window_fit_image);
		defFunctionImplement(xx_dev_open_window_fit_size);
		defFunctionImplement(xx_dev_resize_window_fit_image);
		defFunctionImplement(xx_dev_resize_window_fit_size);
		defFunctionImplement(xx_disp_3d_coord_system);
		defFunctionImplement(xx_gen_arrow_contour_xld);
		defFunctionImplement(xx_list_image_files);
		defFunctionImplement(xx_parse_filename);
		defFunctionImplement(xx_scale_image_range);
		defFunctionImplement(xx_sort_pairs);
		defFunctionImplement(xx_tuple_gen_sequence);


		defFunctionImplement(xx_x_obj_width);
		defFunctionImplement(xx_x_obj_height);
		defFunctionImplement(xx_x_read_image);

#include "function.halcon.impl.h"

		defFunctionImplement(xx_clone_tuple);
		defFunctionImplement(xx_clone_obj);

#if 1
		////////////////////////////////////////////////////////////////////////
		//扩展的tuple函数
		defFunctionImplement(xx_ex_strlen);
		defFunctionImplement(xx_ex_insert);
		defFunctionImplement(xx_ex_split);
		defFunctionImplement(xx_ex_uniq);
		defFunctionImplement(xx_ex_remove);
		defFunctionImplement(xx_ex_strchr);
		defFunctionImplement(xx_ex_strstr);
		defFunctionImplement(xx_ex_lsh);
		defFunctionImplement(xx_ex_rsh);

		defFunctionImplement(xx_ex_find);
		defFunctionImplement(xx_ex_clone_obj);
		defFunctionImplement(xx_ex_clone_tuple);
		defFunctionImplement(xx_ex_set);
		defFunctionImplement(xx_ex_not);
		defFunctionImplement(xx_ex_bnot);
		defFunctionImplement(xx_ex_getcount);
		defFunctionImplement(xx_ex_get_value);
		defFunctionImplement(xx_ex_get_value_range);
		defFunctionImplement(xx_ex_get_value_string);
		defFunctionImplement(xx_ex_get_value_string_range);
		defFunctionImplement(xx_ex_add);
		defFunctionImplement(xx_ex_sub);
		defFunctionImplement(xx_ex_mul);
		defFunctionImplement(xx_ex_div);
		defFunctionImplement(xx_ex_mod);
		defFunctionImplement(xx_ex_regexp);
		defFunctionImplement(xx_ex_band);
		defFunctionImplement(xx_ex_bxor);
		defFunctionImplement(xx_ex_bor);
		defFunctionImplement(xx_ex_format);
		defFunctionImplement(xx_ex_and);
		defFunctionImplement(xx_ex_or);
		defFunctionImplement(xx_ex_xor);
		defFunctionImplement(xx_ex_less);
		defFunctionImplement(xx_ex_greater);
		defFunctionImplement(xx_ex_less_equal);
		defFunctionImplement(xx_ex_greater_equal);
		defFunctionImplement(xx_ex_equal);
		defFunctionImplement(xx_ex_not_equal);

		defFunctionImplement(xx_ex_sin);
		defFunctionImplement(xx_ex_cos);
		defFunctionImplement(xx_ex_tan);
		defFunctionImplement(xx_ex_asin);
		defFunctionImplement(xx_ex_acos);
		defFunctionImplement(xx_ex_atan);
		defFunctionImplement(xx_ex_atan2);
		defFunctionImplement(xx_ex_sinh);
		defFunctionImplement(xx_ex_cosh);
		defFunctionImplement(xx_ex_tanh);
		defFunctionImplement(xx_ex_exp);
		defFunctionImplement(xx_ex_log);
		defFunctionImplement(xx_ex_log10);
		defFunctionImplement(xx_ex_pow);
		defFunctionImplement(xx_ex_ldexp);
		defFunctionImplement(xx_ex_min);
		defFunctionImplement(xx_ex_min2);
		defFunctionImplement(xx_ex_max);
		defFunctionImplement(xx_ex_max2);
		defFunctionImplement(xx_ex_sum);
		defFunctionImplement(xx_ex_mean);
		defFunctionImplement(xx_ex_deviation);
		defFunctionImplement(xx_ex_cumul);
		defFunctionImplement(xx_ex_median);
		defFunctionImplement(xx_ex_select_rank);
		defFunctionImplement(xx_ex_sqrt);
		defFunctionImplement(xx_ex_deg);
		defFunctionImplement(xx_ex_rad);
		defFunctionImplement(xx_ex_real);
		defFunctionImplement(xx_ex_int);
		defFunctionImplement(xx_ex_round);
		defFunctionImplement(xx_ex_abs);
		defFunctionImplement(xx_ex_fabs);
		defFunctionImplement(xx_ex_ceil);
		defFunctionImplement(xx_ex_floor);
		defFunctionImplement(xx_ex_fmod);
		defFunctionImplement(xx_ex_sgn);
		defFunctionImplement(xx_ex_sort);
		defFunctionImplement(xx_ex_sort_index);
		defFunctionImplement(xx_ex_inverse);
		defFunctionImplement(xx_ex_is_number);
		defFunctionImplement(xx_ex_number);
		defFunctionImplement(xx_ex_environment);
		defFunctionImplement(xx_ex_ord);
		defFunctionImplement(xx_ex_chr);
		defFunctionImplement(xx_ex_ords);
		defFunctionImplement(xx_ex_chrt);
		defFunctionImplement(xx_ex_rand);
		defFunctionImplement(xx_ex_subset);
		defFunctionImplement(xx_ex_regexp_test);
		defFunctionImplement(xx_ex_regexp_match);
		defFunctionImplement(xx_ex_regexp_replace);
		defFunctionImplement(xx_ex_regexp_select);
		//////////////////////////////////////////////////////////


		//扩展的halcon库函数
		defFunctionImplement(x_ex_display_found_data_codes);
#endif
	}
}