defFunctionBegin_Try(x_abs_diff_image);
__tuple t3;if(v_empty(3))t3=1.0;else elib::Utils::fillTuple(a+3, t3);
callHalcon(abs_diff_image, err, a_obj(0),a_obj(1),varp_obj(2),t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_abs_funct_1d);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(abs_funct_1d, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_abs_image);
callHalcon(abs_image, err, a_obj(0),varp_obj(1));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_abs_invar_fourier_coeff);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=1;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=1;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4="abs_amount";else elib::Utils::fillTuple(a+4, t4);
__tuple t5;
__tuple t6;
callHalcon(abs_invar_fourier_coeff, err, t0,t1,t2,t3,t4,&t5,&t6);
elib::Utils::fillVar(t5, a+5);elib::Utils::fillVar(t6, a+6);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_abs_matrix);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(abs_matrix, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_abs_matrix_mod);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
callHalcon(abs_matrix_mod, err, t0);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_access_channel);
__tuple t2;if(v_empty(2))t2=1;else elib::Utils::fillTuple(a+2, t2);
callHalcon(access_channel, err, a_obj(0),varp_obj(1),t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_acos_image);
callHalcon(acos_image, err, a_obj(0),varp_obj(1));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_activate_compute_device);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
callHalcon(activate_compute_device, err, t0);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_add_channels);
callHalcon(add_channels, err, a_obj(0),a_obj(1),varp_obj(2));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_add_class_train_data_gmm);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
callHalcon(add_class_train_data_gmm, err, t0,t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_add_class_train_data_knn);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
callHalcon(add_class_train_data_knn, err, t0,t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_add_class_train_data_mlp);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
callHalcon(add_class_train_data_mlp, err, t0,t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_add_class_train_data_svm);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
callHalcon(add_class_train_data_svm, err, t0,t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_add_image);
__tuple t3;if(v_empty(3))t3=0.5;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=0;else elib::Utils::fillTuple(a+4, t4);
callHalcon(add_image, err, a_obj(0),a_obj(1),varp_obj(2),t3,t4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_add_matrix);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(add_matrix, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_add_matrix_mod);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
callHalcon(add_matrix_mod, err, t0,t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_add_noise_distribution);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
callHalcon(add_noise_distribution, err, a_obj(0),varp_obj(1),t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_add_noise_white);
__tuple t2;if(v_empty(2))t2=60.0;else elib::Utils::fillTuple(a+2, t2);
callHalcon(add_noise_white, err, a_obj(0),varp_obj(1),t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_add_noise_white_contour_xld);
__tuple t2;if(v_empty(2))t2=5;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=1.0;else elib::Utils::fillTuple(a+3, t3);
callHalcon(add_noise_white_contour_xld, err, a_obj(0),varp_obj(1),t2,t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_add_samples_image_class_gmm);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=0.0;else elib::Utils::fillTuple(a+3, t3);
callHalcon(add_samples_image_class_gmm, err, a_obj(0),a_obj(1),t2,t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_add_samples_image_class_knn);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
callHalcon(add_samples_image_class_knn, err, a_obj(0),a_obj(1),t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_add_samples_image_class_mlp);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
callHalcon(add_samples_image_class_mlp, err, a_obj(0),a_obj(1),t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_add_samples_image_class_svm);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
callHalcon(add_samples_image_class_svm, err, a_obj(0),a_obj(1),t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_add_sample_class_gmm);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=0.0;else elib::Utils::fillTuple(a+3, t3);
callHalcon(add_sample_class_gmm, err, t0,t1,t2,t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_add_sample_class_knn);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
callHalcon(add_sample_class_knn, err, t0,t1,t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_add_sample_class_mlp);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
callHalcon(add_sample_class_mlp, err, t0,t1,t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_add_sample_class_svm);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
callHalcon(add_sample_class_svm, err, t0,t1,t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_add_sample_class_train_data);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="row";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
callHalcon(add_sample_class_train_data, err, t0,t1,t2,t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_adjust_mosaic_images);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;elib::Utils::fillTuple(a+4, t4);
__tuple t5;elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6="standard";else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7="mult_gray";else elib::Utils::fillTuple(a+7, t7);
__tuple t8;if(v_empty(8))t8="laguerre";else elib::Utils::fillTuple(a+8, t8);
callHalcon(adjust_mosaic_images, err, a_obj(0),varp_obj(1),t2,t3,t4,t5,t6,t7,t8);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_affine_trans_contour_xld);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
callHalcon(affine_trans_contour_xld, err, a_obj(0),varp_obj(1),t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_affine_trans_image);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="constant";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4="false";else elib::Utils::fillTuple(a+4, t4);
callHalcon(affine_trans_image, err, a_obj(0),varp_obj(1),t2,t3,t4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_affine_trans_image_size);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="constant";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=640;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=480;else elib::Utils::fillTuple(a+5, t5);
callHalcon(affine_trans_image_size, err, a_obj(0),varp_obj(1),t2,t3,t4,t5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_affine_trans_pixel);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=64;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=64;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;
__tuple t4;
callHalcon(affine_trans_pixel, err, t0,t1,t2,&t3,&t4);
elib::Utils::fillVar(t3, a+3);elib::Utils::fillVar(t4, a+4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_affine_trans_point_2d);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=64;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=64;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;
__tuple t4;
callHalcon(affine_trans_point_2d, err, t0,t1,t2,&t3,&t4);
elib::Utils::fillVar(t3, a+3);elib::Utils::fillVar(t4, a+4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_affine_trans_point_3d);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=64;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=64;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=64;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;
__tuple t5;
__tuple t6;
callHalcon(affine_trans_point_3d, err, t0,t1,t2,t3,&t4,&t5,&t6);
elib::Utils::fillVar(t4, a+4);elib::Utils::fillVar(t5, a+5);elib::Utils::fillVar(t6, a+6);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_affine_trans_polygon_xld);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
callHalcon(affine_trans_polygon_xld, err, a_obj(0),varp_obj(1),t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_affine_trans_region);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="nearest_neighbor";else elib::Utils::fillTuple(a+3, t3);
callHalcon(affine_trans_region, err, a_obj(0),varp_obj(1),t2,t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_angle_ll);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;elib::Utils::fillTuple(a+4, t4);
__tuple t5;elib::Utils::fillTuple(a+5, t5);
__tuple t6;elib::Utils::fillTuple(a+6, t6);
__tuple t7;elib::Utils::fillTuple(a+7, t7);
__tuple t8;
callHalcon(angle_ll, err, t0,t1,t2,t3,t4,t5,t6,t7,&t8);
elib::Utils::fillVar(t8, a+8);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_angle_lx);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;
callHalcon(angle_lx, err, t0,t1,t2,t3,&t4);
elib::Utils::fillVar(t4, a+4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_anisotrope_diff);
__tuple t2;if(v_empty(2))t2=80;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=1;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=5;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=8;else elib::Utils::fillTuple(a+5, t5);
callHalcon(anisotrope_diff, err, a_obj(0),varp_obj(1),t2,t3,t4,t5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_anisotropic_diffusion);
__tuple t2;if(v_empty(2))t2="weickert";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=5.0;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=1.0;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=10;else elib::Utils::fillTuple(a+5, t5);
callHalcon(anisotropic_diffusion, err, a_obj(0),varp_obj(1),t2,t3,t4,t5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_append_channel);
callHalcon(append_channel, err, a_obj(0),a_obj(1),varp_obj(2));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_apply_color_trans_lut);
__tuple t6;elib::Utils::fillTuple(a+6, t6);
callHalcon(apply_color_trans_lut, err, a_obj(0),a_obj(1),a_obj(2),varp_obj(3),varp_obj(4),varp_obj(5),t6);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_apply_distance_transform_xld);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
callHalcon(apply_distance_transform_xld, err, a_obj(0),varp_obj(1),t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_approx_chain);
__tuple t0;if(v_empty(0))t0=32;else elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=32;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=0.5;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=2.4;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=0.3;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=0.9;else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6=0.2;else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7=0.5;else elib::Utils::fillTuple(a+7, t7);
__tuple t8;if(v_empty(8))t8=2.4;else elib::Utils::fillTuple(a+8, t8);
__tuple t9;if(v_empty(9))t9=2;else elib::Utils::fillTuple(a+9, t9);
__tuple t10;if(v_empty(10))t10=12;else elib::Utils::fillTuple(a+10, t10);
__tuple t11;if(v_empty(11))t11=1.0;else elib::Utils::fillTuple(a+11, t11);
__tuple t12;if(v_empty(12))t12=1.0;else elib::Utils::fillTuple(a+12, t12);
__tuple t13;if(v_empty(13))t13=1.0;else elib::Utils::fillTuple(a+13, t13);
__tuple t14;
__tuple t15;
__tuple t16;
__tuple t17;
__tuple t18;
__tuple t19;
__tuple t20;
__tuple t21;
__tuple t22;
__tuple t23;
callHalcon(approx_chain, err, t0,t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,t13,&t14,&t15,&t16,&t17,&t18,&t19,&t20,&t21,&t22,&t23);
elib::Utils::fillVar(t14, a+14);elib::Utils::fillVar(t15, a+15);elib::Utils::fillVar(t16, a+16);elib::Utils::fillVar(t17, a+17);elib::Utils::fillVar(t18, a+18);elib::Utils::fillVar(t19, a+19);elib::Utils::fillVar(t20, a+20);elib::Utils::fillVar(t21, a+21);elib::Utils::fillVar(t22, a+22);elib::Utils::fillVar(t23, a+23);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_approx_chain_simple);
__tuple t0;if(v_empty(0))t0=32;else elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=32;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;
__tuple t3;
__tuple t4;
__tuple t5;
__tuple t6;
__tuple t7;
__tuple t8;
__tuple t9;
__tuple t10;
__tuple t11;
callHalcon(approx_chain_simple, err, t0,t1,&t2,&t3,&t4,&t5,&t6,&t7,&t8,&t9,&t10,&t11);
elib::Utils::fillVar(t2, a+2);elib::Utils::fillVar(t3, a+3);elib::Utils::fillVar(t4, a+4);elib::Utils::fillVar(t5, a+5);elib::Utils::fillVar(t6, a+6);elib::Utils::fillVar(t7, a+7);elib::Utils::fillVar(t8, a+8);elib::Utils::fillVar(t9, a+9);elib::Utils::fillVar(t10, a+10);elib::Utils::fillVar(t11, a+11);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_area_center);
__tuple t1;
__tuple t2;
__tuple t3;
callHalcon(area_center, err, a_obj(0),&t1,&t2,&t3);
elib::Utils::fillVar(t1, a+1);elib::Utils::fillVar(t2, a+2);elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_area_center_gray);
__tuple t2;
__tuple t3;
__tuple t4;
callHalcon(area_center_gray, err, a_obj(0),a_obj(1),&t2,&t3,&t4);
elib::Utils::fillVar(t2, a+2);elib::Utils::fillVar(t3, a+3);elib::Utils::fillVar(t4, a+4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_area_center_points_xld);
__tuple t1;
__tuple t2;
__tuple t3;
callHalcon(area_center_points_xld, err, a_obj(0),&t1,&t2,&t3);
elib::Utils::fillVar(t1, a+1);elib::Utils::fillVar(t2, a+2);elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_area_center_xld);
__tuple t1;
__tuple t2;
__tuple t3;
__tuple t4;
callHalcon(area_center_xld, err, a_obj(0),&t1,&t2,&t3,&t4);
elib::Utils::fillVar(t1, a+1);elib::Utils::fillVar(t2, a+2);elib::Utils::fillVar(t3, a+3);elib::Utils::fillVar(t4, a+4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_area_holes);
__tuple t1;
callHalcon(area_holes, err, a_obj(0),&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_asin_image);
callHalcon(asin_image, err, a_obj(0),varp_obj(1));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_atan2_image);
callHalcon(atan2_image, err, a_obj(0),a_obj(1),varp_obj(2));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_atan_image);
callHalcon(atan_image, err, a_obj(0),varp_obj(1));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_attach_background_to_window);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
callHalcon(attach_background_to_window, err, a_obj(0),t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_attach_drawing_object_to_window);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
callHalcon(attach_drawing_object_to_window, err, t0,t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_auto_threshold);
__tuple t2;if(v_empty(2))t2=2.0;else elib::Utils::fillTuple(a+2, t2);
callHalcon(auto_threshold, err, a_obj(0),varp_obj(1),t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_axis_angle_to_quat);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;
callHalcon(axis_angle_to_quat, err, t0,t1,t2,t3,&t4);
elib::Utils::fillVar(t4, a+4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_background_seg);
callHalcon(background_seg, err, a_obj(0),varp_obj(1));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_bandpass_image);
__tuple t2;if(v_empty(2))t2="lines";else elib::Utils::fillTuple(a+2, t2);
callHalcon(bandpass_image, err, a_obj(0),varp_obj(1),t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_binary_threshold);
__tuple t2;if(v_empty(2))t2="max_separability";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="dark";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;
callHalcon(binary_threshold, err, a_obj(0),varp_obj(1),t2,t3,&t4);
elib::Utils::fillVar(t4, a+4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_binomial_filter);
__tuple t2;if(v_empty(2))t2=5;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=5;else elib::Utils::fillTuple(a+3, t3);
callHalcon(binomial_filter, err, a_obj(0),varp_obj(1),t2,t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_bin_threshold);
callHalcon(bin_threshold, err, a_obj(0),varp_obj(1));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_bit_and);
callHalcon(bit_and, err, a_obj(0),a_obj(1),varp_obj(2));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_bit_lshift);
__tuple t2;if(v_empty(2))t2=3;else elib::Utils::fillTuple(a+2, t2);
callHalcon(bit_lshift, err, a_obj(0),varp_obj(1),t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_bit_mask);
__tuple t2;if(v_empty(2))t2=128;else elib::Utils::fillTuple(a+2, t2);
callHalcon(bit_mask, err, a_obj(0),varp_obj(1),t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_bit_not);
callHalcon(bit_not, err, a_obj(0),varp_obj(1));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_bit_or);
callHalcon(bit_or, err, a_obj(0),a_obj(1),varp_obj(2));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_bit_rshift);
__tuple t2;if(v_empty(2))t2=3;else elib::Utils::fillTuple(a+2, t2);
callHalcon(bit_rshift, err, a_obj(0),varp_obj(1),t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_bit_slice);
__tuple t2;if(v_empty(2))t2=8;else elib::Utils::fillTuple(a+2, t2);
callHalcon(bit_slice, err, a_obj(0),varp_obj(1),t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_bit_xor);
callHalcon(bit_xor, err, a_obj(0),a_obj(1),varp_obj(2));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_bottom_hat);
callHalcon(bottom_hat, err, a_obj(0),a_obj(1),varp_obj(2));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_boundary);
__tuple t2;if(v_empty(2))t2="inner";else elib::Utils::fillTuple(a+2, t2);
callHalcon(boundary, err, a_obj(0),varp_obj(1),t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_broadcast_condition);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
callHalcon(broadcast_condition, err, t0);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_caltab_points);
__tuple t0;if(v_empty(0))t0="calplate.cpd";else elib::Utils::fillTuple(a+0, t0);
__tuple t1;
__tuple t2;
__tuple t3;
callHalcon(caltab_points, err, t0,&t1,&t2,&t3);
elib::Utils::fillVar(t1, a+1);elib::Utils::fillVar(t2, a+2);elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_cam_par_pose_to_hom_mat3d);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(cam_par_pose_to_hom_mat3d, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_cfa_to_rgb);
__tuple t2;if(v_empty(2))t2="bayer_gb";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="bilinear";else elib::Utils::fillTuple(a+3, t3);
callHalcon(cfa_to_rgb, err, a_obj(0),varp_obj(1),t2,t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_change_domain);
callHalcon(change_domain, err, a_obj(0),a_obj(1),varp_obj(2));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_change_format);
__tuple t2;if(v_empty(2))t2=512;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=512;else elib::Utils::fillTuple(a+3, t3);
callHalcon(change_format, err, a_obj(0),varp_obj(1),t2,t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_channels_to_image);
callHalcon(channels_to_image, err, a_obj(0),varp_obj(1));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_char_threshold);
__tuple t3;if(v_empty(3))t3=2.0;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=95;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;
callHalcon(char_threshold, err, a_obj(0),a_obj(1),varp_obj(2),t3,t4,&t5);
elib::Utils::fillVar(t5, a+5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_check_difference);
__tuple t3;if(v_empty(3))t3="diff_outside";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=-5;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=5;else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6=0;else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7=0;else elib::Utils::fillTuple(a+7, t7);
__tuple t8;if(v_empty(8))t8=0;else elib::Utils::fillTuple(a+8, t8);
callHalcon(check_difference, err, a_obj(0),a_obj(1),varp_obj(2),t3,t4,t5,t6,t7,t8);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_check_par_hw_potential);
__tuple t0;if(v_empty(0))t0=0;else elib::Utils::fillTuple(a+0, t0);
callHalcon(check_par_hw_potential, err, t0);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_circularity);
__tuple t1;
callHalcon(circularity, err, a_obj(0),&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_circularity_xld);
__tuple t1;
callHalcon(circularity_xld, err, a_obj(0),&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_classify_class_gmm);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=1;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;
__tuple t4;
__tuple t5;
__tuple t6;
callHalcon(classify_class_gmm, err, t0,t1,t2,&t3,&t4,&t5,&t6);
elib::Utils::fillVar(t3, a+3);elib::Utils::fillVar(t4, a+4);elib::Utils::fillVar(t5, a+5);elib::Utils::fillVar(t6, a+6);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_classify_class_knn);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;
__tuple t3;
callHalcon(classify_class_knn, err, t0,t1,&t2,&t3);
elib::Utils::fillVar(t2, a+2);elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_classify_class_mlp);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=1;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;
__tuple t4;
callHalcon(classify_class_mlp, err, t0,t1,t2,&t3,&t4);
elib::Utils::fillVar(t3, a+3);elib::Utils::fillVar(t4, a+4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_classify_class_svm);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=1;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;
callHalcon(classify_class_svm, err, t0,t1,t2,&t3);
elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_classify_image_class_gmm);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=0.5;else elib::Utils::fillTuple(a+3, t3);
callHalcon(classify_image_class_gmm, err, a_obj(0),varp_obj(1),t2,t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_classify_image_class_knn);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=0.5;else elib::Utils::fillTuple(a+4, t4);
callHalcon(classify_image_class_knn, err, a_obj(0),varp_obj(1),varp_obj(2),t3,t4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_classify_image_class_lut);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
callHalcon(classify_image_class_lut, err, a_obj(0),varp_obj(1),t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_classify_image_class_mlp);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=0.5;else elib::Utils::fillTuple(a+3, t3);
callHalcon(classify_image_class_mlp, err, a_obj(0),varp_obj(1),t2,t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_classify_image_class_svm);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
callHalcon(classify_image_class_svm, err, a_obj(0),varp_obj(1),t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_class_2dim_sup);
callHalcon(class_2dim_sup, err, a_obj(0),a_obj(1),a_obj(2),varp_obj(3));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_class_2dim_unsup);
__tuple t3;if(v_empty(3))t3=15;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=5;else elib::Utils::fillTuple(a+4, t4);
callHalcon(class_2dim_unsup, err, a_obj(0),a_obj(1),varp_obj(2),t3,t4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_class_ndim_box);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
callHalcon(class_ndim_box, err, a_obj(0),varp_obj(1),t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_class_ndim_norm);
__tuple t2;if(v_empty(2))t2="euclid";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="single";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;elib::Utils::fillTuple(a+4, t4);
__tuple t5;elib::Utils::fillTuple(a+5, t5);
callHalcon(class_ndim_norm, err, a_obj(0),varp_obj(1),t2,t3,t4,t5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_clear_all_barriers);
callHalcon(clear_all_barriers, err);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_clear_all_class_gmm);
callHalcon(clear_all_class_gmm, err);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_clear_all_class_knn);
callHalcon(clear_all_class_knn, err);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_clear_all_class_lut);
callHalcon(clear_all_class_lut, err);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_clear_all_class_mlp);
callHalcon(clear_all_class_mlp, err);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_clear_all_class_svm);
callHalcon(clear_all_class_svm, err);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_clear_all_class_train_data);
callHalcon(clear_all_class_train_data, err);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_clear_all_color_trans_luts);
callHalcon(clear_all_color_trans_luts, err);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_clear_all_conditions);
callHalcon(clear_all_conditions, err);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_clear_all_events);
callHalcon(clear_all_events, err);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_clear_all_matrices);
callHalcon(clear_all_matrices, err);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_clear_all_mutexes);
callHalcon(clear_all_mutexes, err);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_clear_all_scattered_data_interpolators);
callHalcon(clear_all_scattered_data_interpolators, err);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_clear_all_serialized_items);
callHalcon(clear_all_serialized_items, err);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_clear_all_text_results);
callHalcon(clear_all_text_results, err);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_clear_barrier);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
callHalcon(clear_barrier, err, t0);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_clear_class_gmm);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
callHalcon(clear_class_gmm, err, t0);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_clear_class_knn);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
callHalcon(clear_class_knn, err, t0);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_clear_class_lut);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
callHalcon(clear_class_lut, err, t0);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_clear_class_mlp);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
callHalcon(clear_class_mlp, err, t0);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_clear_class_svm);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
callHalcon(clear_class_svm, err, t0);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_clear_class_train_data);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
callHalcon(clear_class_train_data, err, t0);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_clear_color_trans_lut);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
callHalcon(clear_color_trans_lut, err, t0);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_clear_condition);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
callHalcon(clear_condition, err, t0);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_clear_distance_transform_xld);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
callHalcon(clear_distance_transform_xld, err, t0);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_clear_drawing_object);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
callHalcon(clear_drawing_object, err, t0);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_clear_event);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
callHalcon(clear_event, err, t0);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_clear_matrix);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
callHalcon(clear_matrix, err, t0);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_clear_message);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
callHalcon(clear_message, err, t0);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_clear_message_queue);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
callHalcon(clear_message_queue, err, t0);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_clear_mutex);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
callHalcon(clear_mutex, err, t0);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_clear_obj);
callHalcon(clear_obj, err, a_obj(0));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_clear_rectangle);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=10;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=10;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=118;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=118;else elib::Utils::fillTuple(a+4, t4);
callHalcon(clear_rectangle, err, t0,t1,t2,t3,t4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_clear_samples_class_gmm);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
callHalcon(clear_samples_class_gmm, err, t0);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_clear_samples_class_mlp);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
callHalcon(clear_samples_class_mlp, err, t0);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_clear_samples_class_svm);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
callHalcon(clear_samples_class_svm, err, t0);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_clear_sampset);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
callHalcon(clear_sampset, err, t0);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_clear_scattered_data_interpolator);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
callHalcon(clear_scattered_data_interpolator, err, t0);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_clear_serial);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="input";else elib::Utils::fillTuple(a+1, t1);
callHalcon(clear_serial, err, t0,t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_clear_serialized_item);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
callHalcon(clear_serialized_item, err, t0);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_clear_text_result);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
callHalcon(clear_text_result, err, t0);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_clear_window);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
callHalcon(clear_window, err, t0);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_clip_contours_xld);
__tuple t2;if(v_empty(2))t2=0;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=0;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=512;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=512;else elib::Utils::fillTuple(a+5, t5);
callHalcon(clip_contours_xld, err, a_obj(0),varp_obj(1),t2,t3,t4,t5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_clip_end_points_contours_xld);
__tuple t2;if(v_empty(2))t2="num_points";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=3;else elib::Utils::fillTuple(a+3, t3);
callHalcon(clip_end_points_contours_xld, err, a_obj(0),varp_obj(1),t2,t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_clip_region);
__tuple t2;if(v_empty(2))t2=0;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=0;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=256;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=256;else elib::Utils::fillTuple(a+5, t5);
callHalcon(clip_region, err, a_obj(0),varp_obj(1),t2,t3,t4,t5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_clip_region_rel);
__tuple t2;if(v_empty(2))t2=1;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=1;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=1;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=1;else elib::Utils::fillTuple(a+5, t5);
callHalcon(clip_region_rel, err, a_obj(0),varp_obj(1),t2,t3,t4,t5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_closest_point_transform);
__tuple t3;if(v_empty(3))t3="city-block";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4="true";else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5="absolute";else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6=640;else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7=480;else elib::Utils::fillTuple(a+7, t7);
callHalcon(closest_point_transform, err, a_obj(0),varp_obj(1),varp_obj(2),t3,t4,t5,t6,t7);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_close_all_bg_esti);
callHalcon(close_all_bg_esti, err);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_close_all_class_box);
callHalcon(close_all_class_box, err);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_close_all_files);
callHalcon(close_all_files, err);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_close_all_framegrabbers);
callHalcon(close_all_framegrabbers, err);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_close_all_serials);
callHalcon(close_all_serials, err);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_close_all_sockets);
callHalcon(close_all_sockets, err);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_close_bg_esti);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
callHalcon(close_bg_esti, err, t0);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_close_class_box);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
callHalcon(close_class_box, err, t0);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_close_contours_xld);
callHalcon(close_contours_xld, err, a_obj(0),varp_obj(1));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_close_edges);
__tuple t3;if(v_empty(3))t3=16;else elib::Utils::fillTuple(a+3, t3);
callHalcon(close_edges, err, a_obj(0),a_obj(1),varp_obj(2),t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_close_edges_length);
__tuple t3;if(v_empty(3))t3=16;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=3;else elib::Utils::fillTuple(a+4, t4);
callHalcon(close_edges_length, err, a_obj(0),a_obj(1),varp_obj(2),t3,t4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_close_file);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
callHalcon(close_file, err, t0);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_close_framegrabber);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
callHalcon(close_framegrabber, err, t0);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_close_io_channel);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
callHalcon(close_io_channel, err, t0);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_close_io_device);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
callHalcon(close_io_device, err, t0);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_close_serial);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
callHalcon(close_serial, err, t0);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_close_socket);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
callHalcon(close_socket, err, t0);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_close_window);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
callHalcon(close_window, err, t0);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_closing);
callHalcon(closing, err, a_obj(0),a_obj(1),varp_obj(2));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_closing_circle);
__tuple t2;if(v_empty(2))t2=3.5;else elib::Utils::fillTuple(a+2, t2);
callHalcon(closing_circle, err, a_obj(0),varp_obj(1),t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_closing_golay);
__tuple t2;if(v_empty(2))t2="h";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=0;else elib::Utils::fillTuple(a+3, t3);
callHalcon(closing_golay, err, a_obj(0),varp_obj(1),t2,t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_closing_rectangle1);
__tuple t2;if(v_empty(2))t2=10;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=10;else elib::Utils::fillTuple(a+3, t3);
callHalcon(closing_rectangle1, err, a_obj(0),varp_obj(1),t2,t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_coherence_enhancing_diff);
__tuple t2;if(v_empty(2))t2=0.5;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=3.0;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=0.5;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=10;else elib::Utils::fillTuple(a+5, t5);
callHalcon(coherence_enhancing_diff, err, a_obj(0),varp_obj(1),t2,t3,t4,t5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_combine_roads_xld);
__tuple t5;if(v_empty(5))t5=0.523598775598;else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6=0.261799387799;else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7=40;else elib::Utils::fillTuple(a+7, t7);
__tuple t8;if(v_empty(8))t8=40;else elib::Utils::fillTuple(a+8, t8);
callHalcon(combine_roads_xld, err, a_obj(0),a_obj(1),a_obj(2),a_obj(3),varp_obj(4),t5,t6,t7,t8);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_compactness);
__tuple t1;
callHalcon(compactness, err, a_obj(0),&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_compactness_xld);
__tuple t1;
callHalcon(compactness_xld, err, a_obj(0),&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_compare_obj);
__tuple t2;if(v_empty(2))t2=0.0;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;
callHalcon(compare_obj, err, a_obj(0),a_obj(1),t2,&t3);
elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_complement);
callHalcon(complement, err, a_obj(0),varp_obj(1));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_complex_to_real);
callHalcon(complex_to_real, err, a_obj(0),varp_obj(1),varp_obj(2));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_compose2);
callHalcon(compose2, err, a_obj(0),a_obj(1),varp_obj(2));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_compose3);
callHalcon(compose3, err, a_obj(0),a_obj(1),a_obj(2),varp_obj(3));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_compose4);
callHalcon(compose4, err, a_obj(0),a_obj(1),a_obj(2),a_obj(3),varp_obj(4));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_compose5);
callHalcon(compose5, err, a_obj(0),a_obj(1),a_obj(2),a_obj(3),a_obj(4),varp_obj(5));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_compose6);
callHalcon(compose6, err, a_obj(0),a_obj(1),a_obj(2),a_obj(3),a_obj(4),a_obj(5),varp_obj(6));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_compose7);
callHalcon(compose7, err, a_obj(0),a_obj(1),a_obj(2),a_obj(3),a_obj(4),a_obj(5),a_obj(6),varp_obj(7));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_compose_funct_1d);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="constant";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;
callHalcon(compose_funct_1d, err, t0,t1,t2,&t3);
elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_concat_obj);
callHalcon(concat_obj, err, a_obj(0),a_obj(1),varp_obj(2));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_connection);
callHalcon(connection, err, a_obj(0),varp_obj(1));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_connect_and_holes);
__tuple t1;
__tuple t2;
callHalcon(connect_and_holes, err, a_obj(0),&t1,&t2);
elib::Utils::fillVar(t1, a+1);elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_contlength);
__tuple t1;
callHalcon(contlength, err, a_obj(0),&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_contour_point_num_xld);
__tuple t1;
callHalcon(contour_point_num_xld, err, a_obj(0),&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_control_io_channel);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;
callHalcon(control_io_channel, err, t0,t1,t2,&t3);
elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_control_io_device);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;
callHalcon(control_io_device, err, t0,t1,t2,&t3);
elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_control_io_interface);
__tuple t0;if(v_empty(0))t0="";else elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;
callHalcon(control_io_interface, err, t0,t1,t2,&t3);
elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_convert_image_type);
__tuple t2;if(v_empty(2))t2="byte";else elib::Utils::fillTuple(a+2, t2);
callHalcon(convert_image_type, err, a_obj(0),varp_obj(1),t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_convert_map_type);
__tuple t2;if(v_empty(2))t2="coord_map_sub_pix";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="map_width";else elib::Utils::fillTuple(a+3, t3);
callHalcon(convert_map_type, err, a_obj(0),varp_obj(1),t2,t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_convert_pose_type);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="Rp+T";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="gba";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="point";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;
callHalcon(convert_pose_type, err, t0,t1,t2,t3,&t4);
elib::Utils::fillVar(t4, a+4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_convexity);
__tuple t1;
callHalcon(convexity, err, a_obj(0),&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_convexity_xld);
__tuple t1;
callHalcon(convexity_xld, err, a_obj(0),&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_convol_fft);
callHalcon(convol_fft, err, a_obj(0),a_obj(1),varp_obj(2));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_convol_gabor);
callHalcon(convol_gabor, err, a_obj(0),a_obj(1),varp_obj(2),varp_obj(3));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_convol_image);
__tuple t2;if(v_empty(2))t2="sobel";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="mirrored";else elib::Utils::fillTuple(a+3, t3);
callHalcon(convol_image, err, a_obj(0),varp_obj(1),t2,t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_cooc_feature_image);
__tuple t2;if(v_empty(2))t2=6;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=0;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;
__tuple t5;
__tuple t6;
__tuple t7;
callHalcon(cooc_feature_image, err, a_obj(0),a_obj(1),t2,t3,&t4,&t5,&t6,&t7);
elib::Utils::fillVar(t4, a+4);elib::Utils::fillVar(t5, a+5);elib::Utils::fillVar(t6, a+6);elib::Utils::fillVar(t7, a+7);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_cooc_feature_matrix);
__tuple t1;
__tuple t2;
__tuple t3;
__tuple t4;
callHalcon(cooc_feature_matrix, err, a_obj(0),&t1,&t2,&t3,&t4);
elib::Utils::fillVar(t1, a+1);elib::Utils::fillVar(t2, a+2);elib::Utils::fillVar(t3, a+3);elib::Utils::fillVar(t4, a+4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_copy_file);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
callHalcon(copy_file, err, t0,t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_copy_image);
callHalcon(copy_image, err, a_obj(0),varp_obj(1));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_copy_matrix);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(copy_matrix, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_copy_obj);
__tuple t2;if(v_empty(2))t2=1;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=1;else elib::Utils::fillTuple(a+3, t3);
callHalcon(copy_obj, err, a_obj(0),varp_obj(1),t2,t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_copy_rectangle);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=0;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=0;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=128;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=128;else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6=0;else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7=0;else elib::Utils::fillTuple(a+7, t7);
callHalcon(copy_rectangle, err, t0,t1,t2,t3,t4,t5,t6,t7);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_corner_response);
__tuple t2;if(v_empty(2))t2=3;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=0.04;else elib::Utils::fillTuple(a+3, t3);
callHalcon(corner_response, err, a_obj(0),varp_obj(1),t2,t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_correlation_fft);
callHalcon(correlation_fft, err, a_obj(0),a_obj(1),varp_obj(2));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_cos_image);
callHalcon(cos_image, err, a_obj(0),varp_obj(1));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_count_channels);
__tuple t1;
callHalcon(count_channels, err, a_obj(0),&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_count_obj);
__tuple t1;
callHalcon(count_obj, err, a_obj(0),&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_count_relation);
__tuple t0;if(v_empty(0))t0="object";else elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(count_relation, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_count_seconds);
__tuple t0;
callHalcon(count_seconds, err, &t0);
elib::Utils::fillVar(t0, a+0);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_create_barrier);
__tuple t0;if(v_empty(0))t0="";else elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=1;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;
callHalcon(create_barrier, err, t0,t1,t2,&t3);
elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_create_bg_esti);
__tuple t1;if(v_empty(1))t1=0.7;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=0.7;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="fixed";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=0.002;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=0.02;else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6="on";else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7=7.0;else elib::Utils::fillTuple(a+7, t7);
__tuple t8;if(v_empty(8))t8=10;else elib::Utils::fillTuple(a+8, t8);
__tuple t9;if(v_empty(9))t9=3.25;else elib::Utils::fillTuple(a+9, t9);
__tuple t10;if(v_empty(10))t10=15.0;else elib::Utils::fillTuple(a+10, t10);
__tuple t11;
callHalcon(create_bg_esti, err, a_obj(0),t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,&t11);
elib::Utils::fillVar(t11, a+11);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_create_caltab);
__tuple t0;if(v_empty(0))t0=27;else elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=31;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=0.00258065;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3)){const char* vs3[]={"13","6","6","20","20"};ehalcon::Utils::arr2TupleString(vs3, 5, t3);}else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4)){const char* vs4[]={"15","6","24","6","24"};ehalcon::Utils::arr2TupleString(vs4, 5, t4);}else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5="light_on_dark";else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6="calplate.cpd";else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7="calplate.ps";else elib::Utils::fillTuple(a+7, t7);
callHalcon(create_caltab, err, t0,t1,t2,t3,t4,t5,t6,t7);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_create_class_box);
__tuple t0;
callHalcon(create_class_box, err, &t0);
elib::Utils::fillVar(t0, a+0);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_create_class_gmm);
__tuple t0;if(v_empty(0))t0=3;else elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=5;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=1;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="spherical";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4="normalization";else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=10;else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6=42;else elib::Utils::fillTuple(a+6, t6);
__tuple t7;
callHalcon(create_class_gmm, err, t0,t1,t2,t3,t4,t5,t6,&t7);
elib::Utils::fillVar(t7, a+7);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_create_class_knn);
__tuple t0;if(v_empty(0))t0=10;else elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(create_class_knn, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_create_class_lut_gmm);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;
callHalcon(create_class_lut_gmm, err, t0,t1,t2,&t3);
elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_create_class_lut_knn);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;
callHalcon(create_class_lut_knn, err, t0,t1,t2,&t3);
elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_create_class_lut_mlp);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;
callHalcon(create_class_lut_mlp, err, t0,t1,t2,&t3);
elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_create_class_lut_svm);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;
callHalcon(create_class_lut_svm, err, t0,t1,t2,&t3);
elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_create_class_mlp);
__tuple t0;if(v_empty(0))t0=20;else elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=10;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=5;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="softmax";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4="normalization";else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=10;else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6=42;else elib::Utils::fillTuple(a+6, t6);
__tuple t7;
callHalcon(create_class_mlp, err, t0,t1,t2,t3,t4,t5,t6,&t7);
elib::Utils::fillVar(t7, a+7);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_create_class_svm);
__tuple t0;if(v_empty(0))t0=10;else elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="rbf";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=0.02;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=0.05;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=5;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5="one-versus-one";else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6="normalization";else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7=10;else elib::Utils::fillTuple(a+7, t7);
__tuple t8;
callHalcon(create_class_svm, err, t0,t1,t2,t3,t4,t5,t6,t7,&t8);
elib::Utils::fillVar(t8, a+8);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_create_class_train_data);
__tuple t0;if(v_empty(0))t0=10;else elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(create_class_train_data, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_create_color_trans_lut);
__tuple t0;if(v_empty(0))t0="hsv";else elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="from_rgb";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=8;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;
callHalcon(create_color_trans_lut, err, t0,t1,t2,&t3);
elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_create_condition);
__tuple t0;if(v_empty(0))t0="";else elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(create_condition, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_create_distance_transform_xld);
__tuple t1;if(v_empty(1))t1="point_to_point";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=20.0;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;
callHalcon(create_distance_transform_xld, err, a_obj(0),t1,t2,&t3);
elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_create_drawing_object_circle);
__tuple t0;if(v_empty(0))t0=100;else elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=100;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=80;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;
callHalcon(create_drawing_object_circle, err, t0,t1,t2,&t3);
elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_create_drawing_object_circle_sector);
__tuple t0;if(v_empty(0))t0=100;else elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=100;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=80;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=0;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=3.14159;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;
callHalcon(create_drawing_object_circle_sector, err, t0,t1,t2,t3,t4,&t5);
elib::Utils::fillVar(t5, a+5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_create_drawing_object_ellipse);
__tuple t0;if(v_empty(0))t0=200;else elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=200;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=0;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=100;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=60;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;
callHalcon(create_drawing_object_ellipse, err, t0,t1,t2,t3,t4,&t5);
elib::Utils::fillVar(t5, a+5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_create_drawing_object_ellipse_sector);
__tuple t0;if(v_empty(0))t0=200;else elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=200;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=0;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=100;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=60;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=0;else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6=3.14159;else elib::Utils::fillTuple(a+6, t6);
__tuple t7;
callHalcon(create_drawing_object_ellipse_sector, err, t0,t1,t2,t3,t4,t5,t6,&t7);
elib::Utils::fillVar(t7, a+7);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_create_drawing_object_line);
__tuple t0;if(v_empty(0))t0=100;else elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=100;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=200;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=200;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;
callHalcon(create_drawing_object_line, err, t0,t1,t2,t3,&t4);
elib::Utils::fillVar(t4, a+4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_create_drawing_object_rectangle1);
__tuple t0;if(v_empty(0))t0=100;else elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=100;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=200;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=200;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;
callHalcon(create_drawing_object_rectangle1, err, t0,t1,t2,t3,&t4);
elib::Utils::fillVar(t4, a+4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_create_drawing_object_rectangle2);
__tuple t0;if(v_empty(0))t0=150;else elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=150;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=0;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=100;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=100;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;
callHalcon(create_drawing_object_rectangle2, err, t0,t1,t2,t3,t4,&t5);
elib::Utils::fillVar(t5, a+5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_create_drawing_object_text);
__tuple t0;if(v_empty(0))t0=12;else elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=12;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="Text";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;
callHalcon(create_drawing_object_text, err, t0,t1,t2,&t3);
elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_create_drawing_object_xld);
__tuple t0;if(v_empty(0)){const char* vs0[]={"100","200","200","100"};ehalcon::Utils::arr2TupleString(vs0, 4, t0);}else elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1)){const char* vs1[]={"100","100","200","200"};ehalcon::Utils::arr2TupleString(vs1, 4, t1);}else elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(create_drawing_object_xld, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_create_event);
__tuple t0;if(v_empty(0))t0="";else elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(create_event, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_create_funct_1d_array);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(create_funct_1d_array, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_create_funct_1d_pairs);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(create_funct_1d_pairs, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_create_matrix);
__tuple t0;if(v_empty(0))t0=3;else elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=3;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=0;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;
callHalcon(create_matrix, err, t0,t1,t2,&t3);
elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_create_message);
__tuple t0;
callHalcon(create_message, err, &t0);
elib::Utils::fillVar(t0, a+0);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_create_message_queue);
__tuple t0;
callHalcon(create_message_queue, err, &t0);
elib::Utils::fillVar(t0, a+0);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_create_mutex);
__tuple t0;if(v_empty(0))t0="";else elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(create_mutex, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_create_pose);
__tuple t0;if(v_empty(0))t0=0.1;else elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=0.1;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=0.1;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=90.0;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=90.0;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=90.0;else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6="Rp+T";else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7="gba";else elib::Utils::fillTuple(a+7, t7);
__tuple t8;if(v_empty(8))t8="point";else elib::Utils::fillTuple(a+8, t8);
__tuple t9;
callHalcon(create_pose, err, t0,t1,t2,t3,t4,t5,t6,t7,t8,&t9);
elib::Utils::fillVar(t9, a+9);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_create_rectification_grid);
__tuple t0;if(v_empty(0))t0=0.17;else elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=17;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="rectification_grid.ps";else elib::Utils::fillTuple(a+2, t2);
callHalcon(create_rectification_grid, err, t0,t1,t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_create_scattered_data_interpolator);
__tuple t0;if(v_empty(0))t0="thin_plate_splines";else elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4="";else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5="";else elib::Utils::fillTuple(a+5, t5);
__tuple t6;
callHalcon(create_scattered_data_interpolator, err, t0,t1,t2,t3,t4,t5,&t6);
elib::Utils::fillVar(t6, a+6);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_create_serialized_item_ptr);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="true";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;
callHalcon(create_serialized_item_ptr, err, t0,t1,t2,&t3);
elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_critical_points_sub_pix);
__tuple t1;if(v_empty(1))t1="facet";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=5.0;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;
__tuple t5;
__tuple t6;
__tuple t7;
__tuple t8;
__tuple t9;
callHalcon(critical_points_sub_pix, err, a_obj(0),t1,t2,t3,&t4,&t5,&t6,&t7,&t8,&t9);
elib::Utils::fillVar(t4, a+4);elib::Utils::fillVar(t5, a+5);elib::Utils::fillVar(t6, a+6);elib::Utils::fillVar(t7, a+7);elib::Utils::fillVar(t8, a+8);elib::Utils::fillVar(t9, a+9);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_crop_contours_xld);
__tuple t2;if(v_empty(2))t2=0;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=0;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=512;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=512;else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6="true";else elib::Utils::fillTuple(a+6, t6);
callHalcon(crop_contours_xld, err, a_obj(0),varp_obj(1),t2,t3,t4,t5,t6);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_crop_domain);
callHalcon(crop_domain, err, a_obj(0),varp_obj(1));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_crop_domain_rel);
__tuple t2;if(v_empty(2))t2=-1;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=-1;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=-1;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=-1;else elib::Utils::fillTuple(a+5, t5);
callHalcon(crop_domain_rel, err, a_obj(0),varp_obj(1),t2,t3,t4,t5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_crop_part);
__tuple t2;if(v_empty(2))t2=100;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=100;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=128;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=128;else elib::Utils::fillTuple(a+5, t5);
callHalcon(crop_part, err, a_obj(0),varp_obj(1),t2,t3,t4,t5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_crop_rectangle1);
__tuple t2;if(v_empty(2))t2=100;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=100;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=200;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=200;else elib::Utils::fillTuple(a+5, t5);
callHalcon(crop_rectangle1, err, a_obj(0),varp_obj(1),t2,t3,t4,t5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_deactivate_all_compute_devices);
callHalcon(deactivate_all_compute_devices, err);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_deactivate_compute_device);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
callHalcon(deactivate_compute_device, err, t0);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_decompose2);
callHalcon(decompose2, err, a_obj(0),varp_obj(1),varp_obj(2));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_decompose3);
callHalcon(decompose3, err, a_obj(0),varp_obj(1),varp_obj(2),varp_obj(3));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_decompose4);
callHalcon(decompose4, err, a_obj(0),varp_obj(1),varp_obj(2),varp_obj(3),varp_obj(4));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_decompose5);
callHalcon(decompose5, err, a_obj(0),varp_obj(1),varp_obj(2),varp_obj(3),varp_obj(4),varp_obj(5));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_decompose6);
callHalcon(decompose6, err, a_obj(0),varp_obj(1),varp_obj(2),varp_obj(3),varp_obj(4),varp_obj(5),varp_obj(6));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_decompose7);
callHalcon(decompose7, err, a_obj(0),varp_obj(1),varp_obj(2),varp_obj(3),varp_obj(4),varp_obj(5),varp_obj(6),varp_obj(7));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_decompose_matrix);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="general";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;
__tuple t3;
callHalcon(decompose_matrix, err, t0,t1,&t2,&t3);
elib::Utils::fillVar(t2, a+2);elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_delete_file);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
callHalcon(delete_file, err, t0);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_dequeue_message);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="timeout";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="infinite";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;
callHalcon(dequeue_message, err, t0,t1,t2,&t3);
elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_derivate_funct_1d);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="first";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(derivate_funct_1d, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_derivate_gauss);
__tuple t2;if(v_empty(2))t2=1.0;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="x";else elib::Utils::fillTuple(a+3, t3);
callHalcon(derivate_gauss, err, a_obj(0),varp_obj(1),t2,t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_derivate_vector_field);
__tuple t2;if(v_empty(2))t2=1.0;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="mean_curvature";else elib::Utils::fillTuple(a+3, t3);
callHalcon(derivate_vector_field, err, a_obj(0),varp_obj(1),t2,t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_descript_class_box);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=3;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;
__tuple t3;
__tuple t4;
__tuple t5;
__tuple t6;
__tuple t7;
callHalcon(descript_class_box, err, t0,t1,&t2,&t3,&t4,&t5,&t6,&t7);
elib::Utils::fillVar(t2, a+2);elib::Utils::fillVar(t3, a+3);elib::Utils::fillVar(t4, a+4);elib::Utils::fillVar(t5, a+5);elib::Utils::fillVar(t6, a+6);elib::Utils::fillVar(t7, a+7);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_deserialize_cam_par);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(deserialize_cam_par, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_deserialize_class_box);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
callHalcon(deserialize_class_box, err, t0,t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_deserialize_class_gmm);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(deserialize_class_gmm, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_deserialize_class_knn);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(deserialize_class_knn, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_deserialize_class_mlp);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(deserialize_class_mlp, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_deserialize_class_svm);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(deserialize_class_svm, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_deserialize_class_train_data);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(deserialize_class_train_data, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_deserialize_distance_transform_xld);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(deserialize_distance_transform_xld, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_deserialize_fft_optimization_data);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
callHalcon(deserialize_fft_optimization_data, err, t0);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_deserialize_hom_mat2d);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(deserialize_hom_mat2d, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_deserialize_hom_mat3d);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(deserialize_hom_mat3d, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_deserialize_image);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
callHalcon(deserialize_image, err, varp_obj(0),t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_deserialize_matrix);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(deserialize_matrix, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_deserialize_object);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
callHalcon(deserialize_object, err, varp_obj(0),t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_deserialize_pose);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(deserialize_pose, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_deserialize_quat);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(deserialize_quat, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_deserialize_region);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
callHalcon(deserialize_region, err, varp_obj(0),t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_deserialize_tuple);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(deserialize_tuple, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_deserialize_xld);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
callHalcon(deserialize_xld, err, varp_obj(0),t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_detach_background_from_window);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
callHalcon(detach_background_from_window, err, t0);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_detach_drawing_object_from_window);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
callHalcon(detach_drawing_object_from_window, err, t0,t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_detect_edge_segments);
__tuple t1;if(v_empty(1))t1=5;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=32;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=3;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=10;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;
__tuple t6;
__tuple t7;
__tuple t8;
callHalcon(detect_edge_segments, err, a_obj(0),t1,t2,t3,t4,&t5,&t6,&t7,&t8);
elib::Utils::fillVar(t5, a+5);elib::Utils::fillVar(t6, a+6);elib::Utils::fillVar(t7, a+7);elib::Utils::fillVar(t8, a+8);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_determinant_matrix);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="general";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(determinant_matrix, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_deviation_image);
__tuple t2;if(v_empty(2))t2=11;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=11;else elib::Utils::fillTuple(a+3, t3);
callHalcon(deviation_image, err, a_obj(0),varp_obj(1),t2,t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_deviation_n);
callHalcon(deviation_n, err, a_obj(0),varp_obj(1));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_diameter_region);
__tuple t1;
__tuple t2;
__tuple t3;
__tuple t4;
__tuple t5;
callHalcon(diameter_region, err, a_obj(0),&t1,&t2,&t3,&t4,&t5);
elib::Utils::fillVar(t1, a+1);elib::Utils::fillVar(t2, a+2);elib::Utils::fillVar(t3, a+3);elib::Utils::fillVar(t4, a+4);elib::Utils::fillVar(t5, a+5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_diameter_xld);
__tuple t1;
__tuple t2;
__tuple t3;
__tuple t4;
__tuple t5;
callHalcon(diameter_xld, err, a_obj(0),&t1,&t2,&t3,&t4,&t5);
elib::Utils::fillVar(t1, a+1);elib::Utils::fillVar(t2, a+2);elib::Utils::fillVar(t3, a+3);elib::Utils::fillVar(t4, a+4);elib::Utils::fillVar(t5, a+5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_difference);
callHalcon(difference, err, a_obj(0),a_obj(1),varp_obj(2));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_difference_closed_contours_xld);
callHalcon(difference_closed_contours_xld, err, a_obj(0),a_obj(1),varp_obj(2));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_difference_closed_polygons_xld);
callHalcon(difference_closed_polygons_xld, err, a_obj(0),a_obj(1),varp_obj(2));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_diff_of_gauss);
__tuple t2;if(v_empty(2))t2=3.0;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=1.6;else elib::Utils::fillTuple(a+3, t3);
callHalcon(diff_of_gauss, err, a_obj(0),varp_obj(1),t2,t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_dilation1);
__tuple t3;if(v_empty(3))t3=1;else elib::Utils::fillTuple(a+3, t3);
callHalcon(dilation1, err, a_obj(0),a_obj(1),varp_obj(2),t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_dilation2);
__tuple t3;if(v_empty(3))t3=0;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=0;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=1;else elib::Utils::fillTuple(a+5, t5);
callHalcon(dilation2, err, a_obj(0),a_obj(1),varp_obj(2),t3,t4,t5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_dilation_circle);
__tuple t2;if(v_empty(2))t2=3.5;else elib::Utils::fillTuple(a+2, t2);
callHalcon(dilation_circle, err, a_obj(0),varp_obj(1),t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_dilation_golay);
__tuple t2;if(v_empty(2))t2="h";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=1;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=0;else elib::Utils::fillTuple(a+4, t4);
callHalcon(dilation_golay, err, a_obj(0),varp_obj(1),t2,t3,t4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_dilation_rectangle1);
__tuple t2;if(v_empty(2))t2=11;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=11;else elib::Utils::fillTuple(a+3, t3);
callHalcon(dilation_rectangle1, err, a_obj(0),varp_obj(1),t2,t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_dilation_seq);
__tuple t2;if(v_empty(2))t2="h";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=1;else elib::Utils::fillTuple(a+3, t3);
callHalcon(dilation_seq, err, a_obj(0),varp_obj(1),t2,t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_disp_arc);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=64;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=64;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=3.1415926;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=32;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=32;else elib::Utils::fillTuple(a+5, t5);
callHalcon(disp_arc, err, t0,t1,t2,t3,t4,t5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_disp_arrow);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=10.0;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=10.0;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=118.0;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=118.0;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=1.0;else elib::Utils::fillTuple(a+5, t5);
callHalcon(disp_arrow, err, t0,t1,t2,t3,t4,t5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_disp_caltab);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="calplate.cpd";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=1.0;else elib::Utils::fillTuple(a+4, t4);
callHalcon(disp_caltab, err, t0,t1,t2,t3,t4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_disp_channel);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=1;else elib::Utils::fillTuple(a+2, t2);
callHalcon(disp_channel, err, a_obj(0),t1,t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_disp_circle);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=64;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=64;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=64;else elib::Utils::fillTuple(a+3, t3);
callHalcon(disp_circle, err, t0,t1,t2,t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_disp_color);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
callHalcon(disp_color, err, a_obj(0),t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_disp_cross);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=32.0;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=32.0;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=6.0;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=0.0;else elib::Utils::fillTuple(a+4, t4);
callHalcon(disp_cross, err, t0,t1,t2,t3,t4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_disp_distribution);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=256;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=256;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=1;else elib::Utils::fillTuple(a+4, t4);
callHalcon(disp_distribution, err, t0,t1,t2,t3,t4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_disp_ellipse);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=64;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=64;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=0.0;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=24.0;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=14.0;else elib::Utils::fillTuple(a+5, t5);
callHalcon(disp_ellipse, err, t0,t1,t2,t3,t4,t5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_disp_image);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
callHalcon(disp_image, err, a_obj(0),t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_disp_line);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=32.0;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=32.0;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=64.0;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=64.0;else elib::Utils::fillTuple(a+4, t4);
callHalcon(disp_line, err, t0,t1,t2,t3,t4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_disp_lut);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=128;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=128;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=1;else elib::Utils::fillTuple(a+3, t3);
callHalcon(disp_lut, err, t0,t1,t2,t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_disp_obj);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
callHalcon(disp_obj, err, a_obj(0),t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_disp_polygon);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1)){const char* vs1[]={"16","80","80"};ehalcon::Utils::arr2TupleString(vs1, 3, t1);}else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2)){const char* vs2[]={"48","16","80"};ehalcon::Utils::arr2TupleString(vs2, 3, t2);}else elib::Utils::fillTuple(a+2, t2);
callHalcon(disp_polygon, err, t0,t1,t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_disp_rectangle1);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=16;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=16;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=48;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=80;else elib::Utils::fillTuple(a+4, t4);
callHalcon(disp_rectangle1, err, t0,t1,t2,t3,t4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_disp_rectangle2);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=48;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=64;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=0.0;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=48;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=32;else elib::Utils::fillTuple(a+5, t5);
callHalcon(disp_rectangle2, err, t0,t1,t2,t3,t4,t5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_disp_region);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
callHalcon(disp_region, err, a_obj(0),t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_disp_xld);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
callHalcon(disp_xld, err, a_obj(0),t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_distance_cc);
__tuple t2;if(v_empty(2))t2="point_to_point";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;
__tuple t4;
callHalcon(distance_cc, err, a_obj(0),a_obj(1),t2,&t3,&t4);
elib::Utils::fillVar(t3, a+3);elib::Utils::fillVar(t4, a+4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_distance_cc_min);
__tuple t2;if(v_empty(2))t2="fast_point_to_segment";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;
callHalcon(distance_cc_min, err, a_obj(0),a_obj(1),t2,&t3);
elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_distance_contours_xld);
__tuple t3;if(v_empty(3))t3="point_to_point";else elib::Utils::fillTuple(a+3, t3);
callHalcon(distance_contours_xld, err, a_obj(0),a_obj(1),varp_obj(2),t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_distance_funct_1d);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="length";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=0.0;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;
callHalcon(distance_funct_1d, err, t0,t1,t2,t3,&t4);
elib::Utils::fillVar(t4, a+4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_distance_lc);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;elib::Utils::fillTuple(a+4, t4);
__tuple t5;
__tuple t6;
callHalcon(distance_lc, err, a_obj(0),t1,t2,t3,t4,&t5,&t6);
elib::Utils::fillVar(t5, a+5);elib::Utils::fillVar(t6, a+6);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_distance_lr);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;elib::Utils::fillTuple(a+4, t4);
__tuple t5;
__tuple t6;
callHalcon(distance_lr, err, a_obj(0),t1,t2,t3,t4,&t5,&t6);
elib::Utils::fillVar(t5, a+5);elib::Utils::fillVar(t6, a+6);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_distance_pc);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;
__tuple t4;
callHalcon(distance_pc, err, a_obj(0),t1,t2,&t3,&t4);
elib::Utils::fillVar(t3, a+3);elib::Utils::fillVar(t4, a+4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_distance_pl);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;elib::Utils::fillTuple(a+4, t4);
__tuple t5;elib::Utils::fillTuple(a+5, t5);
__tuple t6;
callHalcon(distance_pl, err, t0,t1,t2,t3,t4,t5,&t6);
elib::Utils::fillVar(t6, a+6);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_distance_pp);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;
callHalcon(distance_pp, err, t0,t1,t2,t3,&t4);
elib::Utils::fillVar(t4, a+4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_distance_pr);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;
__tuple t4;
callHalcon(distance_pr, err, a_obj(0),t1,t2,&t3,&t4);
elib::Utils::fillVar(t3, a+3);elib::Utils::fillVar(t4, a+4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_distance_ps);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;elib::Utils::fillTuple(a+4, t4);
__tuple t5;elib::Utils::fillTuple(a+5, t5);
__tuple t6;
__tuple t7;
callHalcon(distance_ps, err, t0,t1,t2,t3,t4,t5,&t6,&t7);
elib::Utils::fillVar(t6, a+6);elib::Utils::fillVar(t7, a+7);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_distance_rr_min);
__tuple t2;
__tuple t3;
__tuple t4;
__tuple t5;
__tuple t6;
callHalcon(distance_rr_min, err, a_obj(0),a_obj(1),&t2,&t3,&t4,&t5,&t6);
elib::Utils::fillVar(t2, a+2);elib::Utils::fillVar(t3, a+3);elib::Utils::fillVar(t4, a+4);elib::Utils::fillVar(t5, a+5);elib::Utils::fillVar(t6, a+6);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_distance_rr_min_dil);
__tuple t2;
callHalcon(distance_rr_min_dil, err, a_obj(0),a_obj(1),&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_distance_sc);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;elib::Utils::fillTuple(a+4, t4);
__tuple t5;
__tuple t6;
callHalcon(distance_sc, err, a_obj(0),t1,t2,t3,t4,&t5,&t6);
elib::Utils::fillVar(t5, a+5);elib::Utils::fillVar(t6, a+6);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_distance_sl);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;elib::Utils::fillTuple(a+4, t4);
__tuple t5;elib::Utils::fillTuple(a+5, t5);
__tuple t6;elib::Utils::fillTuple(a+6, t6);
__tuple t7;elib::Utils::fillTuple(a+7, t7);
__tuple t8;
__tuple t9;
callHalcon(distance_sl, err, t0,t1,t2,t3,t4,t5,t6,t7,&t8,&t9);
elib::Utils::fillVar(t8, a+8);elib::Utils::fillVar(t9, a+9);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_distance_sr);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;elib::Utils::fillTuple(a+4, t4);
__tuple t5;
__tuple t6;
callHalcon(distance_sr, err, a_obj(0),t1,t2,t3,t4,&t5,&t6);
elib::Utils::fillVar(t5, a+5);elib::Utils::fillVar(t6, a+6);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_distance_ss);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;elib::Utils::fillTuple(a+4, t4);
__tuple t5;elib::Utils::fillTuple(a+5, t5);
__tuple t6;elib::Utils::fillTuple(a+6, t6);
__tuple t7;elib::Utils::fillTuple(a+7, t7);
__tuple t8;
__tuple t9;
callHalcon(distance_ss, err, t0,t1,t2,t3,t4,t5,t6,t7,&t8,&t9);
elib::Utils::fillVar(t8, a+8);elib::Utils::fillVar(t9, a+9);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_distance_transform);
__tuple t2;if(v_empty(2))t2="city-block";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="true";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=640;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=480;else elib::Utils::fillTuple(a+5, t5);
callHalcon(distance_transform, err, a_obj(0),varp_obj(1),t2,t3,t4,t5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_dist_ellipse_contour_points_xld);
__tuple t1;if(v_empty(1))t1="unsigned";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=0;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;elib::Utils::fillTuple(a+4, t4);
__tuple t5;elib::Utils::fillTuple(a+5, t5);
__tuple t6;elib::Utils::fillTuple(a+6, t6);
__tuple t7;elib::Utils::fillTuple(a+7, t7);
__tuple t8;
callHalcon(dist_ellipse_contour_points_xld, err, a_obj(0),t1,t2,t3,t4,t5,t6,t7,&t8);
elib::Utils::fillVar(t8, a+8);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_dist_ellipse_contour_xld);
__tuple t1;if(v_empty(1))t1="geometric";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=-1;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=0;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;elib::Utils::fillTuple(a+4, t4);
__tuple t5;elib::Utils::fillTuple(a+5, t5);
__tuple t6;elib::Utils::fillTuple(a+6, t6);
__tuple t7;elib::Utils::fillTuple(a+7, t7);
__tuple t8;elib::Utils::fillTuple(a+8, t8);
__tuple t9;
__tuple t10;
__tuple t11;
__tuple t12;
callHalcon(dist_ellipse_contour_xld, err, a_obj(0),t1,t2,t3,t4,t5,t6,t7,t8,&t9,&t10,&t11,&t12);
elib::Utils::fillVar(t9, a+9);elib::Utils::fillVar(t10, a+10);elib::Utils::fillVar(t11, a+11);elib::Utils::fillVar(t12, a+12);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_dist_rectangle2_contour_points_xld);
__tuple t1;if(v_empty(1))t1=0;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;elib::Utils::fillTuple(a+4, t4);
__tuple t5;elib::Utils::fillTuple(a+5, t5);
__tuple t6;elib::Utils::fillTuple(a+6, t6);
__tuple t7;
callHalcon(dist_rectangle2_contour_points_xld, err, a_obj(0),t1,t2,t3,t4,t5,t6,&t7);
elib::Utils::fillVar(t7, a+7);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_div_element_matrix);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(div_element_matrix, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_div_element_matrix_mod);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
callHalcon(div_element_matrix_mod, err, t0,t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_div_image);
__tuple t3;if(v_empty(3))t3=255;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=0;else elib::Utils::fillTuple(a+4, t4);
callHalcon(div_image, err, a_obj(0),a_obj(1),varp_obj(2),t3,t4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_dots_image);
__tuple t2;if(v_empty(2))t2=5;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="light";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=0;else elib::Utils::fillTuple(a+4, t4);
callHalcon(dots_image, err, a_obj(0),varp_obj(1),t2,t3,t4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_drag_region1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
callHalcon(drag_region1, err, a_obj(0),varp_obj(1),t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_drag_region2);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=100;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=100;else elib::Utils::fillTuple(a+4, t4);
callHalcon(drag_region2, err, a_obj(0),varp_obj(1),t2,t3,t4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_drag_region3);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=100;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=100;else elib::Utils::fillTuple(a+5, t5);
callHalcon(drag_region3, err, a_obj(0),a_obj(1),varp_obj(2),t3,t4,t5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_draw_circle);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
__tuple t2;
__tuple t3;
callHalcon(draw_circle, err, t0,&t1,&t2,&t3);
elib::Utils::fillVar(t1, a+1);elib::Utils::fillVar(t2, a+2);elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_draw_circle_mod);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;
__tuple t5;
__tuple t6;
callHalcon(draw_circle_mod, err, t0,t1,t2,t3,&t4,&t5,&t6);
elib::Utils::fillVar(t4, a+4);elib::Utils::fillVar(t5, a+5);elib::Utils::fillVar(t6, a+6);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_draw_ellipse);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
__tuple t2;
__tuple t3;
__tuple t4;
__tuple t5;
callHalcon(draw_ellipse, err, t0,&t1,&t2,&t3,&t4,&t5);
elib::Utils::fillVar(t1, a+1);elib::Utils::fillVar(t2, a+2);elib::Utils::fillVar(t3, a+3);elib::Utils::fillVar(t4, a+4);elib::Utils::fillVar(t5, a+5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_draw_ellipse_mod);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;elib::Utils::fillTuple(a+4, t4);
__tuple t5;elib::Utils::fillTuple(a+5, t5);
__tuple t6;
__tuple t7;
__tuple t8;
__tuple t9;
__tuple t10;
callHalcon(draw_ellipse_mod, err, t0,t1,t2,t3,t4,t5,&t6,&t7,&t8,&t9,&t10);
elib::Utils::fillVar(t6, a+6);elib::Utils::fillVar(t7, a+7);elib::Utils::fillVar(t8, a+8);elib::Utils::fillVar(t9, a+9);elib::Utils::fillVar(t10, a+10);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_draw_line);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
__tuple t2;
__tuple t3;
__tuple t4;
callHalcon(draw_line, err, t0,&t1,&t2,&t3,&t4);
elib::Utils::fillVar(t1, a+1);elib::Utils::fillVar(t2, a+2);elib::Utils::fillVar(t3, a+3);elib::Utils::fillVar(t4, a+4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_draw_line_mod);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;elib::Utils::fillTuple(a+4, t4);
__tuple t5;
__tuple t6;
__tuple t7;
__tuple t8;
callHalcon(draw_line_mod, err, t0,t1,t2,t3,t4,&t5,&t6,&t7,&t8);
elib::Utils::fillVar(t5, a+5);elib::Utils::fillVar(t6, a+6);elib::Utils::fillVar(t7, a+7);elib::Utils::fillVar(t8, a+8);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_draw_lut);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
callHalcon(draw_lut, err, t0);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_draw_nurbs);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="true";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="true";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4="true";else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5="true";else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6=3;else elib::Utils::fillTuple(a+6, t6);
__tuple t7;
__tuple t8;
__tuple t9;
callHalcon(draw_nurbs, err, varp_obj(0),t1,t2,t3,t4,t5,t6,&t7,&t8,&t9);
elib::Utils::fillVar(t7, a+7);elib::Utils::fillVar(t8, a+8);elib::Utils::fillVar(t9, a+9);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_draw_nurbs_interp);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="true";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="true";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4="true";else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5="true";else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6=3;else elib::Utils::fillTuple(a+6, t6);
__tuple t7;
__tuple t8;
__tuple t9;
__tuple t10;
__tuple t11;
__tuple t12;
callHalcon(draw_nurbs_interp, err, varp_obj(0),t1,t2,t3,t4,t5,t6,&t7,&t8,&t9,&t10,&t11,&t12);
elib::Utils::fillVar(t7, a+7);elib::Utils::fillVar(t8, a+8);elib::Utils::fillVar(t9, a+9);elib::Utils::fillVar(t10, a+10);elib::Utils::fillVar(t11, a+11);elib::Utils::fillVar(t12, a+12);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_draw_nurbs_interp_mod);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="true";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="true";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4="true";else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5="true";else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6="true";else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7=3;else elib::Utils::fillTuple(a+7, t7);
__tuple t8;elib::Utils::fillTuple(a+8, t8);
__tuple t9;elib::Utils::fillTuple(a+9, t9);
__tuple t10;elib::Utils::fillTuple(a+10, t10);
__tuple t11;
__tuple t12;
__tuple t13;
__tuple t14;
__tuple t15;
__tuple t16;
callHalcon(draw_nurbs_interp_mod, err, varp_obj(0),t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,&t11,&t12,&t13,&t14,&t15,&t16);
elib::Utils::fillVar(t11, a+11);elib::Utils::fillVar(t12, a+12);elib::Utils::fillVar(t13, a+13);elib::Utils::fillVar(t14, a+14);elib::Utils::fillVar(t15, a+15);elib::Utils::fillVar(t16, a+16);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_draw_nurbs_mod);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="true";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="true";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4="true";else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5="true";else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6="true";else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7=3;else elib::Utils::fillTuple(a+7, t7);
__tuple t8;elib::Utils::fillTuple(a+8, t8);
__tuple t9;elib::Utils::fillTuple(a+9, t9);
__tuple t10;elib::Utils::fillTuple(a+10, t10);
__tuple t11;
__tuple t12;
__tuple t13;
callHalcon(draw_nurbs_mod, err, varp_obj(0),t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,&t11,&t12,&t13);
elib::Utils::fillVar(t11, a+11);elib::Utils::fillVar(t12, a+12);elib::Utils::fillVar(t13, a+13);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_draw_point);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
__tuple t2;
callHalcon(draw_point, err, t0,&t1,&t2);
elib::Utils::fillVar(t1, a+1);elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_draw_point_mod);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;
__tuple t4;
callHalcon(draw_point_mod, err, t0,t1,t2,&t3,&t4);
elib::Utils::fillVar(t3, a+3);elib::Utils::fillVar(t4, a+4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_draw_polygon);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
callHalcon(draw_polygon, err, varp_obj(0),t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_draw_rectangle1);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
__tuple t2;
__tuple t3;
__tuple t4;
callHalcon(draw_rectangle1, err, t0,&t1,&t2,&t3,&t4);
elib::Utils::fillVar(t1, a+1);elib::Utils::fillVar(t2, a+2);elib::Utils::fillVar(t3, a+3);elib::Utils::fillVar(t4, a+4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_draw_rectangle1_mod);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;elib::Utils::fillTuple(a+4, t4);
__tuple t5;
__tuple t6;
__tuple t7;
__tuple t8;
callHalcon(draw_rectangle1_mod, err, t0,t1,t2,t3,t4,&t5,&t6,&t7,&t8);
elib::Utils::fillVar(t5, a+5);elib::Utils::fillVar(t6, a+6);elib::Utils::fillVar(t7, a+7);elib::Utils::fillVar(t8, a+8);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_draw_rectangle2);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
__tuple t2;
__tuple t3;
__tuple t4;
__tuple t5;
callHalcon(draw_rectangle2, err, t0,&t1,&t2,&t3,&t4,&t5);
elib::Utils::fillVar(t1, a+1);elib::Utils::fillVar(t2, a+2);elib::Utils::fillVar(t3, a+3);elib::Utils::fillVar(t4, a+4);elib::Utils::fillVar(t5, a+5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_draw_rectangle2_mod);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;elib::Utils::fillTuple(a+4, t4);
__tuple t5;elib::Utils::fillTuple(a+5, t5);
__tuple t6;
__tuple t7;
__tuple t8;
__tuple t9;
__tuple t10;
callHalcon(draw_rectangle2_mod, err, t0,t1,t2,t3,t4,t5,&t6,&t7,&t8,&t9,&t10);
elib::Utils::fillVar(t6, a+6);elib::Utils::fillVar(t7, a+7);elib::Utils::fillVar(t8, a+8);elib::Utils::fillVar(t9, a+9);elib::Utils::fillVar(t10, a+10);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_draw_region);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
callHalcon(draw_region, err, varp_obj(0),t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_draw_xld);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="true";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="true";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4="true";else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5="true";else elib::Utils::fillTuple(a+5, t5);
callHalcon(draw_xld, err, varp_obj(0),t1,t2,t3,t4,t5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_draw_xld_mod);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="true";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4="true";else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5="true";else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6="true";else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7="true";else elib::Utils::fillTuple(a+7, t7);
callHalcon(draw_xld_mod, err, a_obj(0),varp_obj(1),t2,t3,t4,t5,t6,t7);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_dual_rank);
__tuple t2;if(v_empty(2))t2="circle";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=1;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=10;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5="mirrored";else elib::Utils::fillTuple(a+5, t5);
callHalcon(dual_rank, err, a_obj(0),varp_obj(1),t2,t3,t4,t5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_dual_threshold);
__tuple t2;if(v_empty(2))t2=20;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=5.0;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=2.0;else elib::Utils::fillTuple(a+4, t4);
callHalcon(dual_threshold, err, a_obj(0),varp_obj(1),t2,t3,t4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_dump_window);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="postscript";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="halcon_dump";else elib::Utils::fillTuple(a+2, t2);
callHalcon(dump_window, err, t0,t1,t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_dump_window_image);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
callHalcon(dump_window_image, err, varp_obj(0),t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_dyn_threshold);
__tuple t3;if(v_empty(3))t3=5.0;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4="light";else elib::Utils::fillTuple(a+4, t4);
callHalcon(dyn_threshold, err, a_obj(0),a_obj(1),varp_obj(2),t3,t4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_eccentricity);
__tuple t1;
__tuple t2;
__tuple t3;
callHalcon(eccentricity, err, a_obj(0),&t1,&t2,&t3);
elib::Utils::fillVar(t1, a+1);elib::Utils::fillVar(t2, a+2);elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_eccentricity_points_xld);
__tuple t1;
callHalcon(eccentricity_points_xld, err, a_obj(0),&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_eccentricity_xld);
__tuple t1;
__tuple t2;
__tuple t3;
callHalcon(eccentricity_xld, err, a_obj(0),&t1,&t2,&t3);
elib::Utils::fillVar(t1, a+1);elib::Utils::fillVar(t2, a+2);elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_edges_color);
__tuple t3;if(v_empty(3))t3="canny";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=1.0;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5="nms";else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6=20;else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7=40;else elib::Utils::fillTuple(a+7, t7);
callHalcon(edges_color, err, a_obj(0),varp_obj(1),varp_obj(2),t3,t4,t5,t6,t7);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_edges_image);
__tuple t3;if(v_empty(3))t3="canny";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=1.0;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5="nms";else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6=20;else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7=40;else elib::Utils::fillTuple(a+7, t7);
callHalcon(edges_image, err, a_obj(0),varp_obj(1),varp_obj(2),t3,t4,t5,t6,t7);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_eigenvalues_general_matrix);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="none";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;
__tuple t3;
__tuple t4;
__tuple t5;
callHalcon(eigenvalues_general_matrix, err, t0,t1,&t2,&t3,&t4,&t5);
elib::Utils::fillVar(t2, a+2);elib::Utils::fillVar(t3, a+3);elib::Utils::fillVar(t4, a+4);elib::Utils::fillVar(t5, a+5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_eigenvalues_symmetric_matrix);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="false";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;
__tuple t3;
callHalcon(eigenvalues_symmetric_matrix, err, t0,t1,&t2,&t3);
elib::Utils::fillVar(t2, a+2);elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_eliminate_min_max);
__tuple t2;if(v_empty(2))t2=3;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=3;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=1.0;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=3;else elib::Utils::fillTuple(a+5, t5);
callHalcon(eliminate_min_max, err, a_obj(0),varp_obj(1),t2,t3,t4,t5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_eliminate_runs);
__tuple t2;if(v_empty(2))t2=3;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=1000;else elib::Utils::fillTuple(a+3, t3);
callHalcon(eliminate_runs, err, a_obj(0),varp_obj(1),t2,t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_eliminate_sp);
__tuple t2;if(v_empty(2))t2=3;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=3;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=1;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=254;else elib::Utils::fillTuple(a+5, t5);
callHalcon(eliminate_sp, err, a_obj(0),varp_obj(1),t2,t3,t4,t5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_elliptic_axis);
__tuple t1;
__tuple t2;
__tuple t3;
callHalcon(elliptic_axis, err, a_obj(0),&t1,&t2,&t3);
elib::Utils::fillVar(t1, a+1);elib::Utils::fillVar(t2, a+2);elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_elliptic_axis_gray);
__tuple t2;
__tuple t3;
__tuple t4;
callHalcon(elliptic_axis_gray, err, a_obj(0),a_obj(1),&t2,&t3,&t4);
elib::Utils::fillVar(t2, a+2);elib::Utils::fillVar(t3, a+3);elib::Utils::fillVar(t4, a+4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_elliptic_axis_points_xld);
__tuple t1;
__tuple t2;
__tuple t3;
callHalcon(elliptic_axis_points_xld, err, a_obj(0),&t1,&t2,&t3);
elib::Utils::fillVar(t1, a+1);elib::Utils::fillVar(t2, a+2);elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_elliptic_axis_xld);
__tuple t1;
__tuple t2;
__tuple t3;
callHalcon(elliptic_axis_xld, err, a_obj(0),&t1,&t2,&t3);
elib::Utils::fillVar(t1, a+1);elib::Utils::fillVar(t2, a+2);elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_emphasize);
__tuple t2;if(v_empty(2))t2=7;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=7;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=1.0;else elib::Utils::fillTuple(a+4, t4);
callHalcon(emphasize, err, a_obj(0),varp_obj(1),t2,t3,t4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_energy_gabor);
callHalcon(energy_gabor, err, a_obj(0),a_obj(1),varp_obj(2));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_enqueue_message);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
callHalcon(enqueue_message, err, t0,t1,t2,t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_enquire_class_box);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=1.0;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(enquire_class_box, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_enquire_reject_class_box);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=1.0;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(enquire_reject_class_box, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_entropy_gray);
__tuple t2;
__tuple t3;
callHalcon(entropy_gray, err, a_obj(0),a_obj(1),&t2,&t3);
elib::Utils::fillVar(t2, a+2);elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_entropy_image);
__tuple t2;if(v_empty(2))t2=9;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=9;else elib::Utils::fillTuple(a+3, t3);
callHalcon(entropy_image, err, a_obj(0),varp_obj(1),t2,t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_equ_histo_image);
callHalcon(equ_histo_image, err, a_obj(0),varp_obj(1));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_erosion1);
__tuple t3;if(v_empty(3))t3=1;else elib::Utils::fillTuple(a+3, t3);
callHalcon(erosion1, err, a_obj(0),a_obj(1),varp_obj(2),t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_erosion2);
__tuple t3;if(v_empty(3))t3=0;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=0;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=1;else elib::Utils::fillTuple(a+5, t5);
callHalcon(erosion2, err, a_obj(0),a_obj(1),varp_obj(2),t3,t4,t5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_erosion_circle);
__tuple t2;if(v_empty(2))t2=3.5;else elib::Utils::fillTuple(a+2, t2);
callHalcon(erosion_circle, err, a_obj(0),varp_obj(1),t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_erosion_golay);
__tuple t2;if(v_empty(2))t2="h";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=1;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=0;else elib::Utils::fillTuple(a+4, t4);
callHalcon(erosion_golay, err, a_obj(0),varp_obj(1),t2,t3,t4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_erosion_rectangle1);
__tuple t2;if(v_empty(2))t2=11;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=11;else elib::Utils::fillTuple(a+3, t3);
callHalcon(erosion_rectangle1, err, a_obj(0),varp_obj(1),t2,t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_erosion_seq);
__tuple t2;if(v_empty(2))t2="h";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=1;else elib::Utils::fillTuple(a+3, t3);
callHalcon(erosion_seq, err, a_obj(0),varp_obj(1),t2,t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_estimate_noise);
__tuple t1;if(v_empty(1))t1="foerstner";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=20;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;
callHalcon(estimate_noise, err, a_obj(0),t1,t2,&t3);
elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_euler_number);
__tuple t1;
callHalcon(euler_number, err, a_obj(0),&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_evaluate_class_gmm);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;
__tuple t3;
__tuple t4;
callHalcon(evaluate_class_gmm, err, t0,t1,&t2,&t3,&t4);
elib::Utils::fillVar(t2, a+2);elib::Utils::fillVar(t3, a+3);elib::Utils::fillVar(t4, a+4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_evaluate_class_mlp);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(evaluate_class_mlp, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_evaluate_class_svm);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(evaluate_class_svm, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_exhaustive_match);
__tuple t4;if(v_empty(4))t4="dfd";else elib::Utils::fillTuple(a+4, t4);
callHalcon(exhaustive_match, err, a_obj(0),a_obj(1),a_obj(2),varp_obj(3),t4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_exhaustive_match_mg);
__tuple t3;if(v_empty(3))t3="dfd";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=1;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=30;else elib::Utils::fillTuple(a+5, t5);
callHalcon(exhaustive_match_mg, err, a_obj(0),a_obj(1),varp_obj(2),t3,t4,t5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_expand_domain_gray);
__tuple t2;if(v_empty(2))t2=2;else elib::Utils::fillTuple(a+2, t2);
callHalcon(expand_domain_gray, err, a_obj(0),varp_obj(1),t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_expand_gray);
__tuple t4;if(v_empty(4))t4="maximal";else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5="image";else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6=32;else elib::Utils::fillTuple(a+6, t6);
callHalcon(expand_gray, err, a_obj(0),a_obj(1),a_obj(2),varp_obj(3),t4,t5,t6);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_expand_gray_ref);
__tuple t4;if(v_empty(4))t4="maximal";else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5="image";else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6=128;else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7=32;else elib::Utils::fillTuple(a+7, t7);
callHalcon(expand_gray_ref, err, a_obj(0),a_obj(1),a_obj(2),varp_obj(3),t4,t5,t6,t7);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_expand_line);
__tuple t2;if(v_empty(2))t2=256;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="gradient";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4="row";else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=3.0;else elib::Utils::fillTuple(a+5, t5);
callHalcon(expand_line, err, a_obj(0),varp_obj(1),t2,t3,t4,t5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_expand_region);
__tuple t3;if(v_empty(3))t3="maximal";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4="image";else elib::Utils::fillTuple(a+4, t4);
callHalcon(expand_region, err, a_obj(0),a_obj(1),varp_obj(2),t3,t4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_exp_image);
__tuple t2;if(v_empty(2))t2="e";else elib::Utils::fillTuple(a+2, t2);
callHalcon(exp_image, err, a_obj(0),varp_obj(1),t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_fast_threshold);
__tuple t2;if(v_empty(2))t2=128;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=255.0;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=20;else elib::Utils::fillTuple(a+4, t4);
callHalcon(fast_threshold, err, a_obj(0),varp_obj(1),t2,t3,t4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_fft_generic);
__tuple t2;if(v_empty(2))t2="to_freq";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=-1;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4="sqrt";else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5="dc_center";else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6="complex";else elib::Utils::fillTuple(a+6, t6);
callHalcon(fft_generic, err, a_obj(0),varp_obj(1),t2,t3,t4,t5,t6);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_fft_image);
callHalcon(fft_image, err, a_obj(0),varp_obj(1));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_fft_image_inv);
callHalcon(fft_image_inv, err, a_obj(0),varp_obj(1));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_file_exists);
__tuple t0;if(v_empty(0))t0="/bin/cc";else elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(file_exists, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_fill_interlace);
__tuple t2;if(v_empty(2))t2="odd";else elib::Utils::fillTuple(a+2, t2);
callHalcon(fill_interlace, err, a_obj(0),varp_obj(1),t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_fill_up);
callHalcon(fill_up, err, a_obj(0),varp_obj(1));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_fill_up_shape);
__tuple t2;if(v_empty(2))t2="area";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=1.0;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=100.0;else elib::Utils::fillTuple(a+4, t4);
callHalcon(fill_up_shape, err, a_obj(0),varp_obj(1),t2,t3,t4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_filter_kalman);
__tuple t0;if(v_empty(0)){const char* vs0[]={"3","1","0"};ehalcon::Utils::arr2TupleString(vs0, 3, t0);}else elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1)){const char* vs1[]={"1.0","1.0","0.5","0.0","1.0","1.0","0.0","0.0","1.0","1.0","0.0","0.0","54.3","37.9","48.0","37.9","34.3","42.5","48.0","42.5","43.7"};ehalcon::Utils::arr2TupleString(vs1, 21, t1);}else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2)){const char* vs2[]={"1.2","1.0"};ehalcon::Utils::arr2TupleString(vs2, 2, t2);}else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3)){const char* vs3[]={"0.0","0.0","0.0","0.0","180.5","0.0","0.0","0.0","100.0","0.0","100.0","0.0"};ehalcon::Utils::arr2TupleString(vs3, 12, t3);}else elib::Utils::fillTuple(a+3, t3);
__tuple t4;
__tuple t5;
callHalcon(filter_kalman, err, t0,t1,t2,t3,&t4,&t5);
elib::Utils::fillVar(t4, a+4);elib::Utils::fillVar(t5, a+5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_find_caltab);
__tuple t2;if(v_empty(2))t2="caltab.descr";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=3;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=112;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=5;else elib::Utils::fillTuple(a+5, t5);
callHalcon(find_caltab, err, a_obj(0),varp_obj(1),t2,t3,t4,t5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_find_marks_and_pose);
__tuple t2;if(v_empty(2))t2="caltab.descr";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=128;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=10;else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6=18;else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7=0.9;else elib::Utils::fillTuple(a+7, t7);
__tuple t8;if(v_empty(8))t8=15.0;else elib::Utils::fillTuple(a+8, t8);
__tuple t9;if(v_empty(9))t9=100.0;else elib::Utils::fillTuple(a+9, t9);
__tuple t10;
__tuple t11;
__tuple t12;
callHalcon(find_marks_and_pose, err, a_obj(0),a_obj(1),t2,t3,t4,t5,t6,t7,t8,t9,&t10,&t11,&t12);
elib::Utils::fillVar(t10, a+10);elib::Utils::fillVar(t11, a+11);elib::Utils::fillVar(t12, a+12);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_find_neighbors);
__tuple t2;if(v_empty(2))t2=1;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;
__tuple t4;
callHalcon(find_neighbors, err, a_obj(0),a_obj(1),t2,&t3,&t4);
elib::Utils::fillVar(t3, a+3);elib::Utils::fillVar(t4, a+4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_fitting);
callHalcon(fitting, err, a_obj(0),a_obj(1),varp_obj(2));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_fit_circle_contour_xld);
__tuple t1;if(v_empty(1))t1="algebraic";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=-1;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=0.0;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=0;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=3;else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6=2.0;else elib::Utils::fillTuple(a+6, t6);
__tuple t7;
__tuple t8;
__tuple t9;
__tuple t10;
__tuple t11;
__tuple t12;
callHalcon(fit_circle_contour_xld, err, a_obj(0),t1,t2,t3,t4,t5,t6,&t7,&t8,&t9,&t10,&t11,&t12);
elib::Utils::fillVar(t7, a+7);elib::Utils::fillVar(t8, a+8);elib::Utils::fillVar(t9, a+9);elib::Utils::fillVar(t10, a+10);elib::Utils::fillVar(t11, a+11);elib::Utils::fillVar(t12, a+12);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_fit_ellipse_contour_xld);
__tuple t1;if(v_empty(1))t1="fitzgibbon";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=-1;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=0.0;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=0;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=200;else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6=3;else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7=2.0;else elib::Utils::fillTuple(a+7, t7);
__tuple t8;
__tuple t9;
__tuple t10;
__tuple t11;
__tuple t12;
__tuple t13;
__tuple t14;
__tuple t15;
callHalcon(fit_ellipse_contour_xld, err, a_obj(0),t1,t2,t3,t4,t5,t6,t7,&t8,&t9,&t10,&t11,&t12,&t13,&t14,&t15);
elib::Utils::fillVar(t8, a+8);elib::Utils::fillVar(t9, a+9);elib::Utils::fillVar(t10, a+10);elib::Utils::fillVar(t11, a+11);elib::Utils::fillVar(t12, a+12);elib::Utils::fillVar(t13, a+13);elib::Utils::fillVar(t14, a+14);elib::Utils::fillVar(t15, a+15);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_fit_line_contour_xld);
__tuple t1;if(v_empty(1))t1="tukey";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=-1;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=0;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=5;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=2.0;else elib::Utils::fillTuple(a+5, t5);
__tuple t6;
__tuple t7;
__tuple t8;
__tuple t9;
__tuple t10;
__tuple t11;
__tuple t12;
callHalcon(fit_line_contour_xld, err, a_obj(0),t1,t2,t3,t4,t5,&t6,&t7,&t8,&t9,&t10,&t11,&t12);
elib::Utils::fillVar(t6, a+6);elib::Utils::fillVar(t7, a+7);elib::Utils::fillVar(t8, a+8);elib::Utils::fillVar(t9, a+9);elib::Utils::fillVar(t10, a+10);elib::Utils::fillVar(t11, a+11);elib::Utils::fillVar(t12, a+12);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_fit_rectangle2_contour_xld);
__tuple t1;if(v_empty(1))t1="regression";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=-1;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=0.0;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=0;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=3;else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6=2.0;else elib::Utils::fillTuple(a+6, t6);
__tuple t7;
__tuple t8;
__tuple t9;
__tuple t10;
__tuple t11;
__tuple t12;
callHalcon(fit_rectangle2_contour_xld, err, a_obj(0),t1,t2,t3,t4,t5,t6,&t7,&t8,&t9,&t10,&t11,&t12);
elib::Utils::fillVar(t7, a+7);elib::Utils::fillVar(t8, a+8);elib::Utils::fillVar(t9, a+9);elib::Utils::fillVar(t10, a+10);elib::Utils::fillVar(t11, a+11);elib::Utils::fillVar(t12, a+12);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_fit_surface_first_order);
__tuple t2;if(v_empty(2))t2="regression";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=5;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=2.0;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;
__tuple t6;
__tuple t7;
callHalcon(fit_surface_first_order, err, a_obj(0),a_obj(1),t2,t3,t4,&t5,&t6,&t7);
elib::Utils::fillVar(t5, a+5);elib::Utils::fillVar(t6, a+6);elib::Utils::fillVar(t7, a+7);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_fit_surface_second_order);
__tuple t2;if(v_empty(2))t2="regression";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=5;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=2.0;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;
__tuple t6;
__tuple t7;
__tuple t8;
__tuple t9;
__tuple t10;
callHalcon(fit_surface_second_order, err, a_obj(0),a_obj(1),t2,t3,t4,&t5,&t6,&t7,&t8,&t9,&t10);
elib::Utils::fillVar(t5, a+5);elib::Utils::fillVar(t6, a+6);elib::Utils::fillVar(t7, a+7);elib::Utils::fillVar(t8, a+8);elib::Utils::fillVar(t9, a+9);elib::Utils::fillVar(t10, a+10);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_fnew_line);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
callHalcon(fnew_line, err, t0);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_fourier_1dim);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=50;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;
__tuple t5;
callHalcon(fourier_1dim, err, t0,t1,t2,t3,&t4,&t5);
elib::Utils::fillVar(t4, a+4);elib::Utils::fillVar(t5, a+5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_fourier_1dim_inv);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=100;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;
__tuple t4;
callHalcon(fourier_1dim_inv, err, t0,t1,t2,&t3,&t4);
elib::Utils::fillVar(t3, a+3);elib::Utils::fillVar(t4, a+4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_fread_char);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(fread_char, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_fread_line);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
__tuple t2;
callHalcon(fread_line, err, t0,&t1,&t2);
elib::Utils::fillVar(t1, a+1);elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_fread_serialized_item);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(fread_serialized_item, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_fread_string);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
__tuple t2;
callHalcon(fread_string, err, t0,&t1,&t2);
elib::Utils::fillVar(t1, a+1);elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_frei_amp);
callHalcon(frei_amp, err, a_obj(0),varp_obj(1));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_frei_dir);
callHalcon(frei_dir, err, a_obj(0),varp_obj(1),varp_obj(2));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_full_domain);
callHalcon(full_domain, err, a_obj(0),varp_obj(1));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_funct_1d_to_pairs);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
__tuple t2;
callHalcon(funct_1d_to_pairs, err, t0,&t1,&t2);
elib::Utils::fillVar(t1, a+1);elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_fuzzy_entropy);
__tuple t2;if(v_empty(2))t2=0;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=255;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;
callHalcon(fuzzy_entropy, err, a_obj(0),a_obj(1),t2,t3,&t4);
elib::Utils::fillVar(t4, a+4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_fuzzy_perimeter);
__tuple t2;if(v_empty(2))t2=0;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=255;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;
callHalcon(fuzzy_perimeter, err, a_obj(0),a_obj(1),t2,t3,&t4);
elib::Utils::fillVar(t4, a+4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_fwrite_serialized_item);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
callHalcon(fwrite_serialized_item, err, t0,t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_fwrite_string);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="hallo";else elib::Utils::fillTuple(a+1, t1);
callHalcon(fwrite_string, err, t0,t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_gamma_image);
__tuple t2;if(v_empty(2))t2=0.416666666667;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=0.055;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=0.0031308;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=255.0;else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6="true";else elib::Utils::fillTuple(a+6, t6);
callHalcon(gamma_image, err, a_obj(0),varp_obj(1),t2,t3,t4,t5,t6);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_gauss_distribution);
__tuple t0;if(v_empty(0))t0=2.0;else elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(gauss_distribution, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_gauss_filter);
__tuple t2;if(v_empty(2))t2=5;else elib::Utils::fillTuple(a+2, t2);
callHalcon(gauss_filter, err, a_obj(0),varp_obj(1),t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_gauss_image);
__tuple t2;if(v_empty(2))t2=5;else elib::Utils::fillTuple(a+2, t2);
callHalcon(gauss_image, err, a_obj(0),varp_obj(1),t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_generalized_eigenvalues_general_matrix);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="none";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;
__tuple t4;
__tuple t5;
__tuple t6;
callHalcon(generalized_eigenvalues_general_matrix, err, t0,t1,t2,&t3,&t4,&t5,&t6);
elib::Utils::fillVar(t3, a+3);elib::Utils::fillVar(t4, a+4);elib::Utils::fillVar(t5, a+5);elib::Utils::fillVar(t6, a+6);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_generalized_eigenvalues_symmetric_matrix);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="false";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;
__tuple t4;
callHalcon(generalized_eigenvalues_symmetric_matrix, err, t0,t1,t2,&t3,&t4);
elib::Utils::fillVar(t3, a+3);elib::Utils::fillVar(t4, a+4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_gen_bandfilter);
__tuple t1;if(v_empty(1))t1=0.1;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=0.2;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="none";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4="dc_center";else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=512;else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6=512;else elib::Utils::fillTuple(a+6, t6);
callHalcon(gen_bandfilter, err, varp_obj(0),t1,t2,t3,t4,t5,t6);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_gen_bandpass);
__tuple t1;if(v_empty(1))t1=0.1;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=0.2;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="none";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4="dc_center";else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=512;else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6=512;else elib::Utils::fillTuple(a+6, t6);
callHalcon(gen_bandpass, err, varp_obj(0),t1,t2,t3,t4,t5,t6);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_gen_caltab);
__tuple t0;if(v_empty(0))t0=7;else elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=7;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=0.0125;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=0.5;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4="caltab.descr";else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5="caltab.ps";else elib::Utils::fillTuple(a+5, t5);
callHalcon(gen_caltab, err, t0,t1,t2,t3,t4,t5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_gen_checker_region);
__tuple t1;if(v_empty(1))t1=511;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=511;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=64;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=64;else elib::Utils::fillTuple(a+4, t4);
callHalcon(gen_checker_region, err, varp_obj(0),t1,t2,t3,t4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_gen_circle);
__tuple t1;if(v_empty(1))t1=200.0;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=200.0;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=100.5;else elib::Utils::fillTuple(a+3, t3);
callHalcon(gen_circle, err, varp_obj(0),t1,t2,t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_gen_circle_contour_xld);
__tuple t1;if(v_empty(1))t1=200.0;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=200.0;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=100.0;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=0.0;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=6.28318;else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6="positive";else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7=1.0;else elib::Utils::fillTuple(a+7, t7);
callHalcon(gen_circle_contour_xld, err, varp_obj(0),t1,t2,t3,t4,t5,t6,t7);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_gen_circle_sector);
__tuple t1;if(v_empty(1))t1=200.0;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=200.0;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=100.5;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=0.0;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=3.14159;else elib::Utils::fillTuple(a+5, t5);
callHalcon(gen_circle_sector, err, varp_obj(0),t1,t2,t3,t4,t5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_gen_contours_skeleton_xld);
__tuple t2;if(v_empty(2))t2=1;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="filter";else elib::Utils::fillTuple(a+3, t3);
callHalcon(gen_contours_skeleton_xld, err, a_obj(0),varp_obj(1),t2,t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_gen_contour_nurbs_xld);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="auto";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4="auto";else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=3;else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6=1.0;else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7=5.0;else elib::Utils::fillTuple(a+7, t7);
callHalcon(gen_contour_nurbs_xld, err, varp_obj(0),t1,t2,t3,t4,t5,t6,t7);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_gen_contour_polygon_rounded_xld);
__tuple t1;if(v_empty(1)){const char* vs1[]={"20","80","80","20","20"};ehalcon::Utils::arr2TupleString(vs1, 5, t1);}else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2)){const char* vs2[]={"20","20","80","80","20"};ehalcon::Utils::arr2TupleString(vs2, 5, t2);}else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3)){const char* vs3[]={"20","20","20","20","20"};ehalcon::Utils::arr2TupleString(vs3, 5, t3);}else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=1.0;else elib::Utils::fillTuple(a+4, t4);
callHalcon(gen_contour_polygon_rounded_xld, err, varp_obj(0),t1,t2,t3,t4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_gen_contour_polygon_xld);
__tuple t1;if(v_empty(1)){const char* vs1[]={"0","1","2","2","2"};ehalcon::Utils::arr2TupleString(vs1, 5, t1);}else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2)){const char* vs2[]={"0","0","0","1","2"};ehalcon::Utils::arr2TupleString(vs2, 5, t2);}else elib::Utils::fillTuple(a+2, t2);
callHalcon(gen_contour_polygon_xld, err, varp_obj(0),t1,t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_gen_contour_region_xld);
__tuple t2;if(v_empty(2))t2="border";else elib::Utils::fillTuple(a+2, t2);
callHalcon(gen_contour_region_xld, err, a_obj(0),varp_obj(1),t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_gen_cooc_matrix);
__tuple t3;if(v_empty(3))t3=6;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=0;else elib::Utils::fillTuple(a+4, t4);
callHalcon(gen_cooc_matrix, err, a_obj(0),a_obj(1),varp_obj(2),t3,t4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_gen_cross_contour_xld);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=6.0;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=0.785398;else elib::Utils::fillTuple(a+4, t4);
callHalcon(gen_cross_contour_xld, err, varp_obj(0),t1,t2,t3,t4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_gen_derivative_filter);
__tuple t1;if(v_empty(1))t1="x";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=1;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="none";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4="dc_center";else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=512;else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6=512;else elib::Utils::fillTuple(a+6, t6);
callHalcon(gen_derivative_filter, err, varp_obj(0),t1,t2,t3,t4,t5,t6);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_gen_disc_se);
__tuple t1;if(v_empty(1))t1="byte";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=5;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=5;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=0;else elib::Utils::fillTuple(a+4, t4);
callHalcon(gen_disc_se, err, varp_obj(0),t1,t2,t3,t4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_gen_ellipse);
__tuple t1;if(v_empty(1))t1=200.0;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=200.0;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=0.0;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=100.0;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=60.0;else elib::Utils::fillTuple(a+5, t5);
callHalcon(gen_ellipse, err, varp_obj(0),t1,t2,t3,t4,t5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_gen_ellipse_contour_xld);
__tuple t1;if(v_empty(1))t1=200.0;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=200.0;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=0.0;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=100.0;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=50.0;else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6=0.0;else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7=6.28318;else elib::Utils::fillTuple(a+7, t7);
__tuple t8;if(v_empty(8))t8="positive";else elib::Utils::fillTuple(a+8, t8);
__tuple t9;if(v_empty(9))t9=1.5;else elib::Utils::fillTuple(a+9, t9);
callHalcon(gen_ellipse_contour_xld, err, varp_obj(0),t1,t2,t3,t4,t5,t6,t7,t8,t9);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_gen_ellipse_sector);
__tuple t1;if(v_empty(1))t1=200.0;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=200.0;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=0.0;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=100.0;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=60.0;else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6=0.0;else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7=3.14159;else elib::Utils::fillTuple(a+7, t7);
callHalcon(gen_ellipse_sector, err, varp_obj(0),t1,t2,t3,t4,t5,t6,t7);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_gen_empty_obj);
callHalcon(gen_empty_obj, err, varp_obj(0));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_gen_empty_region);
callHalcon(gen_empty_region, err, varp_obj(0));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_gen_filter_mask);
__tuple t1;if(v_empty(1))t1="gauss";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=1.0;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=512;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=512;else elib::Utils::fillTuple(a+4, t4);
callHalcon(gen_filter_mask, err, varp_obj(0),t1,t2,t3,t4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_gen_gabor);
__tuple t1;if(v_empty(1))t1=1.4;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=0.4;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=1.0;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=1.5;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5="none";else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6="dc_center";else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7=512;else elib::Utils::fillTuple(a+7, t7);
__tuple t8;if(v_empty(8))t8=512;else elib::Utils::fillTuple(a+8, t8);
callHalcon(gen_gabor, err, varp_obj(0),t1,t2,t3,t4,t5,t6,t7,t8);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_gen_gauss_filter);
__tuple t1;if(v_empty(1))t1=1.0;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=1.0;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=0.0;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4="none";else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5="dc_center";else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6=512;else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7=512;else elib::Utils::fillTuple(a+7, t7);
callHalcon(gen_gauss_filter, err, varp_obj(0),t1,t2,t3,t4,t5,t6,t7);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_gen_gauss_pyramid);
__tuple t2;if(v_empty(2))t2="weighted";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=0.5;else elib::Utils::fillTuple(a+3, t3);
callHalcon(gen_gauss_pyramid, err, a_obj(0),varp_obj(1),t2,t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_gen_grid_region);
__tuple t1;if(v_empty(1))t1=10;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=10;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="lines";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=512;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=512;else elib::Utils::fillTuple(a+5, t5);
callHalcon(gen_grid_region, err, varp_obj(0),t1,t2,t3,t4,t5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_gen_highpass);
__tuple t1;if(v_empty(1))t1=0.1;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="none";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="dc_center";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=512;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=512;else elib::Utils::fillTuple(a+5, t5);
callHalcon(gen_highpass, err, varp_obj(0),t1,t2,t3,t4,t5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_gen_image1);
__tuple t1;if(v_empty(1))t1="byte";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=512;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=512;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;elib::Utils::fillTuple(a+4, t4);
callHalcon(gen_image1, err, varp_obj(0),t1,t2,t3,t4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_gen_image1_extern);
__tuple t1;if(v_empty(1))t1="byte";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=512;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=512;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=0;else elib::Utils::fillTuple(a+5, t5);
callHalcon(gen_image1_extern, err, varp_obj(0),t1,t2,t3,t4,t5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_gen_image1_rect);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=512;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=512;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=8;else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6=8;else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7="false";else elib::Utils::fillTuple(a+7, t7);
__tuple t8;if(v_empty(8))t8=0;else elib::Utils::fillTuple(a+8, t8);
callHalcon(gen_image1_rect, err, varp_obj(0),t1,t2,t3,t4,t5,t6,t7,t8);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_gen_image3);
__tuple t1;if(v_empty(1))t1="byte";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=512;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=512;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;elib::Utils::fillTuple(a+4, t4);
__tuple t5;elib::Utils::fillTuple(a+5, t5);
__tuple t6;elib::Utils::fillTuple(a+6, t6);
callHalcon(gen_image3, err, varp_obj(0),t1,t2,t3,t4,t5,t6);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_gen_image3_extern);
__tuple t1;if(v_empty(1))t1="byte";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=512;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=512;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;elib::Utils::fillTuple(a+4, t4);
__tuple t5;elib::Utils::fillTuple(a+5, t5);
__tuple t6;elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7=0;else elib::Utils::fillTuple(a+7, t7);
callHalcon(gen_image3_extern, err, varp_obj(0),t1,t2,t3,t4,t5,t6,t7);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_gen_image_const);
__tuple t1;if(v_empty(1))t1="byte";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=512;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=512;else elib::Utils::fillTuple(a+3, t3);
callHalcon(gen_image_const, err, varp_obj(0),t1,t2,t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_gen_image_gray_ramp);
__tuple t1;if(v_empty(1))t1=1.0;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=1.0;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=128;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=256;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=256;else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6=512;else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7=512;else elib::Utils::fillTuple(a+7, t7);
callHalcon(gen_image_gray_ramp, err, varp_obj(0),t1,t2,t3,t4,t5,t6,t7);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_gen_image_interleaved);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="rgb";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=512;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=512;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6="byte";else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7=0;else elib::Utils::fillTuple(a+7, t7);
__tuple t8;if(v_empty(8))t8=0;else elib::Utils::fillTuple(a+8, t8);
__tuple t9;if(v_empty(9))t9=0;else elib::Utils::fillTuple(a+9, t9);
__tuple t10;if(v_empty(10))t10=0;else elib::Utils::fillTuple(a+10, t10);
__tuple t11;if(v_empty(11))t11=-1;else elib::Utils::fillTuple(a+11, t11);
__tuple t12;if(v_empty(12))t12=0;else elib::Utils::fillTuple(a+12, t12);
callHalcon(gen_image_interleaved, err, varp_obj(0),t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_gen_image_proto);
__tuple t2;if(v_empty(2))t2=0;else elib::Utils::fillTuple(a+2, t2);
callHalcon(gen_image_proto, err, a_obj(0),varp_obj(1),t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_gen_image_surface_first_order);
__tuple t1;if(v_empty(1))t1="byte";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=1.0;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=1.0;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=1.0;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=256.0;else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6=256.0;else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7=512;else elib::Utils::fillTuple(a+7, t7);
__tuple t8;if(v_empty(8))t8=512;else elib::Utils::fillTuple(a+8, t8);
callHalcon(gen_image_surface_first_order, err, varp_obj(0),t1,t2,t3,t4,t5,t6,t7,t8);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_gen_image_surface_second_order);
__tuple t1;if(v_empty(1))t1="byte";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=1.0;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=1.0;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=1.0;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=1.0;else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6=1.0;else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7=1.0;else elib::Utils::fillTuple(a+7, t7);
__tuple t8;if(v_empty(8))t8=256.0;else elib::Utils::fillTuple(a+8, t8);
__tuple t9;if(v_empty(9))t9=256.0;else elib::Utils::fillTuple(a+9, t9);
__tuple t10;if(v_empty(10))t10=512;else elib::Utils::fillTuple(a+10, t10);
__tuple t11;if(v_empty(11))t11=512;else elib::Utils::fillTuple(a+11, t11);
callHalcon(gen_image_surface_second_order, err, varp_obj(0),t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_gen_lowpass);
__tuple t1;if(v_empty(1))t1=0.1;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="none";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="dc_center";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=512;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=512;else elib::Utils::fillTuple(a+5, t5);
callHalcon(gen_lowpass, err, varp_obj(0),t1,t2,t3,t4,t5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_gen_mean_filter);
__tuple t1;if(v_empty(1))t1="ellipse";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=11.0;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=11.0;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=0.0;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5="none";else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6="dc_center";else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7=512;else elib::Utils::fillTuple(a+7, t7);
__tuple t8;if(v_empty(8))t8=512;else elib::Utils::fillTuple(a+8, t8);
callHalcon(gen_mean_filter, err, varp_obj(0),t1,t2,t3,t4,t5,t6,t7,t8);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_gen_nurbs_interp);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=3;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;
__tuple t5;
__tuple t6;
callHalcon(gen_nurbs_interp, err, t0,t1,t2,t3,&t4,&t5,&t6);
elib::Utils::fillVar(t4, a+4);elib::Utils::fillVar(t5, a+5);elib::Utils::fillVar(t6, a+6);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_gen_parallels_xld);
__tuple t2;if(v_empty(2))t2=10.0;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=30.0;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=0.15;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5="true";else elib::Utils::fillTuple(a+5, t5);
callHalcon(gen_parallels_xld, err, a_obj(0),varp_obj(1),t2,t3,t4,t5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_gen_parallel_contour_xld);
__tuple t2;if(v_empty(2))t2="regression_normal";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=1;else elib::Utils::fillTuple(a+3, t3);
callHalcon(gen_parallel_contour_xld, err, a_obj(0),varp_obj(1),t2,t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_gen_polygons_xld);
__tuple t2;if(v_empty(2))t2="ramer";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=2.0;else elib::Utils::fillTuple(a+3, t3);
callHalcon(gen_polygons_xld, err, a_obj(0),varp_obj(1),t2,t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_gen_principal_comp_trans);
__tuple t1;
__tuple t2;
__tuple t3;
__tuple t4;
__tuple t5;
callHalcon(gen_principal_comp_trans, err, a_obj(0),&t1,&t2,&t3,&t4,&t5);
elib::Utils::fillVar(t1, a+1);elib::Utils::fillVar(t2, a+2);elib::Utils::fillVar(t3, a+3);elib::Utils::fillVar(t4, a+4);elib::Utils::fillVar(t5, a+5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_gen_psf_defocus);
__tuple t1;if(v_empty(1))t1=256;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=256;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=5.0;else elib::Utils::fillTuple(a+3, t3);
callHalcon(gen_psf_defocus, err, varp_obj(0),t1,t2,t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_gen_psf_motion);
__tuple t1;if(v_empty(1))t1=256;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=256;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=20.0;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=0;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=3;else elib::Utils::fillTuple(a+5, t5);
callHalcon(gen_psf_motion, err, varp_obj(0),t1,t2,t3,t4,t5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_gen_random_region);
__tuple t1;if(v_empty(1))t1=128;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=128;else elib::Utils::fillTuple(a+2, t2);
callHalcon(gen_random_region, err, varp_obj(0),t1,t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_gen_random_regions);
__tuple t1;if(v_empty(1))t1="circle";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=10.0;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=20.0;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=10.0;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=30.0;else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6=-0.7854;else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7=0.7854;else elib::Utils::fillTuple(a+7, t7);
__tuple t8;if(v_empty(8))t8=100;else elib::Utils::fillTuple(a+8, t8);
__tuple t9;if(v_empty(9))t9=512;else elib::Utils::fillTuple(a+9, t9);
__tuple t10;if(v_empty(10))t10=512;else elib::Utils::fillTuple(a+10, t10);
callHalcon(gen_random_regions, err, varp_obj(0),t1,t2,t3,t4,t5,t6,t7,t8,t9,t10);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_gen_rectangle1);
__tuple t1;if(v_empty(1))t1=30.0;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=20.0;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=100.0;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=200.0;else elib::Utils::fillTuple(a+4, t4);
callHalcon(gen_rectangle1, err, varp_obj(0),t1,t2,t3,t4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_gen_rectangle2);
__tuple t1;if(v_empty(1))t1=300.0;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=200.0;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=0.0;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=100.0;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=20.0;else elib::Utils::fillTuple(a+5, t5);
callHalcon(gen_rectangle2, err, varp_obj(0),t1,t2,t3,t4,t5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_gen_rectangle2_contour_xld);
__tuple t1;if(v_empty(1))t1=300.0;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=200.0;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=0.0;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=100.5;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=20.5;else elib::Utils::fillTuple(a+5, t5);
callHalcon(gen_rectangle2_contour_xld, err, varp_obj(0),t1,t2,t3,t4,t5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_gen_region_contour_xld);
__tuple t2;if(v_empty(2))t2="filled";else elib::Utils::fillTuple(a+2, t2);
callHalcon(gen_region_contour_xld, err, a_obj(0),varp_obj(1),t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_gen_region_histo);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=255;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=255;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=1;else elib::Utils::fillTuple(a+4, t4);
callHalcon(gen_region_histo, err, varp_obj(0),t1,t2,t3,t4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_gen_region_hline);
__tuple t1;if(v_empty(1))t1=0.0;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=200;else elib::Utils::fillTuple(a+2, t2);
callHalcon(gen_region_hline, err, varp_obj(0),t1,t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_gen_region_line);
__tuple t1;if(v_empty(1))t1=100;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=50;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=150;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=250;else elib::Utils::fillTuple(a+4, t4);
callHalcon(gen_region_line, err, varp_obj(0),t1,t2,t3,t4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_gen_region_points);
__tuple t1;if(v_empty(1))t1=100;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=100;else elib::Utils::fillTuple(a+2, t2);
callHalcon(gen_region_points, err, varp_obj(0),t1,t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_gen_region_polygon);
__tuple t1;if(v_empty(1))t1=100;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=100;else elib::Utils::fillTuple(a+2, t2);
callHalcon(gen_region_polygon, err, varp_obj(0),t1,t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_gen_region_polygon_filled);
__tuple t1;if(v_empty(1))t1=100;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=100;else elib::Utils::fillTuple(a+2, t2);
callHalcon(gen_region_polygon_filled, err, varp_obj(0),t1,t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_gen_region_polygon_xld);
__tuple t2;if(v_empty(2))t2="filled";else elib::Utils::fillTuple(a+2, t2);
callHalcon(gen_region_polygon_xld, err, a_obj(0),varp_obj(1),t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_gen_region_runs);
__tuple t1;if(v_empty(1))t1=100;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=50;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=200;else elib::Utils::fillTuple(a+3, t3);
callHalcon(gen_region_runs, err, varp_obj(0),t1,t2,t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_gen_sin_bandpass);
__tuple t1;if(v_empty(1))t1=0.1;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="none";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="dc_center";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=512;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=512;else elib::Utils::fillTuple(a+5, t5);
callHalcon(gen_sin_bandpass, err, varp_obj(0),t1,t2,t3,t4,t5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_gen_std_bandpass);
__tuple t1;if(v_empty(1))t1=0.1;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=0.01;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="sin";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4="none";else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5="dc_center";else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6=512;else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7=512;else elib::Utils::fillTuple(a+7, t7);
callHalcon(gen_std_bandpass, err, varp_obj(0),t1,t2,t3,t4,t5,t6,t7);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_gen_struct_elements);
__tuple t1;if(v_empty(1))t1="noise";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=1;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=1;else elib::Utils::fillTuple(a+3, t3);
callHalcon(gen_struct_elements, err, varp_obj(0),t1,t2,t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_aop_info);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1)){const char* vs1[]={"iconic_type","parameter:0"};ehalcon::Utils::arr2TupleString(vs1, 2, t1);}else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2)){const char* vs2[]={"byte",""};ehalcon::Utils::arr2TupleString(vs2, 2, t2);}else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="max_threads";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;
callHalcon(get_aop_info, err, t0,t1,t2,t3,&t4);
elib::Utils::fillVar(t4, a+4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_bg_esti_params);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
__tuple t2;
__tuple t3;
__tuple t4;
__tuple t5;
__tuple t6;
__tuple t7;
__tuple t8;
__tuple t9;
__tuple t10;
callHalcon(get_bg_esti_params, err, t0,&t1,&t2,&t3,&t4,&t5,&t6,&t7,&t8,&t9,&t10);
elib::Utils::fillVar(t1, a+1);elib::Utils::fillVar(t2, a+2);elib::Utils::fillVar(t3, a+3);elib::Utils::fillVar(t4, a+4);elib::Utils::fillVar(t5, a+5);elib::Utils::fillVar(t6, a+6);elib::Utils::fillVar(t7, a+7);elib::Utils::fillVar(t8, a+8);elib::Utils::fillVar(t9, a+9);elib::Utils::fillVar(t10, a+10);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_channel_info);
__tuple t1;if(v_empty(1))t1="creator";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=0;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;
callHalcon(get_channel_info, err, a_obj(0),t1,t2,&t3);
elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_chapter_info);
__tuple t0;if(v_empty(0))t0="";else elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(get_chapter_info, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_check);
__tuple t0;
callHalcon(get_check, err, &t0);
elib::Utils::fillVar(t0, a+0);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_class_box_param);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="split_error";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(get_class_box_param, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_class_train_data_gmm);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(get_class_train_data_gmm, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_class_train_data_knn);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(get_class_train_data_knn, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_class_train_data_mlp);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(get_class_train_data_mlp, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_class_train_data_svm);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(get_class_train_data_svm, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_comprise);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(get_comprise, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_compute_device_info);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="name";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(get_compute_device_info, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_compute_device_param);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="buffer_cache_capacity";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(get_compute_device_param, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_contour_angle_xld);
__tuple t1;if(v_empty(1))t1="abs";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="range";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=3;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;
callHalcon(get_contour_angle_xld, err, a_obj(0),t1,t2,t3,&t4);
elib::Utils::fillVar(t4, a+4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_contour_attrib_xld);
__tuple t1;if(v_empty(1))t1="angle";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(get_contour_attrib_xld, err, a_obj(0),t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_contour_global_attrib_xld);
__tuple t1;if(v_empty(1))t1="regr_norm_row";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(get_contour_global_attrib_xld, err, a_obj(0),t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_contour_xld);
__tuple t1;
__tuple t2;
callHalcon(get_contour_xld, err, a_obj(0),&t1,&t2);
elib::Utils::fillVar(t1, a+1);elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_current_dir);
__tuple t0;
callHalcon(get_current_dir, err, &t0);
elib::Utils::fillVar(t0, a+0);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_diagonal_matrix);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=0;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(get_diagonal_matrix, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_distance_transform_xld_contour);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
callHalcon(get_distance_transform_xld_contour, err, varp_obj(0),t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_distance_transform_xld_param);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="mode";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(get_distance_transform_xld_param, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_domain);
callHalcon(get_domain, err, a_obj(0),varp_obj(1));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_draw);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(get_draw, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_drawing_object_iconic);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
callHalcon(get_drawing_object_iconic, err, varp_obj(0),t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_drawing_object_params);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(get_drawing_object_params, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_error_text);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(get_error_text, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_extended_error_info);
__tuple t0;
__tuple t1;
__tuple t2;
callHalcon(get_extended_error_info, err, &t0,&t1,&t2);
elib::Utils::fillVar(t0, a+0);elib::Utils::fillVar(t1, a+1);elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_fix);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(get_fix, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_fixed_lut);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(get_fixed_lut, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_font);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(get_font, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_font_extents);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
__tuple t2;
__tuple t3;
__tuple t4;
callHalcon(get_font_extents, err, t0,&t1,&t2,&t3,&t4);
elib::Utils::fillVar(t1, a+1);elib::Utils::fillVar(t2, a+2);elib::Utils::fillVar(t3, a+3);elib::Utils::fillVar(t4, a+4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_framegrabber_callback);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="transfer_end";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;
__tuple t3;
callHalcon(get_framegrabber_callback, err, t0,t1,&t2,&t3);
elib::Utils::fillVar(t2, a+2);elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_framegrabber_lut);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
__tuple t2;
__tuple t3;
callHalcon(get_framegrabber_lut, err, t0,&t1,&t2,&t3);
elib::Utils::fillVar(t1, a+1);elib::Utils::fillVar(t2, a+2);elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_framegrabber_param);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="revision";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(get_framegrabber_param, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_full_matrix);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(get_full_matrix, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_grayval);
__tuple t1;if(v_empty(1))t1=0;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=0;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;
callHalcon(get_grayval, err, a_obj(0),t1,t2,&t3);
elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_grayval_contour_xld);
__tuple t2;if(v_empty(2))t2="nearest_neighbor";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;
callHalcon(get_grayval_contour_xld, err, a_obj(0),a_obj(1),t2,&t3);
elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_grayval_interpolated);
__tuple t1;if(v_empty(1))t1=0;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=0;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="bilinear";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;
callHalcon(get_grayval_interpolated, err, a_obj(0),t1,t2,t3,&t4);
elib::Utils::fillVar(t4, a+4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_hsi);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
__tuple t2;
__tuple t3;
callHalcon(get_hsi, err, t0,&t1,&t2,&t3);
elib::Utils::fillVar(t1, a+1);elib::Utils::fillVar(t2, a+2);elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_icon);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
callHalcon(get_icon, err, varp_obj(0),t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_image_pointer1);
__tuple t1;
__tuple t2;
__tuple t3;
__tuple t4;
callHalcon(get_image_pointer1, err, a_obj(0),&t1,&t2,&t3,&t4);
elib::Utils::fillVar(t1, a+1);elib::Utils::fillVar(t2, a+2);elib::Utils::fillVar(t3, a+3);elib::Utils::fillVar(t4, a+4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_image_pointer1_rect);
__tuple t1;
__tuple t2;
__tuple t3;
__tuple t4;
__tuple t5;
__tuple t6;
callHalcon(get_image_pointer1_rect, err, a_obj(0),&t1,&t2,&t3,&t4,&t5,&t6);
elib::Utils::fillVar(t1, a+1);elib::Utils::fillVar(t2, a+2);elib::Utils::fillVar(t3, a+3);elib::Utils::fillVar(t4, a+4);elib::Utils::fillVar(t5, a+5);elib::Utils::fillVar(t6, a+6);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_image_pointer3);
__tuple t1;
__tuple t2;
__tuple t3;
__tuple t4;
__tuple t5;
__tuple t6;
callHalcon(get_image_pointer3, err, a_obj(0),&t1,&t2,&t3,&t4,&t5,&t6);
elib::Utils::fillVar(t1, a+1);elib::Utils::fillVar(t2, a+2);elib::Utils::fillVar(t3, a+3);elib::Utils::fillVar(t4, a+4);elib::Utils::fillVar(t5, a+5);elib::Utils::fillVar(t6, a+6);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_image_size);
__tuple t1;
__tuple t2;
callHalcon(get_image_size, err, a_obj(0),&t1,&t2);
elib::Utils::fillVar(t1, a+1);elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_image_time);
__tuple t1;
__tuple t2;
__tuple t3;
__tuple t4;
__tuple t5;
__tuple t6;
__tuple t7;
__tuple t8;
callHalcon(get_image_time, err, a_obj(0),&t1,&t2,&t3,&t4,&t5,&t6,&t7,&t8);
elib::Utils::fillVar(t1, a+1);elib::Utils::fillVar(t2, a+2);elib::Utils::fillVar(t3, a+3);elib::Utils::fillVar(t4, a+4);elib::Utils::fillVar(t5, a+5);elib::Utils::fillVar(t6, a+6);elib::Utils::fillVar(t7, a+7);elib::Utils::fillVar(t8, a+8);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_image_type);
__tuple t1;
callHalcon(get_image_type, err, a_obj(0),&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_insert);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(get_insert, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_io_channel_param);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(get_io_channel_param, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_io_device_param);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(get_io_device_param, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_keywords);
__tuple t0;if(v_empty(0))t0="get_keywords";else elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(get_keywords, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_lines_xld);
__tuple t1;
__tuple t2;
__tuple t3;
__tuple t4;
__tuple t5;
__tuple t6;
callHalcon(get_lines_xld, err, a_obj(0),&t1,&t2,&t3,&t4,&t5,&t6);
elib::Utils::fillVar(t1, a+1);elib::Utils::fillVar(t2, a+2);elib::Utils::fillVar(t3, a+3);elib::Utils::fillVar(t4, a+4);elib::Utils::fillVar(t5, a+5);elib::Utils::fillVar(t6, a+6);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_line_approx);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(get_line_approx, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_line_style);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(get_line_style, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_line_width);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(get_line_width, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_lut);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(get_lut, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_lut_style);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
__tuple t2;
__tuple t3;
callHalcon(get_lut_style, err, t0,&t1,&t2,&t3);
elib::Utils::fillVar(t1, a+1);elib::Utils::fillVar(t2, a+2);elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_mbutton);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
__tuple t2;
__tuple t3;
callHalcon(get_mbutton, err, t0,&t1,&t2,&t3);
elib::Utils::fillVar(t1, a+1);elib::Utils::fillVar(t2, a+2);elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_mbutton_sub_pix);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
__tuple t2;
__tuple t3;
callHalcon(get_mbutton_sub_pix, err, t0,&t1,&t2,&t3);
elib::Utils::fillVar(t1, a+1);elib::Utils::fillVar(t2, a+2);elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_message_obj);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
callHalcon(get_message_obj, err, varp_obj(0),t1,t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_message_param);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="message_keys";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;
callHalcon(get_message_param, err, t0,t1,t2,&t3);
elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_message_queue_param);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="max_message_num";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(get_message_queue_param, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_message_tuple);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(get_message_tuple, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_modules);
__tuple t0;
__tuple t1;
callHalcon(get_modules, err, &t0,&t1);
elib::Utils::fillVar(t0, a+0);elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_mposition);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
__tuple t2;
__tuple t3;
callHalcon(get_mposition, err, t0,&t1,&t2,&t3);
elib::Utils::fillVar(t1, a+1);elib::Utils::fillVar(t2, a+2);elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_mposition_sub_pix);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
__tuple t2;
__tuple t3;
callHalcon(get_mposition_sub_pix, err, t0,&t1,&t2,&t3);
elib::Utils::fillVar(t1, a+1);elib::Utils::fillVar(t2, a+2);elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_mshape);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(get_mshape, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_next_socket_data_type);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(get_next_socket_data_type, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_obj_class);
__tuple t1;
callHalcon(get_obj_class, err, a_obj(0),&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_operator_info);
__tuple t0;if(v_empty(0))t0="get_operator_info";else elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="abstract";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(get_operator_info, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_operator_name);
__tuple t0;if(v_empty(0))t0="info";else elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(get_operator_name, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_os_window_handle);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
__tuple t2;
callHalcon(get_os_window_handle, err, t0,&t1,&t2);
elib::Utils::fillVar(t1, a+1);elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_paint);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(get_paint, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_pair_funct_1d);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;
__tuple t3;
callHalcon(get_pair_funct_1d, err, t0,t1,&t2,&t3);
elib::Utils::fillVar(t2, a+2);elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_parallels_xld);
__tuple t1;
__tuple t2;
__tuple t3;
__tuple t4;
__tuple t5;
__tuple t6;
__tuple t7;
__tuple t8;
callHalcon(get_parallels_xld, err, a_obj(0),&t1,&t2,&t3,&t4,&t5,&t6,&t7,&t8);
elib::Utils::fillVar(t1, a+1);elib::Utils::fillVar(t2, a+2);elib::Utils::fillVar(t3, a+3);elib::Utils::fillVar(t4, a+4);elib::Utils::fillVar(t5, a+5);elib::Utils::fillVar(t6, a+6);elib::Utils::fillVar(t7, a+7);elib::Utils::fillVar(t8, a+8);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_params_class_gmm);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
__tuple t2;
__tuple t3;
__tuple t4;
__tuple t5;
callHalcon(get_params_class_gmm, err, t0,&t1,&t2,&t3,&t4,&t5);
elib::Utils::fillVar(t1, a+1);elib::Utils::fillVar(t2, a+2);elib::Utils::fillVar(t3, a+3);elib::Utils::fillVar(t4, a+4);elib::Utils::fillVar(t5, a+5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_params_class_knn);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1)){const char* vs1[]={"method","k"};ehalcon::Utils::arr2TupleString(vs1, 2, t1);}else elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(get_params_class_knn, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_params_class_mlp);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
__tuple t2;
__tuple t3;
__tuple t4;
__tuple t5;
__tuple t6;
callHalcon(get_params_class_mlp, err, t0,&t1,&t2,&t3,&t4,&t5,&t6);
elib::Utils::fillVar(t1, a+1);elib::Utils::fillVar(t2, a+2);elib::Utils::fillVar(t3, a+3);elib::Utils::fillVar(t4, a+4);elib::Utils::fillVar(t5, a+5);elib::Utils::fillVar(t6, a+6);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_params_class_svm);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
__tuple t2;
__tuple t3;
__tuple t4;
__tuple t5;
__tuple t6;
__tuple t7;
__tuple t8;
callHalcon(get_params_class_svm, err, t0,&t1,&t2,&t3,&t4,&t5,&t6,&t7,&t8);
elib::Utils::fillVar(t1, a+1);elib::Utils::fillVar(t2, a+2);elib::Utils::fillVar(t3, a+3);elib::Utils::fillVar(t4, a+4);elib::Utils::fillVar(t5, a+5);elib::Utils::fillVar(t6, a+6);elib::Utils::fillVar(t7, a+7);elib::Utils::fillVar(t8, a+8);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_param_info);
__tuple t0;if(v_empty(0))t0="get_param_info";else elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="Slot";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="description";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;
callHalcon(get_param_info, err, t0,t1,t2,&t3);
elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_param_names);
__tuple t0;if(v_empty(0))t0="get_param_names";else elib::Utils::fillTuple(a+0, t0);
__tuple t1;
__tuple t2;
__tuple t3;
__tuple t4;
callHalcon(get_param_names, err, t0,&t1,&t2,&t3,&t4);
elib::Utils::fillVar(t1, a+1);elib::Utils::fillVar(t2, a+2);elib::Utils::fillVar(t3, a+3);elib::Utils::fillVar(t4, a+4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_param_num);
__tuple t0;if(v_empty(0))t0="get_param_num";else elib::Utils::fillTuple(a+0, t0);
__tuple t1;
__tuple t2;
__tuple t3;
__tuple t4;
__tuple t5;
__tuple t6;
callHalcon(get_param_num, err, t0,&t1,&t2,&t3,&t4,&t5,&t6);
elib::Utils::fillVar(t1, a+1);elib::Utils::fillVar(t2, a+2);elib::Utils::fillVar(t3, a+3);elib::Utils::fillVar(t4, a+4);elib::Utils::fillVar(t5, a+5);elib::Utils::fillVar(t6, a+6);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_param_types);
__tuple t0;if(v_empty(0))t0="get_param_types";else elib::Utils::fillTuple(a+0, t0);
__tuple t1;
__tuple t2;
callHalcon(get_param_types, err, t0,&t1,&t2);
elib::Utils::fillVar(t1, a+1);elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_part);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
__tuple t2;
__tuple t3;
__tuple t4;
callHalcon(get_part, err, t0,&t1,&t2,&t3,&t4);
elib::Utils::fillVar(t1, a+1);elib::Utils::fillVar(t2, a+2);elib::Utils::fillVar(t3, a+3);elib::Utils::fillVar(t4, a+4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_part_style);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(get_part_style, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_pixel);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(get_pixel, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_points_ellipse);
__tuple t0;if(v_empty(0))t0=0;else elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;elib::Utils::fillTuple(a+4, t4);
__tuple t5;elib::Utils::fillTuple(a+5, t5);
__tuple t6;
__tuple t7;
callHalcon(get_points_ellipse, err, t0,t1,t2,t3,t4,t5,&t6,&t7);
elib::Utils::fillVar(t6, a+6);elib::Utils::fillVar(t7, a+7);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_polygon_xld);
__tuple t1;
__tuple t2;
__tuple t3;
__tuple t4;
callHalcon(get_polygon_xld, err, a_obj(0),&t1,&t2,&t3,&t4);
elib::Utils::fillVar(t1, a+1);elib::Utils::fillVar(t2, a+2);elib::Utils::fillVar(t3, a+3);elib::Utils::fillVar(t4, a+4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_pose_type);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
__tuple t2;
__tuple t3;
callHalcon(get_pose_type, err, t0,&t1,&t2,&t3);
elib::Utils::fillVar(t1, a+1);elib::Utils::fillVar(t2, a+2);elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_prep_info_class_gmm);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="principal_components";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;
__tuple t3;
callHalcon(get_prep_info_class_gmm, err, t0,t1,&t2,&t3);
elib::Utils::fillVar(t2, a+2);elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_prep_info_class_mlp);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="principal_components";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;
__tuple t3;
callHalcon(get_prep_info_class_mlp, err, t0,t1,&t2,&t3);
elib::Utils::fillVar(t2, a+2);elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_prep_info_class_svm);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="principal_components";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;
__tuple t3;
callHalcon(get_prep_info_class_svm, err, t0,t1,&t2,&t3);
elib::Utils::fillVar(t2, a+2);elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_region_chain);
__tuple t1;
__tuple t2;
__tuple t3;
callHalcon(get_region_chain, err, a_obj(0),&t1,&t2,&t3);
elib::Utils::fillVar(t1, a+1);elib::Utils::fillVar(t2, a+2);elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_region_contour);
__tuple t1;
__tuple t2;
callHalcon(get_region_contour, err, a_obj(0),&t1,&t2);
elib::Utils::fillVar(t1, a+1);elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_region_convex);
__tuple t1;
__tuple t2;
callHalcon(get_region_convex, err, a_obj(0),&t1,&t2);
elib::Utils::fillVar(t1, a+1);elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_region_index);
__tuple t1;if(v_empty(1))t1=100;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=100;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;
callHalcon(get_region_index, err, a_obj(0),t1,t2,&t3);
elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_region_points);
__tuple t1;
__tuple t2;
callHalcon(get_region_points, err, a_obj(0),&t1,&t2);
elib::Utils::fillVar(t1, a+1);elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_region_polygon);
__tuple t1;if(v_empty(1))t1=5.0;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;
__tuple t3;
callHalcon(get_region_polygon, err, a_obj(0),t1,&t2,&t3);
elib::Utils::fillVar(t2, a+2);elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_region_runs);
__tuple t1;
__tuple t2;
__tuple t3;
callHalcon(get_region_runs, err, a_obj(0),&t1,&t2,&t3);
elib::Utils::fillVar(t1, a+1);elib::Utils::fillVar(t2, a+2);elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_region_thickness);
__tuple t1;
__tuple t2;
callHalcon(get_region_thickness, err, a_obj(0),&t1,&t2);
elib::Utils::fillVar(t1, a+1);elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_regress_params_xld);
__tuple t1;
__tuple t2;
__tuple t3;
__tuple t4;
__tuple t5;
__tuple t6;
__tuple t7;
__tuple t8;
__tuple t9;
__tuple t10;
callHalcon(get_regress_params_xld, err, a_obj(0),&t1,&t2,&t3,&t4,&t5,&t6,&t7,&t8,&t9,&t10);
elib::Utils::fillVar(t1, a+1);elib::Utils::fillVar(t2, a+2);elib::Utils::fillVar(t3, a+3);elib::Utils::fillVar(t4, a+4);elib::Utils::fillVar(t5, a+5);elib::Utils::fillVar(t6, a+6);elib::Utils::fillVar(t7, a+7);elib::Utils::fillVar(t8, a+8);elib::Utils::fillVar(t9, a+9);elib::Utils::fillVar(t10, a+10);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_regularization_params_class_mlp);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="weight_prior";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(get_regularization_params_class_mlp, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_rejection_params_class_mlp);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="sampling_strategy";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(get_rejection_params_class_mlp, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_rgb);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
__tuple t2;
__tuple t3;
callHalcon(get_rgb, err, t0,&t1,&t2,&t3);
elib::Utils::fillVar(t1, a+1);elib::Utils::fillVar(t2, a+2);elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_sample_class_gmm);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;
__tuple t3;
callHalcon(get_sample_class_gmm, err, t0,t1,&t2,&t3);
elib::Utils::fillVar(t2, a+2);elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_sample_class_knn);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;
__tuple t3;
callHalcon(get_sample_class_knn, err, t0,t1,&t2,&t3);
elib::Utils::fillVar(t2, a+2);elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_sample_class_mlp);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;
__tuple t3;
callHalcon(get_sample_class_mlp, err, t0,t1,&t2,&t3);
elib::Utils::fillVar(t2, a+2);elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_sample_class_svm);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;
__tuple t3;
callHalcon(get_sample_class_svm, err, t0,t1,&t2,&t3);
elib::Utils::fillVar(t2, a+2);elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_sample_class_train_data);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;
__tuple t3;
callHalcon(get_sample_class_train_data, err, t0,t1,&t2,&t3);
elib::Utils::fillVar(t2, a+2);elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_sample_num_class_gmm);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(get_sample_num_class_gmm, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_sample_num_class_knn);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(get_sample_num_class_knn, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_sample_num_class_mlp);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(get_sample_num_class_mlp, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_sample_num_class_svm);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(get_sample_num_class_svm, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_sample_num_class_train_data);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(get_sample_num_class_train_data, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_serialized_item_ptr);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
__tuple t2;
callHalcon(get_serialized_item_ptr, err, t0,&t1,&t2);
elib::Utils::fillVar(t1, a+1);elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_serial_param);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
__tuple t2;
__tuple t3;
__tuple t4;
__tuple t5;
__tuple t6;
__tuple t7;
callHalcon(get_serial_param, err, t0,&t1,&t2,&t3,&t4,&t5,&t6,&t7);
elib::Utils::fillVar(t1, a+1);elib::Utils::fillVar(t2, a+2);elib::Utils::fillVar(t3, a+3);elib::Utils::fillVar(t4, a+4);elib::Utils::fillVar(t5, a+5);elib::Utils::fillVar(t6, a+6);elib::Utils::fillVar(t7, a+7);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_shape);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(get_shape, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_size_matrix);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
__tuple t2;
callHalcon(get_size_matrix, err, t0,&t1,&t2);
elib::Utils::fillVar(t1, a+1);elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_socket_descriptor);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(get_socket_descriptor, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_socket_param);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(get_socket_param, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_socket_timeout);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(get_socket_timeout, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_spy);
__tuple t0;if(v_empty(0))t0="mode";else elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(get_spy, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_string_extents);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="test_string";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;
__tuple t3;
__tuple t4;
__tuple t5;
callHalcon(get_string_extents, err, t0,t1,&t2,&t3,&t4,&t5);
elib::Utils::fillVar(t2, a+2);elib::Utils::fillVar(t3, a+3);elib::Utils::fillVar(t4, a+4);elib::Utils::fillVar(t5, a+5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_sub_matrix);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=0;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=0;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=1;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=1;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;
callHalcon(get_sub_matrix, err, t0,t1,t2,t3,t4,&t5);
elib::Utils::fillVar(t5, a+5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_support_vector_class_svm);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(get_support_vector_class_svm, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_support_vector_num_class_svm);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
__tuple t2;
callHalcon(get_support_vector_num_class_svm, err, t0,&t1,&t2);
elib::Utils::fillVar(t1, a+1);elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_system);
__tuple t0;if(v_empty(0))t0="init_new_image";else elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(get_system, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_system_time);
__tuple t0;
__tuple t1;
__tuple t2;
__tuple t3;
__tuple t4;
__tuple t5;
__tuple t6;
__tuple t7;
callHalcon(get_system_time, err, &t0,&t1,&t2,&t3,&t4,&t5,&t6,&t7);
elib::Utils::fillVar(t0, a+0);elib::Utils::fillVar(t1, a+1);elib::Utils::fillVar(t2, a+2);elib::Utils::fillVar(t3, a+3);elib::Utils::fillVar(t4, a+4);elib::Utils::fillVar(t5, a+5);elib::Utils::fillVar(t6, a+6);elib::Utils::fillVar(t7, a+7);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_text_object);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="all_lines";else elib::Utils::fillTuple(a+2, t2);
callHalcon(get_text_object, err, varp_obj(0),t1,t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_text_result);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="class";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(get_text_result, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_threading_attrib);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
__tuple t2;
__tuple t3;
callHalcon(get_threading_attrib, err, t0,&t1,&t2,&t3);
elib::Utils::fillVar(t1, a+1);elib::Utils::fillVar(t2, a+2);elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_tposition);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
__tuple t2;
callHalcon(get_tposition, err, t0,&t1,&t2);
elib::Utils::fillVar(t1, a+1);elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_tshape);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(get_tshape, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_value_matrix);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=0;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=0;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;
callHalcon(get_value_matrix, err, t0,t1,t2,&t3);
elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_window_attr);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(get_window_attr, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_window_background_image);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
callHalcon(get_window_background_image, err, varp_obj(0),t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_window_extents);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
__tuple t2;
__tuple t3;
__tuple t4;
callHalcon(get_window_extents, err, t0,&t1,&t2,&t3,&t4);
elib::Utils::fillVar(t1, a+1);elib::Utils::fillVar(t2, a+2);elib::Utils::fillVar(t3, a+3);elib::Utils::fillVar(t4, a+4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_window_param);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="save_depth_buffer";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(get_window_param, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_window_pointer3);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
__tuple t2;
__tuple t3;
__tuple t4;
__tuple t5;
callHalcon(get_window_pointer3, err, t0,&t1,&t2,&t3,&t4,&t5);
elib::Utils::fillVar(t1, a+1);elib::Utils::fillVar(t2, a+2);elib::Utils::fillVar(t3, a+3);elib::Utils::fillVar(t4, a+4);elib::Utils::fillVar(t5, a+5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_window_type);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(get_window_type, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_y_value_funct_1d);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="constant";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;
callHalcon(get_y_value_funct_1d, err, t0,t1,t2,&t3);
elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_give_bg_esti);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
callHalcon(give_bg_esti, err, varp_obj(0),t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_gnuplot_close);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
callHalcon(gnuplot_close, err, t0);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_gnuplot_open_file);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(gnuplot_open_file, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_gnuplot_open_pipe);
__tuple t0;
callHalcon(gnuplot_open_pipe, err, &t0);
elib::Utils::fillVar(t0, a+0);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_gnuplot_plot_ctrl);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
callHalcon(gnuplot_plot_ctrl, err, t0,t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_gnuplot_plot_funct_1d);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
callHalcon(gnuplot_plot_funct_1d, err, t0,t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_gnuplot_plot_image);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=64;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=64;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=60;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=30;else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6="hidden3d";else elib::Utils::fillTuple(a+6, t6);
callHalcon(gnuplot_plot_image, err, a_obj(0),t1,t2,t3,t4,t5,t6);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_golay_elements);
__tuple t2;if(v_empty(2))t2="l";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=0;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=16;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=16;else elib::Utils::fillTuple(a+5, t5);
callHalcon(golay_elements, err, varp_obj(0),varp_obj(1),t2,t3,t4,t5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_grab_data);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;
callHalcon(grab_data, err, varp_obj(0),varp_obj(1),varp_obj(2),t3,&t4);
elib::Utils::fillVar(t4, a+4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_grab_data_async);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=-1.0;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;
callHalcon(grab_data_async, err, varp_obj(0),varp_obj(1),varp_obj(2),t3,t4,&t5);
elib::Utils::fillVar(t5, a+5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_grab_image);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
callHalcon(grab_image, err, varp_obj(0),t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_grab_image_async);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=-1.0;else elib::Utils::fillTuple(a+2, t2);
callHalcon(grab_image_async, err, varp_obj(0),t1,t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_grab_image_start);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=-1.0;else elib::Utils::fillTuple(a+1, t1);
callHalcon(grab_image_start, err, t0,t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_gray_bothat);
callHalcon(gray_bothat, err, a_obj(0),a_obj(1),varp_obj(2));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_gray_closing);
callHalcon(gray_closing, err, a_obj(0),a_obj(1),varp_obj(2));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_gray_closing_rect);
__tuple t2;if(v_empty(2))t2=11;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=11;else elib::Utils::fillTuple(a+3, t3);
callHalcon(gray_closing_rect, err, a_obj(0),varp_obj(1),t2,t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_gray_closing_shape);
__tuple t2;if(v_empty(2))t2=11;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=11;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4="octagon";else elib::Utils::fillTuple(a+4, t4);
callHalcon(gray_closing_shape, err, a_obj(0),varp_obj(1),t2,t3,t4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_gray_dilation);
callHalcon(gray_dilation, err, a_obj(0),a_obj(1),varp_obj(2));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_gray_dilation_rect);
__tuple t2;if(v_empty(2))t2=11;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=11;else elib::Utils::fillTuple(a+3, t3);
callHalcon(gray_dilation_rect, err, a_obj(0),varp_obj(1),t2,t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_gray_dilation_shape);
__tuple t2;if(v_empty(2))t2=11;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=11;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4="octagon";else elib::Utils::fillTuple(a+4, t4);
callHalcon(gray_dilation_shape, err, a_obj(0),varp_obj(1),t2,t3,t4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_gray_erosion);
callHalcon(gray_erosion, err, a_obj(0),a_obj(1),varp_obj(2));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_gray_erosion_rect);
__tuple t2;if(v_empty(2))t2=11;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=11;else elib::Utils::fillTuple(a+3, t3);
callHalcon(gray_erosion_rect, err, a_obj(0),varp_obj(1),t2,t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_gray_erosion_shape);
__tuple t2;if(v_empty(2))t2=11;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=11;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4="octagon";else elib::Utils::fillTuple(a+4, t4);
callHalcon(gray_erosion_shape, err, a_obj(0),varp_obj(1),t2,t3,t4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_gray_features);
__tuple t2;if(v_empty(2))t2="mean";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;
callHalcon(gray_features, err, a_obj(0),a_obj(1),t2,&t3);
elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_gray_histo);
__tuple t2;
__tuple t3;
callHalcon(gray_histo, err, a_obj(0),a_obj(1),&t2,&t3);
elib::Utils::fillVar(t2, a+2);elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_gray_histo_abs);
__tuple t2;if(v_empty(2))t2=1.0;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;
callHalcon(gray_histo_abs, err, a_obj(0),a_obj(1),t2,&t3);
elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_gray_histo_range);
__tuple t2;if(v_empty(2))t2=0;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=255;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=256;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;
__tuple t6;
callHalcon(gray_histo_range, err, a_obj(0),a_obj(1),t2,t3,t4,&t5,&t6);
elib::Utils::fillVar(t5, a+5);elib::Utils::fillVar(t6, a+6);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_gray_inside);
callHalcon(gray_inside, err, a_obj(0),varp_obj(1));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_gray_opening);
callHalcon(gray_opening, err, a_obj(0),a_obj(1),varp_obj(2));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_gray_opening_rect);
__tuple t2;if(v_empty(2))t2=11;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=11;else elib::Utils::fillTuple(a+3, t3);
callHalcon(gray_opening_rect, err, a_obj(0),varp_obj(1),t2,t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_gray_opening_shape);
__tuple t2;if(v_empty(2))t2=11;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=11;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4="octagon";else elib::Utils::fillTuple(a+4, t4);
callHalcon(gray_opening_shape, err, a_obj(0),varp_obj(1),t2,t3,t4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_gray_range_rect);
__tuple t2;if(v_empty(2))t2=11;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=11;else elib::Utils::fillTuple(a+3, t3);
callHalcon(gray_range_rect, err, a_obj(0),varp_obj(1),t2,t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_gray_skeleton);
callHalcon(gray_skeleton, err, a_obj(0),varp_obj(1));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_gray_tophat);
callHalcon(gray_tophat, err, a_obj(0),a_obj(1),varp_obj(2));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_hamming_change_region);
__tuple t2;if(v_empty(2))t2=100;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=100;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=1000;else elib::Utils::fillTuple(a+4, t4);
callHalcon(hamming_change_region, err, a_obj(0),varp_obj(1),t2,t3,t4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_hamming_distance);
__tuple t2;
__tuple t3;
callHalcon(hamming_distance, err, a_obj(0),a_obj(1),&t2,&t3);
elib::Utils::fillVar(t2, a+2);elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_hamming_distance_norm);
__tuple t2;if(v_empty(2))t2="center";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;
__tuple t4;
callHalcon(hamming_distance_norm, err, a_obj(0),a_obj(1),t2,&t3,&t4);
elib::Utils::fillVar(t3, a+3);elib::Utils::fillVar(t4, a+4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_harmonic_interpolation);
__tuple t3;if(v_empty(3))t3=0.001;else elib::Utils::fillTuple(a+3, t3);
callHalcon(harmonic_interpolation, err, a_obj(0),a_obj(1),varp_obj(2),t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_highpass_image);
__tuple t2;if(v_empty(2))t2=9;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=9;else elib::Utils::fillTuple(a+3, t3);
callHalcon(highpass_image, err, a_obj(0),varp_obj(1),t2,t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_histo_2dim);
callHalcon(histo_2dim, err, a_obj(0),a_obj(1),a_obj(2),varp_obj(3));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_histo_to_thresh);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=2.0;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;
__tuple t3;
callHalcon(histo_to_thresh, err, t0,t1,&t2,&t3);
elib::Utils::fillVar(t2, a+2);elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_hit_or_miss);
__tuple t4;if(v_empty(4))t4=16;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=16;else elib::Utils::fillTuple(a+5, t5);
callHalcon(hit_or_miss, err, a_obj(0),a_obj(1),a_obj(2),varp_obj(3),t4,t5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_hit_or_miss_golay);
__tuple t2;if(v_empty(2))t2="h";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=0;else elib::Utils::fillTuple(a+3, t3);
callHalcon(hit_or_miss_golay, err, a_obj(0),varp_obj(1),t2,t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_hit_or_miss_seq);
__tuple t2;if(v_empty(2))t2="h";else elib::Utils::fillTuple(a+2, t2);
callHalcon(hit_or_miss_seq, err, a_obj(0),varp_obj(1),t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_hom_mat2d_compose);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(hom_mat2d_compose, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_hom_mat2d_determinant);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(hom_mat2d_determinant, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_hom_mat2d_identity);
__tuple t0;
callHalcon(hom_mat2d_identity, err, &t0);
elib::Utils::fillVar(t0, a+0);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_hom_mat2d_invert);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(hom_mat2d_invert, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_hom_mat2d_reflect);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=0;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=0;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=16;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=32;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;
callHalcon(hom_mat2d_reflect, err, t0,t1,t2,t3,t4,&t5);
elib::Utils::fillVar(t5, a+5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_hom_mat2d_reflect_local);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=16;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=32;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;
callHalcon(hom_mat2d_reflect_local, err, t0,t1,t2,&t3);
elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_hom_mat2d_rotate);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=0.78;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=0;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=0;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;
callHalcon(hom_mat2d_rotate, err, t0,t1,t2,t3,&t4);
elib::Utils::fillVar(t4, a+4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_hom_mat2d_rotate_local);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=0.78;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(hom_mat2d_rotate_local, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_hom_mat2d_scale);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=2;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=2;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=0;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=0;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;
callHalcon(hom_mat2d_scale, err, t0,t1,t2,t3,t4,&t5);
elib::Utils::fillVar(t5, a+5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_hom_mat2d_scale_local);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=2;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=2;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;
callHalcon(hom_mat2d_scale_local, err, t0,t1,t2,&t3);
elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_hom_mat2d_slant);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=0.78;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="x";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=0;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=0;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;
callHalcon(hom_mat2d_slant, err, t0,t1,t2,t3,t4,&t5);
elib::Utils::fillVar(t5, a+5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_hom_mat2d_slant_local);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=0.78;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="x";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;
callHalcon(hom_mat2d_slant_local, err, t0,t1,t2,&t3);
elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_hom_mat2d_to_affine_par);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
__tuple t2;
__tuple t3;
__tuple t4;
__tuple t5;
__tuple t6;
callHalcon(hom_mat2d_to_affine_par, err, t0,&t1,&t2,&t3,&t4,&t5,&t6);
elib::Utils::fillVar(t1, a+1);elib::Utils::fillVar(t2, a+2);elib::Utils::fillVar(t3, a+3);elib::Utils::fillVar(t4, a+4);elib::Utils::fillVar(t5, a+5);elib::Utils::fillVar(t6, a+6);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_hom_mat2d_translate);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=64;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=64;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;
callHalcon(hom_mat2d_translate, err, t0,t1,t2,&t3);
elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_hom_mat2d_translate_local);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=64;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=64;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;
callHalcon(hom_mat2d_translate_local, err, t0,t1,t2,&t3);
elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_hom_mat2d_transpose);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(hom_mat2d_transpose, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_hom_mat3d_compose);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(hom_mat3d_compose, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_hom_mat3d_determinant);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(hom_mat3d_determinant, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_hom_mat3d_identity);
__tuple t0;
callHalcon(hom_mat3d_identity, err, &t0);
elib::Utils::fillVar(t0, a+0);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_hom_mat3d_invert);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(hom_mat3d_invert, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_hom_mat3d_project);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=256;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=256;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=256;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;
callHalcon(hom_mat3d_project, err, t0,t1,t2,t3,&t4);
elib::Utils::fillVar(t4, a+4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_hom_mat3d_rotate);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=0.78;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="x";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=0;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=0;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=0;else elib::Utils::fillTuple(a+5, t5);
__tuple t6;
callHalcon(hom_mat3d_rotate, err, t0,t1,t2,t3,t4,t5,&t6);
elib::Utils::fillVar(t6, a+6);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_hom_mat3d_rotate_local);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=0.78;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="x";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;
callHalcon(hom_mat3d_rotate_local, err, t0,t1,t2,&t3);
elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_hom_mat3d_scale);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=2;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=2;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=2;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=0;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=0;else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6=0;else elib::Utils::fillTuple(a+6, t6);
__tuple t7;
callHalcon(hom_mat3d_scale, err, t0,t1,t2,t3,t4,t5,t6,&t7);
elib::Utils::fillVar(t7, a+7);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_hom_mat3d_scale_local);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=2;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=2;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=2;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;
callHalcon(hom_mat3d_scale_local, err, t0,t1,t2,t3,&t4);
elib::Utils::fillVar(t4, a+4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_hom_mat3d_to_pose);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(hom_mat3d_to_pose, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_hom_mat3d_translate);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=64;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=64;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=64;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;
callHalcon(hom_mat3d_translate, err, t0,t1,t2,t3,&t4);
elib::Utils::fillVar(t4, a+4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_hom_mat3d_translate_local);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=64;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=64;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=64;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;
callHalcon(hom_mat3d_translate_local, err, t0,t1,t2,t3,&t4);
elib::Utils::fillVar(t4, a+4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_hom_mat3d_transpose);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(hom_mat3d_transpose, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_hough_circles);
__tuple t2;if(v_empty(2))t2=12;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=60;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;elib::Utils::fillTuple(a+4, t4);
callHalcon(hough_circles, err, a_obj(0),varp_obj(1),t2,t3,t4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_hough_circle_trans);
__tuple t2;if(v_empty(2))t2=12;else elib::Utils::fillTuple(a+2, t2);
callHalcon(hough_circle_trans, err, a_obj(0),varp_obj(1),t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_hough_lines);
__tuple t1;if(v_empty(1))t1=4;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=100;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=5;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=5;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;
__tuple t6;
callHalcon(hough_lines, err, a_obj(0),t1,t2,t3,t4,&t5,&t6);
elib::Utils::fillVar(t5, a+5);elib::Utils::fillVar(t6, a+6);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_hough_lines_dir);
__tuple t3;if(v_empty(3))t3=2;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=4;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5="mean";else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6=5;else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7=100;else elib::Utils::fillTuple(a+7, t7);
__tuple t8;if(v_empty(8))t8=5;else elib::Utils::fillTuple(a+8, t8);
__tuple t9;if(v_empty(9))t9=5;else elib::Utils::fillTuple(a+9, t9);
__tuple t10;if(v_empty(10))t10="true";else elib::Utils::fillTuple(a+10, t10);
__tuple t11;
__tuple t12;
callHalcon(hough_lines_dir, err, a_obj(0),varp_obj(1),varp_obj(2),t3,t4,t5,t6,t7,t8,t9,t10,&t11,&t12);
elib::Utils::fillVar(t11, a+11);elib::Utils::fillVar(t12, a+12);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_hough_line_trans);
__tuple t2;if(v_empty(2))t2=4;else elib::Utils::fillTuple(a+2, t2);
callHalcon(hough_line_trans, err, a_obj(0),varp_obj(1),t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_hough_line_trans_dir);
__tuple t2;if(v_empty(2))t2=2;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=4;else elib::Utils::fillTuple(a+3, t3);
callHalcon(hough_line_trans_dir, err, a_obj(0),varp_obj(1),t2,t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_hysteresis_threshold);
__tuple t2;if(v_empty(2))t2=30;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=60;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=10;else elib::Utils::fillTuple(a+4, t4);
callHalcon(hysteresis_threshold, err, a_obj(0),varp_obj(1),t2,t3,t4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_illuminate);
__tuple t2;if(v_empty(2))t2=101;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=101;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=0.7;else elib::Utils::fillTuple(a+4, t4);
callHalcon(illuminate, err, a_obj(0),varp_obj(1),t2,t3,t4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_image_to_channels);
callHalcon(image_to_channels, err, a_obj(0),varp_obj(1));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_info_edges);
__tuple t0;if(v_empty(0))t0="lanser2";else elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="edge";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=0.5;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;
__tuple t4;
callHalcon(info_edges, err, t0,t1,t2,&t3,&t4);
elib::Utils::fillVar(t3, a+3);elib::Utils::fillVar(t4, a+4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_info_framegrabber);
__tuple t0;if(v_empty(0))t0="File";else elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="info_boards";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;
__tuple t3;
callHalcon(info_framegrabber, err, t0,t1,&t2,&t3);
elib::Utils::fillVar(t2, a+2);elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_info_parallels_xld);
__tuple t2;
__tuple t3;
__tuple t4;
__tuple t5;
__tuple t6;
__tuple t7;
callHalcon(info_parallels_xld, err, a_obj(0),a_obj(1),&t2,&t3,&t4,&t5,&t6,&t7);
elib::Utils::fillVar(t2, a+2);elib::Utils::fillVar(t3, a+3);elib::Utils::fillVar(t4, a+4);elib::Utils::fillVar(t5, a+5);elib::Utils::fillVar(t6, a+6);elib::Utils::fillVar(t7, a+7);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_info_smooth);
__tuple t0;if(v_empty(0))t0="deriche2";else elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=0.5;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;
__tuple t3;
callHalcon(info_smooth, err, t0,t1,&t2,&t3);
elib::Utils::fillVar(t2, a+2);elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_init_compute_device);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="all";else elib::Utils::fillTuple(a+1, t1);
callHalcon(init_compute_device, err, t0,t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_inner_circle);
__tuple t1;
__tuple t2;
__tuple t3;
callHalcon(inner_circle, err, a_obj(0),&t1,&t2,&t3);
elib::Utils::fillVar(t1, a+1);elib::Utils::fillVar(t2, a+2);elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_inner_rectangle1);
__tuple t1;
__tuple t2;
__tuple t3;
__tuple t4;
callHalcon(inner_rectangle1, err, a_obj(0),&t1,&t2,&t3,&t4);
elib::Utils::fillVar(t1, a+1);elib::Utils::fillVar(t2, a+2);elib::Utils::fillVar(t3, a+3);elib::Utils::fillVar(t4, a+4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_inpainting_aniso);
__tuple t3;if(v_empty(3))t3="weickert";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=5.0;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=0.5;else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6=10;else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7=3.0;else elib::Utils::fillTuple(a+7, t7);
callHalcon(inpainting_aniso, err, a_obj(0),a_obj(1),varp_obj(2),t3,t4,t5,t6,t7);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_inpainting_ced);
__tuple t3;if(v_empty(3))t3=0.5;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=3.0;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=0.5;else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6=10;else elib::Utils::fillTuple(a+6, t6);
callHalcon(inpainting_ced, err, a_obj(0),a_obj(1),varp_obj(2),t3,t4,t5,t6);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_inpainting_ct);
__tuple t3;if(v_empty(3))t3=5.0;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=25.0;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=1.41;else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6=4.0;else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7=1;else elib::Utils::fillTuple(a+7, t7);
callHalcon(inpainting_ct, err, a_obj(0),a_obj(1),varp_obj(2),t3,t4,t5,t6,t7);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_inpainting_mcf);
__tuple t3;if(v_empty(3))t3=0.5;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=0.5;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=10;else elib::Utils::fillTuple(a+5, t5);
callHalcon(inpainting_mcf, err, a_obj(0),a_obj(1),varp_obj(2),t3,t4,t5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_inpainting_texture);
__tuple t3;if(v_empty(3))t3=9;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=30;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=1.0;else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6="none";else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7=1.0;else elib::Utils::fillTuple(a+7, t7);
callHalcon(inpainting_texture, err, a_obj(0),a_obj(1),varp_obj(2),t3,t4,t5,t6,t7);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_inspect_shape_model);
__tuple t3;if(v_empty(3))t3=4;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=30;else elib::Utils::fillTuple(a+4, t4);
callHalcon(inspect_shape_model, err, a_obj(0),varp_obj(1),varp_obj(2),t3,t4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_integer_to_obj);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
callHalcon(integer_to_obj, err, varp_obj(0),t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_integrate_funct_1d);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
__tuple t2;
callHalcon(integrate_funct_1d, err, t0,&t1,&t2);
elib::Utils::fillVar(t1, a+1);elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_intensity);
__tuple t2;
__tuple t3;
callHalcon(intensity, err, a_obj(0),a_obj(1),&t2,&t3);
elib::Utils::fillVar(t2, a+2);elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_interjacent);
__tuple t2;if(v_empty(2))t2="mixed";else elib::Utils::fillTuple(a+2, t2);
callHalcon(interjacent, err, a_obj(0),varp_obj(1),t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_interpolate_scattered_data);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;
callHalcon(interpolate_scattered_data, err, t0,t1,t2,&t3);
elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_interpolate_scattered_data_image);
__tuple t3;if(v_empty(3))t3="thin_plate_splines";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4="";else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5="";else elib::Utils::fillTuple(a+5, t5);
callHalcon(interpolate_scattered_data_image, err, a_obj(0),a_obj(1),varp_obj(2),t3,t4,t5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_interpolate_scattered_data_points_to_image);
__tuple t1;if(v_empty(1))t1="thin_plate_splines";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=640;else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6=480;else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7="";else elib::Utils::fillTuple(a+7, t7);
__tuple t8;if(v_empty(8))t8="";else elib::Utils::fillTuple(a+8, t8);
callHalcon(interpolate_scattered_data_points_to_image, err, varp_obj(0),t1,t2,t3,t4,t5,t6,t7,t8);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_intersection);
callHalcon(intersection, err, a_obj(0),a_obj(1),varp_obj(2));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_intersection_circles);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=0.0;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=6.28318;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5="positive";else elib::Utils::fillTuple(a+5, t5);
__tuple t6;elib::Utils::fillTuple(a+6, t6);
__tuple t7;elib::Utils::fillTuple(a+7, t7);
__tuple t8;elib::Utils::fillTuple(a+8, t8);
__tuple t9;if(v_empty(9))t9=0.0;else elib::Utils::fillTuple(a+9, t9);
__tuple t10;if(v_empty(10))t10=6.28318;else elib::Utils::fillTuple(a+10, t10);
__tuple t11;if(v_empty(11))t11="positive";else elib::Utils::fillTuple(a+11, t11);
__tuple t12;
__tuple t13;
__tuple t14;
callHalcon(intersection_circles, err, t0,t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,&t12,&t13,&t14);
elib::Utils::fillVar(t12, a+12);elib::Utils::fillVar(t13, a+13);elib::Utils::fillVar(t14, a+14);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_intersection_circle_contour_xld);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=0.0;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=6.28318;else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6="positive";else elib::Utils::fillTuple(a+6, t6);
__tuple t7;
__tuple t8;
callHalcon(intersection_circle_contour_xld, err, a_obj(0),t1,t2,t3,t4,t5,t6,&t7,&t8);
elib::Utils::fillVar(t7, a+7);elib::Utils::fillVar(t8, a+8);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_intersection_closed_contours_xld);
callHalcon(intersection_closed_contours_xld, err, a_obj(0),a_obj(1),varp_obj(2));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_intersection_closed_polygons_xld);
callHalcon(intersection_closed_polygons_xld, err, a_obj(0),a_obj(1),varp_obj(2));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_intersection_contours_xld);
__tuple t2;if(v_empty(2))t2="all";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;
__tuple t4;
__tuple t5;
callHalcon(intersection_contours_xld, err, a_obj(0),a_obj(1),t2,&t3,&t4,&t5);
elib::Utils::fillVar(t3, a+3);elib::Utils::fillVar(t4, a+4);elib::Utils::fillVar(t5, a+5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_intersection_lines);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;elib::Utils::fillTuple(a+4, t4);
__tuple t5;elib::Utils::fillTuple(a+5, t5);
__tuple t6;elib::Utils::fillTuple(a+6, t6);
__tuple t7;elib::Utils::fillTuple(a+7, t7);
__tuple t8;
__tuple t9;
__tuple t10;
callHalcon(intersection_lines, err, t0,t1,t2,t3,t4,t5,t6,t7,&t8,&t9,&t10);
elib::Utils::fillVar(t8, a+8);elib::Utils::fillVar(t9, a+9);elib::Utils::fillVar(t10, a+10);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_intersection_line_circle);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;elib::Utils::fillTuple(a+4, t4);
__tuple t5;elib::Utils::fillTuple(a+5, t5);
__tuple t6;elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7=0.0;else elib::Utils::fillTuple(a+7, t7);
__tuple t8;if(v_empty(8))t8=6.28318;else elib::Utils::fillTuple(a+8, t8);
__tuple t9;if(v_empty(9))t9="positive";else elib::Utils::fillTuple(a+9, t9);
__tuple t10;
__tuple t11;
callHalcon(intersection_line_circle, err, t0,t1,t2,t3,t4,t5,t6,t7,t8,t9,&t10,&t11);
elib::Utils::fillVar(t10, a+10);elib::Utils::fillVar(t11, a+11);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_intersection_line_contour_xld);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;elib::Utils::fillTuple(a+4, t4);
__tuple t5;
__tuple t6;
__tuple t7;
callHalcon(intersection_line_contour_xld, err, a_obj(0),t1,t2,t3,t4,&t5,&t6,&t7);
elib::Utils::fillVar(t5, a+5);elib::Utils::fillVar(t6, a+6);elib::Utils::fillVar(t7, a+7);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_intersection_ll);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;elib::Utils::fillTuple(a+4, t4);
__tuple t5;elib::Utils::fillTuple(a+5, t5);
__tuple t6;elib::Utils::fillTuple(a+6, t6);
__tuple t7;elib::Utils::fillTuple(a+7, t7);
__tuple t8;
__tuple t9;
__tuple t10;
callHalcon(intersection_ll, err, t0,t1,t2,t3,t4,t5,t6,t7,&t8,&t9,&t10);
elib::Utils::fillVar(t8, a+8);elib::Utils::fillVar(t9, a+9);elib::Utils::fillVar(t10, a+10);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_intersection_segments);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;elib::Utils::fillTuple(a+4, t4);
__tuple t5;elib::Utils::fillTuple(a+5, t5);
__tuple t6;elib::Utils::fillTuple(a+6, t6);
__tuple t7;elib::Utils::fillTuple(a+7, t7);
__tuple t8;
__tuple t9;
__tuple t10;
callHalcon(intersection_segments, err, t0,t1,t2,t3,t4,t5,t6,t7,&t8,&t9,&t10);
elib::Utils::fillVar(t8, a+8);elib::Utils::fillVar(t9, a+9);elib::Utils::fillVar(t10, a+10);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_intersection_segment_circle);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;elib::Utils::fillTuple(a+4, t4);
__tuple t5;elib::Utils::fillTuple(a+5, t5);
__tuple t6;elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7=0.0;else elib::Utils::fillTuple(a+7, t7);
__tuple t8;if(v_empty(8))t8=6.28318;else elib::Utils::fillTuple(a+8, t8);
__tuple t9;if(v_empty(9))t9="positive";else elib::Utils::fillTuple(a+9, t9);
__tuple t10;
__tuple t11;
callHalcon(intersection_segment_circle, err, t0,t1,t2,t3,t4,t5,t6,t7,t8,t9,&t10,&t11);
elib::Utils::fillVar(t10, a+10);elib::Utils::fillVar(t11, a+11);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_intersection_segment_contour_xld);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;elib::Utils::fillTuple(a+4, t4);
__tuple t5;
__tuple t6;
__tuple t7;
callHalcon(intersection_segment_contour_xld, err, a_obj(0),t1,t2,t3,t4,&t5,&t6,&t7);
elib::Utils::fillVar(t5, a+5);elib::Utils::fillVar(t6, a+6);elib::Utils::fillVar(t7, a+7);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_intersection_segment_line);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;elib::Utils::fillTuple(a+4, t4);
__tuple t5;elib::Utils::fillTuple(a+5, t5);
__tuple t6;elib::Utils::fillTuple(a+6, t6);
__tuple t7;elib::Utils::fillTuple(a+7, t7);
__tuple t8;
__tuple t9;
__tuple t10;
callHalcon(intersection_segment_line, err, t0,t1,t2,t3,t4,t5,t6,t7,&t8,&t9,&t10);
elib::Utils::fillVar(t8, a+8);elib::Utils::fillVar(t9, a+9);elib::Utils::fillVar(t10, a+10);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_invar_fourier_coeff);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=1;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="affine_invar";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;
__tuple t5;
callHalcon(invar_fourier_coeff, err, t0,t1,t2,t3,&t4,&t5);
elib::Utils::fillVar(t4, a+4);elib::Utils::fillVar(t5, a+5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_invert_funct_1d);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(invert_funct_1d, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_invert_image);
callHalcon(invert_image, err, a_obj(0),varp_obj(1));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_invert_matrix);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="general";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=0.0;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;
callHalcon(invert_matrix, err, t0,t1,t2,&t3);
elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_invert_matrix_mod);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="general";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=0.0;else elib::Utils::fillTuple(a+2, t2);
callHalcon(invert_matrix_mod, err, t0,t1,t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_isotropic_diffusion);
__tuple t2;if(v_empty(2))t2=1.0;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=10;else elib::Utils::fillTuple(a+3, t3);
callHalcon(isotropic_diffusion, err, a_obj(0),varp_obj(1),t2,t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_junctions_skeleton);
callHalcon(junctions_skeleton, err, a_obj(0),varp_obj(1),varp_obj(2));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_kirsch_amp);
callHalcon(kirsch_amp, err, a_obj(0),varp_obj(1));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_kirsch_dir);
callHalcon(kirsch_dir, err, a_obj(0),varp_obj(1),varp_obj(2));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_label_to_region);
callHalcon(label_to_region, err, a_obj(0),varp_obj(1));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_laplace);
__tuple t2;if(v_empty(2))t2="absolute";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=3;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4="n_4";else elib::Utils::fillTuple(a+4, t4);
callHalcon(laplace, err, a_obj(0),varp_obj(1),t2,t3,t4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_laplace_of_gauss);
__tuple t2;if(v_empty(2))t2=2.0;else elib::Utils::fillTuple(a+2, t2);
callHalcon(laplace_of_gauss, err, a_obj(0),varp_obj(1),t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_learn_class_box);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1)){const char* vs1[]={"1.0","1.5","2.0"};ehalcon::Utils::arr2TupleString(vs1, 3, t1);}else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=1;else elib::Utils::fillTuple(a+2, t2);
callHalcon(learn_class_box, err, t0,t1,t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_learn_ndim_box);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
callHalcon(learn_ndim_box, err, a_obj(0),a_obj(1),a_obj(2),t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_learn_ndim_norm);
__tuple t3;if(v_empty(3))t3="euclid";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=10.0;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=0.01;else elib::Utils::fillTuple(a+5, t5);
__tuple t6;
__tuple t7;
__tuple t8;
callHalcon(learn_ndim_norm, err, a_obj(0),a_obj(1),a_obj(2),t3,t4,t5,&t6,&t7,&t8);
elib::Utils::fillVar(t6, a+6);elib::Utils::fillVar(t7, a+7);elib::Utils::fillVar(t8, a+8);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_learn_sampset_box);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="training_prot";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=500;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=0.05;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=100;else elib::Utils::fillTuple(a+5, t5);
callHalcon(learn_sampset_box, err, t0,t1,t2,t3,t4,t5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_length_xld);
__tuple t1;
callHalcon(length_xld, err, a_obj(0),&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_linear_trans_color);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
callHalcon(linear_trans_color, err, a_obj(0),varp_obj(1),t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_line_orientation);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;
callHalcon(line_orientation, err, t0,t1,t2,t3,&t4);
elib::Utils::fillVar(t4, a+4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_line_position);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;
__tuple t5;
__tuple t6;
__tuple t7;
callHalcon(line_position, err, t0,t1,t2,t3,&t4,&t5,&t6,&t7);
elib::Utils::fillVar(t4, a+4);elib::Utils::fillVar(t5, a+5);elib::Utils::fillVar(t6, a+6);elib::Utils::fillVar(t7, a+7);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_list_files);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="files";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(list_files, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_load_par_knowledge);
__tuple t0;if(v_empty(0))t0="";else elib::Utils::fillTuple(a+0, t0);
callHalcon(load_par_knowledge, err, t0);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_local_max);
callHalcon(local_max, err, a_obj(0),varp_obj(1));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_local_max_contours_xld);
__tuple t3;if(v_empty(3))t3=70;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=15;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=4;else elib::Utils::fillTuple(a+5, t5);
callHalcon(local_max_contours_xld, err, a_obj(0),a_obj(1),varp_obj(2),t3,t4,t5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_local_max_sub_pix);
__tuple t1;if(v_empty(1))t1="facet";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=5.0;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;
__tuple t5;
callHalcon(local_max_sub_pix, err, a_obj(0),t1,t2,t3,&t4,&t5);
elib::Utils::fillVar(t4, a+4);elib::Utils::fillVar(t5, a+5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_local_min);
callHalcon(local_min, err, a_obj(0),varp_obj(1));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_local_min_max_funct_1d);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="strict_min_max";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="true";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;
__tuple t4;
callHalcon(local_min_max_funct_1d, err, t0,t1,t2,&t3,&t4);
elib::Utils::fillVar(t3, a+3);elib::Utils::fillVar(t4, a+4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_local_min_sub_pix);
__tuple t1;if(v_empty(1))t1="facet";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=5.0;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;
__tuple t5;
callHalcon(local_min_sub_pix, err, a_obj(0),t1,t2,t3,&t4,&t5);
elib::Utils::fillVar(t4, a+4);elib::Utils::fillVar(t5, a+5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_local_threshold);
__tuple t2;if(v_empty(2))t2="adapted_std_deviation";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="dark";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4="";else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5="";else elib::Utils::fillTuple(a+5, t5);
callHalcon(local_threshold, err, a_obj(0),varp_obj(1),t2,t3,t4,t5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_lock_mutex);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
callHalcon(lock_mutex, err, t0);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_log_image);
__tuple t2;if(v_empty(2))t2="e";else elib::Utils::fillTuple(a+2, t2);
callHalcon(log_image, err, a_obj(0),varp_obj(1),t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_lowlands);
callHalcon(lowlands, err, a_obj(0),varp_obj(1));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_lowlands_center);
callHalcon(lowlands_center, err, a_obj(0),varp_obj(1));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_lut_trans);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
callHalcon(lut_trans, err, a_obj(0),varp_obj(1),t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_make_dir);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
callHalcon(make_dir, err, t0);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_map_image);
callHalcon(map_image, err, a_obj(0),a_obj(1),varp_obj(2));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_match_fourier_coeff);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=50;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5="1/index";else elib::Utils::fillTuple(a+5, t5);
__tuple t6;
callHalcon(match_fourier_coeff, err, t0,t1,t2,t3,t4,t5,&t6);
elib::Utils::fillVar(t6, a+6);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_match_funct_1d_trans);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="constant";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3)){const char* vs3[]={"1.0","0.0","1.0","0.0"};ehalcon::Utils::arr2TupleString(vs3, 4, t3);}else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4)){const char* vs4[]={"true","true","true","true"};ehalcon::Utils::arr2TupleString(vs4, 4, t4);}else elib::Utils::fillTuple(a+4, t4);
__tuple t5;
__tuple t6;
__tuple t7;
callHalcon(match_funct_1d_trans, err, t0,t1,t2,t3,t4,&t5,&t6,&t7);
elib::Utils::fillVar(t5, a+5);elib::Utils::fillVar(t6, a+6);elib::Utils::fillVar(t7, a+7);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_max_image);
callHalcon(max_image, err, a_obj(0),a_obj(1),varp_obj(2));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_max_matrix);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="columns";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(max_matrix, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_max_parallels_xld);
callHalcon(max_parallels_xld, err, a_obj(0),varp_obj(1));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_mean_curvature_flow);
__tuple t2;if(v_empty(2))t2=0.5;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=0.5;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=10;else elib::Utils::fillTuple(a+4, t4);
callHalcon(mean_curvature_flow, err, a_obj(0),varp_obj(1),t2,t3,t4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_mean_image);
__tuple t2;if(v_empty(2))t2=9;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=9;else elib::Utils::fillTuple(a+3, t3);
callHalcon(mean_image, err, a_obj(0),varp_obj(1),t2,t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_mean_matrix);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="columns";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(mean_matrix, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_mean_n);
callHalcon(mean_n, err, a_obj(0),varp_obj(1));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_mean_sp);
__tuple t2;if(v_empty(2))t2=3;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=3;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=1;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=254;else elib::Utils::fillTuple(a+5, t5);
callHalcon(mean_sp, err, a_obj(0),varp_obj(1),t2,t3,t4,t5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_median_image);
__tuple t2;if(v_empty(2))t2="circle";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=1;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4="mirrored";else elib::Utils::fillTuple(a+4, t4);
callHalcon(median_image, err, a_obj(0),varp_obj(1),t2,t3,t4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_median_rect);
__tuple t2;if(v_empty(2))t2=15;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=15;else elib::Utils::fillTuple(a+3, t3);
callHalcon(median_rect, err, a_obj(0),varp_obj(1),t2,t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_median_separate);
__tuple t2;if(v_empty(2))t2=25;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=25;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4="mirrored";else elib::Utils::fillTuple(a+4, t4);
callHalcon(median_separate, err, a_obj(0),varp_obj(1),t2,t3,t4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_median_weighted);
__tuple t2;if(v_empty(2))t2="inner";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=3;else elib::Utils::fillTuple(a+3, t3);
callHalcon(median_weighted, err, a_obj(0),varp_obj(1),t2,t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_merge_cont_line_scan_xld);
__tuple t4;if(v_empty(4))t4=512;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=0.0;else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6="top";else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7=3;else elib::Utils::fillTuple(a+7, t7);
callHalcon(merge_cont_line_scan_xld, err, a_obj(0),a_obj(1),varp_obj(2),varp_obj(3),t4,t5,t6,t7);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_merge_regions_line_scan);
__tuple t4;if(v_empty(4))t4=512;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5="top";else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6=3;else elib::Utils::fillTuple(a+6, t6);
callHalcon(merge_regions_line_scan, err, a_obj(0),a_obj(1),varp_obj(2),varp_obj(3),t4,t5,t6);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_midrange_image);
__tuple t3;if(v_empty(3))t3="mirrored";else elib::Utils::fillTuple(a+3, t3);
callHalcon(midrange_image, err, a_obj(0),a_obj(1),varp_obj(2),t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_minkowski_add1);
__tuple t3;if(v_empty(3))t3=1;else elib::Utils::fillTuple(a+3, t3);
callHalcon(minkowski_add1, err, a_obj(0),a_obj(1),varp_obj(2),t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_minkowski_add2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=1;else elib::Utils::fillTuple(a+5, t5);
callHalcon(minkowski_add2, err, a_obj(0),a_obj(1),varp_obj(2),t3,t4,t5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_minkowski_sub1);
__tuple t3;if(v_empty(3))t3=1;else elib::Utils::fillTuple(a+3, t3);
callHalcon(minkowski_sub1, err, a_obj(0),a_obj(1),varp_obj(2),t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_minkowski_sub2);
__tuple t3;if(v_empty(3))t3=0;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=0;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=1;else elib::Utils::fillTuple(a+5, t5);
callHalcon(minkowski_sub2, err, a_obj(0),a_obj(1),varp_obj(2),t3,t4,t5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_min_image);
callHalcon(min_image, err, a_obj(0),a_obj(1),varp_obj(2));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_min_matrix);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="columns";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(min_matrix, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_min_max_gray);
__tuple t2;if(v_empty(2))t2=0;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;
__tuple t4;
__tuple t5;
callHalcon(min_max_gray, err, a_obj(0),a_obj(1),t2,&t3,&t4,&t5);
elib::Utils::fillVar(t3, a+3);elib::Utils::fillVar(t4, a+4);elib::Utils::fillVar(t5, a+5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_mirror_image);
__tuple t2;if(v_empty(2))t2="row";else elib::Utils::fillTuple(a+2, t2);
callHalcon(mirror_image, err, a_obj(0),varp_obj(1),t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_mirror_region);
__tuple t2;if(v_empty(2))t2="row";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=512;else elib::Utils::fillTuple(a+3, t3);
callHalcon(mirror_region, err, a_obj(0),varp_obj(1),t2,t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_mod_parallels_xld);
__tuple t4;if(v_empty(4))t4=0.4;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=160;else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6=220;else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7=10.0;else elib::Utils::fillTuple(a+7, t7);
callHalcon(mod_parallels_xld, err, a_obj(0),a_obj(1),varp_obj(2),varp_obj(3),t4,t5,t6,t7);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_moments_any_points_xld);
__tuple t1;if(v_empty(1))t1="unnormalized";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=1;else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6=1;else elib::Utils::fillTuple(a+6, t6);
__tuple t7;
callHalcon(moments_any_points_xld, err, a_obj(0),t1,t2,t3,t4,t5,t6,&t7);
elib::Utils::fillVar(t7, a+7);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_moments_any_xld);
__tuple t1;if(v_empty(1))t1="unnormalized";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="positive";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;elib::Utils::fillTuple(a+4, t4);
__tuple t5;elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6=1;else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7=1;else elib::Utils::fillTuple(a+7, t7);
__tuple t8;
callHalcon(moments_any_xld, err, a_obj(0),t1,t2,t3,t4,t5,t6,t7,&t8);
elib::Utils::fillVar(t8, a+8);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_moments_gray_plane);
__tuple t2;
__tuple t3;
__tuple t4;
__tuple t5;
__tuple t6;
callHalcon(moments_gray_plane, err, a_obj(0),a_obj(1),&t2,&t3,&t4,&t5,&t6);
elib::Utils::fillVar(t2, a+2);elib::Utils::fillVar(t3, a+3);elib::Utils::fillVar(t4, a+4);elib::Utils::fillVar(t5, a+5);elib::Utils::fillVar(t6, a+6);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_moments_points_xld);
__tuple t1;
__tuple t2;
__tuple t3;
callHalcon(moments_points_xld, err, a_obj(0),&t1,&t2,&t3);
elib::Utils::fillVar(t1, a+1);elib::Utils::fillVar(t2, a+2);elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_moments_region_2nd);
__tuple t1;
__tuple t2;
__tuple t3;
__tuple t4;
__tuple t5;
callHalcon(moments_region_2nd, err, a_obj(0),&t1,&t2,&t3,&t4,&t5);
elib::Utils::fillVar(t1, a+1);elib::Utils::fillVar(t2, a+2);elib::Utils::fillVar(t3, a+3);elib::Utils::fillVar(t4, a+4);elib::Utils::fillVar(t5, a+5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_moments_region_2nd_invar);
__tuple t1;
__tuple t2;
__tuple t3;
callHalcon(moments_region_2nd_invar, err, a_obj(0),&t1,&t2,&t3);
elib::Utils::fillVar(t1, a+1);elib::Utils::fillVar(t2, a+2);elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_moments_region_2nd_rel_invar);
__tuple t1;
__tuple t2;
callHalcon(moments_region_2nd_rel_invar, err, a_obj(0),&t1,&t2);
elib::Utils::fillVar(t1, a+1);elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_moments_region_3rd);
__tuple t1;
__tuple t2;
__tuple t3;
__tuple t4;
callHalcon(moments_region_3rd, err, a_obj(0),&t1,&t2,&t3,&t4);
elib::Utils::fillVar(t1, a+1);elib::Utils::fillVar(t2, a+2);elib::Utils::fillVar(t3, a+3);elib::Utils::fillVar(t4, a+4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_moments_region_3rd_invar);
__tuple t1;
__tuple t2;
__tuple t3;
__tuple t4;
callHalcon(moments_region_3rd_invar, err, a_obj(0),&t1,&t2,&t3,&t4);
elib::Utils::fillVar(t1, a+1);elib::Utils::fillVar(t2, a+2);elib::Utils::fillVar(t3, a+3);elib::Utils::fillVar(t4, a+4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_moments_region_central);
__tuple t1;
__tuple t2;
__tuple t3;
__tuple t4;
callHalcon(moments_region_central, err, a_obj(0),&t1,&t2,&t3,&t4);
elib::Utils::fillVar(t1, a+1);elib::Utils::fillVar(t2, a+2);elib::Utils::fillVar(t3, a+3);elib::Utils::fillVar(t4, a+4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_moments_region_central_invar);
__tuple t1;
__tuple t2;
__tuple t3;
__tuple t4;
callHalcon(moments_region_central_invar, err, a_obj(0),&t1,&t2,&t3,&t4);
elib::Utils::fillVar(t1, a+1);elib::Utils::fillVar(t2, a+2);elib::Utils::fillVar(t3, a+3);elib::Utils::fillVar(t4, a+4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_moments_xld);
__tuple t1;
__tuple t2;
__tuple t3;
callHalcon(moments_xld, err, a_obj(0),&t1,&t2,&t3);
elib::Utils::fillVar(t1, a+1);elib::Utils::fillVar(t2, a+2);elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_monotony);
callHalcon(monotony, err, a_obj(0),varp_obj(1));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_morph_hat);
callHalcon(morph_hat, err, a_obj(0),a_obj(1),varp_obj(2));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_morph_skeleton);
callHalcon(morph_skeleton, err, a_obj(0),varp_obj(1));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_morph_skiz);
__tuple t2;if(v_empty(2))t2=100;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=1;else elib::Utils::fillTuple(a+3, t3);
callHalcon(morph_skiz, err, a_obj(0),varp_obj(1),t2,t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_move_contour_orig);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;
__tuple t3;
callHalcon(move_contour_orig, err, t0,t1,&t2,&t3);
elib::Utils::fillVar(t2, a+2);elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_move_rectangle);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=0;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=0;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=64;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=64;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=64;else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6=64;else elib::Utils::fillTuple(a+6, t6);
callHalcon(move_rectangle, err, t0,t1,t2,t3,t4,t5,t6);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_move_region);
__tuple t2;if(v_empty(2))t2=30;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=30;else elib::Utils::fillTuple(a+3, t3);
callHalcon(move_region, err, a_obj(0),varp_obj(1),t2,t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_mult_element_matrix);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(mult_element_matrix, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_mult_element_matrix_mod);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
callHalcon(mult_element_matrix_mod, err, t0,t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_mult_image);
__tuple t3;if(v_empty(3))t3=0.005;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=0;else elib::Utils::fillTuple(a+4, t4);
callHalcon(mult_image, err, a_obj(0),a_obj(1),varp_obj(2),t3,t4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_mult_matrix);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="AB";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;
callHalcon(mult_matrix, err, t0,t1,t2,&t3);
elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_mult_matrix_mod);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="AB";else elib::Utils::fillTuple(a+2, t2);
callHalcon(mult_matrix_mod, err, t0,t1,t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_negate_funct_1d);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(negate_funct_1d, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_new_extern_window);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=0;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=0;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=512;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=512;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;
callHalcon(new_extern_window, err, t0,t1,t2,t3,t4,&t5);
elib::Utils::fillVar(t5, a+5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_new_line);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
callHalcon(new_line, err, t0);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_noise_distribution_mean);
__tuple t2;if(v_empty(2))t2=21;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;
callHalcon(noise_distribution_mean, err, a_obj(0),a_obj(1),t2,&t3);
elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_nonmax_suppression_amp);
__tuple t2;if(v_empty(2))t2="hvnms";else elib::Utils::fillTuple(a+2, t2);
callHalcon(nonmax_suppression_amp, err, a_obj(0),varp_obj(1),t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_nonmax_suppression_dir);
__tuple t3;if(v_empty(3))t3="nms";else elib::Utils::fillTuple(a+3, t3);
callHalcon(nonmax_suppression_dir, err, a_obj(0),a_obj(1),varp_obj(2),t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_norm_matrix);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="2-norm";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(norm_matrix, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_num_points_funct_1d);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(num_points_funct_1d, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_obj_diff);
callHalcon(obj_diff, err, a_obj(0),a_obj(1),varp_obj(2));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_obj_to_integer);
__tuple t1;if(v_empty(1))t1=1;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=-1;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;
callHalcon(obj_to_integer, err, a_obj(0),t1,t2,&t3);
elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_opening);
callHalcon(opening, err, a_obj(0),a_obj(1),varp_obj(2));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_opening_circle);
__tuple t2;if(v_empty(2))t2=3.5;else elib::Utils::fillTuple(a+2, t2);
callHalcon(opening_circle, err, a_obj(0),varp_obj(1),t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_opening_golay);
__tuple t2;if(v_empty(2))t2="h";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=0;else elib::Utils::fillTuple(a+3, t3);
callHalcon(opening_golay, err, a_obj(0),varp_obj(1),t2,t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_opening_rectangle1);
__tuple t2;if(v_empty(2))t2=10;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=10;else elib::Utils::fillTuple(a+3, t3);
callHalcon(opening_rectangle1, err, a_obj(0),varp_obj(1),t2,t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_opening_seg);
callHalcon(opening_seg, err, a_obj(0),a_obj(1),varp_obj(2));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_open_compute_device);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(open_compute_device, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_open_file);
__tuple t0;if(v_empty(0))t0="standard";else elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="output";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(open_file, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_open_framegrabber);
__tuple t0;if(v_empty(0))t0="File";else elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=1;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=1;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=0;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=0;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=0;else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6=0;else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7="default";else elib::Utils::fillTuple(a+7, t7);
__tuple t8;if(v_empty(8))t8=-1;else elib::Utils::fillTuple(a+8, t8);
__tuple t9;if(v_empty(9))t9="default";else elib::Utils::fillTuple(a+9, t9);
__tuple t10;if(v_empty(10))t10=-1;else elib::Utils::fillTuple(a+10, t10);
__tuple t11;if(v_empty(11))t11="default";else elib::Utils::fillTuple(a+11, t11);
__tuple t12;if(v_empty(12))t12="default";else elib::Utils::fillTuple(a+12, t12);
__tuple t13;if(v_empty(13))t13="default";else elib::Utils::fillTuple(a+13, t13);
__tuple t14;if(v_empty(14))t14=-1;else elib::Utils::fillTuple(a+14, t14);
__tuple t15;if(v_empty(15))t15=-1;else elib::Utils::fillTuple(a+15, t15);
__tuple t16;
callHalcon(open_framegrabber, err, t0,t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,t13,t14,t15,&t16);
elib::Utils::fillVar(t16, a+16);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_open_io_channel);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;
callHalcon(open_io_channel, err, t0,t1,t2,t3,&t4);
elib::Utils::fillVar(t4, a+4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_open_io_device);
__tuple t0;if(v_empty(0))t0="";else elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;
callHalcon(open_io_device, err, t0,t1,t2,t3,&t4);
elib::Utils::fillVar(t4, a+4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_open_serial);
__tuple t0;if(v_empty(0))t0="COM1";else elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(open_serial, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_open_socket_accept);
__tuple t0;if(v_empty(0))t0=3000;else elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;
callHalcon(open_socket_accept, err, t0,t1,t2,&t3);
elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_open_socket_connect);
__tuple t0;if(v_empty(0))t0="localhost";else elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;
callHalcon(open_socket_connect, err, t0,t1,t2,t3,&t4);
elib::Utils::fillVar(t4, a+4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_open_textwindow);
__tuple t0;if(v_empty(0))t0=0;else elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=0;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=256;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=256;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=2;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5="white";else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6="black";else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7=0;else elib::Utils::fillTuple(a+7, t7);
__tuple t8;if(v_empty(8))t8="visible";else elib::Utils::fillTuple(a+8, t8);
__tuple t9;if(v_empty(9))t9="";else elib::Utils::fillTuple(a+9, t9);
__tuple t10;
callHalcon(open_textwindow, err, t0,t1,t2,t3,t4,t5,t6,t7,t8,t9,&t10);
elib::Utils::fillVar(t10, a+10);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_open_window);
__tuple t0;if(v_empty(0))t0=0;else elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=0;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=256;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=256;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=0;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5="visible";else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6="";else elib::Utils::fillTuple(a+6, t6);
__tuple t7;
callHalcon(open_window, err, t0,t1,t2,t3,t4,t5,t6,&t7);
elib::Utils::fillVar(t7, a+7);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_optical_flow_mg);
__tuple t3;if(v_empty(3))t3="fdrig";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=0.8;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=1.0;else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6=20.0;else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7=5.0;else elib::Utils::fillTuple(a+7, t7);
__tuple t8;if(v_empty(8))t8="default_parameters";else elib::Utils::fillTuple(a+8, t8);
__tuple t9;if(v_empty(9))t9="accurate";else elib::Utils::fillTuple(a+9, t9);
callHalcon(optical_flow_mg, err, a_obj(0),a_obj(1),varp_obj(2),t3,t4,t5,t6,t7,t8,t9);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_optimize_aop);
__tuple t0;if(v_empty(0))t0="";else elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="none";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4="none";else elib::Utils::fillTuple(a+4, t4);
callHalcon(optimize_aop, err, t0,t1,t2,t3,t4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_optimize_fft_speed);
__tuple t0;if(v_empty(0))t0=512;else elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=512;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="standard";else elib::Utils::fillTuple(a+2, t2);
callHalcon(optimize_fft_speed, err, t0,t1,t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_optimize_rft_speed);
__tuple t0;if(v_empty(0))t0=512;else elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=512;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="standard";else elib::Utils::fillTuple(a+2, t2);
callHalcon(optimize_rft_speed, err, t0,t1,t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_orientation_points_xld);
__tuple t1;
callHalcon(orientation_points_xld, err, a_obj(0),&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_orientation_region);
__tuple t1;
callHalcon(orientation_region, err, a_obj(0),&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_orientation_xld);
__tuple t1;
callHalcon(orientation_xld, err, a_obj(0),&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_orthogonal_decompose_matrix);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="qr";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="full";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="true";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;
__tuple t5;
callHalcon(orthogonal_decompose_matrix, err, t0,t1,t2,t3,&t4,&t5);
elib::Utils::fillVar(t4, a+4);elib::Utils::fillVar(t5, a+5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_overpaint_gray);
callHalcon(overpaint_gray, err, a_obj(0),a_obj(1));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_overpaint_region);
__tuple t2;if(v_empty(2))t2=255.0;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="fill";else elib::Utils::fillTuple(a+3, t3);
callHalcon(overpaint_region, err, a_obj(0),a_obj(1),t2,t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_paint_gray);
callHalcon(paint_gray, err, a_obj(0),a_obj(1),varp_obj(2));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_paint_region);
__tuple t3;if(v_empty(3))t3=255.0;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4="fill";else elib::Utils::fillTuple(a+4, t4);
callHalcon(paint_region, err, a_obj(0),a_obj(1),varp_obj(2),t3,t4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_paint_xld);
__tuple t3;if(v_empty(3))t3=255.0;else elib::Utils::fillTuple(a+3, t3);
callHalcon(paint_xld, err, a_obj(0),a_obj(1),varp_obj(2),t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_partition_dynamic);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=20;else elib::Utils::fillTuple(a+3, t3);
callHalcon(partition_dynamic, err, a_obj(0),varp_obj(1),t2,t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_partition_lines);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;elib::Utils::fillTuple(a+4, t4);
__tuple t5;elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6="min";else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7="max";else elib::Utils::fillTuple(a+7, t7);
__tuple t8;
__tuple t9;
__tuple t10;
__tuple t11;
__tuple t12;
__tuple t13;
__tuple t14;
__tuple t15;
callHalcon(partition_lines, err, t0,t1,t2,t3,t4,t5,t6,t7,&t8,&t9,&t10,&t11,&t12,&t13,&t14,&t15);
elib::Utils::fillVar(t8, a+8);elib::Utils::fillVar(t9, a+9);elib::Utils::fillVar(t10, a+10);elib::Utils::fillVar(t11, a+11);elib::Utils::fillVar(t12, a+12);elib::Utils::fillVar(t13, a+13);elib::Utils::fillVar(t14, a+14);elib::Utils::fillVar(t15, a+15);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_partition_rectangle);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
callHalcon(partition_rectangle, err, a_obj(0),varp_obj(1),t2,t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_phase_correlation_fft);
callHalcon(phase_correlation_fft, err, a_obj(0),a_obj(1),varp_obj(2));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_phase_deg);
callHalcon(phase_deg, err, a_obj(0),varp_obj(1));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_phase_rad);
callHalcon(phase_rad, err, a_obj(0),varp_obj(1));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_plane_deviation);
__tuple t2;
callHalcon(plane_deviation, err, a_obj(0),a_obj(1),&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_plateaus);
callHalcon(plateaus, err, a_obj(0),varp_obj(1));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_plateaus_center);
callHalcon(plateaus_center, err, a_obj(0),varp_obj(1));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_points_foerstner);
__tuple t1;if(v_empty(1))t1=1.0;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=2.0;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=3.0;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=200;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=0.3;else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6="gauss";else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7="false";else elib::Utils::fillTuple(a+7, t7);
__tuple t8;
__tuple t9;
__tuple t10;
__tuple t11;
__tuple t12;
__tuple t13;
__tuple t14;
__tuple t15;
__tuple t16;
__tuple t17;
callHalcon(points_foerstner, err, a_obj(0),t1,t2,t3,t4,t5,t6,t7,&t8,&t9,&t10,&t11,&t12,&t13,&t14,&t15,&t16,&t17);
elib::Utils::fillVar(t8, a+8);elib::Utils::fillVar(t9, a+9);elib::Utils::fillVar(t10, a+10);elib::Utils::fillVar(t11, a+11);elib::Utils::fillVar(t12, a+12);elib::Utils::fillVar(t13, a+13);elib::Utils::fillVar(t14, a+14);elib::Utils::fillVar(t15, a+15);elib::Utils::fillVar(t16, a+16);elib::Utils::fillVar(t17, a+17);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_points_harris);
__tuple t1;if(v_empty(1))t1=0.7;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=2.0;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=0.08;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=1000.0;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;
__tuple t6;
callHalcon(points_harris, err, a_obj(0),t1,t2,t3,t4,&t5,&t6);
elib::Utils::fillVar(t5, a+5);elib::Utils::fillVar(t6, a+6);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_points_harris_binomial);
__tuple t1;if(v_empty(1))t1=5;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=15;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=0.08;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=1000.0;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5="on";else elib::Utils::fillTuple(a+5, t5);
__tuple t6;
__tuple t7;
callHalcon(points_harris_binomial, err, a_obj(0),t1,t2,t3,t4,t5,&t6,&t7);
elib::Utils::fillVar(t6, a+6);elib::Utils::fillVar(t7, a+7);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_points_lepetit);
__tuple t1;if(v_empty(1))t1=3;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=1;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=15;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=30;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5="interpolation";else elib::Utils::fillTuple(a+5, t5);
__tuple t6;
__tuple t7;
callHalcon(points_lepetit, err, a_obj(0),t1,t2,t3,t4,t5,&t6,&t7);
elib::Utils::fillVar(t6, a+6);elib::Utils::fillVar(t7, a+7);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_points_sojka);
__tuple t1;if(v_empty(1))t1=9;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=2.5;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=0.75;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=30.0;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=90.0;else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6=0.5;else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7="false";else elib::Utils::fillTuple(a+7, t7);
__tuple t8;
__tuple t9;
callHalcon(points_sojka, err, a_obj(0),t1,t2,t3,t4,t5,t6,t7,&t8,&t9);
elib::Utils::fillVar(t8, a+8);elib::Utils::fillVar(t9, a+9);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_point_line_to_hom_mat2d);
__tuple t0;if(v_empty(0))t0="rigid";else elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;elib::Utils::fillTuple(a+4, t4);
__tuple t5;elib::Utils::fillTuple(a+5, t5);
__tuple t6;elib::Utils::fillTuple(a+6, t6);
__tuple t7;
callHalcon(point_line_to_hom_mat2d, err, t0,t1,t2,t3,t4,t5,t6,&t7);
elib::Utils::fillVar(t7, a+7);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_polar_trans_contour_xld);
__tuple t2;if(v_empty(2))t2=256;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=256;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=0.0;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=6.2831853;else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6=0;else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7=100;else elib::Utils::fillTuple(a+7, t7);
__tuple t8;if(v_empty(8))t8=512;else elib::Utils::fillTuple(a+8, t8);
__tuple t9;if(v_empty(9))t9=512;else elib::Utils::fillTuple(a+9, t9);
callHalcon(polar_trans_contour_xld, err, a_obj(0),varp_obj(1),t2,t3,t4,t5,t6,t7,t8,t9);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_polar_trans_contour_xld_inv);
__tuple t2;if(v_empty(2))t2=256;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=256;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=0.0;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=6.2831853;else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6=0;else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7=100;else elib::Utils::fillTuple(a+7, t7);
__tuple t8;if(v_empty(8))t8=512;else elib::Utils::fillTuple(a+8, t8);
__tuple t9;if(v_empty(9))t9=512;else elib::Utils::fillTuple(a+9, t9);
__tuple t10;if(v_empty(10))t10=512;else elib::Utils::fillTuple(a+10, t10);
__tuple t11;if(v_empty(11))t11=512;else elib::Utils::fillTuple(a+11, t11);
callHalcon(polar_trans_contour_xld_inv, err, a_obj(0),varp_obj(1),t2,t3,t4,t5,t6,t7,t8,t9,t10,t11);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_polar_trans_image);
__tuple t2;if(v_empty(2))t2=100;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=100;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=314;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=200;else elib::Utils::fillTuple(a+5, t5);
callHalcon(polar_trans_image, err, a_obj(0),varp_obj(1),t2,t3,t4,t5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_polar_trans_image_ext);
__tuple t2;if(v_empty(2))t2=256;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=256;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=0.0;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=6.2831853;else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6=0;else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7=100;else elib::Utils::fillTuple(a+7, t7);
__tuple t8;if(v_empty(8))t8=512;else elib::Utils::fillTuple(a+8, t8);
__tuple t9;if(v_empty(9))t9=512;else elib::Utils::fillTuple(a+9, t9);
__tuple t10;if(v_empty(10))t10="nearest_neighbor";else elib::Utils::fillTuple(a+10, t10);
callHalcon(polar_trans_image_ext, err, a_obj(0),varp_obj(1),t2,t3,t4,t5,t6,t7,t8,t9,t10);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_polar_trans_image_inv);
__tuple t2;if(v_empty(2))t2=256;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=256;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=0.0;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=6.2831853;else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6=0;else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7=100;else elib::Utils::fillTuple(a+7, t7);
__tuple t8;if(v_empty(8))t8=512;else elib::Utils::fillTuple(a+8, t8);
__tuple t9;if(v_empty(9))t9=512;else elib::Utils::fillTuple(a+9, t9);
__tuple t10;if(v_empty(10))t10="nearest_neighbor";else elib::Utils::fillTuple(a+10, t10);
callHalcon(polar_trans_image_inv, err, a_obj(0),varp_obj(1),t2,t3,t4,t5,t6,t7,t8,t9,t10);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_polar_trans_region);
__tuple t2;if(v_empty(2))t2=256;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=256;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=0.0;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=6.2831853;else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6=0;else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7=100;else elib::Utils::fillTuple(a+7, t7);
__tuple t8;if(v_empty(8))t8=512;else elib::Utils::fillTuple(a+8, t8);
__tuple t9;if(v_empty(9))t9=512;else elib::Utils::fillTuple(a+9, t9);
__tuple t10;if(v_empty(10))t10="nearest_neighbor";else elib::Utils::fillTuple(a+10, t10);
callHalcon(polar_trans_region, err, a_obj(0),varp_obj(1),t2,t3,t4,t5,t6,t7,t8,t9,t10);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_polar_trans_region_inv);
__tuple t2;if(v_empty(2))t2=256;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=256;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=0.0;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=6.2831853;else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6=0;else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7=100;else elib::Utils::fillTuple(a+7, t7);
__tuple t8;if(v_empty(8))t8=512;else elib::Utils::fillTuple(a+8, t8);
__tuple t9;if(v_empty(9))t9=512;else elib::Utils::fillTuple(a+9, t9);
__tuple t10;if(v_empty(10))t10=512;else elib::Utils::fillTuple(a+10, t10);
__tuple t11;if(v_empty(11))t11=512;else elib::Utils::fillTuple(a+11, t11);
__tuple t12;if(v_empty(12))t12="nearest_neighbor";else elib::Utils::fillTuple(a+12, t12);
callHalcon(polar_trans_region_inv, err, a_obj(0),varp_obj(1),t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_pose_average);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="iterative";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="auto";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4="auto";else elib::Utils::fillTuple(a+4, t4);
__tuple t5;
__tuple t6;
callHalcon(pose_average, err, t0,t1,t2,t3,t4,&t5,&t6);
elib::Utils::fillVar(t5, a+5);elib::Utils::fillVar(t6, a+6);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_pose_compose);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(pose_compose, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_pose_invert);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(pose_invert, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_pose_to_hom_mat3d);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(pose_to_hom_mat3d, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_pose_to_quat);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(pose_to_quat, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_pouring);
__tuple t2;if(v_empty(2))t2="all";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=0;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=255;else elib::Utils::fillTuple(a+4, t4);
callHalcon(pouring, err, a_obj(0),varp_obj(1),t2,t3,t4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_power_byte);
callHalcon(power_byte, err, a_obj(0),varp_obj(1));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_power_ln);
callHalcon(power_ln, err, a_obj(0),varp_obj(1));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_power_real);
callHalcon(power_real, err, a_obj(0),varp_obj(1));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_pow_element_matrix);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(pow_element_matrix, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_pow_element_matrix_mod);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
callHalcon(pow_element_matrix_mod, err, t0,t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_pow_image);
__tuple t2;if(v_empty(2))t2=2;else elib::Utils::fillTuple(a+2, t2);
callHalcon(pow_image, err, a_obj(0),varp_obj(1),t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_pow_matrix);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="general";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=2.0;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;
callHalcon(pow_matrix, err, t0,t1,t2,&t3);
elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_pow_matrix_mod);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="general";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=2.0;else elib::Utils::fillTuple(a+2, t2);
callHalcon(pow_matrix_mod, err, t0,t1,t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_pow_scalar_element_matrix);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=2.0;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(pow_scalar_element_matrix, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_pow_scalar_element_matrix_mod);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=2.0;else elib::Utils::fillTuple(a+1, t1);
callHalcon(pow_scalar_element_matrix_mod, err, t0,t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_prep_contour_fourier);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="signed_area";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;
callHalcon(prep_contour_fourier, err, t0,t1,t2,&t3);
elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_prewitt_amp);
callHalcon(prewitt_amp, err, a_obj(0),varp_obj(1));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_prewitt_dir);
callHalcon(prewitt_dir, err, a_obj(0),varp_obj(1),varp_obj(2));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_principal_comp);
__tuple t2;
callHalcon(principal_comp, err, a_obj(0),varp_obj(1),&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_projection_pl);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;elib::Utils::fillTuple(a+4, t4);
__tuple t5;elib::Utils::fillTuple(a+5, t5);
__tuple t6;
__tuple t7;
callHalcon(projection_pl, err, t0,t1,t2,t3,t4,t5,&t6,&t7);
elib::Utils::fillVar(t6, a+6);elib::Utils::fillVar(t7, a+7);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_projective_trans_contour_xld);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
callHalcon(projective_trans_contour_xld, err, a_obj(0),varp_obj(1),t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_projective_trans_hom_point_3d);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;elib::Utils::fillTuple(a+4, t4);
__tuple t5;
__tuple t6;
__tuple t7;
__tuple t8;
callHalcon(projective_trans_hom_point_3d, err, t0,t1,t2,t3,t4,&t5,&t6,&t7,&t8);
elib::Utils::fillVar(t5, a+5);elib::Utils::fillVar(t6, a+6);elib::Utils::fillVar(t7, a+7);elib::Utils::fillVar(t8, a+8);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_projective_trans_image);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="bilinear";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4="false";else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5="false";else elib::Utils::fillTuple(a+5, t5);
callHalcon(projective_trans_image, err, a_obj(0),varp_obj(1),t2,t3,t4,t5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_projective_trans_image_size);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="bilinear";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;elib::Utils::fillTuple(a+4, t4);
__tuple t5;elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6="false";else elib::Utils::fillTuple(a+6, t6);
callHalcon(projective_trans_image_size, err, a_obj(0),varp_obj(1),t2,t3,t4,t5,t6);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_projective_trans_pixel);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=64;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=64;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;
__tuple t4;
callHalcon(projective_trans_pixel, err, t0,t1,t2,&t3,&t4);
elib::Utils::fillVar(t3, a+3);elib::Utils::fillVar(t4, a+4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_projective_trans_point_2d);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;
__tuple t5;
__tuple t6;
callHalcon(projective_trans_point_2d, err, t0,t1,t2,t3,&t4,&t5,&t6);
elib::Utils::fillVar(t4, a+4);elib::Utils::fillVar(t5, a+5);elib::Utils::fillVar(t6, a+6);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_projective_trans_point_3d);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;
__tuple t5;
__tuple t6;
callHalcon(projective_trans_point_3d, err, t0,t1,t2,t3,&t4,&t5,&t6);
elib::Utils::fillVar(t4, a+4);elib::Utils::fillVar(t5, a+5);elib::Utils::fillVar(t6, a+6);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_projective_trans_region);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="bilinear";else elib::Utils::fillTuple(a+3, t3);
callHalcon(projective_trans_region, err, a_obj(0),varp_obj(1),t2,t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_project_hom_point_hom_mat3d);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;elib::Utils::fillTuple(a+4, t4);
__tuple t5;
__tuple t6;
__tuple t7;
callHalcon(project_hom_point_hom_mat3d, err, t0,t1,t2,t3,t4,&t5,&t6,&t7);
elib::Utils::fillVar(t5, a+5);elib::Utils::fillVar(t6, a+6);elib::Utils::fillVar(t7, a+7);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_project_point_hom_mat3d);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;
__tuple t5;
callHalcon(project_point_hom_mat3d, err, t0,t1,t2,t3,&t4,&t5);
elib::Utils::fillVar(t4, a+4);elib::Utils::fillVar(t5, a+5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_pruning);
__tuple t2;if(v_empty(2))t2=2;else elib::Utils::fillTuple(a+2, t2);
callHalcon(pruning, err, a_obj(0),varp_obj(1),t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_quat_compose);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(quat_compose, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_quat_conjugate);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(quat_conjugate, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_quat_interpolate);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=0.5;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;
callHalcon(quat_interpolate, err, t0,t1,t2,&t3);
elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_quat_normalize);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(quat_normalize, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_quat_rotate_point_3d);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;
__tuple t5;
__tuple t6;
callHalcon(quat_rotate_point_3d, err, t0,t1,t2,t3,&t4,&t5,&t6);
elib::Utils::fillVar(t4, a+4);elib::Utils::fillVar(t5, a+5);elib::Utils::fillVar(t6, a+6);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_quat_to_hom_mat3d);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(quat_to_hom_mat3d, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_quat_to_pose);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(quat_to_pose, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_query_all_colors);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(query_all_colors, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_query_aop_info);
__tuple t0;if(v_empty(0))t0="";else elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;
__tuple t4;
callHalcon(query_aop_info, err, t0,t1,t2,&t3,&t4);
elib::Utils::fillVar(t3, a+3);elib::Utils::fillVar(t4, a+4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_query_available_compute_devices);
__tuple t0;
callHalcon(query_available_compute_devices, err, &t0);
elib::Utils::fillVar(t0, a+0);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_query_color);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(query_color, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_query_colored);
__tuple t0;
callHalcon(query_colored, err, &t0);
elib::Utils::fillVar(t0, a+0);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_query_contour_attribs_xld);
__tuple t1;
callHalcon(query_contour_attribs_xld, err, a_obj(0),&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_query_contour_global_attribs_xld);
__tuple t1;
callHalcon(query_contour_global_attribs_xld, err, a_obj(0),&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_query_font);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(query_font, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_query_gray);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(query_gray, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_query_insert);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(query_insert, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_query_io_device);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="param_name";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;
callHalcon(query_io_device, err, t0,t1,t2,&t3);
elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_query_io_interface);
__tuple t0;if(v_empty(0))t0="";else elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(query_io_interface, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_query_line_width);
__tuple t0;
__tuple t1;
callHalcon(query_line_width, err, &t0,&t1);
elib::Utils::fillVar(t0, a+0);elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_query_lut);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(query_lut, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_query_mshape);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(query_mshape, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_query_operator_info);
__tuple t0;
callHalcon(query_operator_info, err, &t0);
elib::Utils::fillVar(t0, a+0);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_query_paint);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(query_paint, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_query_param_info);
__tuple t0;
callHalcon(query_param_info, err, &t0);
elib::Utils::fillVar(t0, a+0);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_query_shape);
__tuple t0;
callHalcon(query_shape, err, &t0);
elib::Utils::fillVar(t0, a+0);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_query_spy);
__tuple t0;
__tuple t1;
callHalcon(query_spy, err, &t0,&t1);
elib::Utils::fillVar(t0, a+0);elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_query_tshape);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(query_tshape, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_query_window_type);
__tuple t0;
callHalcon(query_window_type, err, &t0);
elib::Utils::fillVar(t0, a+0);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_rank_image);
__tuple t3;if(v_empty(3))t3=5;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4="mirrored";else elib::Utils::fillTuple(a+4, t4);
callHalcon(rank_image, err, a_obj(0),a_obj(1),varp_obj(2),t3,t4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_rank_n);
__tuple t2;if(v_empty(2))t2=2;else elib::Utils::fillTuple(a+2, t2);
callHalcon(rank_n, err, a_obj(0),varp_obj(1),t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_rank_rect);
__tuple t2;if(v_empty(2))t2=15;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=15;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=5;else elib::Utils::fillTuple(a+4, t4);
callHalcon(rank_rect, err, a_obj(0),varp_obj(1),t2,t3,t4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_rank_region);
__tuple t2;if(v_empty(2))t2=15;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=15;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=70;else elib::Utils::fillTuple(a+4, t4);
callHalcon(rank_region, err, a_obj(0),varp_obj(1),t2,t3,t4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_read_aop_knowledge);
__tuple t0;if(v_empty(0))t0="";else elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="none";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="none";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;
__tuple t4;
callHalcon(read_aop_knowledge, err, t0,t1,t2,&t3,&t4);
elib::Utils::fillVar(t3, a+3);elib::Utils::fillVar(t4, a+4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_read_cam_par);
__tuple t0;if(v_empty(0))t0="campar.dat";else elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(read_cam_par, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_read_char);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
__tuple t2;
callHalcon(read_char, err, t0,&t1,&t2);
elib::Utils::fillVar(t1, a+1);elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_read_class_box);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
callHalcon(read_class_box, err, t0,t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_read_class_gmm);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(read_class_gmm, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_read_class_knn);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(read_class_knn, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_read_class_mlp);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(read_class_mlp, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_read_class_svm);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(read_class_svm, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_read_class_train_data);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(read_class_train_data, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_read_contour_xld_arc_info);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
callHalcon(read_contour_xld_arc_info, err, varp_obj(0),t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_read_contour_xld_dxf);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;
callHalcon(read_contour_xld_dxf, err, varp_obj(0),t1,t2,t3,&t4);
elib::Utils::fillVar(t4, a+4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_read_distance_transform_xld);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(read_distance_transform_xld, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_read_fft_optimization_data);
__tuple t0;if(v_empty(0))t0="fft_opt.dat";else elib::Utils::fillTuple(a+0, t0);
callHalcon(read_fft_optimization_data, err, t0);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_read_funct_1d);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(read_funct_1d, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_read_gray_se);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
callHalcon(read_gray_se, err, varp_obj(0),t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_read_image);
__tuple t1;if(v_empty(1))t1="fabrik";else elib::Utils::fillTuple(a+1, t1);
callHalcon(read_image, err, varp_obj(0),t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_read_io_channel);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
__tuple t2;
callHalcon(read_io_channel, err, t0,&t1,&t2);
elib::Utils::fillVar(t1, a+1);elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_read_kalman);
__tuple t0;if(v_empty(0))t0="kalman.init";else elib::Utils::fillTuple(a+0, t0);
__tuple t1;
__tuple t2;
__tuple t3;
__tuple t4;
callHalcon(read_kalman, err, t0,&t1,&t2,&t3,&t4);
elib::Utils::fillVar(t1, a+1);elib::Utils::fillVar(t2, a+2);elib::Utils::fillVar(t3, a+3);elib::Utils::fillVar(t4, a+4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_read_matrix);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(read_matrix, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_read_object);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
callHalcon(read_object, err, varp_obj(0),t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_read_polygon_xld_arc_info);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
callHalcon(read_polygon_xld_arc_info, err, varp_obj(0),t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_read_polygon_xld_dxf);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;
callHalcon(read_polygon_xld_dxf, err, varp_obj(0),t1,t2,t3,&t4);
elib::Utils::fillVar(t4, a+4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_read_pose);
__tuple t0;if(v_empty(0))t0="campose.dat";else elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(read_pose, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_read_region);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
callHalcon(read_region, err, varp_obj(0),t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_read_samples_class_gmm);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
callHalcon(read_samples_class_gmm, err, t0,t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_read_samples_class_mlp);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
callHalcon(read_samples_class_mlp, err, t0,t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_read_samples_class_svm);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
callHalcon(read_samples_class_svm, err, t0,t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_read_sampset);
__tuple t0;if(v_empty(0))t0="sampset1";else elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(read_sampset, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_read_sequence);
__tuple t1;if(v_empty(1))t1=0;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=512;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=512;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=0;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=0;else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6=512;else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7=512;else elib::Utils::fillTuple(a+7, t7);
__tuple t8;if(v_empty(8))t8="byte";else elib::Utils::fillTuple(a+8, t8);
__tuple t9;if(v_empty(9))t9="MSBFirst";else elib::Utils::fillTuple(a+9, t9);
__tuple t10;if(v_empty(10))t10="MSBFirst";else elib::Utils::fillTuple(a+10, t10);
__tuple t11;if(v_empty(11))t11="byte";else elib::Utils::fillTuple(a+11, t11);
__tuple t12;if(v_empty(12))t12=1;else elib::Utils::fillTuple(a+12, t12);
__tuple t13;elib::Utils::fillTuple(a+13, t13);
callHalcon(read_sequence, err, varp_obj(0),t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,t13);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_read_serial);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=1;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(read_serial, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_read_string);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=32;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;
callHalcon(read_string, err, t0,t1,t2,&t3);
elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_read_tuple);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(read_tuple, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_read_world_file);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(read_world_file, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_real_to_complex);
callHalcon(real_to_complex, err, a_obj(0),a_obj(1),varp_obj(2));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_real_to_vector_field);
__tuple t3;if(v_empty(3))t3="vector_field_relative";else elib::Utils::fillTuple(a+3, t3);
callHalcon(real_to_vector_field, err, a_obj(0),a_obj(1),varp_obj(2),t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_receive_data);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="z";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;
__tuple t3;
callHalcon(receive_data, err, t0,t1,&t2,&t3);
elib::Utils::fillVar(t2, a+2);elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_receive_image);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
callHalcon(receive_image, err, varp_obj(0),t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_receive_region);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
callHalcon(receive_region, err, varp_obj(0),t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_receive_serialized_item);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(receive_serialized_item, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_receive_tuple);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(receive_tuple, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_receive_xld);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
callHalcon(receive_xld, err, varp_obj(0),t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_rectangle1_domain);
__tuple t2;if(v_empty(2))t2=100;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=100;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=200;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=200;else elib::Utils::fillTuple(a+5, t5);
callHalcon(rectangle1_domain, err, a_obj(0),varp_obj(1),t2,t3,t4,t5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_rectangularity);
__tuple t1;
callHalcon(rectangularity, err, a_obj(0),&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_reduce_class_svm);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="bottom_up";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=2;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=0.001;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;
callHalcon(reduce_class_svm, err, t0,t1,t2,t3,&t4);
elib::Utils::fillVar(t4, a+4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_reduce_domain);
callHalcon(reduce_domain, err, a_obj(0),a_obj(1),varp_obj(2));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_regiongrowing);
__tuple t2;if(v_empty(2))t2=3;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=3;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=6.0;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=100;else elib::Utils::fillTuple(a+5, t5);
callHalcon(regiongrowing, err, a_obj(0),varp_obj(1),t2,t3,t4,t5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_regiongrowing_mean);
__tuple t2;if(v_empty(2))t2="";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=5.0;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=100;else elib::Utils::fillTuple(a+5, t5);
callHalcon(regiongrowing_mean, err, a_obj(0),varp_obj(1),t2,t3,t4,t5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_regiongrowing_n);
__tuple t2;if(v_empty(2))t2="2-norm";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=0.0;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=20.0;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=30;else elib::Utils::fillTuple(a+5, t5);
callHalcon(regiongrowing_n, err, a_obj(0),varp_obj(1),t2,t3,t4,t5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_region_features);
__tuple t1;if(v_empty(1))t1="area";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(region_features, err, a_obj(0),t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_region_to_bin);
__tuple t2;if(v_empty(2))t2=255;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=0;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=512;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=512;else elib::Utils::fillTuple(a+5, t5);
callHalcon(region_to_bin, err, a_obj(0),varp_obj(1),t2,t3,t4,t5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_region_to_label);
__tuple t2;if(v_empty(2))t2="int2";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=512;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=512;else elib::Utils::fillTuple(a+4, t4);
callHalcon(region_to_label, err, a_obj(0),varp_obj(1),t2,t3,t4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_region_to_mean);
callHalcon(region_to_mean, err, a_obj(0),a_obj(1),varp_obj(2));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_regress_contours_xld);
__tuple t2;if(v_empty(2))t2="no";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=1;else elib::Utils::fillTuple(a+3, t3);
callHalcon(regress_contours_xld, err, a_obj(0),varp_obj(1),t2,t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_release_all_compute_devices);
callHalcon(release_all_compute_devices, err);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_release_compute_device);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
callHalcon(release_compute_device, err, t0);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_remove_dir);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
callHalcon(remove_dir, err, t0);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_remove_noise_region);
__tuple t2;if(v_empty(2))t2="n_4";else elib::Utils::fillTuple(a+2, t2);
callHalcon(remove_noise_region, err, a_obj(0),varp_obj(1),t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_repeat_matrix);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=2;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=2;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;
callHalcon(repeat_matrix, err, t0,t1,t2,&t3);
elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_reset_obj_db);
__tuple t0;if(v_empty(0))t0=128;else elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=128;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=0;else elib::Utils::fillTuple(a+2, t2);
callHalcon(reset_obj_db, err, t0,t1,t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_rft_generic);
__tuple t2;if(v_empty(2))t2="to_freq";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="sqrt";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4="complex";else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=512;else elib::Utils::fillTuple(a+5, t5);
callHalcon(rft_generic, err, a_obj(0),varp_obj(1),t2,t3,t4,t5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_rgb1_to_gray);
callHalcon(rgb1_to_gray, err, a_obj(0),varp_obj(1));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_rgb3_to_gray);
callHalcon(rgb3_to_gray, err, a_obj(0),a_obj(1),a_obj(2),varp_obj(3));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_roberts);
__tuple t2;if(v_empty(2))t2="gradient_sum";else elib::Utils::fillTuple(a+2, t2);
callHalcon(roberts, err, a_obj(0),varp_obj(1),t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_robinson_amp);
callHalcon(robinson_amp, err, a_obj(0),varp_obj(1));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_robinson_dir);
callHalcon(robinson_dir, err, a_obj(0),varp_obj(1),varp_obj(2));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_rotate_image);
__tuple t2;if(v_empty(2))t2=90;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="constant";else elib::Utils::fillTuple(a+3, t3);
callHalcon(rotate_image, err, a_obj(0),varp_obj(1),t2,t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_roundness);
__tuple t1;
__tuple t2;
__tuple t3;
__tuple t4;
callHalcon(roundness, err, a_obj(0),&t1,&t2,&t3,&t4);
elib::Utils::fillVar(t1, a+1);elib::Utils::fillVar(t2, a+2);elib::Utils::fillVar(t3, a+3);elib::Utils::fillVar(t4, a+4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_runlength_distribution);
__tuple t1;
__tuple t2;
callHalcon(runlength_distribution, err, a_obj(0),&t1,&t2);
elib::Utils::fillVar(t1, a+1);elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_runlength_features);
__tuple t1;
__tuple t2;
__tuple t3;
__tuple t4;
__tuple t5;
callHalcon(runlength_features, err, a_obj(0),&t1,&t2,&t3,&t4,&t5);
elib::Utils::fillVar(t1, a+1);elib::Utils::fillVar(t2, a+2);elib::Utils::fillVar(t3, a+3);elib::Utils::fillVar(t4, a+4);elib::Utils::fillVar(t5, a+5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_run_bg_esti);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
callHalcon(run_bg_esti, err, a_obj(0),varp_obj(1),t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_saddle_points_sub_pix);
__tuple t1;if(v_empty(1))t1="facet";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=5.0;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;
__tuple t5;
callHalcon(saddle_points_sub_pix, err, a_obj(0),t1,t2,t3,&t4,&t5);
elib::Utils::fillVar(t4, a+4);elib::Utils::fillVar(t5, a+5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_sample_funct_1d);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4="constant";else elib::Utils::fillTuple(a+4, t4);
__tuple t5;
callHalcon(sample_funct_1d, err, t0,t1,t2,t3,t4,&t5);
elib::Utils::fillVar(t5, a+5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_scale_image);
__tuple t2;if(v_empty(2))t2=0.01;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=0;else elib::Utils::fillTuple(a+3, t3);
callHalcon(scale_image, err, a_obj(0),varp_obj(1),t2,t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_scale_image_max);
callHalcon(scale_image_max, err, a_obj(0),varp_obj(1));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_scale_matrix);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=2.0;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(scale_matrix, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_scale_matrix_mod);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=2.0;else elib::Utils::fillTuple(a+1, t1);
callHalcon(scale_matrix_mod, err, t0,t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_scale_y_funct_1d);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=2.0;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=0.0;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;
callHalcon(scale_y_funct_1d, err, t0,t1,t2,&t3);
elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_scene_flow_calib);
__tuple t5;if(v_empty(5))t5=40.0;else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6=40.0;else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7="default_parameters";else elib::Utils::fillTuple(a+7, t7);
__tuple t8;if(v_empty(8))t8="accurate";else elib::Utils::fillTuple(a+8, t8);
__tuple t9;elib::Utils::fillTuple(a+9, t9);
__tuple t10;elib::Utils::fillTuple(a+10, t10);
__tuple t11;elib::Utils::fillTuple(a+11, t11);
__tuple t12;
callHalcon(scene_flow_calib, err, a_obj(0),a_obj(1),a_obj(2),a_obj(3),a_obj(4),t5,t6,t7,t8,t9,t10,t11,&t12);
elib::Utils::fillVar(t12, a+12);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_scene_flow_uncalib);
__tuple t7;if(v_empty(7))t7=40.0;else elib::Utils::fillTuple(a+7, t7);
__tuple t8;if(v_empty(8))t8=40.0;else elib::Utils::fillTuple(a+8, t8);
__tuple t9;if(v_empty(9))t9="default_parameters";else elib::Utils::fillTuple(a+9, t9);
__tuple t10;if(v_empty(10))t10="accurate";else elib::Utils::fillTuple(a+10, t10);
callHalcon(scene_flow_uncalib, err, a_obj(0),a_obj(1),a_obj(2),a_obj(3),a_obj(4),varp_obj(5),varp_obj(6),t7,t8,t9,t10);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_search_operator);
__tuple t0;if(v_empty(0))t0="Information";else elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(search_operator, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_segment_characters);
__tuple t4;if(v_empty(4))t4="local_auto_shape";else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5="false";else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6="false";else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7="medium";else elib::Utils::fillTuple(a+7, t7);
__tuple t8;if(v_empty(8))t8=25;else elib::Utils::fillTuple(a+8, t8);
__tuple t9;if(v_empty(9))t9=25;else elib::Utils::fillTuple(a+9, t9);
__tuple t10;if(v_empty(10))t10=0;else elib::Utils::fillTuple(a+10, t10);
__tuple t11;if(v_empty(11))t11=10;else elib::Utils::fillTuple(a+11, t11);
__tuple t12;
callHalcon(segment_characters, err, a_obj(0),a_obj(1),varp_obj(2),varp_obj(3),t4,t5,t6,t7,t8,t9,t10,t11,&t12);
elib::Utils::fillVar(t12, a+12);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_segment_contours_xld);
__tuple t2;if(v_empty(2))t2="lines_circles";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=5;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=4.0;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=2.0;else elib::Utils::fillTuple(a+5, t5);
callHalcon(segment_contours_xld, err, a_obj(0),varp_obj(1),t2,t3,t4,t5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_segment_contour_attrib_xld);
__tuple t2;if(v_empty(2))t2="distance";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="and";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=150.0;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=99999.0;else elib::Utils::fillTuple(a+5, t5);
callHalcon(segment_contour_attrib_xld, err, a_obj(0),varp_obj(1),t2,t3,t4,t5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_select_characters);
__tuple t2;if(v_empty(2))t2="false";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="medium";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=25;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=25;else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6="false";else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7="false";else elib::Utils::fillTuple(a+7, t7);
__tuple t8;if(v_empty(8))t8="none";else elib::Utils::fillTuple(a+8, t8);
__tuple t9;if(v_empty(9))t9="false";else elib::Utils::fillTuple(a+9, t9);
__tuple t10;if(v_empty(10))t10="medium";else elib::Utils::fillTuple(a+10, t10);
__tuple t11;if(v_empty(11))t11="false";else elib::Utils::fillTuple(a+11, t11);
__tuple t12;if(v_empty(12))t12=0;else elib::Utils::fillTuple(a+12, t12);
__tuple t13;if(v_empty(13))t13="completion";else elib::Utils::fillTuple(a+13, t13);
callHalcon(select_characters, err, a_obj(0),varp_obj(1),t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,t13);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_select_contours_xld);
__tuple t2;if(v_empty(2))t2="contour_length";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=0.5;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=200.0;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=-0.5;else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6=0.5;else elib::Utils::fillTuple(a+6, t6);
callHalcon(select_contours_xld, err, a_obj(0),varp_obj(1),t2,t3,t4,t5,t6);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_select_feature_set_gmm);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="greedy";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;
__tuple t5;
__tuple t6;
callHalcon(select_feature_set_gmm, err, t0,t1,t2,t3,&t4,&t5,&t6);
elib::Utils::fillVar(t4, a+4);elib::Utils::fillVar(t5, a+5);elib::Utils::fillVar(t6, a+6);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_select_feature_set_knn);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="greedy";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;
__tuple t5;
__tuple t6;
callHalcon(select_feature_set_knn, err, t0,t1,t2,t3,&t4,&t5,&t6);
elib::Utils::fillVar(t4, a+4);elib::Utils::fillVar(t5, a+5);elib::Utils::fillVar(t6, a+6);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_select_feature_set_mlp);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="greedy";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;
__tuple t5;
__tuple t6;
callHalcon(select_feature_set_mlp, err, t0,t1,t2,t3,&t4,&t5,&t6);
elib::Utils::fillVar(t4, a+4);elib::Utils::fillVar(t5, a+5);elib::Utils::fillVar(t6, a+6);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_select_feature_set_svm);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="greedy";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;
__tuple t5;
__tuple t6;
callHalcon(select_feature_set_svm, err, t0,t1,t2,t3,&t4,&t5,&t6);
elib::Utils::fillVar(t4, a+4);elib::Utils::fillVar(t5, a+5);elib::Utils::fillVar(t6, a+6);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_select_gray);
__tuple t3;if(v_empty(3))t3="mean";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4="and";else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=128.0;else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6=255.0;else elib::Utils::fillTuple(a+6, t6);
callHalcon(select_gray, err, a_obj(0),a_obj(1),varp_obj(2),t3,t4,t5,t6);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_select_grayvalues_from_channels);
callHalcon(select_grayvalues_from_channels, err, a_obj(0),a_obj(1),varp_obj(2));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_select_lines);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4="length";else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5="and";else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6="min";else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7="max";else elib::Utils::fillTuple(a+7, t7);
__tuple t8;
__tuple t9;
__tuple t10;
__tuple t11;
callHalcon(select_lines, err, t0,t1,t2,t3,t4,t5,t6,t7,&t8,&t9,&t10,&t11);
elib::Utils::fillVar(t8, a+8);elib::Utils::fillVar(t9, a+9);elib::Utils::fillVar(t10, a+10);elib::Utils::fillVar(t11, a+11);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_select_lines_longest);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=10;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;
__tuple t6;
__tuple t7;
__tuple t8;
callHalcon(select_lines_longest, err, t0,t1,t2,t3,t4,&t5,&t6,&t7,&t8);
elib::Utils::fillVar(t5, a+5);elib::Utils::fillVar(t6, a+6);elib::Utils::fillVar(t7, a+7);elib::Utils::fillVar(t8, a+8);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_select_matching_lines);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=7;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=100;else elib::Utils::fillTuple(a+5, t5);
__tuple t6;
__tuple t7;
callHalcon(select_matching_lines, err, a_obj(0),varp_obj(1),t2,t3,t4,t5,&t6,&t7);
elib::Utils::fillVar(t6, a+6);elib::Utils::fillVar(t7, a+7);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_select_obj);
__tuple t2;if(v_empty(2))t2=1;else elib::Utils::fillTuple(a+2, t2);
callHalcon(select_obj, err, a_obj(0),varp_obj(1),t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_select_region_point);
__tuple t2;if(v_empty(2))t2=100;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=100;else elib::Utils::fillTuple(a+3, t3);
callHalcon(select_region_point, err, a_obj(0),varp_obj(1),t2,t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_select_region_spatial);
__tuple t2;if(v_empty(2))t2="left";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;
__tuple t4;
callHalcon(select_region_spatial, err, a_obj(0),a_obj(1),t2,&t3,&t4);
elib::Utils::fillVar(t3, a+3);elib::Utils::fillVar(t4, a+4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_select_shape);
__tuple t2;if(v_empty(2))t2="area";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="and";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=150.0;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=99999.0;else elib::Utils::fillTuple(a+5, t5);
callHalcon(select_shape, err, a_obj(0),varp_obj(1),t2,t3,t4,t5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_select_shape_proto);
__tuple t3;if(v_empty(3))t3="covers";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=50.0;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=100.0;else elib::Utils::fillTuple(a+5, t5);
callHalcon(select_shape_proto, err, a_obj(0),a_obj(1),varp_obj(2),t3,t4,t5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_select_shape_std);
__tuple t2;if(v_empty(2))t2="max_area";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=70.0;else elib::Utils::fillTuple(a+3, t3);
callHalcon(select_shape_std, err, a_obj(0),varp_obj(1),t2,t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_select_shape_xld);
__tuple t2;if(v_empty(2))t2="area";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="and";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=150.0;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=99999.0;else elib::Utils::fillTuple(a+5, t5);
callHalcon(select_shape_xld, err, a_obj(0),varp_obj(1),t2,t3,t4,t5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_select_sub_feature_class_train_data);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(select_sub_feature_class_train_data, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_select_xld_point);
__tuple t2;if(v_empty(2))t2=100.0;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=100.0;else elib::Utils::fillTuple(a+3, t3);
callHalcon(select_xld_point, err, a_obj(0),varp_obj(1),t2,t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_send_data);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="z";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="";else elib::Utils::fillTuple(a+3, t3);
callHalcon(send_data, err, t0,t1,t2,t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_send_image);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
callHalcon(send_image, err, a_obj(0),t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_send_region);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
callHalcon(send_region, err, a_obj(0),t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_send_serialized_item);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
callHalcon(send_serialized_item, err, t0,t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_send_tuple);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
callHalcon(send_tuple, err, t0,t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_send_xld);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
callHalcon(send_xld, err, a_obj(0),t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_sensor_kalman);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(sensor_kalman, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_serialize_cam_par);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(serialize_cam_par, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_serialize_class_box);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(serialize_class_box, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_serialize_class_gmm);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(serialize_class_gmm, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_serialize_class_knn);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(serialize_class_knn, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_serialize_class_mlp);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(serialize_class_mlp, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_serialize_class_svm);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(serialize_class_svm, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_serialize_class_train_data);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(serialize_class_train_data, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_serialize_distance_transform_xld);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(serialize_distance_transform_xld, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_serialize_fft_optimization_data);
__tuple t0;
callHalcon(serialize_fft_optimization_data, err, &t0);
elib::Utils::fillVar(t0, a+0);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_serialize_hom_mat2d);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(serialize_hom_mat2d, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_serialize_hom_mat3d);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(serialize_hom_mat3d, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_serialize_image);
__tuple t1;
callHalcon(serialize_image, err, a_obj(0),&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_serialize_matrix);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(serialize_matrix, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_serialize_object);
__tuple t1;
callHalcon(serialize_object, err, a_obj(0),&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_serialize_pose);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(serialize_pose, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_serialize_quat);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(serialize_quat, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_serialize_region);
__tuple t1;
callHalcon(serialize_region, err, a_obj(0),&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_serialize_tuple);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(serialize_tuple, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_serialize_xld);
__tuple t1;
callHalcon(serialize_xld, err, a_obj(0),&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_set_aop_info);
__tuple t0;if(v_empty(0))t0="";else elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="max_threads";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;elib::Utils::fillTuple(a+4, t4);
callHalcon(set_aop_info, err, t0,t1,t2,t3,t4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_set_bg_esti_params);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=0.7;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=0.7;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="fixed";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=0.002;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=0.02;else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6="on";else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7=7.0;else elib::Utils::fillTuple(a+7, t7);
__tuple t8;if(v_empty(8))t8=10;else elib::Utils::fillTuple(a+8, t8);
__tuple t9;if(v_empty(9))t9=3.25;else elib::Utils::fillTuple(a+9, t9);
__tuple t10;if(v_empty(10))t10=15.0;else elib::Utils::fillTuple(a+10, t10);
callHalcon(set_bg_esti_params, err, t0,t1,t2,t3,t4,t5,t6,t7,t8,t9,t10);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_set_check);
__tuple t0;if(v_empty(0))t0="default";else elib::Utils::fillTuple(a+0, t0);
callHalcon(set_check, err, t0);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_set_class_box_param);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="split_error";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=0.1;else elib::Utils::fillTuple(a+2, t2);
callHalcon(set_class_box_param, err, t0,t1,t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_set_color);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="white";else elib::Utils::fillTuple(a+1, t1);
callHalcon(set_color, err, t0,t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_set_colored);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=12;else elib::Utils::fillTuple(a+1, t1);
callHalcon(set_colored, err, t0,t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_set_comprise);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="object";else elib::Utils::fillTuple(a+1, t1);
callHalcon(set_comprise, err, t0,t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_set_compute_device_param);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="buffer_cache_capacity";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
callHalcon(set_compute_device_param, err, t0,t1,t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_set_current_dir);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
callHalcon(set_current_dir, err, t0);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_set_diagonal_matrix);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=0;else elib::Utils::fillTuple(a+2, t2);
callHalcon(set_diagonal_matrix, err, t0,t1,t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_set_distance_transform_xld_param);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="mode";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="point_to_point";else elib::Utils::fillTuple(a+2, t2);
callHalcon(set_distance_transform_xld_param, err, t0,t1,t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_set_draw);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="fill";else elib::Utils::fillTuple(a+1, t1);
callHalcon(set_draw, err, t0,t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_set_drawing_object_callback);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
callHalcon(set_drawing_object_callback, err, t0,t1,t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_set_drawing_object_params);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
callHalcon(set_drawing_object_params, err, t0,t1,t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_set_drawing_object_xld);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
callHalcon(set_drawing_object_xld, err, a_obj(0),t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_set_feature_lengths_class_train_data);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
callHalcon(set_feature_lengths_class_train_data, err, t0,t1,t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_set_fix);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="true";else elib::Utils::fillTuple(a+1, t1);
callHalcon(set_fix, err, t0,t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_set_fixed_lut);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="true";else elib::Utils::fillTuple(a+1, t1);
callHalcon(set_fixed_lut, err, t0,t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_set_font);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
callHalcon(set_font, err, t0,t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_set_framegrabber_callback);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="transfer_end";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
callHalcon(set_framegrabber_callback, err, t0,t1,t2,t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_set_framegrabber_lut);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
callHalcon(set_framegrabber_lut, err, t0,t1,t2,t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_set_framegrabber_param);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
callHalcon(set_framegrabber_param, err, t0,t1,t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_set_full_matrix);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
callHalcon(set_full_matrix, err, t0,t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_set_gray);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=255;else elib::Utils::fillTuple(a+1, t1);
callHalcon(set_gray, err, t0,t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_set_grayval);
__tuple t1;if(v_empty(1))t1=0;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=0;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=255.0;else elib::Utils::fillTuple(a+3, t3);
callHalcon(set_grayval, err, a_obj(0),t1,t2,t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_set_hsi);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=30;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=255;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=84;else elib::Utils::fillTuple(a+3, t3);
callHalcon(set_hsi, err, t0,t1,t2,t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_set_icon);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
callHalcon(set_icon, err, a_obj(0),t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_set_insert);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="copy";else elib::Utils::fillTuple(a+1, t1);
callHalcon(set_insert, err, t0,t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_set_io_channel_param);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="";else elib::Utils::fillTuple(a+2, t2);
callHalcon(set_io_channel_param, err, t0,t1,t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_set_io_device_param);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="";else elib::Utils::fillTuple(a+2, t2);
callHalcon(set_io_device_param, err, t0,t1,t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_set_line_approx);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=0;else elib::Utils::fillTuple(a+1, t1);
callHalcon(set_line_approx, err, t0,t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_set_line_style);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="";else elib::Utils::fillTuple(a+1, t1);
callHalcon(set_line_style, err, t0,t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_set_line_width);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=1;else elib::Utils::fillTuple(a+1, t1);
callHalcon(set_line_width, err, t0,t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_set_lut);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="default";else elib::Utils::fillTuple(a+1, t1);
callHalcon(set_lut, err, t0,t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_set_lut_style);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=0.0;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=1.5;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=1.5;else elib::Utils::fillTuple(a+3, t3);
callHalcon(set_lut_style, err, t0,t1,t2,t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_set_message_obj);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
callHalcon(set_message_obj, err, a_obj(0),t1,t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_set_message_param);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="remove_key";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
callHalcon(set_message_param, err, t0,t1,t2,t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_set_message_queue_param);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="max_message_num";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="1";else elib::Utils::fillTuple(a+2, t2);
callHalcon(set_message_queue_param, err, t0,t1,t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_set_message_tuple);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
callHalcon(set_message_tuple, err, t0,t1,t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_set_mshape);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="arrow";else elib::Utils::fillTuple(a+1, t1);
callHalcon(set_mshape, err, t0,t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_set_origin_pose);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=0;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=0;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=0;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;
callHalcon(set_origin_pose, err, t0,t1,t2,t3,&t4);
elib::Utils::fillVar(t4, a+4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_set_paint);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="default";else elib::Utils::fillTuple(a+1, t1);
callHalcon(set_paint, err, t0,t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_set_params_class_knn);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1)){const char* vs1[]={"method","k","max_num_classes"};ehalcon::Utils::arr2TupleString(vs1, 3, t1);}else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2)){const char* vs2[]={"classes_distance","5","1"};ehalcon::Utils::arr2TupleString(vs2, 3, t2);}else elib::Utils::fillTuple(a+2, t2);
callHalcon(set_params_class_knn, err, t0,t1,t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_set_part);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=0;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=0;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=-1;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=-1;else elib::Utils::fillTuple(a+4, t4);
callHalcon(set_part, err, t0,t1,t2,t3,t4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_set_part_style);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=0;else elib::Utils::fillTuple(a+1, t1);
callHalcon(set_part_style, err, t0,t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_set_pixel);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=128;else elib::Utils::fillTuple(a+1, t1);
callHalcon(set_pixel, err, t0,t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_set_regularization_params_class_mlp);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="weight_prior";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=1.0;else elib::Utils::fillTuple(a+2, t2);
callHalcon(set_regularization_params_class_mlp, err, t0,t1,t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_set_rejection_params_class_mlp);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="sampling_strategy";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="hyperbox_around_all_classes";else elib::Utils::fillTuple(a+2, t2);
callHalcon(set_rejection_params_class_mlp, err, t0,t1,t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_set_rgb);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=255;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=0;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=0;else elib::Utils::fillTuple(a+3, t3);
callHalcon(set_rgb, err, t0,t1,t2,t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_set_serial_param);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="unchanged";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="unchanged";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="unchanged";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4="unchanged";else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5="unchanged";else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6="unchanged";else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7="unchanged";else elib::Utils::fillTuple(a+7, t7);
callHalcon(set_serial_param, err, t0,t1,t2,t3,t4,t5,t6,t7);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_set_shape);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="original";else elib::Utils::fillTuple(a+1, t1);
callHalcon(set_shape, err, t0,t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_set_socket_param);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="on";else elib::Utils::fillTuple(a+2, t2);
callHalcon(set_socket_param, err, t0,t1,t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_set_socket_timeout);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="infinite";else elib::Utils::fillTuple(a+1, t1);
callHalcon(set_socket_timeout, err, t0,t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_set_spy);
__tuple t0;if(v_empty(0))t0="mode";else elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="on";else elib::Utils::fillTuple(a+1, t1);
callHalcon(set_spy, err, t0,t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_set_sub_matrix);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=0;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=0;else elib::Utils::fillTuple(a+3, t3);
callHalcon(set_sub_matrix, err, t0,t1,t2,t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_set_system);
__tuple t0;if(v_empty(0))t0="init_new_image";else elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="true";else elib::Utils::fillTuple(a+1, t1);
callHalcon(set_system, err, t0,t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_set_tposition);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=24;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=12;else elib::Utils::fillTuple(a+2, t2);
callHalcon(set_tposition, err, t0,t1,t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_set_tshape);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="invisible";else elib::Utils::fillTuple(a+1, t1);
callHalcon(set_tshape, err, t0,t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_set_value_matrix);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=0;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=0;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=0;else elib::Utils::fillTuple(a+3, t3);
callHalcon(set_value_matrix, err, t0,t1,t2,t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_set_window_attr);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
callHalcon(set_window_attr, err, t0,t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_set_window_dc);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
callHalcon(set_window_dc, err, t0,t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_set_window_extents);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=0;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=0;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=512;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=512;else elib::Utils::fillTuple(a+4, t4);
callHalcon(set_window_extents, err, t0,t1,t2,t3,t4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_set_window_param);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="save_depth_buffer";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="true";else elib::Utils::fillTuple(a+2, t2);
callHalcon(set_window_param, err, t0,t1,t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_set_window_type);
__tuple t0;if(v_empty(0))t0="X-Window";else elib::Utils::fillTuple(a+0, t0);
callHalcon(set_window_type, err, t0);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_shade_height_field);
__tuple t2;if(v_empty(2))t2=0.0;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=0.0;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=1.0;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=0.0;else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6="false";else elib::Utils::fillTuple(a+6, t6);
callHalcon(shade_height_field, err, a_obj(0),varp_obj(1),t2,t3,t4,t5,t6);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_shape_histo_all);
__tuple t2;if(v_empty(2))t2="connected_components";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;
__tuple t4;
callHalcon(shape_histo_all, err, a_obj(0),a_obj(1),t2,&t3,&t4);
elib::Utils::fillVar(t3, a+3);elib::Utils::fillVar(t4, a+4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_shape_histo_point);
__tuple t2;if(v_empty(2))t2="convexity";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=256;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=256;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;
__tuple t6;
callHalcon(shape_histo_point, err, a_obj(0),a_obj(1),t2,t3,t4,&t5,&t6);
elib::Utils::fillVar(t5, a+5);elib::Utils::fillVar(t6, a+6);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_shape_trans);
__tuple t2;if(v_empty(2))t2="convex";else elib::Utils::fillTuple(a+2, t2);
callHalcon(shape_trans, err, a_obj(0),varp_obj(1),t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_shape_trans_xld);
__tuple t2;if(v_empty(2))t2="convex";else elib::Utils::fillTuple(a+2, t2);
callHalcon(shape_trans_xld, err, a_obj(0),varp_obj(1),t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_shock_filter);
__tuple t2;if(v_empty(2))t2=0.5;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=10;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4="canny";else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=1.0;else elib::Utils::fillTuple(a+5, t5);
callHalcon(shock_filter, err, a_obj(0),varp_obj(1),t2,t3,t4,t5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_sigma_image);
__tuple t2;if(v_empty(2))t2=5;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=5;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=3;else elib::Utils::fillTuple(a+4, t4);
callHalcon(sigma_image, err, a_obj(0),varp_obj(1),t2,t3,t4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_signal_condition);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
callHalcon(signal_condition, err, t0);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_signal_event);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
callHalcon(signal_event, err, t0);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_simulate_defocus);
__tuple t2;if(v_empty(2))t2=5.0;else elib::Utils::fillTuple(a+2, t2);
callHalcon(simulate_defocus, err, a_obj(0),varp_obj(1),t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_simulate_motion);
__tuple t2;if(v_empty(2))t2=20.0;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=0;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=3;else elib::Utils::fillTuple(a+4, t4);
callHalcon(simulate_motion, err, a_obj(0),varp_obj(1),t2,t3,t4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_sin_image);
callHalcon(sin_image, err, a_obj(0),varp_obj(1));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_skeleton);
callHalcon(skeleton, err, a_obj(0),varp_obj(1));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_slide_image);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
callHalcon(slide_image, err, t0,t1,t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_smallest_circle);
__tuple t1;
__tuple t2;
__tuple t3;
callHalcon(smallest_circle, err, a_obj(0),&t1,&t2,&t3);
elib::Utils::fillVar(t1, a+1);elib::Utils::fillVar(t2, a+2);elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_smallest_circle_xld);
__tuple t1;
__tuple t2;
__tuple t3;
callHalcon(smallest_circle_xld, err, a_obj(0),&t1,&t2,&t3);
elib::Utils::fillVar(t1, a+1);elib::Utils::fillVar(t2, a+2);elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_smallest_rectangle1);
__tuple t1;
__tuple t2;
__tuple t3;
__tuple t4;
callHalcon(smallest_rectangle1, err, a_obj(0),&t1,&t2,&t3,&t4);
elib::Utils::fillVar(t1, a+1);elib::Utils::fillVar(t2, a+2);elib::Utils::fillVar(t3, a+3);elib::Utils::fillVar(t4, a+4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_smallest_rectangle1_xld);
__tuple t1;
__tuple t2;
__tuple t3;
__tuple t4;
callHalcon(smallest_rectangle1_xld, err, a_obj(0),&t1,&t2,&t3,&t4);
elib::Utils::fillVar(t1, a+1);elib::Utils::fillVar(t2, a+2);elib::Utils::fillVar(t3, a+3);elib::Utils::fillVar(t4, a+4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_smallest_rectangle2);
__tuple t1;
__tuple t2;
__tuple t3;
__tuple t4;
__tuple t5;
callHalcon(smallest_rectangle2, err, a_obj(0),&t1,&t2,&t3,&t4,&t5);
elib::Utils::fillVar(t1, a+1);elib::Utils::fillVar(t2, a+2);elib::Utils::fillVar(t3, a+3);elib::Utils::fillVar(t4, a+4);elib::Utils::fillVar(t5, a+5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_smallest_rectangle2_xld);
__tuple t1;
__tuple t2;
__tuple t3;
__tuple t4;
__tuple t5;
callHalcon(smallest_rectangle2_xld, err, a_obj(0),&t1,&t2,&t3,&t4,&t5);
elib::Utils::fillVar(t1, a+1);elib::Utils::fillVar(t2, a+2);elib::Utils::fillVar(t3, a+3);elib::Utils::fillVar(t4, a+4);elib::Utils::fillVar(t5, a+5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_smooth_contours_xld);
__tuple t2;if(v_empty(2))t2=5;else elib::Utils::fillTuple(a+2, t2);
callHalcon(smooth_contours_xld, err, a_obj(0),varp_obj(1),t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_smooth_funct_1d_gauss);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=2.0;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(smooth_funct_1d_gauss, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_smooth_funct_1d_mean);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=9;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=3;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;
callHalcon(smooth_funct_1d_mean, err, t0,t1,t2,&t3);
elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_smooth_image);
__tuple t2;if(v_empty(2))t2="deriche2";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=0.5;else elib::Utils::fillTuple(a+3, t3);
callHalcon(smooth_image, err, a_obj(0),varp_obj(1),t2,t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_sobel_amp);
__tuple t2;if(v_empty(2))t2="sum_abs";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=3;else elib::Utils::fillTuple(a+3, t3);
callHalcon(sobel_amp, err, a_obj(0),varp_obj(1),t2,t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_sobel_dir);
__tuple t3;if(v_empty(3))t3="sum_abs";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=3;else elib::Utils::fillTuple(a+4, t4);
callHalcon(sobel_dir, err, a_obj(0),varp_obj(1),varp_obj(2),t3,t4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_socket_accept_connect);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="auto";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(socket_accept_connect, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_solve_matrix);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="general";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=0.0;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;
callHalcon(solve_matrix, err, t0,t1,t2,t3,&t4);
elib::Utils::fillVar(t4, a+4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_sort_contours_xld);
__tuple t2;if(v_empty(2))t2="upper_left";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="true";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4="row";else elib::Utils::fillTuple(a+4, t4);
callHalcon(sort_contours_xld, err, a_obj(0),varp_obj(1),t2,t3,t4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_sort_region);
__tuple t2;if(v_empty(2))t2="first_point";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="true";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4="row";else elib::Utils::fillTuple(a+4, t4);
callHalcon(sort_region, err, a_obj(0),varp_obj(1),t2,t3,t4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_spatial_relation);
__tuple t2;if(v_empty(2))t2=50;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;
__tuple t4;
__tuple t5;
__tuple t6;
callHalcon(spatial_relation, err, a_obj(0),a_obj(1),t2,&t3,&t4,&t5,&t6);
elib::Utils::fillVar(t3, a+3);elib::Utils::fillVar(t4, a+4);elib::Utils::fillVar(t5, a+5);elib::Utils::fillVar(t6, a+6);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_split_contours_xld);
__tuple t2;if(v_empty(2))t2="polygon";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=1;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=5;else elib::Utils::fillTuple(a+4, t4);
callHalcon(split_contours_xld, err, a_obj(0),varp_obj(1),t2,t3,t4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_split_skeleton_lines);
__tuple t1;if(v_empty(1))t1=3;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;
__tuple t3;
__tuple t4;
__tuple t5;
callHalcon(split_skeleton_lines, err, a_obj(0),t1,&t2,&t3,&t4,&t5);
elib::Utils::fillVar(t2, a+2);elib::Utils::fillVar(t3, a+3);elib::Utils::fillVar(t4, a+4);elib::Utils::fillVar(t5, a+5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_split_skeleton_region);
__tuple t2;if(v_empty(2))t2=3;else elib::Utils::fillTuple(a+2, t2);
callHalcon(split_skeleton_region, err, a_obj(0),varp_obj(1),t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_sp_distribution);
__tuple t0;if(v_empty(0))t0=5.0;else elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=5.0;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(sp_distribution, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_sqrt_image);
callHalcon(sqrt_image, err, a_obj(0),varp_obj(1));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_sqrt_matrix);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(sqrt_matrix, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_sqrt_matrix_mod);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
callHalcon(sqrt_matrix_mod, err, t0);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_store_par_knowledge);
__tuple t0;if(v_empty(0))t0="";else elib::Utils::fillTuple(a+0, t0);
callHalcon(store_par_knowledge, err, t0);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_sub_image);
__tuple t3;if(v_empty(3))t3=1.0;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=128.0;else elib::Utils::fillTuple(a+4, t4);
callHalcon(sub_image, err, a_obj(0),a_obj(1),varp_obj(2),t3,t4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_sub_matrix);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(sub_matrix, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_sub_matrix_mod);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
callHalcon(sub_matrix_mod, err, t0,t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_sum_matrix);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="columns";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(sum_matrix, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_svd_matrix);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="full";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="both";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;
__tuple t4;
__tuple t5;
callHalcon(svd_matrix, err, t0,t1,t2,&t3,&t4,&t5);
elib::Utils::fillVar(t3, a+3);elib::Utils::fillVar(t4, a+4);elib::Utils::fillVar(t5, a+5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_symmetry);
__tuple t2;if(v_empty(2))t2=40;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=0.0;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=0.5;else elib::Utils::fillTuple(a+4, t4);
callHalcon(symmetry, err, a_obj(0),varp_obj(1),t2,t3,t4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_symm_difference);
callHalcon(symm_difference, err, a_obj(0),a_obj(1),varp_obj(2));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_symm_difference_closed_contours_xld);
callHalcon(symm_difference_closed_contours_xld, err, a_obj(0),a_obj(1),varp_obj(2));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_symm_difference_closed_polygons_xld);
callHalcon(symm_difference_closed_polygons_xld, err, a_obj(0),a_obj(1),varp_obj(2));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_system_call);
__tuple t0;if(v_empty(0))t0="ls";else elib::Utils::fillTuple(a+0, t0);
callHalcon(system_call, err, t0);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tan_image);
callHalcon(tan_image, err, a_obj(0),varp_obj(1));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_test_access);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;elib::Utils::fillTuple(a+4, t4);
callHalcon(test_access, err, a_obj(0),varp_obj(1),t2,t3,t4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_test_closed_xld);
__tuple t1;
callHalcon(test_closed_xld, err, a_obj(0),&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_test_equal_obj);
__tuple t2;
callHalcon(test_equal_obj, err, a_obj(0),a_obj(1),&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_test_equal_region);
__tuple t2;
callHalcon(test_equal_region, err, a_obj(0),a_obj(1),&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_test_obj_def);
__tuple t1;
callHalcon(test_obj_def, err, a_obj(0),&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_test_region_point);
__tuple t1;if(v_empty(1))t1=100;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=100;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;
callHalcon(test_region_point, err, a_obj(0),t1,t2,&t3);
elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_test_sampset_box);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(test_sampset_box, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_test_self_intersection_xld);
__tuple t1;if(v_empty(1))t1="true";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(test_self_intersection_xld, err, a_obj(0),t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_test_subset_region);
__tuple t2;
callHalcon(test_subset_region, err, a_obj(0),a_obj(1),&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_test_xld_point);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;
callHalcon(test_xld_point, err, a_obj(0),t1,t2,&t3);
elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_texture_laws);
__tuple t2;if(v_empty(2))t2="el";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=2;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=5;else elib::Utils::fillTuple(a+4, t4);
callHalcon(texture_laws, err, a_obj(0),varp_obj(1),t2,t3,t4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_text_line_orientation);
__tuple t2;if(v_empty(2))t2=25;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=-0.523599;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=0.523599;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;
callHalcon(text_line_orientation, err, a_obj(0),a_obj(1),t2,t3,t4,&t5);
elib::Utils::fillVar(t5, a+5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_text_line_slant);
__tuple t2;if(v_empty(2))t2=25;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=-0.523599;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=0.523599;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;
callHalcon(text_line_slant, err, a_obj(0),a_obj(1),t2,t3,t4,&t5);
elib::Utils::fillVar(t5, a+5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_thickening);
__tuple t4;if(v_empty(4))t4=16;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=16;else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6=1;else elib::Utils::fillTuple(a+6, t6);
callHalcon(thickening, err, a_obj(0),a_obj(1),a_obj(2),varp_obj(3),t4,t5,t6);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_thickening_golay);
__tuple t2;if(v_empty(2))t2="h";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=0;else elib::Utils::fillTuple(a+3, t3);
callHalcon(thickening_golay, err, a_obj(0),varp_obj(1),t2,t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_thickening_seq);
__tuple t2;if(v_empty(2))t2="h";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=1;else elib::Utils::fillTuple(a+3, t3);
callHalcon(thickening_seq, err, a_obj(0),varp_obj(1),t2,t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_thinning);
__tuple t4;if(v_empty(4))t4=0;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=0;else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6=1;else elib::Utils::fillTuple(a+6, t6);
callHalcon(thinning, err, a_obj(0),a_obj(1),a_obj(2),varp_obj(3),t4,t5,t6);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_thinning_golay);
__tuple t2;if(v_empty(2))t2="h";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=0;else elib::Utils::fillTuple(a+3, t3);
callHalcon(thinning_golay, err, a_obj(0),varp_obj(1),t2,t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_thinning_seq);
__tuple t2;if(v_empty(2))t2="l";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=20;else elib::Utils::fillTuple(a+3, t3);
callHalcon(thinning_seq, err, a_obj(0),varp_obj(1),t2,t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_threshold);
__tuple t2;if(v_empty(2))t2=128.0;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=255.0;else elib::Utils::fillTuple(a+3, t3);
callHalcon(threshold, err, a_obj(0),varp_obj(1),t2,t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tile_channels);
__tuple t2;if(v_empty(2))t2=1;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="vertical";else elib::Utils::fillTuple(a+3, t3);
callHalcon(tile_channels, err, a_obj(0),varp_obj(1),t2,t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tile_images);
__tuple t2;if(v_empty(2))t2=1;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="vertical";else elib::Utils::fillTuple(a+3, t3);
callHalcon(tile_images, err, a_obj(0),varp_obj(1),t2,t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tile_images_offset);
__tuple t2;if(v_empty(2))t2=0;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=0;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=-1;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=-1;else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6=-1;else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7=-1;else elib::Utils::fillTuple(a+7, t7);
__tuple t8;if(v_empty(8))t8=512;else elib::Utils::fillTuple(a+8, t8);
__tuple t9;if(v_empty(9))t9=512;else elib::Utils::fillTuple(a+9, t9);
callHalcon(tile_images_offset, err, a_obj(0),varp_obj(1),t2,t3,t4,t5,t6,t7,t8,t9);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_timed_wait_condition);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
callHalcon(timed_wait_condition, err, t0,t1,t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_topographic_sketch);
callHalcon(topographic_sketch, err, a_obj(0),varp_obj(1));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_top_hat);
callHalcon(top_hat, err, a_obj(0),a_obj(1),varp_obj(2));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_train_class_gmm);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=100;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=0.001;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="training";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=0.0001;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;
__tuple t6;
callHalcon(train_class_gmm, err, t0,t1,t2,t3,t4,&t5,&t6);
elib::Utils::fillVar(t5, a+5);elib::Utils::fillVar(t6, a+6);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_train_class_knn);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="";else elib::Utils::fillTuple(a+2, t2);
callHalcon(train_class_knn, err, t0,t1,t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_train_class_mlp);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=200;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=1.0;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=0.01;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;
__tuple t5;
callHalcon(train_class_mlp, err, t0,t1,t2,t3,&t4,&t5);
elib::Utils::fillVar(t4, a+4);elib::Utils::fillVar(t5, a+5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_train_class_svm);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=0.001;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="default";else elib::Utils::fillTuple(a+2, t2);
callHalcon(train_class_svm, err, t0,t1,t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_transform_funct_1d);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(transform_funct_1d, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_transpose_matrix);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(transpose_matrix, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_transpose_matrix_mod);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
callHalcon(transpose_matrix_mod, err, t0);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_transpose_region);
__tuple t2;if(v_empty(2))t2=0;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=0;else elib::Utils::fillTuple(a+3, t3);
callHalcon(transpose_region, err, a_obj(0),varp_obj(1),t2,t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_trans_from_rgb);
__tuple t6;if(v_empty(6))t6="hsv";else elib::Utils::fillTuple(a+6, t6);
callHalcon(trans_from_rgb, err, a_obj(0),a_obj(1),a_obj(2),varp_obj(3),varp_obj(4),varp_obj(5),t6);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_trans_to_rgb);
__tuple t6;if(v_empty(6))t6="hsv";else elib::Utils::fillTuple(a+6, t6);
callHalcon(trans_to_rgb, err, a_obj(0),a_obj(1),a_obj(2),varp_obj(3),varp_obj(4),varp_obj(5),t6);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_trimmed_mean);
__tuple t3;if(v_empty(3))t3=5;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4="mirrored";else elib::Utils::fillTuple(a+4, t4);
callHalcon(trimmed_mean, err, a_obj(0),a_obj(1),varp_obj(2),t3,t4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_try_lock_mutex);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(try_lock_mutex, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_try_wait_event);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(try_wait_event, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tuple_abs);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(tuple_abs, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tuple_acos);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(tuple_acos, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tuple_add);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(tuple_add, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tuple_and);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(tuple_and, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tuple_asin);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(tuple_asin, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tuple_atan);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(tuple_atan, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tuple_atan2);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(tuple_atan2, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tuple_band);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(tuple_band, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tuple_bnot);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(tuple_bnot, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tuple_bor);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(tuple_bor, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tuple_bxor);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(tuple_bxor, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tuple_ceil);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(tuple_ceil, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tuple_chr);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(tuple_chr, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tuple_chrt);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(tuple_chrt, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tuple_concat);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(tuple_concat, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tuple_cos);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(tuple_cos, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tuple_cosh);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(tuple_cosh, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tuple_cumul);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(tuple_cumul, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tuple_deg);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(tuple_deg, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tuple_deviation);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(tuple_deviation, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tuple_difference);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(tuple_difference, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tuple_div);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(tuple_div, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tuple_environment);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(tuple_environment, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tuple_equal);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(tuple_equal, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tuple_equal_elem);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(tuple_equal_elem, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tuple_exp);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(tuple_exp, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tuple_fabs);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(tuple_fabs, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tuple_find);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(tuple_find, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tuple_find_first);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(tuple_find_first, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tuple_find_last);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(tuple_find_last, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tuple_first_n);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(tuple_first_n, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tuple_floor);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(tuple_floor, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tuple_fmod);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(tuple_fmod, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tuple_gen_const);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(tuple_gen_const, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tuple_gen_sequence);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;
callHalcon(tuple_gen_sequence, err, t0,t1,t2,&t3);
elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tuple_greater);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(tuple_greater, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tuple_greater_elem);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(tuple_greater_elem, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tuple_greater_equal);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(tuple_greater_equal, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tuple_greater_equal_elem);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(tuple_greater_equal_elem, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tuple_histo_range);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;
__tuple t5;
callHalcon(tuple_histo_range, err, t0,t1,t2,t3,&t4,&t5);
elib::Utils::fillVar(t4, a+4);elib::Utils::fillVar(t5, a+5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tuple_insert);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;
callHalcon(tuple_insert, err, t0,t1,t2,&t3);
elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tuple_int);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(tuple_int, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tuple_intersection);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(tuple_intersection, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tuple_inverse);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(tuple_inverse, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tuple_is_int);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(tuple_is_int, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tuple_is_int_elem);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(tuple_is_int_elem, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tuple_is_mixed);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(tuple_is_mixed, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tuple_is_number);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(tuple_is_number, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tuple_is_real);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(tuple_is_real, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tuple_is_real_elem);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(tuple_is_real_elem, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tuple_is_string);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(tuple_is_string, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tuple_is_string_elem);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(tuple_is_string_elem, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tuple_last_n);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(tuple_last_n, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tuple_ldexp);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(tuple_ldexp, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tuple_length);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(tuple_length, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tuple_less);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(tuple_less, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tuple_less_elem);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(tuple_less_elem, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tuple_less_equal);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(tuple_less_equal, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tuple_less_equal_elem);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(tuple_less_equal_elem, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tuple_log);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(tuple_log, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tuple_log10);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(tuple_log10, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tuple_lsh);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(tuple_lsh, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tuple_max);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(tuple_max, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tuple_max2);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(tuple_max2, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tuple_mean);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(tuple_mean, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tuple_median);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(tuple_median, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tuple_min);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(tuple_min, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tuple_min2);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(tuple_min2, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tuple_mod);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(tuple_mod, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tuple_mult);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(tuple_mult, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tuple_neg);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(tuple_neg, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tuple_not);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(tuple_not, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tuple_not_equal);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(tuple_not_equal, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tuple_not_equal_elem);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(tuple_not_equal_elem, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tuple_number);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(tuple_number, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tuple_or);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(tuple_or, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tuple_ord);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(tuple_ord, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tuple_ords);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(tuple_ords, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tuple_pow);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(tuple_pow, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tuple_rad);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(tuple_rad, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tuple_rand);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(tuple_rand, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tuple_real);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(tuple_real, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tuple_regexp_match);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=".*";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(tuple_regexp_match, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tuple_regexp_replace);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=".*";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;
callHalcon(tuple_regexp_replace, err, t0,t1,t2,&t3);
elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tuple_regexp_select);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=".*";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(tuple_regexp_select, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tuple_regexp_test);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=".*";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(tuple_regexp_test, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tuple_remove);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(tuple_remove, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tuple_replace);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;
callHalcon(tuple_replace, err, t0,t1,t2,&t3);
elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tuple_round);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(tuple_round, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tuple_rsh);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(tuple_rsh, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tuple_select);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(tuple_select, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tuple_select_mask);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(tuple_select_mask, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tuple_select_range);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;
callHalcon(tuple_select_range, err, t0,t1,t2,&t3);
elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tuple_select_rank);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(tuple_select_rank, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tuple_sgn);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(tuple_sgn, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tuple_sin);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(tuple_sin, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tuple_sinh);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(tuple_sinh, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tuple_sort);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(tuple_sort, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tuple_sort_index);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(tuple_sort_index, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tuple_split);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(tuple_split, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tuple_sqrt);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(tuple_sqrt, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tuple_strchr);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(tuple_strchr, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tuple_string);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(tuple_string, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tuple_strlen);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(tuple_strlen, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tuple_strrchr);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(tuple_strrchr, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tuple_strrstr);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(tuple_strrstr, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tuple_strstr);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(tuple_strstr, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tuple_str_bit_select);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(tuple_str_bit_select, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tuple_str_first_n);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(tuple_str_first_n, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tuple_str_last_n);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(tuple_str_last_n, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tuple_sub);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(tuple_sub, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tuple_substr);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;
callHalcon(tuple_substr, err, t0,t1,t2,&t3);
elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tuple_sum);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(tuple_sum, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tuple_symmdiff);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(tuple_symmdiff, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tuple_tan);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(tuple_tan, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tuple_tanh);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(tuple_tanh, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tuple_type);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(tuple_type, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tuple_type_elem);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(tuple_type_elem, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tuple_union);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(tuple_union, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tuple_uniq);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(tuple_uniq, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_tuple_xor);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(tuple_xor, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_union1);
callHalcon(union1, err, a_obj(0),varp_obj(1));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_union2);
callHalcon(union2, err, a_obj(0),a_obj(1),varp_obj(2));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_union2_closed_contours_xld);
callHalcon(union2_closed_contours_xld, err, a_obj(0),a_obj(1),varp_obj(2));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_union2_closed_polygons_xld);
callHalcon(union2_closed_polygons_xld, err, a_obj(0),a_obj(1),varp_obj(2));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_union_adjacent_contours_xld);
__tuple t2;if(v_empty(2))t2=10.0;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=1.0;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4="attr_keep";else elib::Utils::fillTuple(a+4, t4);
callHalcon(union_adjacent_contours_xld, err, a_obj(0),varp_obj(1),t2,t3,t4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_union_cocircular_contours_xld);
__tuple t2;if(v_empty(2))t2=0.5;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=0.1;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=0.2;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=30;else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6=10;else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7=10;else elib::Utils::fillTuple(a+7, t7);
__tuple t8;if(v_empty(8))t8="true";else elib::Utils::fillTuple(a+8, t8);
__tuple t9;if(v_empty(9))t9=1;else elib::Utils::fillTuple(a+9, t9);
callHalcon(union_cocircular_contours_xld, err, a_obj(0),varp_obj(1),t2,t3,t4,t5,t6,t7,t8,t9);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_union_collinear_contours_ext_xld);
__tuple t2;if(v_empty(2))t2=10.0;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=1.0;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=2.0;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=0.1;else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6=0.0;else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7=-1.0;else elib::Utils::fillTuple(a+7, t7);
__tuple t8;if(v_empty(8))t8=1.0;else elib::Utils::fillTuple(a+8, t8);
__tuple t9;if(v_empty(9))t9=1.0;else elib::Utils::fillTuple(a+9, t9);
__tuple t10;if(v_empty(10))t10=1.0;else elib::Utils::fillTuple(a+10, t10);
__tuple t11;if(v_empty(11))t11=1.0;else elib::Utils::fillTuple(a+11, t11);
__tuple t12;if(v_empty(12))t12=1.0;else elib::Utils::fillTuple(a+12, t12);
__tuple t13;if(v_empty(13))t13=0.0;else elib::Utils::fillTuple(a+13, t13);
__tuple t14;if(v_empty(14))t14="attr_keep";else elib::Utils::fillTuple(a+14, t14);
callHalcon(union_collinear_contours_ext_xld, err, a_obj(0),varp_obj(1),t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,t13,t14);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_union_collinear_contours_xld);
__tuple t2;if(v_empty(2))t2=10.0;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=1.0;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=2.0;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=0.1;else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6="attr_keep";else elib::Utils::fillTuple(a+6, t6);
callHalcon(union_collinear_contours_xld, err, a_obj(0),varp_obj(1),t2,t3,t4,t5,t6);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_union_cotangential_contours_xld);
__tuple t2;if(v_empty(2))t2=0.0;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=30.0;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=0.78539816;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=25.0;else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6=10.0;else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7=2.0;else elib::Utils::fillTuple(a+7, t7);
__tuple t8;if(v_empty(8))t8="attr_forget";else elib::Utils::fillTuple(a+8, t8);
callHalcon(union_cotangential_contours_xld, err, a_obj(0),varp_obj(1),t2,t3,t4,t5,t6,t7,t8);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_union_straight_contours_histo_xld);
__tuple t3;if(v_empty(3))t3=0;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=0;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=0;else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6=0;else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7=1;else elib::Utils::fillTuple(a+7, t7);
__tuple t8;if(v_empty(8))t8=1;else elib::Utils::fillTuple(a+8, t8);
__tuple t9;if(v_empty(9))t9=1;else elib::Utils::fillTuple(a+9, t9);
__tuple t10;
callHalcon(union_straight_contours_histo_xld, err, a_obj(0),varp_obj(1),varp_obj(2),t3,t4,t5,t6,t7,t8,t9,&t10);
elib::Utils::fillVar(t10, a+10);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_union_straight_contours_xld);
__tuple t2;if(v_empty(2))t2=5.0;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=0.5;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=50.0;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5="noparallel";else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6="maximum";else elib::Utils::fillTuple(a+6, t6);
callHalcon(union_straight_contours_xld, err, a_obj(0),varp_obj(1),t2,t3,t4,t5,t6);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_unlock_mutex);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
callHalcon(unlock_mutex, err, t0);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_unproject_coordinates);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;
__tuple t5;
__tuple t6;
callHalcon(unproject_coordinates, err, a_obj(0),t1,t2,t3,&t4,&t5,&t6);
elib::Utils::fillVar(t4, a+4);elib::Utils::fillVar(t5, a+5);elib::Utils::fillVar(t6, a+6);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_unwarp_image_vector_field);
callHalcon(unwarp_image_vector_field, err, a_obj(0),a_obj(1),varp_obj(2));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_update_bg_esti);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
callHalcon(update_bg_esti, err, a_obj(0),a_obj(1),t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_update_kalman);
__tuple t0;if(v_empty(0))t0="kalman.updt";else elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1)){const char* vs1[]={"3","1","0"};ehalcon::Utils::arr2TupleString(vs1, 3, t1);}else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2)){const char* vs2[]={"1.0","1.0","0.5","0.0","1.0","1.0","0.0","0.0","1.0","1.0","0.0","0.0","54.3","37.9","48.0","37.9","34.3","42.5","48.0","42.5","43.7"};ehalcon::Utils::arr2TupleString(vs2, 21, t2);}else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3)){const char* vs3[]={"1","2"};ehalcon::Utils::arr2TupleString(vs3, 2, t3);}else elib::Utils::fillTuple(a+3, t3);
__tuple t4;
__tuple t5;
__tuple t6;
callHalcon(update_kalman, err, t0,t1,t2,t3,&t4,&t5,&t6);
elib::Utils::fillVar(t4, a+4);elib::Utils::fillVar(t5, a+5);elib::Utils::fillVar(t6, a+6);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_update_window_pose);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5="rotate";else elib::Utils::fillTuple(a+5, t5);
callHalcon(update_window_pose, err, t0,t1,t2,t3,t4,t5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_var_threshold);
__tuple t2;if(v_empty(2))t2=15;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=15;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=0.2;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=2;else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6="dark";else elib::Utils::fillTuple(a+6, t6);
callHalcon(var_threshold, err, a_obj(0),varp_obj(1),t2,t3,t4,t5,t6);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_vector_angle_to_rigid);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;elib::Utils::fillTuple(a+4, t4);
__tuple t5;elib::Utils::fillTuple(a+5, t5);
__tuple t6;
callHalcon(vector_angle_to_rigid, err, t0,t1,t2,t3,t4,t5,&t6);
elib::Utils::fillVar(t6, a+6);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_vector_field_length);
__tuple t2;if(v_empty(2))t2="length";else elib::Utils::fillTuple(a+2, t2);
callHalcon(vector_field_length, err, a_obj(0),varp_obj(1),t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_vector_field_to_hom_mat2d);
__tuple t1;
callHalcon(vector_field_to_hom_mat2d, err, a_obj(0),&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_vector_field_to_real);
callHalcon(vector_field_to_real, err, a_obj(0),varp_obj(1),varp_obj(2));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_vector_to_aniso);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;
callHalcon(vector_to_aniso, err, t0,t1,t2,t3,&t4);
elib::Utils::fillVar(t4, a+4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_vector_to_hom_mat2d);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;
callHalcon(vector_to_hom_mat2d, err, t0,t1,t2,t3,&t4);
elib::Utils::fillVar(t4, a+4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_vector_to_hom_mat3d);
__tuple t0;if(v_empty(0))t0="rigid";else elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;elib::Utils::fillTuple(a+4, t4);
__tuple t5;elib::Utils::fillTuple(a+5, t5);
__tuple t6;elib::Utils::fillTuple(a+6, t6);
__tuple t7;
callHalcon(vector_to_hom_mat3d, err, t0,t1,t2,t3,t4,t5,t6,&t7);
elib::Utils::fillVar(t7, a+7);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_vector_to_rigid);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;
callHalcon(vector_to_rigid, err, t0,t1,t2,t3,&t4);
elib::Utils::fillVar(t4, a+4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_vector_to_similarity);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;
callHalcon(vector_to_similarity, err, t0,t1,t2,t3,&t4);
elib::Utils::fillVar(t4, a+4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_wait_barrier);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
callHalcon(wait_barrier, err, t0);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_wait_condition);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
callHalcon(wait_condition, err, t0,t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_wait_event);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
callHalcon(wait_event, err, t0);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_wait_seconds);
__tuple t0;if(v_empty(0))t0=10;else elib::Utils::fillTuple(a+0, t0);
callHalcon(wait_seconds, err, t0);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_watersheds);
callHalcon(watersheds, err, a_obj(0),varp_obj(1),varp_obj(2));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_watersheds_threshold);
__tuple t2;if(v_empty(2))t2=10;else elib::Utils::fillTuple(a+2, t2);
callHalcon(watersheds_threshold, err, a_obj(0),varp_obj(1),t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_wiener_filter);
callHalcon(wiener_filter, err, a_obj(0),a_obj(1),a_obj(2),varp_obj(3));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_wiener_filter_ni);
__tuple t4;if(v_empty(4))t4=3;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=3;else elib::Utils::fillTuple(a+5, t5);
callHalcon(wiener_filter_ni, err, a_obj(0),a_obj(1),a_obj(2),varp_obj(3),t4,t5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_write_aop_knowledge);
__tuple t0;if(v_empty(0))t0="";else elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="none";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="none";else elib::Utils::fillTuple(a+2, t2);
callHalcon(write_aop_knowledge, err, t0,t1,t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_write_cam_par);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="campar.dat";else elib::Utils::fillTuple(a+1, t1);
callHalcon(write_cam_par, err, t0,t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_write_class_box);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
callHalcon(write_class_box, err, t0,t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_write_class_gmm);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
callHalcon(write_class_gmm, err, t0,t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_write_class_knn);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
callHalcon(write_class_knn, err, t0,t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_write_class_mlp);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
callHalcon(write_class_mlp, err, t0,t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_write_class_svm);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
callHalcon(write_class_svm, err, t0,t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_write_class_train_data);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
callHalcon(write_class_train_data, err, t0,t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_write_contour_xld_arc_info);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
callHalcon(write_contour_xld_arc_info, err, a_obj(0),t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_write_contour_xld_dxf);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
callHalcon(write_contour_xld_dxf, err, a_obj(0),t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_write_distance_transform_xld);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
callHalcon(write_distance_transform_xld, err, t0,t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_write_fft_optimization_data);
__tuple t0;if(v_empty(0))t0="fft_opt.dat";else elib::Utils::fillTuple(a+0, t0);
callHalcon(write_fft_optimization_data, err, t0);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_write_funct_1d);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
callHalcon(write_funct_1d, err, t0,t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_write_image);
__tuple t1;if(v_empty(1))t1="tiff";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=0;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
callHalcon(write_image, err, a_obj(0),t1,t2,t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_write_io_channel);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(write_io_channel, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_write_lut);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="/tmp/lut";else elib::Utils::fillTuple(a+1, t1);
callHalcon(write_lut, err, t0,t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_write_matrix);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="binary";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
callHalcon(write_matrix, err, t0,t1,t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_write_object);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
callHalcon(write_object, err, a_obj(0),t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_write_polygon_xld_arc_info);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
callHalcon(write_polygon_xld_arc_info, err, a_obj(0),t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_write_polygon_xld_dxf);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
callHalcon(write_polygon_xld_dxf, err, a_obj(0),t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_write_pose);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="campose.dat";else elib::Utils::fillTuple(a+1, t1);
callHalcon(write_pose, err, t0,t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_write_region);
__tuple t1;if(v_empty(1))t1="region.hobj";else elib::Utils::fillTuple(a+1, t1);
callHalcon(write_region, err, a_obj(0),t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_write_samples_class_gmm);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
callHalcon(write_samples_class_gmm, err, t0,t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_write_samples_class_mlp);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
callHalcon(write_samples_class_mlp, err, t0,t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_write_samples_class_svm);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
callHalcon(write_samples_class_svm, err, t0,t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_write_serial);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
callHalcon(write_serial, err, t0,t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_write_string);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="hello";else elib::Utils::fillTuple(a+1, t1);
callHalcon(write_string, err, t0,t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_write_tuple);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
callHalcon(write_tuple, err, t0,t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_x_range_funct_1d);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
__tuple t2;
callHalcon(x_range_funct_1d, err, t0,&t1,&t2);
elib::Utils::fillVar(t1, a+1);elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_y_range_funct_1d);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
__tuple t2;
callHalcon(y_range_funct_1d, err, t0,&t1,&t2);
elib::Utils::fillVar(t1, a+1);elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_zero_crossing);
callHalcon(zero_crossing, err, a_obj(0),varp_obj(1));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_zero_crossings_funct_1d);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(zero_crossings_funct_1d, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_zoom_image_factor);
__tuple t2;if(v_empty(2))t2=0.5;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=0.5;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4="constant";else elib::Utils::fillTuple(a+4, t4);
callHalcon(zoom_image_factor, err, a_obj(0),varp_obj(1),t2,t3,t4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_zoom_image_size);
__tuple t2;if(v_empty(2))t2=512;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=512;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4="constant";else elib::Utils::fillTuple(a+4, t4);
callHalcon(zoom_image_size, err, a_obj(0),varp_obj(1),t2,t3,t4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_zoom_region);
__tuple t2;if(v_empty(2))t2=2.0;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=2.0;else elib::Utils::fillTuple(a+3, t3);
callHalcon(zoom_region, err, a_obj(0),varp_obj(1),t2,t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_calibrate_cameras);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(calibrate_cameras, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_calibrate_hand_eye);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(calibrate_hand_eye, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_camera_calibration);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;elib::Utils::fillTuple(a+4, t4);
__tuple t5;elib::Utils::fillTuple(a+5, t5);
__tuple t6;elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7="all";else elib::Utils::fillTuple(a+7, t7);
__tuple t8;
__tuple t9;
__tuple t10;
callHalcon(camera_calibration, err, t0,t1,t2,t3,t4,t5,t6,t7,&t8,&t9,&t10);
elib::Utils::fillVar(t8, a+8);elib::Utils::fillVar(t9, a+9);elib::Utils::fillVar(t10, a+10);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_cam_mat_to_cam_par);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;
callHalcon(cam_mat_to_cam_par, err, t0,t1,t2,t3,&t4);
elib::Utils::fillVar(t4, a+4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_cam_par_to_cam_mat);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
__tuple t2;
__tuple t3;
callHalcon(cam_par_to_cam_mat, err, t0,&t1,&t2,&t3);
elib::Utils::fillVar(t1, a+1);elib::Utils::fillVar(t2, a+2);elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_change_radial_distortion_cam_par);
__tuple t0;if(v_empty(0))t0="adaptive";else elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=0.0;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;
callHalcon(change_radial_distortion_cam_par, err, t0,t1,t2,&t3);
elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_change_radial_distortion_contours_xld);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
callHalcon(change_radial_distortion_contours_xld, err, a_obj(0),varp_obj(1),t2,t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_change_radial_distortion_image);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;elib::Utils::fillTuple(a+4, t4);
callHalcon(change_radial_distortion_image, err, a_obj(0),a_obj(1),varp_obj(2),t3,t4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_change_radial_distortion_points);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;
__tuple t5;
callHalcon(change_radial_distortion_points, err, t0,t1,t2,t3,&t4,&t5);
elib::Utils::fillVar(t4, a+4);elib::Utils::fillVar(t5, a+5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_clear_all_calib_data);
callHalcon(clear_all_calib_data, err);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_clear_all_camera_setup_models);
callHalcon(clear_all_camera_setup_models, err);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_clear_calib_data);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
callHalcon(clear_calib_data, err, t0);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_clear_camera_setup_model);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
callHalcon(clear_camera_setup_model, err, t0);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_connect_grid_points);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=0.9;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=5.5;else elib::Utils::fillTuple(a+5, t5);
callHalcon(connect_grid_points, err, a_obj(0),varp_obj(1),t2,t3,t4,t5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_contour_to_world_plane_xld);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4="m";else elib::Utils::fillTuple(a+4, t4);
callHalcon(contour_to_world_plane_xld, err, a_obj(0),varp_obj(1),t2,t3,t4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_create_calib_data);
__tuple t0;if(v_empty(0))t0="calibration_object";else elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=1;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=1;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;
callHalcon(create_calib_data, err, t0,t1,t2,&t3);
elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_create_camera_setup_model);
__tuple t0;if(v_empty(0))t0=2;else elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(create_camera_setup_model, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_deserialize_calib_data);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(deserialize_calib_data, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_deserialize_camera_setup_model);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(deserialize_camera_setup_model, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_find_calib_object);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=0;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=0;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=0;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5="";else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6="";else elib::Utils::fillTuple(a+6, t6);
callHalcon(find_calib_object, err, a_obj(0),t1,t2,t3,t4,t5,t6);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_find_rectification_grid);
__tuple t2;if(v_empty(2))t2=8.0;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=7.5;else elib::Utils::fillTuple(a+3, t3);
callHalcon(find_rectification_grid, err, a_obj(0),varp_obj(1),t2,t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_gen_arbitrary_distortion_map);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;elib::Utils::fillTuple(a+4, t4);
__tuple t5;elib::Utils::fillTuple(a+5, t5);
__tuple t6;elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7="bilinear";else elib::Utils::fillTuple(a+7, t7);
callHalcon(gen_arbitrary_distortion_map, err, varp_obj(0),t1,t2,t3,t4,t5,t6,t7);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_gen_grid_rectification_map);
__tuple t4;elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5="auto";else elib::Utils::fillTuple(a+5, t5);
__tuple t6;elib::Utils::fillTuple(a+6, t6);
__tuple t7;elib::Utils::fillTuple(a+7, t7);
__tuple t8;if(v_empty(8))t8="bilinear";else elib::Utils::fillTuple(a+8, t8);
callHalcon(gen_grid_rectification_map, err, a_obj(0),a_obj(1),varp_obj(2),varp_obj(3),t4,t5,t6,t7,t8);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_gen_image_to_world_plane_map);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;elib::Utils::fillTuple(a+4, t4);
__tuple t5;elib::Utils::fillTuple(a+5, t5);
__tuple t6;elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7="m";else elib::Utils::fillTuple(a+7, t7);
__tuple t8;if(v_empty(8))t8="bilinear";else elib::Utils::fillTuple(a+8, t8);
callHalcon(gen_image_to_world_plane_map, err, varp_obj(0),t1,t2,t3,t4,t5,t6,t7,t8);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_gen_radial_distortion_map);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="bilinear";else elib::Utils::fillTuple(a+3, t3);
callHalcon(gen_radial_distortion_map, err, varp_obj(0),t1,t2,t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_calib_data);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="camera";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=0;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="params";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;
callHalcon(get_calib_data, err, t0,t1,t2,t3,&t4);
elib::Utils::fillVar(t4, a+4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_calib_data_observ_contours);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="marks";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=0;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=0;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=0;else elib::Utils::fillTuple(a+5, t5);
callHalcon(get_calib_data_observ_contours, err, varp_obj(0),t1,t2,t3,t4,t5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_calib_data_observ_points);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=0;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=0;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=0;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;
__tuple t5;
__tuple t6;
__tuple t7;
callHalcon(get_calib_data_observ_points, err, t0,t1,t2,t3,&t4,&t5,&t6,&t7);
elib::Utils::fillVar(t4, a+4);elib::Utils::fillVar(t5, a+5);elib::Utils::fillVar(t6, a+6);elib::Utils::fillVar(t7, a+7);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_calib_data_observ_pose);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=0;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=0;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=0;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;
callHalcon(get_calib_data_observ_pose, err, t0,t1,t2,t3,&t4);
elib::Utils::fillVar(t4, a+4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_camera_setup_param);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=0;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;
callHalcon(get_camera_setup_param, err, t0,t1,t2,&t3);
elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_line_of_sight);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;
__tuple t4;
__tuple t5;
__tuple t6;
__tuple t7;
__tuple t8;
callHalcon(get_line_of_sight, err, t0,t1,t2,&t3,&t4,&t5,&t6,&t7,&t8);
elib::Utils::fillVar(t3, a+3);elib::Utils::fillVar(t4, a+4);elib::Utils::fillVar(t5, a+5);elib::Utils::fillVar(t6, a+6);elib::Utils::fillVar(t7, a+7);elib::Utils::fillVar(t8, a+8);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_hand_eye_calibration);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;elib::Utils::fillTuple(a+4, t4);
__tuple t5;elib::Utils::fillTuple(a+5, t5);
__tuple t6;elib::Utils::fillTuple(a+6, t6);
__tuple t7;elib::Utils::fillTuple(a+7, t7);
__tuple t8;if(v_empty(8))t8="nonlinear";else elib::Utils::fillTuple(a+8, t8);
__tuple t9;if(v_empty(9))t9="error_pose";else elib::Utils::fillTuple(a+9, t9);
__tuple t10;
__tuple t11;
__tuple t12;
callHalcon(hand_eye_calibration, err, t0,t1,t2,t3,t4,t5,t6,t7,t8,t9,&t10,&t11,&t12);
elib::Utils::fillVar(t10, a+10);elib::Utils::fillVar(t11, a+11);elib::Utils::fillVar(t12, a+12);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_hom_vector_to_proj_hom_mat2d);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;elib::Utils::fillTuple(a+4, t4);
__tuple t5;elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6="normalized_dlt";else elib::Utils::fillTuple(a+6, t6);
__tuple t7;
callHalcon(hom_vector_to_proj_hom_mat2d, err, t0,t1,t2,t3,t4,t5,t6,&t7);
elib::Utils::fillVar(t7, a+7);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_image_points_to_world_plane);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=100.0;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=100.0;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4="m";else elib::Utils::fillTuple(a+4, t4);
__tuple t5;
__tuple t6;
callHalcon(image_points_to_world_plane, err, t0,t1,t2,t3,t4,&t5,&t6);
elib::Utils::fillVar(t5, a+5);elib::Utils::fillVar(t6, a+6);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_image_to_world_plane);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;elib::Utils::fillTuple(a+4, t4);
__tuple t5;elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6="m";else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7="bilinear";else elib::Utils::fillTuple(a+7, t7);
callHalcon(image_to_world_plane, err, a_obj(0),varp_obj(1),t2,t3,t4,t5,t6,t7);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_project_3d_point);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;
__tuple t5;
callHalcon(project_3d_point, err, t0,t1,t2,t3,&t4,&t5);
elib::Utils::fillVar(t4, a+4);elib::Utils::fillVar(t5, a+5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_proj_hom_mat2d_to_pose);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="decomposition";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;
callHalcon(proj_hom_mat2d_to_pose, err, t0,t1,t2,&t3);
elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_query_calib_data_observ_indices);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="camera";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=0;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;
__tuple t4;
callHalcon(query_calib_data_observ_indices, err, t0,t1,t2,&t3,&t4);
elib::Utils::fillVar(t3, a+3);elib::Utils::fillVar(t4, a+4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_radial_distortion_self_calibration);
__tuple t2;if(v_empty(2))t2=640;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=480;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=0.05;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=42;else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6="division";else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7="variable";else elib::Utils::fillTuple(a+7, t7);
__tuple t8;if(v_empty(8))t8=0.0;else elib::Utils::fillTuple(a+8, t8);
__tuple t9;
callHalcon(radial_distortion_self_calibration, err, a_obj(0),varp_obj(1),t2,t3,t4,t5,t6,t7,t8,&t9);
elib::Utils::fillVar(t9, a+9);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_radiometric_self_calibration);
__tuple t1;if(v_empty(1))t1=0.5;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="2d_histogram";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="discrete";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=1.0;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=5;else elib::Utils::fillTuple(a+5, t5);
__tuple t6;
callHalcon(radiometric_self_calibration, err, a_obj(0),t1,t2,t3,t4,t5,&t6);
elib::Utils::fillVar(t6, a+6);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_read_calib_data);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(read_calib_data, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_read_camera_setup_model);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(read_camera_setup_model, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_remove_calib_data);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="tool";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=0;else elib::Utils::fillTuple(a+2, t2);
callHalcon(remove_calib_data, err, t0,t1,t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_remove_calib_data_observ);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=0;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=0;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=0;else elib::Utils::fillTuple(a+3, t3);
callHalcon(remove_calib_data_observ, err, t0,t1,t2,t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_serialize_calib_data);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(serialize_calib_data, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_serialize_camera_setup_model);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(serialize_camera_setup_model, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_set_calib_data);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="model";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="general";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="reference_camera";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4="0";else elib::Utils::fillTuple(a+4, t4);
callHalcon(set_calib_data, err, t0,t1,t2,t3,t4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_set_calib_data_calib_object);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=0;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
callHalcon(set_calib_data_calib_object, err, t0,t1,t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_set_calib_data_cam_param);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=0;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="area_scan_division";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
callHalcon(set_calib_data_cam_param, err, t0,t1,t2,t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_set_calib_data_observ_points);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=0;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=0;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=0;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;elib::Utils::fillTuple(a+4, t4);
__tuple t5;elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6="all";else elib::Utils::fillTuple(a+6, t6);
__tuple t7;elib::Utils::fillTuple(a+7, t7);
callHalcon(set_calib_data_observ_points, err, t0,t1,t2,t3,t4,t5,t6,t7);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_set_calib_data_observ_pose);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=0;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=0;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=0;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;elib::Utils::fillTuple(a+4, t4);
callHalcon(set_calib_data_observ_pose, err, t0,t1,t2,t3,t4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_set_camera_setup_cam_param);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="area_scan_division";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;elib::Utils::fillTuple(a+4, t4);
callHalcon(set_camera_setup_cam_param, err, t0,t1,t2,t3,t4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_set_camera_setup_param);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=0;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
callHalcon(set_camera_setup_param, err, t0,t1,t2,t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_sim_caltab);
__tuple t1;if(v_empty(1))t1="calplate.cpd";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=128;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=224;else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6=80;else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7=1.0;else elib::Utils::fillTuple(a+7, t7);
callHalcon(sim_caltab, err, varp_obj(0),t1,t2,t3,t4,t5,t6,t7);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_stationary_camera_self_calibration);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;elib::Utils::fillTuple(a+4, t4);
__tuple t5;elib::Utils::fillTuple(a+5, t5);
__tuple t6;elib::Utils::fillTuple(a+6, t6);
__tuple t7;elib::Utils::fillTuple(a+7, t7);
__tuple t8;elib::Utils::fillTuple(a+8, t8);
__tuple t9;elib::Utils::fillTuple(a+9, t9);
__tuple t10;elib::Utils::fillTuple(a+10, t10);
__tuple t11;elib::Utils::fillTuple(a+11, t11);
__tuple t12;if(v_empty(12))t12="gold_standard";else elib::Utils::fillTuple(a+12, t12);
__tuple t13;if(v_empty(13)){const char* vs13[]={"focus","principal_point"};ehalcon::Utils::arr2TupleString(vs13, 2, t13);}else elib::Utils::fillTuple(a+13, t13);
__tuple t14;if(v_empty(14))t14="true";else elib::Utils::fillTuple(a+14, t14);
__tuple t15;
__tuple t16;
__tuple t17;
__tuple t18;
__tuple t19;
__tuple t20;
__tuple t21;
callHalcon(stationary_camera_self_calibration, err, t0,t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,t13,t14,&t15,&t16,&t17,&t18,&t19,&t20,&t21);
elib::Utils::fillVar(t15, a+15);elib::Utils::fillVar(t16, a+16);elib::Utils::fillVar(t17, a+17);elib::Utils::fillVar(t18, a+18);elib::Utils::fillVar(t19, a+19);elib::Utils::fillVar(t20, a+20);elib::Utils::fillVar(t21, a+21);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_vector_to_pose);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;elib::Utils::fillTuple(a+4, t4);
__tuple t5;elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6="iterative";else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7="error";else elib::Utils::fillTuple(a+7, t7);
__tuple t8;
__tuple t9;
callHalcon(vector_to_pose, err, t0,t1,t2,t3,t4,t5,t6,t7,&t8,&t9);
elib::Utils::fillVar(t8, a+8);elib::Utils::fillVar(t9, a+9);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_vector_to_proj_hom_mat2d);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4="normalized_dlt";else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5="";else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6="";else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7="";else elib::Utils::fillTuple(a+7, t7);
__tuple t8;if(v_empty(8))t8="";else elib::Utils::fillTuple(a+8, t8);
__tuple t9;if(v_empty(9))t9="";else elib::Utils::fillTuple(a+9, t9);
__tuple t10;if(v_empty(10))t10="";else elib::Utils::fillTuple(a+10, t10);
__tuple t11;
__tuple t12;
callHalcon(vector_to_proj_hom_mat2d, err, t0,t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,&t11,&t12);
elib::Utils::fillVar(t11, a+11);elib::Utils::fillVar(t12, a+12);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_vector_to_proj_hom_mat2d_distortion);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4="";else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5="";else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6="";else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7="";else elib::Utils::fillTuple(a+7, t7);
__tuple t8;if(v_empty(8))t8="";else elib::Utils::fillTuple(a+8, t8);
__tuple t9;if(v_empty(9))t9="";else elib::Utils::fillTuple(a+9, t9);
__tuple t10;elib::Utils::fillTuple(a+10, t10);
__tuple t11;elib::Utils::fillTuple(a+11, t11);
__tuple t12;if(v_empty(12))t12="gold_standard";else elib::Utils::fillTuple(a+12, t12);
__tuple t13;
__tuple t14;
__tuple t15;
callHalcon(vector_to_proj_hom_mat2d_distortion, err, t0,t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,&t13,&t14,&t15);
elib::Utils::fillVar(t13, a+13);elib::Utils::fillVar(t14, a+14);elib::Utils::fillVar(t15, a+15);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_write_calib_data);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
callHalcon(write_calib_data, err, t0,t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_write_camera_setup_model);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
callHalcon(write_camera_setup_model, err, t0,t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_close_all_measures);
callHalcon(close_all_measures, err);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_close_measure);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
callHalcon(close_measure, err, t0);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_deserialize_measure);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(deserialize_measure, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_fuzzy_measure_pairing);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=1.0;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=30.0;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=0.5;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5="all";else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6="no_restriction";else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7=10;else elib::Utils::fillTuple(a+7, t7);
__tuple t8;
__tuple t9;
__tuple t10;
__tuple t11;
__tuple t12;
__tuple t13;
__tuple t14;
__tuple t15;
__tuple t16;
__tuple t17;
callHalcon(fuzzy_measure_pairing, err, a_obj(0),t1,t2,t3,t4,t5,t6,t7,&t8,&t9,&t10,&t11,&t12,&t13,&t14,&t15,&t16,&t17);
elib::Utils::fillVar(t8, a+8);elib::Utils::fillVar(t9, a+9);elib::Utils::fillVar(t10, a+10);elib::Utils::fillVar(t11, a+11);elib::Utils::fillVar(t12, a+12);elib::Utils::fillVar(t13, a+13);elib::Utils::fillVar(t14, a+14);elib::Utils::fillVar(t15, a+15);elib::Utils::fillVar(t16, a+16);elib::Utils::fillVar(t17, a+17);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_fuzzy_measure_pairs);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=1.0;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=30.0;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=0.5;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5="all";else elib::Utils::fillTuple(a+5, t5);
__tuple t6;
__tuple t7;
__tuple t8;
__tuple t9;
__tuple t10;
__tuple t11;
__tuple t12;
__tuple t13;
__tuple t14;
__tuple t15;
__tuple t16;
callHalcon(fuzzy_measure_pairs, err, a_obj(0),t1,t2,t3,t4,t5,&t6,&t7,&t8,&t9,&t10,&t11,&t12,&t13,&t14,&t15,&t16);
elib::Utils::fillVar(t6, a+6);elib::Utils::fillVar(t7, a+7);elib::Utils::fillVar(t8, a+8);elib::Utils::fillVar(t9, a+9);elib::Utils::fillVar(t10, a+10);elib::Utils::fillVar(t11, a+11);elib::Utils::fillVar(t12, a+12);elib::Utils::fillVar(t13, a+13);elib::Utils::fillVar(t14, a+14);elib::Utils::fillVar(t15, a+15);elib::Utils::fillVar(t16, a+16);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_fuzzy_measure_pos);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=1.0;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=30.0;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=0.5;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5="all";else elib::Utils::fillTuple(a+5, t5);
__tuple t6;
__tuple t7;
__tuple t8;
__tuple t9;
__tuple t10;
callHalcon(fuzzy_measure_pos, err, a_obj(0),t1,t2,t3,t4,t5,&t6,&t7,&t8,&t9,&t10);
elib::Utils::fillVar(t6, a+6);elib::Utils::fillVar(t7, a+7);elib::Utils::fillVar(t8, a+8);elib::Utils::fillVar(t9, a+9);elib::Utils::fillVar(t10, a+10);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_gen_measure_arc);
__tuple t0;if(v_empty(0))t0=100.0;else elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=100.0;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=50.0;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=0.0;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=6.28318;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=10.0;else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6=512;else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7=512;else elib::Utils::fillTuple(a+7, t7);
__tuple t8;if(v_empty(8))t8="nearest_neighbor";else elib::Utils::fillTuple(a+8, t8);
__tuple t9;
callHalcon(gen_measure_arc, err, t0,t1,t2,t3,t4,t5,t6,t7,t8,&t9);
elib::Utils::fillVar(t9, a+9);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_gen_measure_rectangle2);
__tuple t0;if(v_empty(0))t0=300.0;else elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=200.0;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=0.0;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=100.0;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=20.0;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=512;else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6=512;else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7="nearest_neighbor";else elib::Utils::fillTuple(a+7, t7);
__tuple t8;
callHalcon(gen_measure_rectangle2, err, t0,t1,t2,t3,t4,t5,t6,t7,&t8);
elib::Utils::fillVar(t8, a+8);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_gray_projections);
__tuple t2;if(v_empty(2))t2="simple";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;
__tuple t4;
callHalcon(gray_projections, err, a_obj(0),a_obj(1),t2,&t3,&t4);
elib::Utils::fillVar(t3, a+3);elib::Utils::fillVar(t4, a+4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_measure_pairs);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=1.0;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=30.0;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4="all";else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5="all";else elib::Utils::fillTuple(a+5, t5);
__tuple t6;
__tuple t7;
__tuple t8;
__tuple t9;
__tuple t10;
__tuple t11;
__tuple t12;
__tuple t13;
callHalcon(measure_pairs, err, a_obj(0),t1,t2,t3,t4,t5,&t6,&t7,&t8,&t9,&t10,&t11,&t12,&t13);
elib::Utils::fillVar(t6, a+6);elib::Utils::fillVar(t7, a+7);elib::Utils::fillVar(t8, a+8);elib::Utils::fillVar(t9, a+9);elib::Utils::fillVar(t10, a+10);elib::Utils::fillVar(t11, a+11);elib::Utils::fillVar(t12, a+12);elib::Utils::fillVar(t13, a+13);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_measure_pos);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=1.0;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=30.0;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4="all";else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5="all";else elib::Utils::fillTuple(a+5, t5);
__tuple t6;
__tuple t7;
__tuple t8;
__tuple t9;
callHalcon(measure_pos, err, a_obj(0),t1,t2,t3,t4,t5,&t6,&t7,&t8,&t9);
elib::Utils::fillVar(t6, a+6);elib::Utils::fillVar(t7, a+7);elib::Utils::fillVar(t8, a+8);elib::Utils::fillVar(t9, a+9);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_measure_projection);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(measure_projection, err, a_obj(0),t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_measure_thresh);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=1.0;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=128.0;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4="all";else elib::Utils::fillTuple(a+4, t4);
__tuple t5;
__tuple t6;
__tuple t7;
callHalcon(measure_thresh, err, a_obj(0),t1,t2,t3,t4,&t5,&t6,&t7);
elib::Utils::fillVar(t5, a+5);elib::Utils::fillVar(t6, a+6);elib::Utils::fillVar(t7, a+7);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_read_measure);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(read_measure, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_reset_fuzzy_measure);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="contrast";else elib::Utils::fillTuple(a+1, t1);
callHalcon(reset_fuzzy_measure, err, t0,t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_serialize_measure);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(serialize_measure, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_set_fuzzy_measure);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="contrast";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
callHalcon(set_fuzzy_measure, err, t0,t1,t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_set_fuzzy_measure_norm_pair);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=10.0;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="size_abs_diff";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
callHalcon(set_fuzzy_measure_norm_pair, err, t0,t1,t2,t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_translate_measure);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=50.0;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=100.0;else elib::Utils::fillTuple(a+2, t2);
callHalcon(translate_measure, err, t0,t1,t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_write_measure);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
callHalcon(write_measure, err, t0,t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_add_metrology_object_circle_measure);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=20.0;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=5.0;else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6=1.0;else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7=30.0;else elib::Utils::fillTuple(a+7, t7);
__tuple t8;if(v_empty(8))t8="";else elib::Utils::fillTuple(a+8, t8);
__tuple t9;if(v_empty(9))t9="";else elib::Utils::fillTuple(a+9, t9);
__tuple t10;
callHalcon(add_metrology_object_circle_measure, err, t0,t1,t2,t3,t4,t5,t6,t7,t8,t9,&t10);
elib::Utils::fillVar(t10, a+10);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_add_metrology_object_ellipse_measure);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;elib::Utils::fillTuple(a+4, t4);
__tuple t5;elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6=20.0;else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7=5.0;else elib::Utils::fillTuple(a+7, t7);
__tuple t8;if(v_empty(8))t8=1.0;else elib::Utils::fillTuple(a+8, t8);
__tuple t9;if(v_empty(9))t9=30.0;else elib::Utils::fillTuple(a+9, t9);
__tuple t10;if(v_empty(10))t10="";else elib::Utils::fillTuple(a+10, t10);
__tuple t11;if(v_empty(11))t11="";else elib::Utils::fillTuple(a+11, t11);
__tuple t12;
callHalcon(add_metrology_object_ellipse_measure, err, t0,t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,&t12);
elib::Utils::fillVar(t12, a+12);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_add_metrology_object_generic);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="circle";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=20.0;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=5.0;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=1.0;else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6=30.0;else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7="";else elib::Utils::fillTuple(a+7, t7);
__tuple t8;if(v_empty(8))t8="";else elib::Utils::fillTuple(a+8, t8);
__tuple t9;
callHalcon(add_metrology_object_generic, err, t0,t1,t2,t3,t4,t5,t6,t7,t8,&t9);
elib::Utils::fillVar(t9, a+9);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_add_metrology_object_line_measure);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=20.0;else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6=5.0;else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7=1.0;else elib::Utils::fillTuple(a+7, t7);
__tuple t8;if(v_empty(8))t8=30.0;else elib::Utils::fillTuple(a+8, t8);
__tuple t9;if(v_empty(9))t9="";else elib::Utils::fillTuple(a+9, t9);
__tuple t10;if(v_empty(10))t10="";else elib::Utils::fillTuple(a+10, t10);
__tuple t11;
callHalcon(add_metrology_object_line_measure, err, t0,t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,&t11);
elib::Utils::fillVar(t11, a+11);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_add_metrology_object_rectangle2_measure);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;elib::Utils::fillTuple(a+4, t4);
__tuple t5;elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6=20.0;else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7=5.0;else elib::Utils::fillTuple(a+7, t7);
__tuple t8;if(v_empty(8))t8=1.0;else elib::Utils::fillTuple(a+8, t8);
__tuple t9;if(v_empty(9))t9=30.0;else elib::Utils::fillTuple(a+9, t9);
__tuple t10;if(v_empty(10))t10="";else elib::Utils::fillTuple(a+10, t10);
__tuple t11;if(v_empty(11))t11="";else elib::Utils::fillTuple(a+11, t11);
__tuple t12;
callHalcon(add_metrology_object_rectangle2_measure, err, t0,t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,&t12);
elib::Utils::fillVar(t12, a+12);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_align_metrology_model);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=0;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=0;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=0;else elib::Utils::fillTuple(a+3, t3);
callHalcon(align_metrology_model, err, t0,t1,t2,t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_apply_bead_inspection_model);
__tuple t4;elib::Utils::fillTuple(a+4, t4);
__tuple t5;
callHalcon(apply_bead_inspection_model, err, a_obj(0),varp_obj(1),varp_obj(2),varp_obj(3),t4,&t5);
elib::Utils::fillVar(t5, a+5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_apply_metrology_model);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
callHalcon(apply_metrology_model, err, a_obj(0),t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_clear_all_metrology_models);
callHalcon(clear_all_metrology_models, err);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_clear_bead_inspection_model);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
callHalcon(clear_bead_inspection_model, err, t0);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_clear_metrology_model);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
callHalcon(clear_metrology_model, err, t0);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_clear_metrology_object);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="all";else elib::Utils::fillTuple(a+1, t1);
callHalcon(clear_metrology_object, err, t0,t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_copy_metrology_model);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="all";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(copy_metrology_model, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_copy_metrology_object);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="all";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(copy_metrology_object, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_create_bead_inspection_model);
__tuple t1;if(v_empty(1))t1=50;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=15;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=15;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4="light";else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5="";else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6="";else elib::Utils::fillTuple(a+6, t6);
__tuple t7;
callHalcon(create_bead_inspection_model, err, a_obj(0),t1,t2,t3,t4,t5,t6,&t7);
elib::Utils::fillVar(t7, a+7);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_create_metrology_model);
__tuple t0;
callHalcon(create_metrology_model, err, &t0);
elib::Utils::fillVar(t0, a+0);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_deserialize_metrology_model);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(deserialize_metrology_model, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_edges_color_sub_pix);
__tuple t2;if(v_empty(2))t2="canny";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=1.0;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=20;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=40;else elib::Utils::fillTuple(a+5, t5);
callHalcon(edges_color_sub_pix, err, a_obj(0),varp_obj(1),t2,t3,t4,t5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_edges_sub_pix);
__tuple t2;if(v_empty(2))t2="canny";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=1.0;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=20;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=40;else elib::Utils::fillTuple(a+5, t5);
callHalcon(edges_sub_pix, err, a_obj(0),varp_obj(1),t2,t3,t4,t5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_bead_inspection_param);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="target_thickness";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(get_bead_inspection_param, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_metrology_model_param);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="camera_param";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(get_metrology_model_param, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_metrology_object_fuzzy_param);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="0";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="fuzzy_thresh";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;
callHalcon(get_metrology_object_fuzzy_param, err, t0,t1,t2,&t3);
elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_metrology_object_indices);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(get_metrology_object_indices, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_metrology_object_measures);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="all";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="all";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;
__tuple t5;
callHalcon(get_metrology_object_measures, err, varp_obj(0),t1,t2,t3,&t4,&t5);
elib::Utils::fillVar(t4, a+4);elib::Utils::fillVar(t5, a+5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_metrology_object_model_contour);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="all";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=1.5;else elib::Utils::fillTuple(a+3, t3);
callHalcon(get_metrology_object_model_contour, err, varp_obj(0),t1,t2,t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_metrology_object_num_instances);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=0;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(get_metrology_object_num_instances, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_metrology_object_param);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="all";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="num_measures";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;
callHalcon(get_metrology_object_param, err, t0,t1,t2,&t3);
elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_metrology_object_result);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="all";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="all";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="result_type";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4="all_param";else elib::Utils::fillTuple(a+4, t4);
__tuple t5;
callHalcon(get_metrology_object_result, err, t0,t1,t2,t3,t4,&t5);
elib::Utils::fillVar(t5, a+5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_metrology_object_result_contour);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="all";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="all";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=1.5;else elib::Utils::fillTuple(a+4, t4);
callHalcon(get_metrology_object_result_contour, err, varp_obj(0),t1,t2,t3,t4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_lines_color);
__tuple t2;if(v_empty(2))t2=1.5;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=3;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=8;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5="true";else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6="true";else elib::Utils::fillTuple(a+6, t6);
callHalcon(lines_color, err, a_obj(0),varp_obj(1),t2,t3,t4,t5,t6);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_lines_facet);
__tuple t2;if(v_empty(2))t2=5;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=3;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=8;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5="light";else elib::Utils::fillTuple(a+5, t5);
callHalcon(lines_facet, err, a_obj(0),varp_obj(1),t2,t3,t4,t5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_lines_gauss);
__tuple t2;if(v_empty(2))t2=1.5;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=3;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=8;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5="light";else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6="true";else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7="bar-shaped";else elib::Utils::fillTuple(a+7, t7);
__tuple t8;if(v_empty(8))t8="true";else elib::Utils::fillTuple(a+8, t8);
callHalcon(lines_gauss, err, a_obj(0),varp_obj(1),t2,t3,t4,t5,t6,t7,t8);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_read_metrology_model);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(read_metrology_model, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_reset_metrology_object_fuzzy_param);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="all";else elib::Utils::fillTuple(a+1, t1);
callHalcon(reset_metrology_object_fuzzy_param, err, t0,t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_reset_metrology_object_param);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="all";else elib::Utils::fillTuple(a+1, t1);
callHalcon(reset_metrology_object_param, err, t0,t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_serialize_metrology_model);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(serialize_metrology_model, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_set_bead_inspection_param);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="target_thickness";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="40";else elib::Utils::fillTuple(a+2, t2);
callHalcon(set_bead_inspection_param, err, t0,t1,t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_set_metrology_model_image_size);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=640;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=480;else elib::Utils::fillTuple(a+2, t2);
callHalcon(set_metrology_model_image_size, err, t0,t1,t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_set_metrology_model_param);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="camera_param";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2)){const char* vs2[]={"0","0","0","0","0","0","0","0"};ehalcon::Utils::arr2TupleString(vs2, 8, t2);}else elib::Utils::fillTuple(a+2, t2);
callHalcon(set_metrology_model_param, err, t0,t1,t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_set_metrology_object_fuzzy_param);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="all";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="fuzzy_thresh";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=0.5;else elib::Utils::fillTuple(a+3, t3);
callHalcon(set_metrology_object_fuzzy_param, err, t0,t1,t2,t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_set_metrology_object_param);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="all";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="num_instances";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="1";else elib::Utils::fillTuple(a+3, t3);
callHalcon(set_metrology_object_param, err, t0,t1,t2,t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_threshold_sub_pix);
__tuple t2;if(v_empty(2))t2=128;else elib::Utils::fillTuple(a+2, t2);
callHalcon(threshold_sub_pix, err, a_obj(0),varp_obj(1),t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_transform_metrology_object);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="all";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5="absolute";else elib::Utils::fillTuple(a+5, t5);
callHalcon(transform_metrology_object, err, t0,t1,t2,t3,t4,t5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_write_metrology_model);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
callHalcon(write_metrology_model, err, t0,t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_zero_crossing_sub_pix);
callHalcon(zero_crossing_sub_pix, err, a_obj(0),varp_obj(1));
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_add_deformable_surface_model_reference_point);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;
callHalcon(add_deformable_surface_model_reference_point, err, t0,t1,t2,t3,&t4);
elib::Utils::fillVar(t4, a+4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_add_deformable_surface_model_sample);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
callHalcon(add_deformable_surface_model_sample, err, t0,t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_add_scene_3d_camera);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(add_scene_3d_camera, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_add_scene_3d_instance);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;
callHalcon(add_scene_3d_instance, err, t0,t1,t2,&t3);
elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_add_scene_3d_light);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1)){const char* vs1[]={"-100.0","-100.0","0.0"};ehalcon::Utils::arr2TupleString(vs1, 3, t1);}else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="point_light";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;
callHalcon(add_scene_3d_light, err, t0,t1,t2,&t3);
elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_affine_trans_object_model_3d);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(affine_trans_object_model_3d, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_apply_sheet_of_light_calibration);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
callHalcon(apply_sheet_of_light_calibration, err, a_obj(0),t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_area_object_model_3d);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(area_object_model_3d, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_binocular_calibration);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;elib::Utils::fillTuple(a+4, t4);
__tuple t5;elib::Utils::fillTuple(a+5, t5);
__tuple t6;elib::Utils::fillTuple(a+6, t6);
__tuple t7;elib::Utils::fillTuple(a+7, t7);
__tuple t8;elib::Utils::fillTuple(a+8, t8);
__tuple t9;elib::Utils::fillTuple(a+9, t9);
__tuple t10;elib::Utils::fillTuple(a+10, t10);
__tuple t11;if(v_empty(11))t11="all";else elib::Utils::fillTuple(a+11, t11);
__tuple t12;
__tuple t13;
__tuple t14;
__tuple t15;
__tuple t16;
__tuple t17;
callHalcon(binocular_calibration, err, t0,t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,&t12,&t13,&t14,&t15,&t16,&t17);
elib::Utils::fillVar(t12, a+12);elib::Utils::fillVar(t13, a+13);elib::Utils::fillVar(t14, a+14);elib::Utils::fillVar(t15, a+15);elib::Utils::fillVar(t16, a+16);elib::Utils::fillVar(t17, a+17);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_binocular_disparity);
__tuple t4;if(v_empty(4))t4="ncc";else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=11;else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6=11;else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7=0.0;else elib::Utils::fillTuple(a+7, t7);
__tuple t8;if(v_empty(8))t8=-30;else elib::Utils::fillTuple(a+8, t8);
__tuple t9;if(v_empty(9))t9=30;else elib::Utils::fillTuple(a+9, t9);
__tuple t10;if(v_empty(10))t10=1;else elib::Utils::fillTuple(a+10, t10);
__tuple t11;if(v_empty(11))t11=0.5;else elib::Utils::fillTuple(a+11, t11);
__tuple t12;if(v_empty(12))t12="none";else elib::Utils::fillTuple(a+12, t12);
__tuple t13;if(v_empty(13))t13="none";else elib::Utils::fillTuple(a+13, t13);
callHalcon(binocular_disparity, err, a_obj(0),a_obj(1),varp_obj(2),varp_obj(3),t4,t5,t6,t7,t8,t9,t10,t11,t12,t13);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_binocular_disparity_mg);
__tuple t4;if(v_empty(4))t4=1.0;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=30.0;else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6=5.0;else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7=0.0;else elib::Utils::fillTuple(a+7, t7);
__tuple t8;if(v_empty(8))t8="false";else elib::Utils::fillTuple(a+8, t8);
__tuple t9;if(v_empty(9))t9="default_parameters";else elib::Utils::fillTuple(a+9, t9);
__tuple t10;if(v_empty(10))t10="fast_accurate";else elib::Utils::fillTuple(a+10, t10);
callHalcon(binocular_disparity_mg, err, a_obj(0),a_obj(1),varp_obj(2),varp_obj(3),t4,t5,t6,t7,t8,t9,t10);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_binocular_disparity_ms);
__tuple t4;if(v_empty(4))t4=-30;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=30;else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6=50;else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7=50;else elib::Utils::fillTuple(a+7, t7);
__tuple t8;if(v_empty(8))t8="";else elib::Utils::fillTuple(a+8, t8);
__tuple t9;if(v_empty(9))t9="";else elib::Utils::fillTuple(a+9, t9);
callHalcon(binocular_disparity_ms, err, a_obj(0),a_obj(1),varp_obj(2),varp_obj(3),t4,t5,t6,t7,t8,t9);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_binocular_distance);
__tuple t4;elib::Utils::fillTuple(a+4, t4);
__tuple t5;elib::Utils::fillTuple(a+5, t5);
__tuple t6;elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7="ncc";else elib::Utils::fillTuple(a+7, t7);
__tuple t8;if(v_empty(8))t8=11;else elib::Utils::fillTuple(a+8, t8);
__tuple t9;if(v_empty(9))t9=11;else elib::Utils::fillTuple(a+9, t9);
__tuple t10;if(v_empty(10))t10=0.0;else elib::Utils::fillTuple(a+10, t10);
__tuple t11;if(v_empty(11))t11=0;else elib::Utils::fillTuple(a+11, t11);
__tuple t12;if(v_empty(12))t12=30;else elib::Utils::fillTuple(a+12, t12);
__tuple t13;if(v_empty(13))t13=1;else elib::Utils::fillTuple(a+13, t13);
__tuple t14;if(v_empty(14))t14=0.0;else elib::Utils::fillTuple(a+14, t14);
__tuple t15;if(v_empty(15))t15="none";else elib::Utils::fillTuple(a+15, t15);
__tuple t16;if(v_empty(16))t16="none";else elib::Utils::fillTuple(a+16, t16);
callHalcon(binocular_distance, err, a_obj(0),a_obj(1),varp_obj(2),varp_obj(3),t4,t5,t6,t7,t8,t9,t10,t11,t12,t13,t14,t15,t16);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_binocular_distance_mg);
__tuple t4;elib::Utils::fillTuple(a+4, t4);
__tuple t5;elib::Utils::fillTuple(a+5, t5);
__tuple t6;elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7=1.0;else elib::Utils::fillTuple(a+7, t7);
__tuple t8;if(v_empty(8))t8=30.0;else elib::Utils::fillTuple(a+8, t8);
__tuple t9;if(v_empty(9))t9=5.0;else elib::Utils::fillTuple(a+9, t9);
__tuple t10;if(v_empty(10))t10=0.0;else elib::Utils::fillTuple(a+10, t10);
__tuple t11;if(v_empty(11))t11="false";else elib::Utils::fillTuple(a+11, t11);
__tuple t12;if(v_empty(12))t12="default_parameters";else elib::Utils::fillTuple(a+12, t12);
__tuple t13;if(v_empty(13))t13="fast_accurate";else elib::Utils::fillTuple(a+13, t13);
callHalcon(binocular_distance_mg, err, a_obj(0),a_obj(1),varp_obj(2),varp_obj(3),t4,t5,t6,t7,t8,t9,t10,t11,t12,t13);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_binocular_distance_ms);
__tuple t4;elib::Utils::fillTuple(a+4, t4);
__tuple t5;elib::Utils::fillTuple(a+5, t5);
__tuple t6;elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7=-30;else elib::Utils::fillTuple(a+7, t7);
__tuple t8;if(v_empty(8))t8=30;else elib::Utils::fillTuple(a+8, t8);
__tuple t9;if(v_empty(9))t9=50;else elib::Utils::fillTuple(a+9, t9);
__tuple t10;if(v_empty(10))t10=50;else elib::Utils::fillTuple(a+10, t10);
__tuple t11;if(v_empty(11))t11="";else elib::Utils::fillTuple(a+11, t11);
__tuple t12;if(v_empty(12))t12="";else elib::Utils::fillTuple(a+12, t12);
callHalcon(binocular_distance_ms, err, a_obj(0),a_obj(1),varp_obj(2),varp_obj(3),t4,t5,t6,t7,t8,t9,t10,t11,t12);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_calibrate_sheet_of_light);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(calibrate_sheet_of_light, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_clear_all_object_model_3d);
callHalcon(clear_all_object_model_3d, err);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_clear_all_shape_model_3d);
callHalcon(clear_all_shape_model_3d, err);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_clear_all_sheet_of_light_models);
callHalcon(clear_all_sheet_of_light_models, err);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_clear_all_stereo_models);
callHalcon(clear_all_stereo_models, err);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_clear_all_surface_matching_results);
callHalcon(clear_all_surface_matching_results, err);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_clear_all_surface_models);
callHalcon(clear_all_surface_models, err);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_clear_deformable_surface_matching_result);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
callHalcon(clear_deformable_surface_matching_result, err, t0);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_clear_deformable_surface_model);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
callHalcon(clear_deformable_surface_model, err, t0);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_clear_object_model_3d);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
callHalcon(clear_object_model_3d, err, t0);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_clear_scene_3d);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
callHalcon(clear_scene_3d, err, t0);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_clear_shape_model_3d);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
callHalcon(clear_shape_model_3d, err, t0);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_clear_sheet_of_light_model);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
callHalcon(clear_sheet_of_light_model, err, t0);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_clear_stereo_model);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
callHalcon(clear_stereo_model, err, t0);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_clear_surface_matching_result);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
callHalcon(clear_surface_matching_result, err, t0);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_clear_surface_model);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
callHalcon(clear_surface_model, err, t0);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_connection_object_model_3d);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="distance_3d";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=1.0;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;
callHalcon(connection_object_model_3d, err, t0,t1,t2,&t3);
elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_convert_point_3d_cart_to_spher);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="-y";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4="-z";else elib::Utils::fillTuple(a+4, t4);
__tuple t5;
__tuple t6;
__tuple t7;
callHalcon(convert_point_3d_cart_to_spher, err, t0,t1,t2,t3,t4,&t5,&t6,&t7);
elib::Utils::fillVar(t5, a+5);elib::Utils::fillVar(t6, a+6);elib::Utils::fillVar(t7, a+7);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_convert_point_3d_spher_to_cart);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="-y";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4="-z";else elib::Utils::fillTuple(a+4, t4);
__tuple t5;
__tuple t6;
__tuple t7;
callHalcon(convert_point_3d_spher_to_cart, err, t0,t1,t2,t3,t4,&t5,&t6,&t7);
elib::Utils::fillVar(t5, a+5);elib::Utils::fillVar(t6, a+6);elib::Utils::fillVar(t7, a+7);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_convex_hull_object_model_3d);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(convex_hull_object_model_3d, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_copy_object_model_3d);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="all";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(copy_object_model_3d, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_create_cam_pose_look_at_point);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;elib::Utils::fillTuple(a+4, t4);
__tuple t5;elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6="-y";else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7=0;else elib::Utils::fillTuple(a+7, t7);
__tuple t8;
callHalcon(create_cam_pose_look_at_point, err, t0,t1,t2,t3,t4,t5,t6,t7,&t8);
elib::Utils::fillVar(t8, a+8);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_create_deformable_surface_model);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=0.05;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;
callHalcon(create_deformable_surface_model, err, t0,t1,t2,t3,&t4);
elib::Utils::fillVar(t4, a+4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_create_scene_3d);
__tuple t0;
callHalcon(create_scene_3d, err, &t0);
elib::Utils::fillVar(t0, a+0);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_create_shape_model_3d);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=0;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=0;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=0;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5="gba";else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6=-0.35;else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7=0.35;else elib::Utils::fillTuple(a+7, t7);
__tuple t8;if(v_empty(8))t8=-0.35;else elib::Utils::fillTuple(a+8, t8);
__tuple t9;if(v_empty(9))t9=0.35;else elib::Utils::fillTuple(a+9, t9);
__tuple t10;if(v_empty(10))t10=-3.1416;else elib::Utils::fillTuple(a+10, t10);
__tuple t11;if(v_empty(11))t11=3.1416;else elib::Utils::fillTuple(a+11, t11);
__tuple t12;if(v_empty(12))t12=0.3;else elib::Utils::fillTuple(a+12, t12);
__tuple t13;if(v_empty(13))t13=0.4;else elib::Utils::fillTuple(a+13, t13);
__tuple t14;if(v_empty(14))t14=10;else elib::Utils::fillTuple(a+14, t14);
__tuple t15;if(v_empty(15))t15="";else elib::Utils::fillTuple(a+15, t15);
__tuple t16;if(v_empty(16))t16="";else elib::Utils::fillTuple(a+16, t16);
__tuple t17;
callHalcon(create_shape_model_3d, err, t0,t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,t13,t14,t15,t16,&t17);
elib::Utils::fillVar(t17, a+17);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_create_sheet_of_light_calib_object);
__tuple t0;if(v_empty(0))t0=0.1;else elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=0.15;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=0.005;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=0.04;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4="calib_object.dxf";else elib::Utils::fillTuple(a+4, t4);
callHalcon(create_sheet_of_light_calib_object, err, t0,t1,t2,t3,t4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_create_sheet_of_light_model);
__tuple t1;if(v_empty(1))t1="min_gray";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=50;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;
callHalcon(create_sheet_of_light_model, err, a_obj(0),t1,t2,&t3);
elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_create_stereo_model);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="surface_pairwise";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;
callHalcon(create_stereo_model, err, t0,t1,t2,t3,&t4);
elib::Utils::fillVar(t4, a+4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_create_surface_model);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=0.03;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;
callHalcon(create_surface_model, err, t0,t1,t2,t3,&t4);
elib::Utils::fillVar(t4, a+4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_depth_from_focus);
__tuple t3;if(v_empty(3))t3="highpass";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4="next_maximum";else elib::Utils::fillTuple(a+4, t4);
callHalcon(depth_from_focus, err, a_obj(0),varp_obj(1),varp_obj(2),t3,t4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_deserialize_deformable_surface_model);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(deserialize_deformable_surface_model, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_deserialize_object_model_3d);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(deserialize_object_model_3d, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_deserialize_shape_model_3d);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(deserialize_shape_model_3d, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_deserialize_sheet_of_light_model);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(deserialize_sheet_of_light_model, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_deserialize_surface_model);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(deserialize_surface_model, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_disparity_image_to_xyz);
__tuple t4;elib::Utils::fillTuple(a+4, t4);
__tuple t5;elib::Utils::fillTuple(a+5, t5);
__tuple t6;elib::Utils::fillTuple(a+6, t6);
callHalcon(disparity_image_to_xyz, err, a_obj(0),varp_obj(1),varp_obj(2),varp_obj(3),t4,t5,t6);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_disparity_to_distance);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;
callHalcon(disparity_to_distance, err, t0,t1,t2,t3,&t4);
elib::Utils::fillVar(t4, a+4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_disparity_to_point_3d);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;elib::Utils::fillTuple(a+4, t4);
__tuple t5;elib::Utils::fillTuple(a+5, t5);
__tuple t6;
__tuple t7;
__tuple t8;
callHalcon(disparity_to_point_3d, err, t0,t1,t2,t3,t4,t5,&t6,&t7,&t8);
elib::Utils::fillVar(t6, a+6);elib::Utils::fillVar(t7, a+7);elib::Utils::fillVar(t8, a+8);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_display_scene_3d);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
callHalcon(display_scene_3d, err, t0,t1,t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_disp_object_model_3d);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4="";else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5="";else elib::Utils::fillTuple(a+5, t5);
callHalcon(disp_object_model_3d, err, t0,t1,t2,t3,t4,t5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_distance_object_model_3d);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=0;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4="";else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5="";else elib::Utils::fillTuple(a+5, t5);
callHalcon(distance_object_model_3d, err, t0,t1,t2,t3,t4,t5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_distance_to_disparity);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;
callHalcon(distance_to_disparity, err, t0,t1,t2,t3,&t4);
elib::Utils::fillVar(t4, a+4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_essential_to_fundamental_matrix);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;
__tuple t5;
callHalcon(essential_to_fundamental_matrix, err, t0,t1,t2,t3,&t4,&t5);
elib::Utils::fillVar(t4, a+4);elib::Utils::fillVar(t5, a+5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_estimate_al_am);
__tuple t1;
__tuple t2;
callHalcon(estimate_al_am, err, a_obj(0),&t1,&t2);
elib::Utils::fillVar(t1, a+1);elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_estimate_sl_al_lr);
__tuple t1;
__tuple t2;
callHalcon(estimate_sl_al_lr, err, a_obj(0),&t1,&t2);
elib::Utils::fillVar(t1, a+1);elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_estimate_sl_al_zc);
__tuple t1;
__tuple t2;
callHalcon(estimate_sl_al_zc, err, a_obj(0),&t1,&t2);
elib::Utils::fillVar(t1, a+1);elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_estimate_tilt_lr);
__tuple t1;
callHalcon(estimate_tilt_lr, err, a_obj(0),&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_estimate_tilt_zc);
__tuple t1;
callHalcon(estimate_tilt_zc, err, a_obj(0),&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_find_deformable_surface_model);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=0.05;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=0;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4="";else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5="";else elib::Utils::fillTuple(a+5, t5);
__tuple t6;
__tuple t7;
callHalcon(find_deformable_surface_model, err, t0,t1,t2,t3,t4,t5,&t6,&t7);
elib::Utils::fillVar(t6, a+6);elib::Utils::fillVar(t7, a+7);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_find_shape_model_3d);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=0.7;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=0.9;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=0;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5="";else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6="";else elib::Utils::fillTuple(a+6, t6);
__tuple t7;
__tuple t8;
__tuple t9;
callHalcon(find_shape_model_3d, err, a_obj(0),t1,t2,t3,t4,t5,t6,&t7,&t8,&t9);
elib::Utils::fillVar(t7, a+7);elib::Utils::fillVar(t8, a+8);elib::Utils::fillVar(t9, a+9);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_find_surface_model);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=0.05;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=0.2;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=0;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5="false";else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6="";else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7="";else elib::Utils::fillTuple(a+7, t7);
__tuple t8;
__tuple t9;
__tuple t10;
callHalcon(find_surface_model, err, t0,t1,t2,t3,t4,t5,t6,t7,&t8,&t9,&t10);
elib::Utils::fillVar(t8, a+8);elib::Utils::fillVar(t9, a+9);elib::Utils::fillVar(t10, a+10);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_fit_primitives_object_model_3d);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;
callHalcon(fit_primitives_object_model_3d, err, t0,t1,t2,&t3);
elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_gen_binocular_proj_rectification);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=512;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=512;else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6=512;else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7=512;else elib::Utils::fillTuple(a+7, t7);
__tuple t8;if(v_empty(8))t8=1;else elib::Utils::fillTuple(a+8, t8);
__tuple t9;if(v_empty(9))t9="no_map";else elib::Utils::fillTuple(a+9, t9);
__tuple t10;
__tuple t11;
__tuple t12;
callHalcon(gen_binocular_proj_rectification, err, varp_obj(0),varp_obj(1),t2,t3,t4,t5,t6,t7,t8,t9,&t10,&t11,&t12);
elib::Utils::fillVar(t10, a+10);elib::Utils::fillVar(t11, a+11);elib::Utils::fillVar(t12, a+12);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_gen_binocular_rectification_map);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=1.0;else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6="geometric";else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7="bilinear";else elib::Utils::fillTuple(a+7, t7);
__tuple t8;
__tuple t9;
__tuple t10;
__tuple t11;
__tuple t12;
callHalcon(gen_binocular_rectification_map, err, varp_obj(0),varp_obj(1),t2,t3,t4,t5,t6,t7,&t8,&t9,&t10,&t11,&t12);
elib::Utils::fillVar(t8, a+8);elib::Utils::fillVar(t9, a+9);elib::Utils::fillVar(t10, a+10);elib::Utils::fillVar(t11, a+11);elib::Utils::fillVar(t12, a+12);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_gen_box_object_model_3d);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;
callHalcon(gen_box_object_model_3d, err, t0,t1,t2,t3,&t4);
elib::Utils::fillVar(t4, a+4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_gen_cylinder_object_model_3d);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;
callHalcon(gen_cylinder_object_model_3d, err, t0,t1,t2,t3,&t4);
elib::Utils::fillVar(t4, a+4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_gen_empty_object_model_3d);
__tuple t0;
callHalcon(gen_empty_object_model_3d, err, &t0);
elib::Utils::fillVar(t0, a+0);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_gen_object_model_3d_from_points);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;
callHalcon(gen_object_model_3d_from_points, err, t0,t1,t2,&t3);
elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_gen_plane_object_model_3d);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;
callHalcon(gen_plane_object_model_3d, err, t0,t1,t2,&t3);
elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_gen_sphere_object_model_3d);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(gen_sphere_object_model_3d, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_gen_sphere_object_model_3d_center);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;
callHalcon(gen_sphere_object_model_3d_center, err, t0,t1,t2,t3,&t4);
elib::Utils::fillVar(t4, a+4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_circle_pose);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="pose";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;
__tuple t5;
callHalcon(get_circle_pose, err, a_obj(0),t1,t2,t3,&t4,&t5);
elib::Utils::fillVar(t4, a+4);elib::Utils::fillVar(t5, a+5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_deformable_surface_matching_result);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="sampled_scene";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=0;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;
callHalcon(get_deformable_surface_matching_result, err, t0,t1,t2,&t3);
elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_deformable_surface_model_param);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="sampled_model";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(get_deformable_surface_model_param, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_display_scene_3d_info);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4="depth";else elib::Utils::fillTuple(a+4, t4);
__tuple t5;
callHalcon(get_display_scene_3d_info, err, t0,t1,t2,t3,t4,&t5);
elib::Utils::fillVar(t5, a+5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_disp_object_model_3d_info);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="depth";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;
callHalcon(get_disp_object_model_3d_info, err, t0,t1,t2,t3,&t4);
elib::Utils::fillVar(t4, a+4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_object_model_3d_params);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="num_points";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(get_object_model_3d_params, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_rectangle_pose);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4="nonweighted";else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=2.0;else elib::Utils::fillTuple(a+5, t5);
__tuple t6;
__tuple t7;
__tuple t8;
callHalcon(get_rectangle_pose, err, a_obj(0),t1,t2,t3,t4,t5,&t6,&t7,&t8);
elib::Utils::fillVar(t6, a+6);elib::Utils::fillVar(t7, a+7);elib::Utils::fillVar(t8, a+8);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_shape_model_3d_contours);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=1;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=1;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;
callHalcon(get_shape_model_3d_contours, err, varp_obj(0),t1,t2,t3,&t4);
elib::Utils::fillVar(t4, a+4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_shape_model_3d_params);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="num_levels_max";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(get_shape_model_3d_params, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_sheet_of_light_param);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="method";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(get_sheet_of_light_param, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_sheet_of_light_result);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="disparity";else elib::Utils::fillTuple(a+2, t2);
callHalcon(get_sheet_of_light_result, err, varp_obj(0),t1,t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_sheet_of_light_result_object_model_3d);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(get_sheet_of_light_result_object_model_3d, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_stereo_model_image_pairs);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
__tuple t2;
callHalcon(get_stereo_model_image_pairs, err, t0,&t1,&t2);
elib::Utils::fillVar(t1, a+1);elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_stereo_model_object);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
callHalcon(get_stereo_model_object, err, varp_obj(0),t1,t2,t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_stereo_model_param);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(get_stereo_model_param, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_surface_matching_result);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="pose";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=0;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;
callHalcon(get_surface_matching_result, err, t0,t1,t2,&t3);
elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_surface_model_param);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="diameter";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(get_surface_model_param, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_intersect_lines_of_sight);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;elib::Utils::fillTuple(a+4, t4);
__tuple t5;elib::Utils::fillTuple(a+5, t5);
__tuple t6;elib::Utils::fillTuple(a+6, t6);
__tuple t7;
__tuple t8;
__tuple t9;
__tuple t10;
callHalcon(intersect_lines_of_sight, err, t0,t1,t2,t3,t4,t5,t6,&t7,&t8,&t9,&t10);
elib::Utils::fillVar(t7, a+7);elib::Utils::fillVar(t8, a+8);elib::Utils::fillVar(t9, a+9);elib::Utils::fillVar(t10, a+10);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_intersect_plane_object_model_3d);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1)){const char* vs1[]={"0","0","0","0","0","0","0"};ehalcon::Utils::arr2TupleString(vs1, 7, t1);}else elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(intersect_plane_object_model_3d, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_match_essential_matrix_ransac);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;elib::Utils::fillTuple(a+4, t4);
__tuple t5;elib::Utils::fillTuple(a+5, t5);
__tuple t6;elib::Utils::fillTuple(a+6, t6);
__tuple t7;elib::Utils::fillTuple(a+7, t7);
__tuple t8;if(v_empty(8))t8="ssd";else elib::Utils::fillTuple(a+8, t8);
__tuple t9;if(v_empty(9))t9=10;else elib::Utils::fillTuple(a+9, t9);
__tuple t10;if(v_empty(10))t10=0;else elib::Utils::fillTuple(a+10, t10);
__tuple t11;if(v_empty(11))t11=0;else elib::Utils::fillTuple(a+11, t11);
__tuple t12;if(v_empty(12))t12=200;else elib::Utils::fillTuple(a+12, t12);
__tuple t13;if(v_empty(13))t13=200;else elib::Utils::fillTuple(a+13, t13);
__tuple t14;if(v_empty(14))t14=0.0;else elib::Utils::fillTuple(a+14, t14);
__tuple t15;if(v_empty(15))t15=10;else elib::Utils::fillTuple(a+15, t15);
__tuple t16;if(v_empty(16))t16="normalized_dlt";else elib::Utils::fillTuple(a+16, t16);
__tuple t17;if(v_empty(17))t17=1;else elib::Utils::fillTuple(a+17, t17);
__tuple t18;if(v_empty(18))t18=0;else elib::Utils::fillTuple(a+18, t18);
__tuple t19;
__tuple t20;
__tuple t21;
__tuple t22;
__tuple t23;
callHalcon(match_essential_matrix_ransac, err, a_obj(0),a_obj(1),t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,t13,t14,t15,t16,t17,t18,&t19,&t20,&t21,&t22,&t23);
elib::Utils::fillVar(t19, a+19);elib::Utils::fillVar(t20, a+20);elib::Utils::fillVar(t21, a+21);elib::Utils::fillVar(t22, a+22);elib::Utils::fillVar(t23, a+23);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_match_fundamental_matrix_distortion_ransac);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;elib::Utils::fillTuple(a+4, t4);
__tuple t5;elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6="ncc";else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7=10;else elib::Utils::fillTuple(a+7, t7);
__tuple t8;if(v_empty(8))t8=0;else elib::Utils::fillTuple(a+8, t8);
__tuple t9;if(v_empty(9))t9=0;else elib::Utils::fillTuple(a+9, t9);
__tuple t10;if(v_empty(10))t10=200;else elib::Utils::fillTuple(a+10, t10);
__tuple t11;if(v_empty(11))t11=200;else elib::Utils::fillTuple(a+11, t11);
__tuple t12;if(v_empty(12))t12=0.0;else elib::Utils::fillTuple(a+12, t12);
__tuple t13;if(v_empty(13))t13=0.7;else elib::Utils::fillTuple(a+13, t13);
__tuple t14;if(v_empty(14))t14="gold_standard";else elib::Utils::fillTuple(a+14, t14);
__tuple t15;if(v_empty(15))t15=1;else elib::Utils::fillTuple(a+15, t15);
__tuple t16;if(v_empty(16))t16=0;else elib::Utils::fillTuple(a+16, t16);
__tuple t17;
__tuple t18;
__tuple t19;
__tuple t20;
__tuple t21;
callHalcon(match_fundamental_matrix_distortion_ransac, err, a_obj(0),a_obj(1),t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,t13,t14,t15,t16,&t17,&t18,&t19,&t20,&t21);
elib::Utils::fillVar(t17, a+17);elib::Utils::fillVar(t18, a+18);elib::Utils::fillVar(t19, a+19);elib::Utils::fillVar(t20, a+20);elib::Utils::fillVar(t21, a+21);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_match_fundamental_matrix_ransac);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;elib::Utils::fillTuple(a+4, t4);
__tuple t5;elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6="ssd";else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7=10;else elib::Utils::fillTuple(a+7, t7);
__tuple t8;if(v_empty(8))t8=0;else elib::Utils::fillTuple(a+8, t8);
__tuple t9;if(v_empty(9))t9=0;else elib::Utils::fillTuple(a+9, t9);
__tuple t10;if(v_empty(10))t10=200;else elib::Utils::fillTuple(a+10, t10);
__tuple t11;if(v_empty(11))t11=200;else elib::Utils::fillTuple(a+11, t11);
__tuple t12;if(v_empty(12))t12=0.0;else elib::Utils::fillTuple(a+12, t12);
__tuple t13;if(v_empty(13))t13=10;else elib::Utils::fillTuple(a+13, t13);
__tuple t14;if(v_empty(14))t14="normalized_dlt";else elib::Utils::fillTuple(a+14, t14);
__tuple t15;if(v_empty(15))t15=1;else elib::Utils::fillTuple(a+15, t15);
__tuple t16;if(v_empty(16))t16=0;else elib::Utils::fillTuple(a+16, t16);
__tuple t17;
__tuple t18;
__tuple t19;
__tuple t20;
__tuple t21;
callHalcon(match_fundamental_matrix_ransac, err, a_obj(0),a_obj(1),t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,t13,t14,t15,t16,&t17,&t18,&t19,&t20,&t21);
elib::Utils::fillVar(t17, a+17);elib::Utils::fillVar(t18, a+18);elib::Utils::fillVar(t19, a+19);elib::Utils::fillVar(t20, a+20);elib::Utils::fillVar(t21, a+21);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_match_rel_pose_ransac);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;elib::Utils::fillTuple(a+4, t4);
__tuple t5;elib::Utils::fillTuple(a+5, t5);
__tuple t6;elib::Utils::fillTuple(a+6, t6);
__tuple t7;elib::Utils::fillTuple(a+7, t7);
__tuple t8;if(v_empty(8))t8="ssd";else elib::Utils::fillTuple(a+8, t8);
__tuple t9;if(v_empty(9))t9=10;else elib::Utils::fillTuple(a+9, t9);
__tuple t10;if(v_empty(10))t10=0;else elib::Utils::fillTuple(a+10, t10);
__tuple t11;if(v_empty(11))t11=0;else elib::Utils::fillTuple(a+11, t11);
__tuple t12;if(v_empty(12))t12=200;else elib::Utils::fillTuple(a+12, t12);
__tuple t13;if(v_empty(13))t13=200;else elib::Utils::fillTuple(a+13, t13);
__tuple t14;if(v_empty(14))t14=0.0;else elib::Utils::fillTuple(a+14, t14);
__tuple t15;if(v_empty(15))t15=10;else elib::Utils::fillTuple(a+15, t15);
__tuple t16;if(v_empty(16))t16="normalized_dlt";else elib::Utils::fillTuple(a+16, t16);
__tuple t17;if(v_empty(17))t17=1;else elib::Utils::fillTuple(a+17, t17);
__tuple t18;if(v_empty(18))t18=0;else elib::Utils::fillTuple(a+18, t18);
__tuple t19;
__tuple t20;
__tuple t21;
__tuple t22;
__tuple t23;
callHalcon(match_rel_pose_ransac, err, a_obj(0),a_obj(1),t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,t13,t14,t15,t16,t17,t18,&t19,&t20,&t21,&t22,&t23);
elib::Utils::fillVar(t19, a+19);elib::Utils::fillVar(t20, a+20);elib::Utils::fillVar(t21, a+21);elib::Utils::fillVar(t22, a+22);elib::Utils::fillVar(t23, a+23);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_max_diameter_object_model_3d);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(max_diameter_object_model_3d, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_measure_profile_sheet_of_light);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
callHalcon(measure_profile_sheet_of_light, err, a_obj(0),t1,t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_moments_object_model_3d);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="mean_points";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(moments_object_model_3d, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_object_model_3d_to_xyz);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4="cartesian";else elib::Utils::fillTuple(a+4, t4);
__tuple t5;elib::Utils::fillTuple(a+5, t5);
__tuple t6;elib::Utils::fillTuple(a+6, t6);
callHalcon(object_model_3d_to_xyz, err, varp_obj(0),varp_obj(1),varp_obj(2),t3,t4,t5,t6);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_photometric_stereo);
__tuple t4;if(v_empty(4))t4=45.0;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=45.0;else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6="all";else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7="poisson";else elib::Utils::fillTuple(a+7, t7);
__tuple t8;if(v_empty(8))t8="";else elib::Utils::fillTuple(a+8, t8);
__tuple t9;if(v_empty(9))t9="";else elib::Utils::fillTuple(a+9, t9);
callHalcon(photometric_stereo, err, a_obj(0),varp_obj(1),varp_obj(2),varp_obj(3),t4,t5,t6,t7,t8,t9);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_phot_stereo);
__tuple t2;if(v_empty(2))t2=45.0;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=45.0;else elib::Utils::fillTuple(a+3, t3);
callHalcon(phot_stereo, err, a_obj(0),varp_obj(1),t2,t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_prepare_object_model_3d);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="shape_based_matching_3d";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="true";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4="";else elib::Utils::fillTuple(a+4, t4);
callHalcon(prepare_object_model_3d, err, t0,t1,t2,t3,t4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_projective_trans_object_model_3d);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(projective_trans_object_model_3d, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_project_object_model_3d);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4="";else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5="";else elib::Utils::fillTuple(a+5, t5);
callHalcon(project_object_model_3d, err, varp_obj(0),t1,t2,t3,t4,t5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_project_shape_model_3d);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4="true";else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=0.523599;else elib::Utils::fillTuple(a+5, t5);
callHalcon(project_shape_model_3d, err, varp_obj(0),t1,t2,t3,t4,t5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_query_sheet_of_light_params);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="create_model_params";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(query_sheet_of_light_params, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_read_deformable_surface_model);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(read_deformable_surface_model, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_read_object_model_3d);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="m";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;
__tuple t5;
callHalcon(read_object_model_3d, err, t0,t1,t2,t3,&t4,&t5);
elib::Utils::fillVar(t4, a+4);elib::Utils::fillVar(t5, a+5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_read_object_model_3d_dxf);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="m";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;
__tuple t5;
callHalcon(read_object_model_3d_dxf, err, t0,t1,t2,t3,&t4,&t5);
elib::Utils::fillVar(t4, a+4);elib::Utils::fillVar(t5, a+5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_read_shape_model_3d);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(read_shape_model_3d, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_read_sheet_of_light_model);
__tuple t0;if(v_empty(0))t0="sheet_of_light_model.solm";else elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(read_sheet_of_light_model, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_read_surface_model);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(read_surface_model, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_reconst3d_from_fundamental_matrix);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4="";else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5="";else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6="";else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7="";else elib::Utils::fillTuple(a+7, t7);
__tuple t8;if(v_empty(8))t8="";else elib::Utils::fillTuple(a+8, t8);
__tuple t9;if(v_empty(9))t9="";else elib::Utils::fillTuple(a+9, t9);
__tuple t10;elib::Utils::fillTuple(a+10, t10);
__tuple t11;if(v_empty(11))t11="";else elib::Utils::fillTuple(a+11, t11);
__tuple t12;
__tuple t13;
__tuple t14;
__tuple t15;
__tuple t16;
callHalcon(reconst3d_from_fundamental_matrix, err, t0,t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,&t12,&t13,&t14,&t15,&t16);
elib::Utils::fillVar(t12, a+12);elib::Utils::fillVar(t13, a+13);elib::Utils::fillVar(t14, a+14);elib::Utils::fillVar(t15, a+15);elib::Utils::fillVar(t16, a+16);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_reconstruct_height_field_from_gradient);
__tuple t2;if(v_empty(2))t2="poisson";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4="";else elib::Utils::fillTuple(a+4, t4);
callHalcon(reconstruct_height_field_from_gradient, err, a_obj(0),varp_obj(1),t2,t3,t4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_reconstruct_points_stereo);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;elib::Utils::fillTuple(a+4, t4);
__tuple t5;elib::Utils::fillTuple(a+5, t5);
__tuple t6;
__tuple t7;
__tuple t8;
__tuple t9;
__tuple t10;
callHalcon(reconstruct_points_stereo, err, t0,t1,t2,t3,t4,t5,&t6,&t7,&t8,&t9,&t10);
elib::Utils::fillVar(t6, a+6);elib::Utils::fillVar(t7, a+7);elib::Utils::fillVar(t8, a+8);elib::Utils::fillVar(t9, a+9);elib::Utils::fillVar(t10, a+10);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_reconstruct_surface_stereo);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(reconstruct_surface_stereo, err, a_obj(0),t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_reduce_object_model_3d_by_view);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;
callHalcon(reduce_object_model_3d_by_view, err, a_obj(0),t1,t2,t3,&t4);
elib::Utils::fillVar(t4, a+4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_refine_deformable_surface_model);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=0.05;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4="";else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5="";else elib::Utils::fillTuple(a+5, t5);
__tuple t6;
__tuple t7;
callHalcon(refine_deformable_surface_model, err, t0,t1,t2,t3,t4,t5,&t6,&t7);
elib::Utils::fillVar(t6, a+6);elib::Utils::fillVar(t7, a+7);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_refine_surface_model_pose);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=0;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4="false";else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5="";else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6="";else elib::Utils::fillTuple(a+6, t6);
__tuple t7;
__tuple t8;
__tuple t9;
callHalcon(refine_surface_model_pose, err, t0,t1,t2,t3,t4,t5,t6,&t7,&t8,&t9);
elib::Utils::fillVar(t7, a+7);elib::Utils::fillVar(t8, a+8);elib::Utils::fillVar(t9, a+9);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_register_object_model_3d_global);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="global";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4="";else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5="";else elib::Utils::fillTuple(a+5, t5);
__tuple t6;
__tuple t7;
callHalcon(register_object_model_3d_global, err, t0,t1,t2,t3,t4,t5,&t6,&t7);
elib::Utils::fillVar(t6, a+6);elib::Utils::fillVar(t7, a+7);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_register_object_model_3d_pair);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="matching";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4="";else elib::Utils::fillTuple(a+4, t4);
__tuple t5;
__tuple t6;
callHalcon(register_object_model_3d_pair, err, t0,t1,t2,t3,t4,&t5,&t6);
elib::Utils::fillVar(t5, a+5);elib::Utils::fillVar(t6, a+6);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_rel_pose_to_fundamental_matrix);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;
__tuple t5;
callHalcon(rel_pose_to_fundamental_matrix, err, t0,t1,t2,t3,&t4,&t5);
elib::Utils::fillVar(t4, a+4);elib::Utils::fillVar(t5, a+5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_remove_scene_3d_camera);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
callHalcon(remove_scene_3d_camera, err, t0,t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_remove_scene_3d_instance);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
callHalcon(remove_scene_3d_instance, err, t0,t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_remove_scene_3d_light);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
callHalcon(remove_scene_3d_light, err, t0,t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_render_object_model_3d);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4="";else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5="";else elib::Utils::fillTuple(a+5, t5);
callHalcon(render_object_model_3d, err, varp_obj(0),t1,t2,t3,t4,t5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_render_scene_3d);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
callHalcon(render_scene_3d, err, varp_obj(0),t1,t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_reset_sheet_of_light_model);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
callHalcon(reset_sheet_of_light_model, err, t0);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_rigid_trans_object_model_3d);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(rigid_trans_object_model_3d, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_sample_object_model_3d);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="fast";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=0.05;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4="";else elib::Utils::fillTuple(a+4, t4);
__tuple t5;
callHalcon(sample_object_model_3d, err, t0,t1,t2,t3,t4,&t5);
elib::Utils::fillVar(t5, a+5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_segment_object_model_3d);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;
callHalcon(segment_object_model_3d, err, t0,t1,t2,&t3);
elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_select_object_model_3d);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="has_triangles";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="and";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=1;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=1;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;
callHalcon(select_object_model_3d, err, t0,t1,t2,t3,t4,&t5);
elib::Utils::fillVar(t5, a+5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_select_points_object_model_3d);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="point_coord_z";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=0.5;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=1.0;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;
callHalcon(select_points_object_model_3d, err, t0,t1,t2,t3,&t4);
elib::Utils::fillVar(t4, a+4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_serialize_deformable_surface_model);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(serialize_deformable_surface_model, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_serialize_object_model_3d);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(serialize_object_model_3d, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_serialize_shape_model_3d);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(serialize_shape_model_3d, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_serialize_sheet_of_light_model);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(serialize_sheet_of_light_model, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_serialize_surface_model);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(serialize_surface_model, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_set_object_model_3d_attrib);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;
callHalcon(set_object_model_3d_attrib, err, t0,t1,t2,t3,&t4);
elib::Utils::fillVar(t4, a+4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_set_object_model_3d_attrib_mod);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
callHalcon(set_object_model_3d_attrib_mod, err, t0,t1,t2,t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_set_profile_sheet_of_light);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
callHalcon(set_profile_sheet_of_light, err, a_obj(0),t1,t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_set_scene_3d_camera_pose);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
callHalcon(set_scene_3d_camera_pose, err, t0,t1,t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_set_scene_3d_instance_param);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="color";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="green";else elib::Utils::fillTuple(a+3, t3);
callHalcon(set_scene_3d_instance_param, err, t0,t1,t2,t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_set_scene_3d_instance_pose);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
callHalcon(set_scene_3d_instance_pose, err, t0,t1,t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_set_scene_3d_light_param);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="ambient";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3)){const char* vs3[]={"0.2","0.2","0.2"};ehalcon::Utils::arr2TupleString(vs3, 3, t3);}else elib::Utils::fillTuple(a+3, t3);
callHalcon(set_scene_3d_light_param, err, t0,t1,t2,t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_set_scene_3d_param);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="quality";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="high";else elib::Utils::fillTuple(a+2, t2);
callHalcon(set_scene_3d_param, err, t0,t1,t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_set_scene_3d_to_world_pose);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
callHalcon(set_scene_3d_to_world_pose, err, t0,t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_set_sheet_of_light_param);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="method";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="center_of_gravity";else elib::Utils::fillTuple(a+2, t2);
callHalcon(set_sheet_of_light_param, err, t0,t1,t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_set_stereo_model_image_pairs);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
callHalcon(set_stereo_model_image_pairs, err, t0,t1,t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_set_stereo_model_param);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
callHalcon(set_stereo_model_param, err, t0,t1,t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_sfs_mod_lr);
__tuple t2;if(v_empty(2))t2=45.0;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=45.0;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=1.0;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=0.0;else elib::Utils::fillTuple(a+5, t5);
callHalcon(sfs_mod_lr, err, a_obj(0),varp_obj(1),t2,t3,t4,t5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_sfs_orig_lr);
__tuple t2;if(v_empty(2))t2=45.0;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=45.0;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=1.0;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=0.0;else elib::Utils::fillTuple(a+5, t5);
callHalcon(sfs_orig_lr, err, a_obj(0),varp_obj(1),t2,t3,t4,t5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_sfs_pentland);
__tuple t2;if(v_empty(2))t2=45.0;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=45.0;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=1.0;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=0.0;else elib::Utils::fillTuple(a+5, t5);
callHalcon(sfs_pentland, err, a_obj(0),varp_obj(1),t2,t3,t4,t5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_simplify_object_model_3d);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="preserve_point_coordinates";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4="";else elib::Utils::fillTuple(a+4, t4);
__tuple t5;
callHalcon(simplify_object_model_3d, err, t0,t1,t2,t3,t4,&t5);
elib::Utils::fillVar(t5, a+5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_smallest_bounding_box_object_model_3d);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="oriented";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;
__tuple t3;
__tuple t4;
__tuple t5;
callHalcon(smallest_bounding_box_object_model_3d, err, t0,t1,&t2,&t3,&t4,&t5);
elib::Utils::fillVar(t2, a+2);elib::Utils::fillVar(t3, a+3);elib::Utils::fillVar(t4, a+4);elib::Utils::fillVar(t5, a+5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_smallest_sphere_object_model_3d);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
__tuple t2;
callHalcon(smallest_sphere_object_model_3d, err, t0,&t1,&t2);
elib::Utils::fillVar(t1, a+1);elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_smooth_object_model_3d);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="mls";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;
callHalcon(smooth_object_model_3d, err, t0,t1,t2,t3,&t4);
elib::Utils::fillVar(t4, a+4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_surface_normals_object_model_3d);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="mls";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;
callHalcon(surface_normals_object_model_3d, err, t0,t1,t2,t3,&t4);
elib::Utils::fillVar(t4, a+4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_trans_pose_shape_model_3d);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="ref_to_model";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;
callHalcon(trans_pose_shape_model_3d, err, t0,t1,t2,&t3);
elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_triangulate_object_model_3d);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="greedy";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;
__tuple t5;
callHalcon(triangulate_object_model_3d, err, t0,t1,t2,t3,&t4,&t5);
elib::Utils::fillVar(t4, a+4);elib::Utils::fillVar(t5, a+5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_union_object_model_3d);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="points_surface";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(union_object_model_3d, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_vector_to_essential_matrix);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4="";else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5="";else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6="";else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7="";else elib::Utils::fillTuple(a+7, t7);
__tuple t8;if(v_empty(8))t8="";else elib::Utils::fillTuple(a+8, t8);
__tuple t9;if(v_empty(9))t9="";else elib::Utils::fillTuple(a+9, t9);
__tuple t10;elib::Utils::fillTuple(a+10, t10);
__tuple t11;elib::Utils::fillTuple(a+11, t11);
__tuple t12;if(v_empty(12))t12="normalized_dlt";else elib::Utils::fillTuple(a+12, t12);
__tuple t13;
__tuple t14;
__tuple t15;
__tuple t16;
__tuple t17;
__tuple t18;
__tuple t19;
callHalcon(vector_to_essential_matrix, err, t0,t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,&t13,&t14,&t15,&t16,&t17,&t18,&t19);
elib::Utils::fillVar(t13, a+13);elib::Utils::fillVar(t14, a+14);elib::Utils::fillVar(t15, a+15);elib::Utils::fillVar(t16, a+16);elib::Utils::fillVar(t17, a+17);elib::Utils::fillVar(t18, a+18);elib::Utils::fillVar(t19, a+19);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_vector_to_fundamental_matrix);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4="";else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5="";else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6="";else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7="";else elib::Utils::fillTuple(a+7, t7);
__tuple t8;if(v_empty(8))t8="";else elib::Utils::fillTuple(a+8, t8);
__tuple t9;if(v_empty(9))t9="";else elib::Utils::fillTuple(a+9, t9);
__tuple t10;if(v_empty(10))t10="normalized_dlt";else elib::Utils::fillTuple(a+10, t10);
__tuple t11;
__tuple t12;
__tuple t13;
__tuple t14;
__tuple t15;
__tuple t16;
__tuple t17;
__tuple t18;
callHalcon(vector_to_fundamental_matrix, err, t0,t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,&t11,&t12,&t13,&t14,&t15,&t16,&t17,&t18);
elib::Utils::fillVar(t11, a+11);elib::Utils::fillVar(t12, a+12);elib::Utils::fillVar(t13, a+13);elib::Utils::fillVar(t14, a+14);elib::Utils::fillVar(t15, a+15);elib::Utils::fillVar(t16, a+16);elib::Utils::fillVar(t17, a+17);elib::Utils::fillVar(t18, a+18);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_vector_to_fundamental_matrix_distortion);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4="";else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5="";else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6="";else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7="";else elib::Utils::fillTuple(a+7, t7);
__tuple t8;if(v_empty(8))t8="";else elib::Utils::fillTuple(a+8, t8);
__tuple t9;if(v_empty(9))t9="";else elib::Utils::fillTuple(a+9, t9);
__tuple t10;elib::Utils::fillTuple(a+10, t10);
__tuple t11;elib::Utils::fillTuple(a+11, t11);
__tuple t12;if(v_empty(12))t12="gold_standard";else elib::Utils::fillTuple(a+12, t12);
__tuple t13;
__tuple t14;
__tuple t15;
__tuple t16;
__tuple t17;
__tuple t18;
__tuple t19;
callHalcon(vector_to_fundamental_matrix_distortion, err, t0,t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,&t13,&t14,&t15,&t16,&t17,&t18,&t19);
elib::Utils::fillVar(t13, a+13);elib::Utils::fillVar(t14, a+14);elib::Utils::fillVar(t15, a+15);elib::Utils::fillVar(t16, a+16);elib::Utils::fillVar(t17, a+17);elib::Utils::fillVar(t18, a+18);elib::Utils::fillVar(t19, a+19);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_vector_to_rel_pose);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4="";else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5="";else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6="";else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7="";else elib::Utils::fillTuple(a+7, t7);
__tuple t8;if(v_empty(8))t8="";else elib::Utils::fillTuple(a+8, t8);
__tuple t9;if(v_empty(9))t9="";else elib::Utils::fillTuple(a+9, t9);
__tuple t10;elib::Utils::fillTuple(a+10, t10);
__tuple t11;elib::Utils::fillTuple(a+11, t11);
__tuple t12;if(v_empty(12))t12="normalized_dlt";else elib::Utils::fillTuple(a+12, t12);
__tuple t13;
__tuple t14;
__tuple t15;
__tuple t16;
__tuple t17;
__tuple t18;
__tuple t19;
callHalcon(vector_to_rel_pose, err, t0,t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,&t13,&t14,&t15,&t16,&t17,&t18,&t19);
elib::Utils::fillVar(t13, a+13);elib::Utils::fillVar(t14, a+14);elib::Utils::fillVar(t15, a+15);elib::Utils::fillVar(t16, a+16);elib::Utils::fillVar(t17, a+17);elib::Utils::fillVar(t18, a+18);elib::Utils::fillVar(t19, a+19);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_volume_object_model_3d_relative_to_plane);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1)){const char* vs1[]={"0","0","0","0","0","0","0"};ehalcon::Utils::arr2TupleString(vs1, 7, t1);}else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="signed";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="true";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;
callHalcon(volume_object_model_3d_relative_to_plane, err, t0,t1,t2,t3,&t4);
elib::Utils::fillVar(t4, a+4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_write_deformable_surface_model);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
callHalcon(write_deformable_surface_model, err, t0,t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_write_object_model_3d);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="om3";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4="";else elib::Utils::fillTuple(a+4, t4);
callHalcon(write_object_model_3d, err, t0,t1,t2,t3,t4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_write_shape_model_3d);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
callHalcon(write_shape_model_3d, err, t0,t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_write_sheet_of_light_model);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="sheet_of_light_model.solm";else elib::Utils::fillTuple(a+1, t1);
callHalcon(write_sheet_of_light_model, err, t0,t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_write_surface_model);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
callHalcon(write_surface_model, err, t0,t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_xyz_to_object_model_3d);
__tuple t3;
callHalcon(xyz_to_object_model_3d, err, a_obj(0),a_obj(1),a_obj(2),&t3);
elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_clear_all_bar_code_models);
callHalcon(clear_all_bar_code_models, err);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_clear_bar_code_model);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
callHalcon(clear_bar_code_model, err, t0);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_create_bar_code_model);
__tuple t0;if(v_empty(0))t0="";else elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(create_bar_code_model, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_decode_1d_bar_code);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;
__tuple t3;
__tuple t4;
callHalcon(decode_1d_bar_code, err, t0,t1,&t2,&t3,&t4);
elib::Utils::fillVar(t2, a+2);elib::Utils::fillVar(t3, a+3);elib::Utils::fillVar(t4, a+4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_decode_bar_code_rectangle2);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="EAN-13";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=50.0;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=100.0;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=0.0;else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6=200.0;else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7=100.0;else elib::Utils::fillTuple(a+7, t7);
__tuple t8;
callHalcon(decode_bar_code_rectangle2, err, a_obj(0),t1,t2,t3,t4,t5,t6,t7,&t8);
elib::Utils::fillVar(t8, a+8);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_deserialize_bar_code_model);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(deserialize_bar_code_model, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_discrete_1d_bar_code);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(discrete_1d_bar_code, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_find_1d_bar_code);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4="";else elib::Utils::fillTuple(a+4, t4);
__tuple t5;
__tuple t6;
__tuple t7;
callHalcon(find_1d_bar_code, err, a_obj(0),varp_obj(1),t2,t3,t4,&t5,&t6,&t7);
elib::Utils::fillVar(t5, a+5);elib::Utils::fillVar(t6, a+6);elib::Utils::fillVar(t7, a+7);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_find_1d_bar_code_region);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4="";else elib::Utils::fillTuple(a+4, t4);
__tuple t5;
callHalcon(find_1d_bar_code_region, err, a_obj(0),varp_obj(1),t2,t3,t4,&t5);
elib::Utils::fillVar(t5, a+5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_find_1d_bar_code_scanline);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4="";else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5="false";else elib::Utils::fillTuple(a+5, t5);
__tuple t6;
__tuple t7;
__tuple t8;
__tuple t9;
__tuple t10;
__tuple t11;
__tuple t12;
callHalcon(find_1d_bar_code_scanline, err, a_obj(0),varp_obj(1),t2,t3,t4,t5,&t6,&t7,&t8,&t9,&t10,&t11,&t12);
elib::Utils::fillVar(t6, a+6);elib::Utils::fillVar(t7, a+7);elib::Utils::fillVar(t8, a+8);elib::Utils::fillVar(t9, a+9);elib::Utils::fillVar(t10, a+10);elib::Utils::fillVar(t11, a+11);elib::Utils::fillVar(t12, a+12);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_find_bar_code);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="auto";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;
callHalcon(find_bar_code, err, a_obj(0),varp_obj(1),t2,t3,&t4);
elib::Utils::fillVar(t4, a+4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_gen_1d_bar_code_descr);
__tuple t0;if(v_empty(0))t0="EAN 13";else elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=6;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=10;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;
callHalcon(gen_1d_bar_code_descr, err, t0,t1,t2,&t3);
elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_gen_1d_bar_code_descr_gen);
__tuple t0;if(v_empty(0))t0=30;else elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=30;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=2;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3)){const char* vs3[]={"1","-1"};ehalcon::Utils::arr2TupleString(vs3, 2, t3);}else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4)){const char* vs4[]={"1","-1"};ehalcon::Utils::arr2TupleString(vs4, 2, t4);}else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=2.5;else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6="false";else elib::Utils::fillTuple(a+6, t6);
__tuple t7;
callHalcon(gen_1d_bar_code_descr_gen, err, t0,t1,t2,t3,t4,t5,t6,&t7);
elib::Utils::fillVar(t7, a+7);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_1d_bar_code);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;elib::Utils::fillTuple(a+4, t4);
__tuple t5;
callHalcon(get_1d_bar_code, err, a_obj(0),t1,t2,t3,t4,&t5);
elib::Utils::fillVar(t5, a+5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_1d_bar_code_scanline);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5="false";else elib::Utils::fillTuple(a+5, t5);
__tuple t6;
__tuple t7;
__tuple t8;
__tuple t9;
__tuple t10;
callHalcon(get_1d_bar_code_scanline, err, a_obj(0),t1,t2,t3,t4,t5,&t6,&t7,&t8,&t9,&t10);
elib::Utils::fillVar(t6, a+6);elib::Utils::fillVar(t7, a+7);elib::Utils::fillVar(t8, a+8);elib::Utils::fillVar(t9, a+9);elib::Utils::fillVar(t10, a+10);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_bar_code_object);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="all";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="candidate_regions";else elib::Utils::fillTuple(a+3, t3);
callHalcon(get_bar_code_object, err, varp_obj(0),t1,t2,t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_bar_code_param);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="element_size_min";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(get_bar_code_param, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_bar_code_param_specific);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="EAN-13";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="check_char";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;
callHalcon(get_bar_code_param_specific, err, t0,t1,t2,&t3);
elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_bar_code_result);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="all";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="decoded_types";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;
callHalcon(get_bar_code_result, err, t0,t1,t2,&t3);
elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_query_bar_code_params);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="trained_general";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(query_bar_code_params, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_read_bar_code_model);
__tuple t0;if(v_empty(0))t0="bar_code_model.bcm";else elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(read_bar_code_model, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_serialize_bar_code_model);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(serialize_bar_code_model, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_set_bar_code_param);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="element_size_min";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=8;else elib::Utils::fillTuple(a+2, t2);
callHalcon(set_bar_code_param, err, t0,t1,t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_set_bar_code_param_specific);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="EAN-13";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="check_char";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="absent";else elib::Utils::fillTuple(a+3, t3);
callHalcon(set_bar_code_param_specific, err, t0,t1,t2,t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_write_bar_code_model);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="bar_code_model.bcm";else elib::Utils::fillTuple(a+1, t1);
callHalcon(write_bar_code_model, err, t0,t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_clear_all_data_code_2d_models);
callHalcon(clear_all_data_code_2d_models, err);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_clear_data_code_2d_model);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
callHalcon(clear_data_code_2d_model, err, t0);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_create_data_code_2d_model);
__tuple t0;if(v_empty(0))t0="Data Matrix ECC 200";else elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;
callHalcon(create_data_code_2d_model, err, t0,t1,t2,&t3);
elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_decode_2d_bar_code);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;
__tuple t4;
__tuple t5;
__tuple t6;
__tuple t7;
callHalcon(decode_2d_bar_code, err, t0,t1,t2,&t3,&t4,&t5,&t6,&t7);
elib::Utils::fillVar(t3, a+3);elib::Utils::fillVar(t4, a+4);elib::Utils::fillVar(t5, a+5);elib::Utils::fillVar(t6, a+6);elib::Utils::fillVar(t7, a+7);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_deserialize_data_code_2d_model);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(deserialize_data_code_2d_model, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_find_2d_bar_code);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4="";else elib::Utils::fillTuple(a+4, t4);
__tuple t5;
callHalcon(find_2d_bar_code, err, a_obj(0),varp_obj(1),t2,t3,t4,&t5);
elib::Utils::fillVar(t5, a+5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_find_data_code_2d);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4="";else elib::Utils::fillTuple(a+4, t4);
__tuple t5;
__tuple t6;
callHalcon(find_data_code_2d, err, a_obj(0),varp_obj(1),t2,t3,t4,&t5,&t6);
elib::Utils::fillVar(t5, a+5);elib::Utils::fillVar(t6, a+6);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_gen_2d_bar_code_descr);
__tuple t0;if(v_empty(0))t0="Data Matrix ECC 200";else elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;
callHalcon(gen_2d_bar_code_descr, err, t0,t1,t2,&t3);
elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_2d_bar_code);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4="";else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5="";else elib::Utils::fillTuple(a+5, t5);
__tuple t6;
__tuple t7;
callHalcon(get_2d_bar_code, err, a_obj(0),a_obj(1),t2,t3,t4,t5,&t6,&t7);
elib::Utils::fillVar(t6, a+6);elib::Utils::fillVar(t7, a+7);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_2d_bar_code_pos);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4="";else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5="";else elib::Utils::fillTuple(a+5, t5);
__tuple t6;
__tuple t7;
__tuple t8;
__tuple t9;
callHalcon(get_2d_bar_code_pos, err, a_obj(0),a_obj(1),t2,t3,t4,t5,&t6,&t7,&t8,&t9);
elib::Utils::fillVar(t6, a+6);elib::Utils::fillVar(t7, a+7);elib::Utils::fillVar(t8, a+8);elib::Utils::fillVar(t9, a+9);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_data_code_2d_objects);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="all_candidates";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="candidate_xld";else elib::Utils::fillTuple(a+3, t3);
callHalcon(get_data_code_2d_objects, err, varp_obj(0),t1,t2,t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_data_code_2d_param);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="contrast_min";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(get_data_code_2d_param, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_data_code_2d_results);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="all_candidates";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="status";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;
callHalcon(get_data_code_2d_results, err, t0,t1,t2,&t3);
elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_query_data_code_2d_params);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="get_result_params";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(query_data_code_2d_params, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_read_data_code_2d_model);
__tuple t0;if(v_empty(0))t0="data_code_model.dcm";else elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(read_data_code_2d_model, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_serialize_data_code_2d_model);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(serialize_data_code_2d_model, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_set_data_code_2d_param);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="polarity";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="light_on_dark";else elib::Utils::fillTuple(a+2, t2);
callHalcon(set_data_code_2d_param, err, t0,t1,t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_write_data_code_2d_model);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="data_code_model.dcm";else elib::Utils::fillTuple(a+1, t1);
callHalcon(write_data_code_2d_model, err, t0,t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_append_ocr_trainf);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="train_ocr";else elib::Utils::fillTuple(a+3, t3);
callHalcon(append_ocr_trainf, err, a_obj(0),a_obj(1),t2,t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_clear_all_lexica);
callHalcon(clear_all_lexica, err);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_clear_all_ocr_class_knn);
callHalcon(clear_all_ocr_class_knn, err);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_clear_all_ocr_class_mlp);
callHalcon(clear_all_ocr_class_mlp, err);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_clear_all_ocr_class_svm);
callHalcon(clear_all_ocr_class_svm, err);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_clear_all_text_models);
callHalcon(clear_all_text_models, err);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_clear_lexicon);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
callHalcon(clear_lexicon, err, t0);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_clear_ocr_class_knn);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
callHalcon(clear_ocr_class_knn, err, t0);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_clear_ocr_class_mlp);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
callHalcon(clear_ocr_class_mlp, err, t0);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_clear_ocr_class_svm);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
callHalcon(clear_ocr_class_svm, err, t0);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_clear_text_model);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
callHalcon(clear_text_model, err, t0);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_close_all_ocrs);
callHalcon(close_all_ocrs, err);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_close_all_ocvs);
callHalcon(close_all_ocvs, err);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_close_ocr);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
callHalcon(close_ocr, err, t0);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_close_ocv);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
callHalcon(close_ocv, err, t0);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_concat_ocr_trainf);
__tuple t0;if(v_empty(0))t0="";else elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="all_characters";else elib::Utils::fillTuple(a+1, t1);
callHalcon(concat_ocr_trainf, err, t0,t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_create_lexicon);
__tuple t0;if(v_empty(0))t0="lex1";else elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1)){const char* vs1[]={"word1","word2","word3"};ehalcon::Utils::arr2TupleString(vs1, 3, t1);}else elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(create_lexicon, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_create_ocr_class_box);
__tuple t0;if(v_empty(0))t0=8;else elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=10;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=1;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="default";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4)){const char* vs4[]={"a","b","c"};ehalcon::Utils::arr2TupleString(vs4, 3, t4);}else elib::Utils::fillTuple(a+4, t4);
__tuple t5;
callHalcon(create_ocr_class_box, err, t0,t1,t2,t3,t4,&t5);
elib::Utils::fillVar(t5, a+5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_create_ocr_class_knn);
__tuple t0;if(v_empty(0))t0=8;else elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=10;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="constant";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="default";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4)){const char* vs4[]={"0","1","2","3","4","5","6","7","8","9"};ehalcon::Utils::arr2TupleString(vs4, 10, t4);}else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5="";else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6="";else elib::Utils::fillTuple(a+6, t6);
__tuple t7;
callHalcon(create_ocr_class_knn, err, t0,t1,t2,t3,t4,t5,t6,&t7);
elib::Utils::fillVar(t7, a+7);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_create_ocr_class_mlp);
__tuple t0;if(v_empty(0))t0=8;else elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=10;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="constant";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="default";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4)){const char* vs4[]={"0","1","2","3","4","5","6","7","8","9"};ehalcon::Utils::arr2TupleString(vs4, 10, t4);}else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=80;else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6="none";else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7=10;else elib::Utils::fillTuple(a+7, t7);
__tuple t8;if(v_empty(8))t8=42;else elib::Utils::fillTuple(a+8, t8);
__tuple t9;
callHalcon(create_ocr_class_mlp, err, t0,t1,t2,t3,t4,t5,t6,t7,t8,&t9);
elib::Utils::fillVar(t9, a+9);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_create_ocr_class_svm);
__tuple t0;if(v_empty(0))t0=8;else elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=10;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="constant";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="default";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4)){const char* vs4[]={"0","1","2","3","4","5","6","7","8","9"};ehalcon::Utils::arr2TupleString(vs4, 10, t4);}else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5="rbf";else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6=0.02;else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7=0.05;else elib::Utils::fillTuple(a+7, t7);
__tuple t8;if(v_empty(8))t8="one-versus-one";else elib::Utils::fillTuple(a+8, t8);
__tuple t9;if(v_empty(9))t9="normalization";else elib::Utils::fillTuple(a+9, t9);
__tuple t10;if(v_empty(10))t10=10;else elib::Utils::fillTuple(a+10, t10);
__tuple t11;
callHalcon(create_ocr_class_svm, err, t0,t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,&t11);
elib::Utils::fillVar(t11, a+11);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_create_ocv_proj);
__tuple t0;if(v_empty(0))t0="a";else elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(create_ocv_proj, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_create_text_model);
__tuple t0;
callHalcon(create_text_model, err, &t0);
elib::Utils::fillVar(t0, a+0);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_create_text_model_reader);
__tuple t0;if(v_empty(0))t0="auto";else elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="Industrial_Rej.omc";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(create_text_model_reader, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_deserialize_ocr);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(deserialize_ocr, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_deserialize_ocr_class_knn);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(deserialize_ocr_class_knn, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_deserialize_ocr_class_mlp);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(deserialize_ocr_class_mlp, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_deserialize_ocr_class_svm);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(deserialize_ocr_class_svm, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_deserialize_ocv);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(deserialize_ocv, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_do_ocr_multi);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;
__tuple t4;
callHalcon(do_ocr_multi, err, a_obj(0),a_obj(1),t2,&t3,&t4);
elib::Utils::fillVar(t3, a+3);elib::Utils::fillVar(t4, a+4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_do_ocr_multi_class_knn);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;
__tuple t4;
callHalcon(do_ocr_multi_class_knn, err, a_obj(0),a_obj(1),t2,&t3,&t4);
elib::Utils::fillVar(t3, a+3);elib::Utils::fillVar(t4, a+4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_do_ocr_multi_class_mlp);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;
__tuple t4;
callHalcon(do_ocr_multi_class_mlp, err, a_obj(0),a_obj(1),t2,&t3,&t4);
elib::Utils::fillVar(t3, a+3);elib::Utils::fillVar(t4, a+4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_do_ocr_multi_class_svm);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;
callHalcon(do_ocr_multi_class_svm, err, a_obj(0),a_obj(1),t2,&t3);
elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_do_ocr_single);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;
__tuple t4;
callHalcon(do_ocr_single, err, a_obj(0),a_obj(1),t2,&t3,&t4);
elib::Utils::fillVar(t3, a+3);elib::Utils::fillVar(t4, a+4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_do_ocr_single_class_knn);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=1;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=1;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;
__tuple t6;
callHalcon(do_ocr_single_class_knn, err, a_obj(0),a_obj(1),t2,t3,t4,&t5,&t6);
elib::Utils::fillVar(t5, a+5);elib::Utils::fillVar(t6, a+6);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_do_ocr_single_class_mlp);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=1;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;
__tuple t5;
callHalcon(do_ocr_single_class_mlp, err, a_obj(0),a_obj(1),t2,t3,&t4,&t5);
elib::Utils::fillVar(t4, a+4);elib::Utils::fillVar(t5, a+5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_do_ocr_single_class_svm);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=1;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;
callHalcon(do_ocr_single_class_svm, err, a_obj(0),a_obj(1),t2,t3,&t4);
elib::Utils::fillVar(t4, a+4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_do_ocr_word_knn);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=3;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=2;else elib::Utils::fillTuple(a+5, t5);
__tuple t6;
__tuple t7;
__tuple t8;
__tuple t9;
callHalcon(do_ocr_word_knn, err, a_obj(0),a_obj(1),t2,t3,t4,t5,&t6,&t7,&t8,&t9);
elib::Utils::fillVar(t6, a+6);elib::Utils::fillVar(t7, a+7);elib::Utils::fillVar(t8, a+8);elib::Utils::fillVar(t9, a+9);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_do_ocr_word_mlp);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=3;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=2;else elib::Utils::fillTuple(a+5, t5);
__tuple t6;
__tuple t7;
__tuple t8;
__tuple t9;
callHalcon(do_ocr_word_mlp, err, a_obj(0),a_obj(1),t2,t3,t4,t5,&t6,&t7,&t8,&t9);
elib::Utils::fillVar(t6, a+6);elib::Utils::fillVar(t7, a+7);elib::Utils::fillVar(t8, a+8);elib::Utils::fillVar(t9, a+9);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_do_ocr_word_svm);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=3;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=2;else elib::Utils::fillTuple(a+5, t5);
__tuple t6;
__tuple t7;
__tuple t8;
callHalcon(do_ocr_word_svm, err, a_obj(0),a_obj(1),t2,t3,t4,t5,&t6,&t7,&t8);
elib::Utils::fillVar(t6, a+6);elib::Utils::fillVar(t7, a+7);elib::Utils::fillVar(t8, a+8);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_do_ocv_simple);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="a";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="true";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4="true";else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5="false";else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6="true";else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7=10;else elib::Utils::fillTuple(a+7, t7);
__tuple t8;
callHalcon(do_ocv_simple, err, a_obj(0),t1,t2,t3,t4,t5,t6,t7,&t8);
elib::Utils::fillVar(t8, a+8);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_find_text);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(find_text, err, a_obj(0),t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_features_ocr_class_knn);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="true";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;
callHalcon(get_features_ocr_class_knn, err, a_obj(0),t1,t2,&t3);
elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_features_ocr_class_mlp);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="true";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;
callHalcon(get_features_ocr_class_mlp, err, a_obj(0),t1,t2,&t3);
elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_features_ocr_class_svm);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="true";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;
callHalcon(get_features_ocr_class_svm, err, a_obj(0),t1,t2,&t3);
elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_params_ocr_class_knn);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
__tuple t2;
__tuple t3;
__tuple t4;
__tuple t5;
__tuple t6;
__tuple t7;
callHalcon(get_params_ocr_class_knn, err, t0,&t1,&t2,&t3,&t4,&t5,&t6,&t7);
elib::Utils::fillVar(t1, a+1);elib::Utils::fillVar(t2, a+2);elib::Utils::fillVar(t3, a+3);elib::Utils::fillVar(t4, a+4);elib::Utils::fillVar(t5, a+5);elib::Utils::fillVar(t6, a+6);elib::Utils::fillVar(t7, a+7);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_params_ocr_class_mlp);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
__tuple t2;
__tuple t3;
__tuple t4;
__tuple t5;
__tuple t6;
__tuple t7;
__tuple t8;
callHalcon(get_params_ocr_class_mlp, err, t0,&t1,&t2,&t3,&t4,&t5,&t6,&t7,&t8);
elib::Utils::fillVar(t1, a+1);elib::Utils::fillVar(t2, a+2);elib::Utils::fillVar(t3, a+3);elib::Utils::fillVar(t4, a+4);elib::Utils::fillVar(t5, a+5);elib::Utils::fillVar(t6, a+6);elib::Utils::fillVar(t7, a+7);elib::Utils::fillVar(t8, a+8);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_params_ocr_class_svm);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
__tuple t2;
__tuple t3;
__tuple t4;
__tuple t5;
__tuple t6;
__tuple t7;
__tuple t8;
__tuple t9;
__tuple t10;
__tuple t11;
callHalcon(get_params_ocr_class_svm, err, t0,&t1,&t2,&t3,&t4,&t5,&t6,&t7,&t8,&t9,&t10,&t11);
elib::Utils::fillVar(t1, a+1);elib::Utils::fillVar(t2, a+2);elib::Utils::fillVar(t3, a+3);elib::Utils::fillVar(t4, a+4);elib::Utils::fillVar(t5, a+5);elib::Utils::fillVar(t6, a+6);elib::Utils::fillVar(t7, a+7);elib::Utils::fillVar(t8, a+8);elib::Utils::fillVar(t9, a+9);elib::Utils::fillVar(t10, a+10);elib::Utils::fillVar(t11, a+11);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_prep_info_ocr_class_mlp);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="ocr.trf";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="principal_components";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;
__tuple t4;
callHalcon(get_prep_info_ocr_class_mlp, err, t0,t1,t2,&t3,&t4);
elib::Utils::fillVar(t3, a+3);elib::Utils::fillVar(t4, a+4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_prep_info_ocr_class_svm);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="ocr.trf";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="principal_components";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;
__tuple t4;
callHalcon(get_prep_info_ocr_class_svm, err, t0,t1,t2,&t3,&t4);
elib::Utils::fillVar(t3, a+3);elib::Utils::fillVar(t4, a+4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_regularization_params_ocr_class_mlp);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="weight_prior";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(get_regularization_params_ocr_class_mlp, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_rejection_params_ocr_class_mlp);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="sampling_strategy";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(get_rejection_params_ocr_class_mlp, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_support_vector_num_ocr_class_svm);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
__tuple t2;
callHalcon(get_support_vector_num_ocr_class_svm, err, t0,&t1,&t2);
elib::Utils::fillVar(t1, a+1);elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_support_vector_ocr_class_svm);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(get_support_vector_ocr_class_svm, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_text_model_param);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="min_contrast";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(get_text_model_param, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_import_lexicon);
__tuple t0;if(v_empty(0))t0="lex1";else elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="words.txt";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(import_lexicon, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_info_ocr_class_box);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
__tuple t2;
__tuple t3;
__tuple t4;
__tuple t5;
__tuple t6;
__tuple t7;
callHalcon(info_ocr_class_box, err, t0,&t1,&t2,&t3,&t4,&t5,&t6,&t7);
elib::Utils::fillVar(t1, a+1);elib::Utils::fillVar(t2, a+2);elib::Utils::fillVar(t3, a+3);elib::Utils::fillVar(t4, a+4);elib::Utils::fillVar(t5, a+5);elib::Utils::fillVar(t6, a+6);elib::Utils::fillVar(t7, a+7);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_inspect_lexicon);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(inspect_lexicon, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_lookup_lexicon);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="word";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(lookup_lexicon, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_ocr_change_char);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1)){const char* vs1[]={"a","b","c"};ehalcon::Utils::arr2TupleString(vs1, 3, t1);}else elib::Utils::fillTuple(a+1, t1);
callHalcon(ocr_change_char, err, t0,t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_ocr_get_features);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(ocr_get_features, err, a_obj(0),t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_protect_ocr_trainf);
__tuple t0;if(v_empty(0))t0="";else elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
callHalcon(protect_ocr_trainf, err, t0,t1,t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_read_ocr);
__tuple t0;if(v_empty(0))t0="testnet";else elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(read_ocr, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_read_ocr_class_knn);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(read_ocr_class_knn, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_read_ocr_class_mlp);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(read_ocr_class_mlp, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_read_ocr_class_svm);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(read_ocr_class_svm, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_read_ocr_trainf);
__tuple t1;if(v_empty(1))t1="";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(read_ocr_trainf, err, varp_obj(0),t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_read_ocr_trainf_names);
__tuple t0;if(v_empty(0))t0="";else elib::Utils::fillTuple(a+0, t0);
__tuple t1;
__tuple t2;
callHalcon(read_ocr_trainf_names, err, t0,&t1,&t2);
elib::Utils::fillVar(t1, a+1);elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_read_ocr_trainf_names_protected);
__tuple t0;if(v_empty(0))t0="";else elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;
__tuple t3;
callHalcon(read_ocr_trainf_names_protected, err, t0,t1,&t2,&t3);
elib::Utils::fillVar(t2, a+2);elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_read_ocr_trainf_select);
__tuple t1;if(v_empty(1))t1="";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="0";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;
callHalcon(read_ocr_trainf_select, err, varp_obj(0),t1,t2,&t3);
elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_read_ocv);
__tuple t0;if(v_empty(0))t0="test_ocv";else elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(read_ocv, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_reduce_ocr_class_svm);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="bottom_up";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=2;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=0.001;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;
callHalcon(reduce_ocr_class_svm, err, t0,t1,t2,t3,&t4);
elib::Utils::fillVar(t4, a+4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_select_feature_set_trainf_knn);
__tuple t0;if(v_empty(0))t0="";else elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1)){const char* vs1[]={"zoom_factor","ratio","width","height","foreground","foreground_grid_9","foreground_grid_16","anisometry","compactness","convexity","moments_region_2nd_invar","moments_region_2nd_rel_invar","moments_region_3rd_invar","moments_central","phi","num_connect","num_holes","projection_horizontal","projection_vertical","projection_horizontal_invar","projection_vertical_invar","chord_histo","num_runs","pixel","pixel_invar","pixel_binary","gradient_8dir","cooc","moments_gray_plane"};ehalcon::Utils::arr2TupleString(vs1, 29, t1);}else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="greedy";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=15;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=16;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5="";else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6="";else elib::Utils::fillTuple(a+6, t6);
__tuple t7;
__tuple t8;
__tuple t9;
callHalcon(select_feature_set_trainf_knn, err, t0,t1,t2,t3,t4,t5,t6,&t7,&t8,&t9);
elib::Utils::fillVar(t7, a+7);elib::Utils::fillVar(t8, a+8);elib::Utils::fillVar(t9, a+9);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_select_feature_set_trainf_mlp);
__tuple t0;if(v_empty(0))t0="";else elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1)){const char* vs1[]={"zoom_factor","ratio","width","height","foreground","foreground_grid_9","foreground_grid_16","anisometry","compactness","convexity","moments_region_2nd_invar","moments_region_2nd_rel_invar","moments_region_3rd_invar","moments_central","phi","num_connect","num_holes","projection_horizontal","projection_vertical","projection_horizontal_invar","projection_vertical_invar","chord_histo","num_runs","pixel","pixel_invar","pixel_binary","gradient_8dir","cooc","moments_gray_plane"};ehalcon::Utils::arr2TupleString(vs1, 29, t1);}else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="greedy";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=15;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=16;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5="";else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6="";else elib::Utils::fillTuple(a+6, t6);
__tuple t7;
__tuple t8;
__tuple t9;
callHalcon(select_feature_set_trainf_mlp, err, t0,t1,t2,t3,t4,t5,t6,&t7,&t8,&t9);
elib::Utils::fillVar(t7, a+7);elib::Utils::fillVar(t8, a+8);elib::Utils::fillVar(t9, a+9);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_select_feature_set_trainf_mlp_protected);
__tuple t0;if(v_empty(0))t0="";else elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2)){const char* vs2[]={"zoom_factor","ratio","width","height","foreground","foreground_grid_9","foreground_grid_16","anisometry","compactness","convexity","moments_region_2nd_invar","moments_region_2nd_rel_invar","moments_region_3rd_invar","moments_central","phi","num_connect","num_holes","projection_horizontal","projection_vertical","projection_horizontal_invar","projection_vertical_invar","chord_histo","num_runs","pixel","pixel_invar","pixel_binary","gradient_8dir","cooc","moments_gray_plane"};ehalcon::Utils::arr2TupleString(vs2, 29, t2);}else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="greedy";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=15;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=16;else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6="";else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7="";else elib::Utils::fillTuple(a+7, t7);
__tuple t8;
__tuple t9;
__tuple t10;
callHalcon(select_feature_set_trainf_mlp_protected, err, t0,t1,t2,t3,t4,t5,t6,t7,&t8,&t9,&t10);
elib::Utils::fillVar(t8, a+8);elib::Utils::fillVar(t9, a+9);elib::Utils::fillVar(t10, a+10);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_select_feature_set_trainf_svm);
__tuple t0;if(v_empty(0))t0="";else elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1)){const char* vs1[]={"zoom_factor","ratio","width","height","foreground","foreground_grid_9","foreground_grid_16","anisometry","compactness","convexity","moments_region_2nd_invar","moments_region_2nd_rel_invar","moments_region_3rd_invar","moments_central","phi","num_connect","num_holes","projection_horizontal","projection_vertical","projection_horizontal_invar","projection_vertical_invar","chord_histo","num_runs","pixel","pixel_invar","pixel_binary","gradient_8dir","cooc","moments_gray_plane"};ehalcon::Utils::arr2TupleString(vs1, 29, t1);}else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="greedy";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=15;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=16;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5="";else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6="";else elib::Utils::fillTuple(a+6, t6);
__tuple t7;
__tuple t8;
__tuple t9;
callHalcon(select_feature_set_trainf_svm, err, t0,t1,t2,t3,t4,t5,t6,&t7,&t8,&t9);
elib::Utils::fillVar(t7, a+7);elib::Utils::fillVar(t8, a+8);elib::Utils::fillVar(t9, a+9);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_select_feature_set_trainf_svm_protected);
__tuple t0;if(v_empty(0))t0="";else elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2)){const char* vs2[]={"zoom_factor","ratio","width","height","foreground","foreground_grid_9","foreground_grid_16","anisometry","compactness","convexity","moments_region_2nd_invar","moments_region_2nd_rel_invar","moments_region_3rd_invar","moments_central","phi","num_connect","num_holes","projection_horizontal","projection_vertical","projection_horizontal_invar","projection_vertical_invar","chord_histo","num_runs","pixel","pixel_invar","pixel_binary","gradient_8dir","cooc","moments_gray_plane"};ehalcon::Utils::arr2TupleString(vs2, 29, t2);}else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="greedy";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=15;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=16;else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6="";else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7="";else elib::Utils::fillTuple(a+7, t7);
__tuple t8;
__tuple t9;
__tuple t10;
callHalcon(select_feature_set_trainf_svm_protected, err, t0,t1,t2,t3,t4,t5,t6,t7,&t8,&t9,&t10);
elib::Utils::fillVar(t8, a+8);elib::Utils::fillVar(t9, a+9);elib::Utils::fillVar(t10, a+10);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_serialize_ocr);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(serialize_ocr, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_serialize_ocr_class_knn);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(serialize_ocr_class_knn, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_serialize_ocr_class_mlp);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(serialize_ocr_class_mlp, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_serialize_ocr_class_svm);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(serialize_ocr_class_svm, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_serialize_ocv);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(serialize_ocv, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_set_regularization_params_ocr_class_mlp);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="weight_prior";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=1.0;else elib::Utils::fillTuple(a+2, t2);
callHalcon(set_regularization_params_ocr_class_mlp, err, t0,t1,t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_set_rejection_params_ocr_class_mlp);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="sampling_strategy";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="hyperbox_around_all_classes";else elib::Utils::fillTuple(a+2, t2);
callHalcon(set_rejection_params_ocr_class_mlp, err, t0,t1,t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_set_text_model_param);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="min_contrast";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=10;else elib::Utils::fillTuple(a+2, t2);
callHalcon(set_text_model_param, err, t0,t1,t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_suggest_lexicon);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="word";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;
__tuple t3;
callHalcon(suggest_lexicon, err, t0,t1,&t2,&t3);
elib::Utils::fillVar(t2, a+2);elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_testd_ocr_class_box);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="a";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;
callHalcon(testd_ocr_class_box, err, a_obj(0),a_obj(1),t2,t3,&t4);
elib::Utils::fillVar(t4, a+4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_traind_ocr_class_box);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="a";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;
callHalcon(traind_ocr_class_box, err, a_obj(0),a_obj(1),t2,t3,&t4);
elib::Utils::fillVar(t4, a+4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_traind_ocv_proj);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="a";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="single";else elib::Utils::fillTuple(a+3, t3);
callHalcon(traind_ocv_proj, err, a_obj(0),t1,t2,t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_trainf_ocr_class_box);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="train_ocr";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(trainf_ocr_class_box, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_trainf_ocr_class_knn);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="ocr.trf";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="";else elib::Utils::fillTuple(a+3, t3);
callHalcon(trainf_ocr_class_knn, err, t0,t1,t2,t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_trainf_ocr_class_mlp);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="ocr.trf";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=200;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=1.0;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=0.01;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;
__tuple t6;
callHalcon(trainf_ocr_class_mlp, err, t0,t1,t2,t3,t4,&t5,&t6);
elib::Utils::fillVar(t5, a+5);elib::Utils::fillVar(t6, a+6);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_trainf_ocr_class_mlp_protected);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="ocr.trf";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=200;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=1.0;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=0.01;else elib::Utils::fillTuple(a+5, t5);
__tuple t6;
__tuple t7;
callHalcon(trainf_ocr_class_mlp_protected, err, t0,t1,t2,t3,t4,t5,&t6,&t7);
elib::Utils::fillVar(t6, a+6);elib::Utils::fillVar(t7, a+7);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_trainf_ocr_class_svm);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="ocr.trf";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=0.001;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="default";else elib::Utils::fillTuple(a+3, t3);
callHalcon(trainf_ocr_class_svm, err, t0,t1,t2,t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_trainf_ocr_class_svm_protected);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="ocr.trf";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=0.001;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4="default";else elib::Utils::fillTuple(a+4, t4);
callHalcon(trainf_ocr_class_svm_protected, err, t0,t1,t2,t3,t4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_write_ocr);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="my_ocr";else elib::Utils::fillTuple(a+1, t1);
callHalcon(write_ocr, err, t0,t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_write_ocr_class_knn);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
callHalcon(write_ocr_class_knn, err, t0,t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_write_ocr_class_mlp);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
callHalcon(write_ocr_class_mlp, err, t0,t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_write_ocr_class_svm);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
callHalcon(write_ocr_class_svm, err, t0,t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_write_ocr_trainf);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="train_ocr";else elib::Utils::fillTuple(a+3, t3);
callHalcon(write_ocr_trainf, err, a_obj(0),a_obj(1),t2,t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_write_ocr_trainf_image);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="train_ocr";else elib::Utils::fillTuple(a+2, t2);
callHalcon(write_ocr_trainf_image, err, a_obj(0),t1,t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_write_ocv);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="test_ocv";else elib::Utils::fillTuple(a+1, t1);
callHalcon(write_ocv, err, t0,t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_adapt_template);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
callHalcon(adapt_template, err, a_obj(0),t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_add_sample_identifier_preparation_data);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="unknown";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4="";else elib::Utils::fillTuple(a+4, t4);
__tuple t5;
callHalcon(add_sample_identifier_preparation_data, err, a_obj(0),t1,t2,t3,t4,&t5);
elib::Utils::fillVar(t5, a+5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_add_sample_identifier_training_data);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4="";else elib::Utils::fillTuple(a+4, t4);
__tuple t5;
callHalcon(add_sample_identifier_training_data, err, a_obj(0),t1,t2,t3,t4,&t5);
elib::Utils::fillVar(t5, a+5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_apply_sample_identifier);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=1;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=0.0;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4="";else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5="";else elib::Utils::fillTuple(a+5, t5);
__tuple t6;
__tuple t7;
callHalcon(apply_sample_identifier, err, a_obj(0),t1,t2,t3,t4,t5,&t6,&t7);
elib::Utils::fillVar(t6, a+6);elib::Utils::fillVar(t7, a+7);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_best_match);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=20.0;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="false";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;
__tuple t5;
__tuple t6;
callHalcon(best_match, err, a_obj(0),t1,t2,t3,&t4,&t5,&t6);
elib::Utils::fillVar(t4, a+4);elib::Utils::fillVar(t5, a+5);elib::Utils::fillVar(t6, a+6);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_best_match_mg);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=30.0;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="false";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=4;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=2;else elib::Utils::fillTuple(a+5, t5);
__tuple t6;
__tuple t7;
__tuple t8;
callHalcon(best_match_mg, err, a_obj(0),t1,t2,t3,t4,t5,&t6,&t7,&t8);
elib::Utils::fillVar(t6, a+6);elib::Utils::fillVar(t7, a+7);elib::Utils::fillVar(t8, a+8);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_best_match_pre_mg);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=30.0;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="false";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=3;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5="original";else elib::Utils::fillTuple(a+5, t5);
__tuple t6;
__tuple t7;
__tuple t8;
callHalcon(best_match_pre_mg, err, a_obj(0),t1,t2,t3,t4,t5,&t6,&t7,&t8);
elib::Utils::fillVar(t6, a+6);elib::Utils::fillVar(t7, a+7);elib::Utils::fillVar(t8, a+8);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_best_match_rot);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=-0.39;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=0.79;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=30.0;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5="false";else elib::Utils::fillTuple(a+5, t5);
__tuple t6;
__tuple t7;
__tuple t8;
__tuple t9;
callHalcon(best_match_rot, err, a_obj(0),t1,t2,t3,t4,t5,&t6,&t7,&t8,&t9);
elib::Utils::fillVar(t6, a+6);elib::Utils::fillVar(t7, a+7);elib::Utils::fillVar(t8, a+8);elib::Utils::fillVar(t9, a+9);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_best_match_rot_mg);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=-0.39;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=0.79;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=40.0;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5="false";else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6=3;else elib::Utils::fillTuple(a+6, t6);
__tuple t7;
__tuple t8;
__tuple t9;
__tuple t10;
callHalcon(best_match_rot_mg, err, a_obj(0),t1,t2,t3,t4,t5,t6,&t7,&t8,&t9,&t10);
elib::Utils::fillVar(t7, a+7);elib::Utils::fillVar(t8, a+8);elib::Utils::fillVar(t9, a+9);elib::Utils::fillVar(t10, a+10);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_bundle_adjust_mosaic);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;elib::Utils::fillTuple(a+4, t4);
__tuple t5;elib::Utils::fillTuple(a+5, t5);
__tuple t6;elib::Utils::fillTuple(a+6, t6);
__tuple t7;elib::Utils::fillTuple(a+7, t7);
__tuple t8;elib::Utils::fillTuple(a+8, t8);
__tuple t9;elib::Utils::fillTuple(a+9, t9);
__tuple t10;if(v_empty(10))t10="projective";else elib::Utils::fillTuple(a+10, t10);
__tuple t11;
__tuple t12;
__tuple t13;
__tuple t14;
callHalcon(bundle_adjust_mosaic, err, t0,t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,&t11,&t12,&t13,&t14);
elib::Utils::fillVar(t11, a+11);elib::Utils::fillVar(t12, a+12);elib::Utils::fillVar(t13, a+13);elib::Utils::fillVar(t14, a+14);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_clear_all_component_models);
callHalcon(clear_all_component_models, err);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_clear_all_deformable_models);
callHalcon(clear_all_deformable_models, err);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_clear_all_descriptor_models);
callHalcon(clear_all_descriptor_models, err);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_clear_all_ncc_models);
callHalcon(clear_all_ncc_models, err);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_clear_all_sample_identifiers);
callHalcon(clear_all_sample_identifiers, err);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_clear_all_shape_models);
callHalcon(clear_all_shape_models, err);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_clear_all_templates);
callHalcon(clear_all_templates, err);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_clear_all_training_components);
callHalcon(clear_all_training_components, err);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_clear_all_variation_models);
callHalcon(clear_all_variation_models, err);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_clear_component_model);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
callHalcon(clear_component_model, err, t0);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_clear_deformable_model);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
callHalcon(clear_deformable_model, err, t0);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_clear_descriptor_model);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
callHalcon(clear_descriptor_model, err, t0);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_clear_ncc_model);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
callHalcon(clear_ncc_model, err, t0);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_clear_sample_identifier);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
callHalcon(clear_sample_identifier, err, t0);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_clear_shape_model);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
callHalcon(clear_shape_model, err, t0);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_clear_template);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
callHalcon(clear_template, err, t0);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_clear_training_components);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
callHalcon(clear_training_components, err, t0);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_clear_train_data_variation_model);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
callHalcon(clear_train_data_variation_model, err, t0);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_clear_variation_model);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
callHalcon(clear_variation_model, err, t0);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_cluster_model_components);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="rigidity";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=0.2;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=0.5;else elib::Utils::fillTuple(a+5, t5);
callHalcon(cluster_model_components, err, a_obj(0),varp_obj(1),t2,t3,t4,t5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_compare_ext_variation_model);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="absolute";else elib::Utils::fillTuple(a+3, t3);
callHalcon(compare_ext_variation_model, err, a_obj(0),varp_obj(1),t2,t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_compare_variation_model);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
callHalcon(compare_variation_model, err, a_obj(0),varp_obj(1),t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_create_aniso_shape_model);
__tuple t1;if(v_empty(1))t1="auto";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=-0.39;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=0.79;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4="auto";else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=0.9;else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6=1.1;else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7="auto";else elib::Utils::fillTuple(a+7, t7);
__tuple t8;if(v_empty(8))t8=0.9;else elib::Utils::fillTuple(a+8, t8);
__tuple t9;if(v_empty(9))t9=1.1;else elib::Utils::fillTuple(a+9, t9);
__tuple t10;if(v_empty(10))t10="auto";else elib::Utils::fillTuple(a+10, t10);
__tuple t11;if(v_empty(11))t11="auto";else elib::Utils::fillTuple(a+11, t11);
__tuple t12;if(v_empty(12))t12="use_polarity";else elib::Utils::fillTuple(a+12, t12);
__tuple t13;if(v_empty(13))t13="auto";else elib::Utils::fillTuple(a+13, t13);
__tuple t14;if(v_empty(14))t14="auto";else elib::Utils::fillTuple(a+14, t14);
__tuple t15;
callHalcon(create_aniso_shape_model, err, a_obj(0),t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,t13,t14,&t15);
elib::Utils::fillVar(t15, a+15);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_create_aniso_shape_model_xld);
__tuple t1;if(v_empty(1))t1="auto";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=-0.39;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=0.79;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4="auto";else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=0.9;else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6=1.1;else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7="auto";else elib::Utils::fillTuple(a+7, t7);
__tuple t8;if(v_empty(8))t8=0.9;else elib::Utils::fillTuple(a+8, t8);
__tuple t9;if(v_empty(9))t9=1.1;else elib::Utils::fillTuple(a+9, t9);
__tuple t10;if(v_empty(10))t10="auto";else elib::Utils::fillTuple(a+10, t10);
__tuple t11;if(v_empty(11))t11="auto";else elib::Utils::fillTuple(a+11, t11);
__tuple t12;if(v_empty(12))t12="ignore_local_polarity";else elib::Utils::fillTuple(a+12, t12);
__tuple t13;if(v_empty(13))t13=5;else elib::Utils::fillTuple(a+13, t13);
__tuple t14;
callHalcon(create_aniso_shape_model_xld, err, a_obj(0),t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,t13,&t14);
elib::Utils::fillVar(t14, a+14);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_create_calib_descriptor_model);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="lepetit";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4="";else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5="";else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6="";else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7="";else elib::Utils::fillTuple(a+7, t7);
__tuple t8;if(v_empty(8))t8=42;else elib::Utils::fillTuple(a+8, t8);
__tuple t9;
callHalcon(create_calib_descriptor_model, err, a_obj(0),t1,t2,t3,t4,t5,t6,t7,t8,&t9);
elib::Utils::fillVar(t9, a+9);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_create_component_model);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=-0.39;else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6=0.79;else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7="auto";else elib::Utils::fillTuple(a+7, t7);
__tuple t8;if(v_empty(8))t8="auto";else elib::Utils::fillTuple(a+8, t8);
__tuple t9;if(v_empty(9))t9="auto";else elib::Utils::fillTuple(a+9, t9);
__tuple t10;if(v_empty(10))t10="auto";else elib::Utils::fillTuple(a+10, t10);
__tuple t11;if(v_empty(11))t11=0.5;else elib::Utils::fillTuple(a+11, t11);
__tuple t12;if(v_empty(12))t12="auto";else elib::Utils::fillTuple(a+12, t12);
__tuple t13;if(v_empty(13))t13="auto";else elib::Utils::fillTuple(a+13, t13);
__tuple t14;if(v_empty(14))t14="auto";else elib::Utils::fillTuple(a+14, t14);
__tuple t15;if(v_empty(15))t15="use_polarity";else elib::Utils::fillTuple(a+15, t15);
__tuple t16;if(v_empty(16))t16="false";else elib::Utils::fillTuple(a+16, t16);
__tuple t17;
__tuple t18;
callHalcon(create_component_model, err, a_obj(0),a_obj(1),t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,t13,t14,t15,t16,&t17,&t18);
elib::Utils::fillVar(t17, a+17);elib::Utils::fillVar(t18, a+18);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_create_local_deformable_model);
__tuple t1;if(v_empty(1))t1="auto";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=-0.39;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=0.79;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4="auto";else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=1.0;else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6=1.0;else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7="auto";else elib::Utils::fillTuple(a+7, t7);
__tuple t8;if(v_empty(8))t8=1.0;else elib::Utils::fillTuple(a+8, t8);
__tuple t9;if(v_empty(9))t9=1.0;else elib::Utils::fillTuple(a+9, t9);
__tuple t10;if(v_empty(10))t10="auto";else elib::Utils::fillTuple(a+10, t10);
__tuple t11;if(v_empty(11))t11="none";else elib::Utils::fillTuple(a+11, t11);
__tuple t12;if(v_empty(12))t12="use_polarity";else elib::Utils::fillTuple(a+12, t12);
__tuple t13;if(v_empty(13))t13="auto";else elib::Utils::fillTuple(a+13, t13);
__tuple t14;if(v_empty(14))t14="auto";else elib::Utils::fillTuple(a+14, t14);
__tuple t15;if(v_empty(15))t15="";else elib::Utils::fillTuple(a+15, t15);
__tuple t16;if(v_empty(16))t16="";else elib::Utils::fillTuple(a+16, t16);
__tuple t17;
callHalcon(create_local_deformable_model, err, a_obj(0),t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,t13,t14,t15,t16,&t17);
elib::Utils::fillVar(t17, a+17);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_create_local_deformable_model_xld);
__tuple t1;if(v_empty(1))t1="auto";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=-0.39;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=0.79;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4="auto";else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=1.0;else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6=1.0;else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7="auto";else elib::Utils::fillTuple(a+7, t7);
__tuple t8;if(v_empty(8))t8=1.0;else elib::Utils::fillTuple(a+8, t8);
__tuple t9;if(v_empty(9))t9=1.0;else elib::Utils::fillTuple(a+9, t9);
__tuple t10;if(v_empty(10))t10="auto";else elib::Utils::fillTuple(a+10, t10);
__tuple t11;if(v_empty(11))t11="auto";else elib::Utils::fillTuple(a+11, t11);
__tuple t12;if(v_empty(12))t12="ignore_local_polarity";else elib::Utils::fillTuple(a+12, t12);
__tuple t13;if(v_empty(13))t13=5;else elib::Utils::fillTuple(a+13, t13);
__tuple t14;if(v_empty(14))t14="";else elib::Utils::fillTuple(a+14, t14);
__tuple t15;if(v_empty(15))t15="";else elib::Utils::fillTuple(a+15, t15);
__tuple t16;
callHalcon(create_local_deformable_model_xld, err, a_obj(0),t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,t13,t14,t15,&t16);
elib::Utils::fillVar(t16, a+16);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_create_ncc_model);
__tuple t1;if(v_empty(1))t1="auto";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=-0.39;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=0.79;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4="auto";else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5="use_polarity";else elib::Utils::fillTuple(a+5, t5);
__tuple t6;
callHalcon(create_ncc_model, err, a_obj(0),t1,t2,t3,t4,t5,&t6);
elib::Utils::fillVar(t6, a+6);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_create_planar_calib_deformable_model);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="auto";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=-0.39;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=0.79;else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6="auto";else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7=1.0;else elib::Utils::fillTuple(a+7, t7);
__tuple t8;if(v_empty(8))t8=1.0;else elib::Utils::fillTuple(a+8, t8);
__tuple t9;if(v_empty(9))t9="auto";else elib::Utils::fillTuple(a+9, t9);
__tuple t10;if(v_empty(10))t10=1.0;else elib::Utils::fillTuple(a+10, t10);
__tuple t11;if(v_empty(11))t11=1.0;else elib::Utils::fillTuple(a+11, t11);
__tuple t12;if(v_empty(12))t12="auto";else elib::Utils::fillTuple(a+12, t12);
__tuple t13;if(v_empty(13))t13="none";else elib::Utils::fillTuple(a+13, t13);
__tuple t14;if(v_empty(14))t14="use_polarity";else elib::Utils::fillTuple(a+14, t14);
__tuple t15;if(v_empty(15))t15="auto";else elib::Utils::fillTuple(a+15, t15);
__tuple t16;if(v_empty(16))t16="auto";else elib::Utils::fillTuple(a+16, t16);
__tuple t17;if(v_empty(17))t17="";else elib::Utils::fillTuple(a+17, t17);
__tuple t18;if(v_empty(18))t18="";else elib::Utils::fillTuple(a+18, t18);
__tuple t19;
callHalcon(create_planar_calib_deformable_model, err, a_obj(0),t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,t13,t14,t15,t16,t17,t18,&t19);
elib::Utils::fillVar(t19, a+19);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_create_planar_calib_deformable_model_xld);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="auto";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=-0.39;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=0.79;else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6="auto";else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7=1.0;else elib::Utils::fillTuple(a+7, t7);
__tuple t8;if(v_empty(8))t8=1.0;else elib::Utils::fillTuple(a+8, t8);
__tuple t9;if(v_empty(9))t9="auto";else elib::Utils::fillTuple(a+9, t9);
__tuple t10;if(v_empty(10))t10=1.0;else elib::Utils::fillTuple(a+10, t10);
__tuple t11;if(v_empty(11))t11=1.0;else elib::Utils::fillTuple(a+11, t11);
__tuple t12;if(v_empty(12))t12="auto";else elib::Utils::fillTuple(a+12, t12);
__tuple t13;if(v_empty(13))t13="auto";else elib::Utils::fillTuple(a+13, t13);
__tuple t14;if(v_empty(14))t14="ignore_local_polarity";else elib::Utils::fillTuple(a+14, t14);
__tuple t15;if(v_empty(15))t15=5;else elib::Utils::fillTuple(a+15, t15);
__tuple t16;if(v_empty(16))t16="";else elib::Utils::fillTuple(a+16, t16);
__tuple t17;if(v_empty(17))t17="";else elib::Utils::fillTuple(a+17, t17);
__tuple t18;
callHalcon(create_planar_calib_deformable_model_xld, err, a_obj(0),t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,t13,t14,t15,t16,t17,&t18);
elib::Utils::fillVar(t18, a+18);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_create_planar_uncalib_deformable_model);
__tuple t1;if(v_empty(1))t1="auto";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=-0.39;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=0.79;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4="auto";else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=1.0;else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6=1.0;else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7="auto";else elib::Utils::fillTuple(a+7, t7);
__tuple t8;if(v_empty(8))t8=1.0;else elib::Utils::fillTuple(a+8, t8);
__tuple t9;if(v_empty(9))t9=1.0;else elib::Utils::fillTuple(a+9, t9);
__tuple t10;if(v_empty(10))t10="auto";else elib::Utils::fillTuple(a+10, t10);
__tuple t11;if(v_empty(11))t11="none";else elib::Utils::fillTuple(a+11, t11);
__tuple t12;if(v_empty(12))t12="use_polarity";else elib::Utils::fillTuple(a+12, t12);
__tuple t13;if(v_empty(13))t13="auto";else elib::Utils::fillTuple(a+13, t13);
__tuple t14;if(v_empty(14))t14="auto";else elib::Utils::fillTuple(a+14, t14);
__tuple t15;if(v_empty(15))t15="";else elib::Utils::fillTuple(a+15, t15);
__tuple t16;if(v_empty(16))t16="";else elib::Utils::fillTuple(a+16, t16);
__tuple t17;
callHalcon(create_planar_uncalib_deformable_model, err, a_obj(0),t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,t13,t14,t15,t16,&t17);
elib::Utils::fillVar(t17, a+17);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_create_planar_uncalib_deformable_model_xld);
__tuple t1;if(v_empty(1))t1="auto";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=-0.39;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=0.79;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4="auto";else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=1.0;else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6=1.0;else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7="auto";else elib::Utils::fillTuple(a+7, t7);
__tuple t8;if(v_empty(8))t8=1.0;else elib::Utils::fillTuple(a+8, t8);
__tuple t9;if(v_empty(9))t9=1.0;else elib::Utils::fillTuple(a+9, t9);
__tuple t10;if(v_empty(10))t10="auto";else elib::Utils::fillTuple(a+10, t10);
__tuple t11;if(v_empty(11))t11="auto";else elib::Utils::fillTuple(a+11, t11);
__tuple t12;if(v_empty(12))t12="ignore_local_polarity";else elib::Utils::fillTuple(a+12, t12);
__tuple t13;if(v_empty(13))t13=5;else elib::Utils::fillTuple(a+13, t13);
__tuple t14;if(v_empty(14))t14="";else elib::Utils::fillTuple(a+14, t14);
__tuple t15;if(v_empty(15))t15="";else elib::Utils::fillTuple(a+15, t15);
__tuple t16;
callHalcon(create_planar_uncalib_deformable_model_xld, err, a_obj(0),t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,t13,t14,t15,&t16);
elib::Utils::fillVar(t16, a+16);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_create_sample_identifier);
__tuple t0;if(v_empty(0))t0="";else elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(create_sample_identifier, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_create_scaled_shape_model);
__tuple t1;if(v_empty(1))t1="auto";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=-0.39;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=0.79;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4="auto";else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=0.9;else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6=1.1;else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7="auto";else elib::Utils::fillTuple(a+7, t7);
__tuple t8;if(v_empty(8))t8="auto";else elib::Utils::fillTuple(a+8, t8);
__tuple t9;if(v_empty(9))t9="use_polarity";else elib::Utils::fillTuple(a+9, t9);
__tuple t10;if(v_empty(10))t10="auto";else elib::Utils::fillTuple(a+10, t10);
__tuple t11;if(v_empty(11))t11="auto";else elib::Utils::fillTuple(a+11, t11);
__tuple t12;
callHalcon(create_scaled_shape_model, err, a_obj(0),t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,&t12);
elib::Utils::fillVar(t12, a+12);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_create_scaled_shape_model_xld);
__tuple t1;if(v_empty(1))t1="auto";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=-0.39;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=0.79;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4="auto";else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=0.9;else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6=1.1;else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7="auto";else elib::Utils::fillTuple(a+7, t7);
__tuple t8;if(v_empty(8))t8="auto";else elib::Utils::fillTuple(a+8, t8);
__tuple t9;if(v_empty(9))t9="ignore_local_polarity";else elib::Utils::fillTuple(a+9, t9);
__tuple t10;if(v_empty(10))t10=5;else elib::Utils::fillTuple(a+10, t10);
__tuple t11;
callHalcon(create_scaled_shape_model_xld, err, a_obj(0),t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,&t11);
elib::Utils::fillVar(t11, a+11);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_create_shape_model);
__tuple t1;if(v_empty(1))t1="auto";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=-0.39;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=0.79;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4="auto";else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5="auto";else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6="use_polarity";else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7="auto";else elib::Utils::fillTuple(a+7, t7);
__tuple t8;if(v_empty(8))t8="auto";else elib::Utils::fillTuple(a+8, t8);
__tuple t9;
callHalcon(create_shape_model, err, a_obj(0),t1,t2,t3,t4,t5,t6,t7,t8,&t9);
elib::Utils::fillVar(t9, a+9);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_create_shape_model_xld);
__tuple t1;if(v_empty(1))t1="auto";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=-0.39;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=0.79;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4="auto";else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5="auto";else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6="ignore_local_polarity";else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7=5;else elib::Utils::fillTuple(a+7, t7);
__tuple t8;
callHalcon(create_shape_model_xld, err, a_obj(0),t1,t2,t3,t4,t5,t6,t7,&t8);
elib::Utils::fillVar(t8, a+8);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_create_template);
__tuple t1;if(v_empty(1))t1=255;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=4;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="sort";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4="original";else elib::Utils::fillTuple(a+4, t4);
__tuple t5;
callHalcon(create_template, err, a_obj(0),t1,t2,t3,t4,&t5);
elib::Utils::fillVar(t5, a+5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_create_template_rot);
__tuple t1;if(v_empty(1))t1=4;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=-0.39;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=0.79;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=0.0982;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5="sort";else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6="original";else elib::Utils::fillTuple(a+6, t6);
__tuple t7;
callHalcon(create_template_rot, err, a_obj(0),t1,t2,t3,t4,t5,t6,&t7);
elib::Utils::fillVar(t7, a+7);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_create_trained_component_model);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=-0.39;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=0.79;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="auto";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=0.5;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5="auto";else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6="auto";else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7="auto";else elib::Utils::fillTuple(a+7, t7);
__tuple t8;if(v_empty(8))t8="use_polarity";else elib::Utils::fillTuple(a+8, t8);
__tuple t9;if(v_empty(9))t9="false";else elib::Utils::fillTuple(a+9, t9);
__tuple t10;
__tuple t11;
callHalcon(create_trained_component_model, err, t0,t1,t2,t3,t4,t5,t6,t7,t8,t9,&t10,&t11);
elib::Utils::fillVar(t10, a+10);elib::Utils::fillVar(t11, a+11);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_create_uncalib_descriptor_model);
__tuple t1;if(v_empty(1))t1="lepetit";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4="";else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5="";else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6=42;else elib::Utils::fillTuple(a+6, t6);
__tuple t7;
callHalcon(create_uncalib_descriptor_model, err, a_obj(0),t1,t2,t3,t4,t5,t6,&t7);
elib::Utils::fillVar(t7, a+7);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_create_variation_model);
__tuple t0;if(v_empty(0))t0=640;else elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=480;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="byte";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="standard";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;
callHalcon(create_variation_model, err, t0,t1,t2,t3,&t4);
elib::Utils::fillVar(t4, a+4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_deserialize_component_model);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(deserialize_component_model, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_deserialize_deformable_model);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(deserialize_deformable_model, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_deserialize_descriptor_model);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(deserialize_descriptor_model, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_deserialize_ncc_model);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(deserialize_ncc_model, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_deserialize_sample_identifier);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(deserialize_sample_identifier, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_deserialize_shape_model);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(deserialize_shape_model, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_deserialize_template);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(deserialize_template, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_deserialize_training_components);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(deserialize_training_components, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_deserialize_variation_model);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(deserialize_variation_model, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_determine_deformable_model_params);
__tuple t1;if(v_empty(1))t1="auto";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=-0.39;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=0.79;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=0.9;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=1.1;else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6="auto";else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7="use_polarity";else elib::Utils::fillTuple(a+7, t7);
__tuple t8;if(v_empty(8))t8="auto";else elib::Utils::fillTuple(a+8, t8);
__tuple t9;if(v_empty(9))t9="auto";else elib::Utils::fillTuple(a+9, t9);
__tuple t10;if(v_empty(10))t10="";else elib::Utils::fillTuple(a+10, t10);
__tuple t11;if(v_empty(11))t11="";else elib::Utils::fillTuple(a+11, t11);
__tuple t12;if(v_empty(12))t12="all";else elib::Utils::fillTuple(a+12, t12);
__tuple t13;
__tuple t14;
callHalcon(determine_deformable_model_params, err, a_obj(0),t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,&t13,&t14);
elib::Utils::fillVar(t13, a+13);elib::Utils::fillVar(t14, a+14);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_determine_ncc_model_params);
__tuple t1;if(v_empty(1))t1="auto";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=-0.39;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=0.79;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4="use_polarity";else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5="all";else elib::Utils::fillTuple(a+5, t5);
__tuple t6;
__tuple t7;
callHalcon(determine_ncc_model_params, err, a_obj(0),t1,t2,t3,t4,t5,&t6,&t7);
elib::Utils::fillVar(t6, a+6);elib::Utils::fillVar(t7, a+7);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_determine_shape_model_params);
__tuple t1;if(v_empty(1))t1="auto";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=-0.39;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=0.79;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=0.9;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=1.1;else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6="auto";else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7="use_polarity";else elib::Utils::fillTuple(a+7, t7);
__tuple t8;if(v_empty(8))t8="auto";else elib::Utils::fillTuple(a+8, t8);
__tuple t9;if(v_empty(9))t9="auto";else elib::Utils::fillTuple(a+9, t9);
__tuple t10;if(v_empty(10))t10="all";else elib::Utils::fillTuple(a+10, t10);
__tuple t11;
__tuple t12;
callHalcon(determine_shape_model_params, err, a_obj(0),t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,&t11,&t12);
elib::Utils::fillVar(t11, a+11);elib::Utils::fillVar(t12, a+12);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_fast_match);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=20.0;else elib::Utils::fillTuple(a+3, t3);
callHalcon(fast_match, err, a_obj(0),varp_obj(1),t2,t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_fast_match_mg);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=30.0;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=3;else elib::Utils::fillTuple(a+4, t4);
callHalcon(fast_match_mg, err, a_obj(0),varp_obj(1),t2,t3,t4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_find_aniso_shape_model);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=-0.39;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=0.78;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=0.9;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=1.1;else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6=0.9;else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7=1.1;else elib::Utils::fillTuple(a+7, t7);
__tuple t8;if(v_empty(8))t8=0.5;else elib::Utils::fillTuple(a+8, t8);
__tuple t9;if(v_empty(9))t9=1;else elib::Utils::fillTuple(a+9, t9);
__tuple t10;if(v_empty(10))t10=0.5;else elib::Utils::fillTuple(a+10, t10);
__tuple t11;if(v_empty(11))t11="least_squares";else elib::Utils::fillTuple(a+11, t11);
__tuple t12;if(v_empty(12))t12=0;else elib::Utils::fillTuple(a+12, t12);
__tuple t13;if(v_empty(13))t13=0.9;else elib::Utils::fillTuple(a+13, t13);
__tuple t14;
__tuple t15;
__tuple t16;
__tuple t17;
__tuple t18;
__tuple t19;
callHalcon(find_aniso_shape_model, err, a_obj(0),t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,t13,&t14,&t15,&t16,&t17,&t18,&t19);
elib::Utils::fillVar(t14, a+14);elib::Utils::fillVar(t15, a+15);elib::Utils::fillVar(t16, a+16);elib::Utils::fillVar(t17, a+17);elib::Utils::fillVar(t18, a+18);elib::Utils::fillVar(t19, a+19);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_find_aniso_shape_models);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=-0.39;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=0.78;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=0.9;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=1.1;else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6=0.9;else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7=1.1;else elib::Utils::fillTuple(a+7, t7);
__tuple t8;if(v_empty(8))t8=0.5;else elib::Utils::fillTuple(a+8, t8);
__tuple t9;if(v_empty(9))t9=1;else elib::Utils::fillTuple(a+9, t9);
__tuple t10;if(v_empty(10))t10=0.5;else elib::Utils::fillTuple(a+10, t10);
__tuple t11;if(v_empty(11))t11="least_squares";else elib::Utils::fillTuple(a+11, t11);
__tuple t12;if(v_empty(12))t12=0;else elib::Utils::fillTuple(a+12, t12);
__tuple t13;if(v_empty(13))t13=0.9;else elib::Utils::fillTuple(a+13, t13);
__tuple t14;
__tuple t15;
__tuple t16;
__tuple t17;
__tuple t18;
__tuple t19;
__tuple t20;
callHalcon(find_aniso_shape_models, err, a_obj(0),t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,t13,&t14,&t15,&t16,&t17,&t18,&t19,&t20);
elib::Utils::fillVar(t14, a+14);elib::Utils::fillVar(t15, a+15);elib::Utils::fillVar(t16, a+16);elib::Utils::fillVar(t17, a+17);elib::Utils::fillVar(t18, a+18);elib::Utils::fillVar(t19, a+19);elib::Utils::fillVar(t20, a+20);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_find_calib_descriptor_model);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4="";else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5="";else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6=0.2;else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7=1;else elib::Utils::fillTuple(a+7, t7);
__tuple t8;elib::Utils::fillTuple(a+8, t8);
__tuple t9;if(v_empty(9))t9="num_points";else elib::Utils::fillTuple(a+9, t9);
__tuple t10;
__tuple t11;
callHalcon(find_calib_descriptor_model, err, a_obj(0),t1,t2,t3,t4,t5,t6,t7,t8,t9,&t10,&t11);
elib::Utils::fillVar(t10, a+10);elib::Utils::fillVar(t11, a+11);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_find_component_model);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=-0.39;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=0.78;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=0.5;else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6=1;else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7=0.5;else elib::Utils::fillTuple(a+7, t7);
__tuple t8;if(v_empty(8))t8="stop_search";else elib::Utils::fillTuple(a+8, t8);
__tuple t9;if(v_empty(9))t9="prune_branch";else elib::Utils::fillTuple(a+9, t9);
__tuple t10;if(v_empty(10))t10="none";else elib::Utils::fillTuple(a+10, t10);
__tuple t11;if(v_empty(11))t11=0.5;else elib::Utils::fillTuple(a+11, t11);
__tuple t12;if(v_empty(12))t12="least_squares";else elib::Utils::fillTuple(a+12, t12);
__tuple t13;if(v_empty(13))t13=0;else elib::Utils::fillTuple(a+13, t13);
__tuple t14;if(v_empty(14))t14=0.9;else elib::Utils::fillTuple(a+14, t14);
__tuple t15;
__tuple t16;
__tuple t17;
__tuple t18;
__tuple t19;
__tuple t20;
__tuple t21;
__tuple t22;
callHalcon(find_component_model, err, a_obj(0),t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,t13,t14,&t15,&t16,&t17,&t18,&t19,&t20,&t21,&t22);
elib::Utils::fillVar(t15, a+15);elib::Utils::fillVar(t16, a+16);elib::Utils::fillVar(t17, a+17);elib::Utils::fillVar(t18, a+18);elib::Utils::fillVar(t19, a+19);elib::Utils::fillVar(t20, a+20);elib::Utils::fillVar(t21, a+21);elib::Utils::fillVar(t22, a+22);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_find_local_deformable_model);
__tuple t4;elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=-0.39;else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6=0.78;else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7=1.0;else elib::Utils::fillTuple(a+7, t7);
__tuple t8;if(v_empty(8))t8=1.0;else elib::Utils::fillTuple(a+8, t8);
__tuple t9;if(v_empty(9))t9=1.0;else elib::Utils::fillTuple(a+9, t9);
__tuple t10;if(v_empty(10))t10=1.0;else elib::Utils::fillTuple(a+10, t10);
__tuple t11;if(v_empty(11))t11=0.5;else elib::Utils::fillTuple(a+11, t11);
__tuple t12;if(v_empty(12))t12=1;else elib::Utils::fillTuple(a+12, t12);
__tuple t13;if(v_empty(13))t13=1.0;else elib::Utils::fillTuple(a+13, t13);
__tuple t14;if(v_empty(14))t14=0;else elib::Utils::fillTuple(a+14, t14);
__tuple t15;if(v_empty(15))t15=0.9;else elib::Utils::fillTuple(a+15, t15);
__tuple t16;if(v_empty(16))t16="";else elib::Utils::fillTuple(a+16, t16);
__tuple t17;if(v_empty(17))t17="";else elib::Utils::fillTuple(a+17, t17);
__tuple t18;if(v_empty(18))t18="";else elib::Utils::fillTuple(a+18, t18);
__tuple t19;
__tuple t20;
__tuple t21;
callHalcon(find_local_deformable_model, err, a_obj(0),varp_obj(1),varp_obj(2),varp_obj(3),t4,t5,t6,t7,t8,t9,t10,t11,t12,t13,t14,t15,t16,t17,t18,&t19,&t20,&t21);
elib::Utils::fillVar(t19, a+19);elib::Utils::fillVar(t20, a+20);elib::Utils::fillVar(t21, a+21);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_find_ncc_model);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=-0.39;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=0.78;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=0.8;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=1;else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6=0.5;else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7="true";else elib::Utils::fillTuple(a+7, t7);
__tuple t8;if(v_empty(8))t8=0;else elib::Utils::fillTuple(a+8, t8);
__tuple t9;
__tuple t10;
__tuple t11;
__tuple t12;
callHalcon(find_ncc_model, err, a_obj(0),t1,t2,t3,t4,t5,t6,t7,t8,&t9,&t10,&t11,&t12);
elib::Utils::fillVar(t9, a+9);elib::Utils::fillVar(t10, a+10);elib::Utils::fillVar(t11, a+11);elib::Utils::fillVar(t12, a+12);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_find_planar_calib_deformable_model);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=-0.39;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=0.78;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=1.0;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=1.0;else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6=1.0;else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7=1.0;else elib::Utils::fillTuple(a+7, t7);
__tuple t8;if(v_empty(8))t8=0.5;else elib::Utils::fillTuple(a+8, t8);
__tuple t9;if(v_empty(9))t9=1;else elib::Utils::fillTuple(a+9, t9);
__tuple t10;if(v_empty(10))t10=1.0;else elib::Utils::fillTuple(a+10, t10);
__tuple t11;if(v_empty(11))t11=0;else elib::Utils::fillTuple(a+11, t11);
__tuple t12;if(v_empty(12))t12=0.9;else elib::Utils::fillTuple(a+12, t12);
__tuple t13;if(v_empty(13))t13="";else elib::Utils::fillTuple(a+13, t13);
__tuple t14;if(v_empty(14))t14="";else elib::Utils::fillTuple(a+14, t14);
__tuple t15;
__tuple t16;
__tuple t17;
callHalcon(find_planar_calib_deformable_model, err, a_obj(0),t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,t13,t14,&t15,&t16,&t17);
elib::Utils::fillVar(t15, a+15);elib::Utils::fillVar(t16, a+16);elib::Utils::fillVar(t17, a+17);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_find_planar_uncalib_deformable_model);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=-0.39;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=0.78;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=1.0;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=1.0;else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6=1.0;else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7=1.0;else elib::Utils::fillTuple(a+7, t7);
__tuple t8;if(v_empty(8))t8=0.5;else elib::Utils::fillTuple(a+8, t8);
__tuple t9;if(v_empty(9))t9=1;else elib::Utils::fillTuple(a+9, t9);
__tuple t10;if(v_empty(10))t10=1.0;else elib::Utils::fillTuple(a+10, t10);
__tuple t11;if(v_empty(11))t11=0;else elib::Utils::fillTuple(a+11, t11);
__tuple t12;if(v_empty(12))t12=0.9;else elib::Utils::fillTuple(a+12, t12);
__tuple t13;if(v_empty(13))t13="";else elib::Utils::fillTuple(a+13, t13);
__tuple t14;if(v_empty(14))t14="";else elib::Utils::fillTuple(a+14, t14);
__tuple t15;
__tuple t16;
callHalcon(find_planar_uncalib_deformable_model, err, a_obj(0),t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,t13,t14,&t15,&t16);
elib::Utils::fillVar(t15, a+15);elib::Utils::fillVar(t16, a+16);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_find_scaled_shape_model);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=-0.39;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=0.78;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=0.9;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=1.1;else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6=0.5;else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7=1;else elib::Utils::fillTuple(a+7, t7);
__tuple t8;if(v_empty(8))t8=0.5;else elib::Utils::fillTuple(a+8, t8);
__tuple t9;if(v_empty(9))t9="least_squares";else elib::Utils::fillTuple(a+9, t9);
__tuple t10;if(v_empty(10))t10=0;else elib::Utils::fillTuple(a+10, t10);
__tuple t11;if(v_empty(11))t11=0.9;else elib::Utils::fillTuple(a+11, t11);
__tuple t12;
__tuple t13;
__tuple t14;
__tuple t15;
__tuple t16;
callHalcon(find_scaled_shape_model, err, a_obj(0),t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,&t12,&t13,&t14,&t15,&t16);
elib::Utils::fillVar(t12, a+12);elib::Utils::fillVar(t13, a+13);elib::Utils::fillVar(t14, a+14);elib::Utils::fillVar(t15, a+15);elib::Utils::fillVar(t16, a+16);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_find_scaled_shape_models);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=-0.39;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=0.78;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=0.9;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=1.1;else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6=0.5;else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7=1;else elib::Utils::fillTuple(a+7, t7);
__tuple t8;if(v_empty(8))t8=0.5;else elib::Utils::fillTuple(a+8, t8);
__tuple t9;if(v_empty(9))t9="least_squares";else elib::Utils::fillTuple(a+9, t9);
__tuple t10;if(v_empty(10))t10=0;else elib::Utils::fillTuple(a+10, t10);
__tuple t11;if(v_empty(11))t11=0.9;else elib::Utils::fillTuple(a+11, t11);
__tuple t12;
__tuple t13;
__tuple t14;
__tuple t15;
__tuple t16;
__tuple t17;
callHalcon(find_scaled_shape_models, err, a_obj(0),t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,&t12,&t13,&t14,&t15,&t16,&t17);
elib::Utils::fillVar(t12, a+12);elib::Utils::fillVar(t13, a+13);elib::Utils::fillVar(t14, a+14);elib::Utils::fillVar(t15, a+15);elib::Utils::fillVar(t16, a+16);elib::Utils::fillVar(t17, a+17);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_find_shape_model);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=-0.39;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=0.78;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=0.5;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=1;else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6=0.5;else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7="least_squares";else elib::Utils::fillTuple(a+7, t7);
__tuple t8;if(v_empty(8))t8=0;else elib::Utils::fillTuple(a+8, t8);
__tuple t9;if(v_empty(9))t9=0.9;else elib::Utils::fillTuple(a+9, t9);
__tuple t10;
__tuple t11;
__tuple t12;
__tuple t13;
callHalcon(find_shape_model, err, a_obj(0),t1,t2,t3,t4,t5,t6,t7,t8,t9,&t10,&t11,&t12,&t13);
elib::Utils::fillVar(t10, a+10);elib::Utils::fillVar(t11, a+11);elib::Utils::fillVar(t12, a+12);elib::Utils::fillVar(t13, a+13);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_find_shape_models);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=-0.39;else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=0.78;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=0.5;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=1;else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6=0.5;else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7="least_squares";else elib::Utils::fillTuple(a+7, t7);
__tuple t8;if(v_empty(8))t8=0;else elib::Utils::fillTuple(a+8, t8);
__tuple t9;if(v_empty(9))t9=0.9;else elib::Utils::fillTuple(a+9, t9);
__tuple t10;
__tuple t11;
__tuple t12;
__tuple t13;
__tuple t14;
callHalcon(find_shape_models, err, a_obj(0),t1,t2,t3,t4,t5,t6,t7,t8,t9,&t10,&t11,&t12,&t13,&t14);
elib::Utils::fillVar(t10, a+10);elib::Utils::fillVar(t11, a+11);elib::Utils::fillVar(t12, a+12);elib::Utils::fillVar(t13, a+13);elib::Utils::fillVar(t14, a+14);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_find_uncalib_descriptor_model);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4="";else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5="";else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6=0.2;else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7=1;else elib::Utils::fillTuple(a+7, t7);
__tuple t8;if(v_empty(8))t8="num_points";else elib::Utils::fillTuple(a+8, t8);
__tuple t9;
__tuple t10;
callHalcon(find_uncalib_descriptor_model, err, a_obj(0),t1,t2,t3,t4,t5,t6,t7,t8,&t9,&t10);
elib::Utils::fillVar(t9, a+9);elib::Utils::fillVar(t10, a+10);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_gen_bundle_adjusted_mosaic);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="default";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4="false";else elib::Utils::fillTuple(a+4, t4);
__tuple t5;
callHalcon(gen_bundle_adjusted_mosaic, err, a_obj(0),varp_obj(1),t2,t3,t4,&t5);
elib::Utils::fillVar(t5, a+5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_gen_cube_map_mosaic);
__tuple t7;elib::Utils::fillTuple(a+7, t7);
__tuple t8;elib::Utils::fillTuple(a+8, t8);
__tuple t9;if(v_empty(9))t9=1000;else elib::Utils::fillTuple(a+9, t9);
__tuple t10;if(v_empty(10))t10="voronoi";else elib::Utils::fillTuple(a+10, t10);
__tuple t11;if(v_empty(11))t11="bilinear";else elib::Utils::fillTuple(a+11, t11);
callHalcon(gen_cube_map_mosaic, err, a_obj(0),varp_obj(1),varp_obj(2),varp_obj(3),varp_obj(4),varp_obj(5),varp_obj(6),t7,t8,t9,t10,t11);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_gen_initial_components);
__tuple t2;if(v_empty(2))t2="auto";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="auto";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4="auto";else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5="connection";else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6="";else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7="";else elib::Utils::fillTuple(a+7, t7);
callHalcon(gen_initial_components, err, a_obj(0),varp_obj(1),t2,t3,t4,t5,t6,t7);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_gen_projective_mosaic);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;elib::Utils::fillTuple(a+4, t4);
__tuple t5;elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6="default";else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7="false";else elib::Utils::fillTuple(a+7, t7);
__tuple t8;
callHalcon(gen_projective_mosaic, err, a_obj(0),varp_obj(1),t2,t3,t4,t5,t6,t7,&t8);
elib::Utils::fillVar(t8, a+8);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_gen_spherical_mosaic);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=-90;else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5=90;else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6=-180;else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7=180;else elib::Utils::fillTuple(a+7, t7);
__tuple t8;if(v_empty(8))t8=0.1;else elib::Utils::fillTuple(a+8, t8);
__tuple t9;if(v_empty(9))t9="voronoi";else elib::Utils::fillTuple(a+9, t9);
__tuple t10;if(v_empty(10))t10="bilinear";else elib::Utils::fillTuple(a+10, t10);
callHalcon(gen_spherical_mosaic, err, a_obj(0),varp_obj(1),t2,t3,t4,t5,t6,t7,t8,t9,t10);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_component_model_params);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
__tuple t2;
__tuple t3;
callHalcon(get_component_model_params, err, t0,&t1,&t2,&t3);
elib::Utils::fillVar(t1, a+1);elib::Utils::fillVar(t2, a+2);elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_component_model_tree);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4="model_image";else elib::Utils::fillTuple(a+4, t4);
__tuple t5;
__tuple t6;
__tuple t7;
__tuple t8;
__tuple t9;
__tuple t10;
__tuple t11;
__tuple t12;
__tuple t13;
callHalcon(get_component_model_tree, err, varp_obj(0),varp_obj(1),t2,t3,t4,&t5,&t6,&t7,&t8,&t9,&t10,&t11,&t12,&t13);
elib::Utils::fillVar(t5, a+5);elib::Utils::fillVar(t6, a+6);elib::Utils::fillVar(t7, a+7);elib::Utils::fillVar(t8, a+8);elib::Utils::fillVar(t9, a+9);elib::Utils::fillVar(t10, a+10);elib::Utils::fillVar(t11, a+11);elib::Utils::fillVar(t12, a+12);elib::Utils::fillVar(t13, a+13);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_component_relations);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="model_image";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;
__tuple t5;
__tuple t6;
__tuple t7;
__tuple t8;
__tuple t9;
__tuple t10;
callHalcon(get_component_relations, err, varp_obj(0),t1,t2,t3,&t4,&t5,&t6,&t7,&t8,&t9,&t10);
elib::Utils::fillVar(t4, a+4);elib::Utils::fillVar(t5, a+5);elib::Utils::fillVar(t6, a+6);elib::Utils::fillVar(t7, a+7);elib::Utils::fillVar(t8, a+8);elib::Utils::fillVar(t9, a+9);elib::Utils::fillVar(t10, a+10);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_deformable_model_contours);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=1;else elib::Utils::fillTuple(a+2, t2);
callHalcon(get_deformable_model_contours, err, varp_obj(0),t1,t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_deformable_model_origin);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
__tuple t2;
callHalcon(get_deformable_model_origin, err, t0,&t1,&t2);
elib::Utils::fillVar(t1, a+1);elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_deformable_model_params);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="angle_start";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(get_deformable_model_params, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_descriptor_model_origin);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
__tuple t2;
callHalcon(get_descriptor_model_origin, err, t0,&t1,&t2);
elib::Utils::fillVar(t1, a+1);elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_descriptor_model_params);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
__tuple t2;
__tuple t3;
__tuple t4;
__tuple t5;
callHalcon(get_descriptor_model_params, err, t0,&t1,&t2,&t3,&t4,&t5);
elib::Utils::fillVar(t1, a+1);elib::Utils::fillVar(t2, a+2);elib::Utils::fillVar(t3, a+3);elib::Utils::fillVar(t4, a+4);elib::Utils::fillVar(t5, a+5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_descriptor_model_points);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="model";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="all";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;
__tuple t4;
callHalcon(get_descriptor_model_points, err, t0,t1,t2,&t3,&t4);
elib::Utils::fillVar(t3, a+3);elib::Utils::fillVar(t4, a+4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_descriptor_model_results);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="all";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="num_points";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;
callHalcon(get_descriptor_model_results, err, t0,t1,t2,&t3);
elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_found_component_model);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;elib::Utils::fillTuple(a+4, t4);
__tuple t5;elib::Utils::fillTuple(a+5, t5);
__tuple t6;elib::Utils::fillTuple(a+6, t6);
__tuple t7;elib::Utils::fillTuple(a+7, t7);
__tuple t8;elib::Utils::fillTuple(a+8, t8);
__tuple t9;elib::Utils::fillTuple(a+9, t9);
__tuple t10;if(v_empty(10))t10="false";else elib::Utils::fillTuple(a+10, t10);
__tuple t11;
__tuple t12;
__tuple t13;
__tuple t14;
callHalcon(get_found_component_model, err, varp_obj(0),t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,&t11,&t12,&t13,&t14);
elib::Utils::fillVar(t11, a+11);elib::Utils::fillVar(t12, a+12);elib::Utils::fillVar(t13, a+13);elib::Utils::fillVar(t14, a+14);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_ncc_model_origin);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
__tuple t2;
callHalcon(get_ncc_model_origin, err, t0,&t1,&t2);
elib::Utils::fillVar(t1, a+1);elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_ncc_model_params);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
__tuple t2;
__tuple t3;
__tuple t4;
__tuple t5;
callHalcon(get_ncc_model_params, err, t0,&t1,&t2,&t3,&t4,&t5);
elib::Utils::fillVar(t1, a+1);elib::Utils::fillVar(t2, a+2);elib::Utils::fillVar(t3, a+3);elib::Utils::fillVar(t4, a+4);elib::Utils::fillVar(t5, a+5);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_sample_identifier_object_info);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="num_training_objects";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;
callHalcon(get_sample_identifier_object_info, err, t0,t1,t2,&t3);
elib::Utils::fillVar(t3, a+3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_sample_identifier_param);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="rating_method";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;
callHalcon(get_sample_identifier_param, err, t0,t1,&t2);
elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_shape_model_contours);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=1;else elib::Utils::fillTuple(a+2, t2);
callHalcon(get_shape_model_contours, err, varp_obj(0),t1,t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_shape_model_origin);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
__tuple t2;
callHalcon(get_shape_model_origin, err, t0,&t1,&t2);
elib::Utils::fillVar(t1, a+1);elib::Utils::fillVar(t2, a+2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_shape_model_params);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
__tuple t2;
__tuple t3;
__tuple t4;
__tuple t5;
__tuple t6;
__tuple t7;
__tuple t8;
__tuple t9;
callHalcon(get_shape_model_params, err, t0,&t1,&t2,&t3,&t4,&t5,&t6,&t7,&t8,&t9);
elib::Utils::fillVar(t1, a+1);elib::Utils::fillVar(t2, a+2);elib::Utils::fillVar(t3, a+3);elib::Utils::fillVar(t4, a+4);elib::Utils::fillVar(t5, a+5);elib::Utils::fillVar(t6, a+6);elib::Utils::fillVar(t7, a+7);elib::Utils::fillVar(t8, a+8);elib::Utils::fillVar(t9, a+9);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_thresh_images_variation_model);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
callHalcon(get_thresh_images_variation_model, err, varp_obj(0),varp_obj(1),t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_training_components);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="model_components";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="model_image";else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4="false";else elib::Utils::fillTuple(a+4, t4);
__tuple t5;
__tuple t6;
__tuple t7;
__tuple t8;
callHalcon(get_training_components, err, varp_obj(0),t1,t2,t3,t4,&t5,&t6,&t7,&t8);
elib::Utils::fillVar(t5, a+5);elib::Utils::fillVar(t6, a+6);elib::Utils::fillVar(t7, a+7);elib::Utils::fillVar(t8, a+8);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_get_variation_model);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
callHalcon(get_variation_model, err, varp_obj(0),varp_obj(1),t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_inspect_clustered_components);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="rigidity";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=0.2;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=0.5;else elib::Utils::fillTuple(a+4, t4);
callHalcon(inspect_clustered_components, err, varp_obj(0),t1,t2,t3,t4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_modify_component_relations);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="all";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="all";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;elib::Utils::fillTuple(a+4, t4);
callHalcon(modify_component_relations, err, t0,t1,t2,t3,t4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_prepare_direct_variation_model);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3=10;else elib::Utils::fillTuple(a+3, t3);
__tuple t4;if(v_empty(4))t4=2;else elib::Utils::fillTuple(a+4, t4);
callHalcon(prepare_direct_variation_model, err, a_obj(0),a_obj(1),t2,t3,t4);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_prepare_sample_identifier);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="true";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="";else elib::Utils::fillTuple(a+3, t3);
callHalcon(prepare_sample_identifier, err, t0,t1,t2,t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_prepare_variation_model);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=10;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=2;else elib::Utils::fillTuple(a+2, t2);
callHalcon(prepare_variation_model, err, t0,t1,t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_proj_match_points_distortion_ransac);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;elib::Utils::fillTuple(a+4, t4);
__tuple t5;elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6="ncc";else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7=10;else elib::Utils::fillTuple(a+7, t7);
__tuple t8;if(v_empty(8))t8=0;else elib::Utils::fillTuple(a+8, t8);
__tuple t9;if(v_empty(9))t9=0;else elib::Utils::fillTuple(a+9, t9);
__tuple t10;if(v_empty(10))t10=200;else elib::Utils::fillTuple(a+10, t10);
__tuple t11;if(v_empty(11))t11=200;else elib::Utils::fillTuple(a+11, t11);
__tuple t12;if(v_empty(12))t12=0.0;else elib::Utils::fillTuple(a+12, t12);
__tuple t13;if(v_empty(13))t13=0.7;else elib::Utils::fillTuple(a+13, t13);
__tuple t14;if(v_empty(14))t14="gold_standard";else elib::Utils::fillTuple(a+14, t14);
__tuple t15;if(v_empty(15))t15=1;else elib::Utils::fillTuple(a+15, t15);
__tuple t16;if(v_empty(16))t16=0;else elib::Utils::fillTuple(a+16, t16);
__tuple t17;
__tuple t18;
__tuple t19;
__tuple t20;
__tuple t21;
callHalcon(proj_match_points_distortion_ransac, err, a_obj(0),a_obj(1),t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,t13,t14,t15,t16,&t17,&t18,&t19,&t20,&t21);
elib::Utils::fillVar(t17, a+17);elib::Utils::fillVar(t18, a+18);elib::Utils::fillVar(t19, a+19);elib::Utils::fillVar(t20, a+20);elib::Utils::fillVar(t21, a+21);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_proj_match_points_distortion_ransac_guided);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;elib::Utils::fillTuple(a+4, t4);
__tuple t5;elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6="ncc";else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7=10;else elib::Utils::fillTuple(a+7, t7);
__tuple t8;elib::Utils::fillTuple(a+8, t8);
__tuple t9;elib::Utils::fillTuple(a+9, t9);
__tuple t10;if(v_empty(10))t10=20.0;else elib::Utils::fillTuple(a+10, t10);
__tuple t11;if(v_empty(11))t11=0.7;else elib::Utils::fillTuple(a+11, t11);
__tuple t12;if(v_empty(12))t12="gold_standard";else elib::Utils::fillTuple(a+12, t12);
__tuple t13;if(v_empty(13))t13=1;else elib::Utils::fillTuple(a+13, t13);
__tuple t14;if(v_empty(14))t14=0;else elib::Utils::fillTuple(a+14, t14);
__tuple t15;
__tuple t16;
__tuple t17;
__tuple t18;
__tuple t19;
callHalcon(proj_match_points_distortion_ransac_guided, err, a_obj(0),a_obj(1),t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,t13,t14,&t15,&t16,&t17,&t18,&t19);
elib::Utils::fillVar(t15, a+15);elib::Utils::fillVar(t16, a+16);elib::Utils::fillVar(t17, a+17);elib::Utils::fillVar(t18, a+18);elib::Utils::fillVar(t19, a+19);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_proj_match_points_ransac);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;elib::Utils::fillTuple(a+4, t4);
__tuple t5;elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6="ssd";else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7=10;else elib::Utils::fillTuple(a+7, t7);
__tuple t8;if(v_empty(8))t8=0;else elib::Utils::fillTuple(a+8, t8);
__tuple t9;if(v_empty(9))t9=0;else elib::Utils::fillTuple(a+9, t9);
__tuple t10;if(v_empty(10))t10=256;else elib::Utils::fillTuple(a+10, t10);
__tuple t11;if(v_empty(11))t11=256;else elib::Utils::fillTuple(a+11, t11);
__tuple t12;if(v_empty(12))t12=0.0;else elib::Utils::fillTuple(a+12, t12);
__tuple t13;if(v_empty(13))t13=10;else elib::Utils::fillTuple(a+13, t13);
__tuple t14;if(v_empty(14))t14="normalized_dlt";else elib::Utils::fillTuple(a+14, t14);
__tuple t15;if(v_empty(15))t15=0.2;else elib::Utils::fillTuple(a+15, t15);
__tuple t16;if(v_empty(16))t16=0;else elib::Utils::fillTuple(a+16, t16);
__tuple t17;
__tuple t18;
__tuple t19;
callHalcon(proj_match_points_ransac, err, a_obj(0),a_obj(1),t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,t13,t14,t15,t16,&t17,&t18,&t19);
elib::Utils::fillVar(t17, a+17);elib::Utils::fillVar(t18, a+18);elib::Utils::fillVar(t19, a+19);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_proj_match_points_ransac_guided);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
__tuple t4;elib::Utils::fillTuple(a+4, t4);
__tuple t5;elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6="ssd";else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7=10;else elib::Utils::fillTuple(a+7, t7);
__tuple t8;elib::Utils::fillTuple(a+8, t8);
__tuple t9;if(v_empty(9))t9=20.0;else elib::Utils::fillTuple(a+9, t9);
__tuple t10;if(v_empty(10))t10=10;else elib::Utils::fillTuple(a+10, t10);
__tuple t11;if(v_empty(11))t11="normalized_dlt";else elib::Utils::fillTuple(a+11, t11);
__tuple t12;if(v_empty(12))t12=0.2;else elib::Utils::fillTuple(a+12, t12);
__tuple t13;if(v_empty(13))t13=0;else elib::Utils::fillTuple(a+13, t13);
__tuple t14;
__tuple t15;
__tuple t16;
callHalcon(proj_match_points_ransac_guided, err, a_obj(0),a_obj(1),t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,t13,&t14,&t15,&t16);
elib::Utils::fillVar(t14, a+14);elib::Utils::fillVar(t15, a+15);elib::Utils::fillVar(t16, a+16);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_read_component_model);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(read_component_model, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_read_deformable_model);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(read_deformable_model, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_read_descriptor_model);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(read_descriptor_model, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_read_ncc_model);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(read_ncc_model, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_read_sample_identifier);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(read_sample_identifier, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_read_shape_model);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(read_shape_model, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_read_template);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(read_template, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_read_training_components);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(read_training_components, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_read_variation_model);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(read_variation_model, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_remove_sample_identifier_preparation_data);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
callHalcon(remove_sample_identifier_preparation_data, err, t0,t1,t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_remove_sample_identifier_training_data);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
callHalcon(remove_sample_identifier_training_data, err, t0,t1,t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_serialize_component_model);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(serialize_component_model, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_serialize_deformable_model);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(serialize_deformable_model, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_serialize_descriptor_model);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(serialize_descriptor_model, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_serialize_ncc_model);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(serialize_ncc_model, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_serialize_sample_identifier);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(serialize_sample_identifier, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_serialize_shape_model);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(serialize_shape_model, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_serialize_template);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(serialize_template, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_serialize_training_components);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(serialize_training_components, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_serialize_variation_model);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;
callHalcon(serialize_variation_model, err, t0,&t1);
elib::Utils::fillVar(t1, a+1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_set_deformable_model_origin);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
callHalcon(set_deformable_model_origin, err, t0,t1,t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_set_deformable_model_param);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
callHalcon(set_deformable_model_param, err, t0,t1,t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_set_descriptor_model_origin);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=0;else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2=0;else elib::Utils::fillTuple(a+2, t2);
callHalcon(set_descriptor_model_origin, err, t0,t1,t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_set_local_deformable_model_metric);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="use_polarity";else elib::Utils::fillTuple(a+3, t3);
callHalcon(set_local_deformable_model_metric, err, a_obj(0),a_obj(1),t2,t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_set_ncc_model_origin);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
callHalcon(set_ncc_model_origin, err, t0,t1,t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_set_ncc_model_param);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
callHalcon(set_ncc_model_param, err, t0,t1,t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_set_offset_template);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1=0;else elib::Utils::fillTuple(a+1, t1);
callHalcon(set_offset_template, err, t0,t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_set_planar_calib_deformable_model_metric);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="use_polarity";else elib::Utils::fillTuple(a+3, t3);
callHalcon(set_planar_calib_deformable_model_metric, err, a_obj(0),t1,t2,t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_set_planar_uncalib_deformable_model_metric);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="use_polarity";else elib::Utils::fillTuple(a+3, t3);
callHalcon(set_planar_uncalib_deformable_model_metric, err, a_obj(0),t1,t2,t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_set_reference_template);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
callHalcon(set_reference_template, err, t0,t1,t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_set_sample_identifier_object_info);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="training_object_name";else elib::Utils::fillTuple(a+2, t2);
__tuple t3;elib::Utils::fillTuple(a+3, t3);
callHalcon(set_sample_identifier_object_info, err, t0,t1,t2,t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_set_sample_identifier_param);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="rating_method";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="score_single";else elib::Utils::fillTuple(a+2, t2);
callHalcon(set_sample_identifier_param, err, t0,t1,t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_set_shape_model_metric);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
__tuple t3;if(v_empty(3))t3="use_polarity";else elib::Utils::fillTuple(a+3, t3);
callHalcon(set_shape_model_metric, err, a_obj(0),t1,t2,t3);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_set_shape_model_origin);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
callHalcon(set_shape_model_origin, err, t0,t1,t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_set_shape_model_param);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
__tuple t2;elib::Utils::fillTuple(a+2, t2);
callHalcon(set_shape_model_param, err, t0,t1,t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_train_model_components);
__tuple t4;if(v_empty(4))t4="auto";else elib::Utils::fillTuple(a+4, t4);
__tuple t5;if(v_empty(5))t5="auto";else elib::Utils::fillTuple(a+5, t5);
__tuple t6;if(v_empty(6))t6="auto";else elib::Utils::fillTuple(a+6, t6);
__tuple t7;if(v_empty(7))t7=0.5;else elib::Utils::fillTuple(a+7, t7);
__tuple t8;if(v_empty(8))t8=-1;else elib::Utils::fillTuple(a+8, t8);
__tuple t9;if(v_empty(9))t9=-1;else elib::Utils::fillTuple(a+9, t9);
__tuple t10;if(v_empty(10))t10=-1;else elib::Utils::fillTuple(a+10, t10);
__tuple t11;if(v_empty(11))t11="speed";else elib::Utils::fillTuple(a+11, t11);
__tuple t12;if(v_empty(12))t12="rigidity";else elib::Utils::fillTuple(a+12, t12);
__tuple t13;if(v_empty(13))t13=0.2;else elib::Utils::fillTuple(a+13, t13);
__tuple t14;if(v_empty(14))t14=0.5;else elib::Utils::fillTuple(a+14, t14);
__tuple t15;
callHalcon(train_model_components, err, a_obj(0),a_obj(1),a_obj(2),varp_obj(3),t4,t5,t6,t7,t8,t9,t10,t11,t12,t13,t14,&t15);
elib::Utils::fillVar(t15, a+15);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_train_sample_identifier);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;if(v_empty(1))t1="";else elib::Utils::fillTuple(a+1, t1);
__tuple t2;if(v_empty(2))t2="";else elib::Utils::fillTuple(a+2, t2);
callHalcon(train_sample_identifier, err, t0,t1,t2);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_train_variation_model);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
callHalcon(train_variation_model, err, a_obj(0),t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_write_component_model);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
callHalcon(write_component_model, err, t0,t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_write_deformable_model);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
callHalcon(write_deformable_model, err, t0,t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_write_descriptor_model);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
callHalcon(write_descriptor_model, err, t0,t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_write_ncc_model);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
callHalcon(write_ncc_model, err, t0,t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_write_sample_identifier);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
callHalcon(write_sample_identifier, err, t0,t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_write_shape_model);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
callHalcon(write_shape_model, err, t0,t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_write_template);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
callHalcon(write_template, err, t0,t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_write_training_components);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
callHalcon(write_training_components, err, t0,t1);
defFunctionEnd_SetErrorCode;

defFunctionBegin_Try(x_write_variation_model);
__tuple t0;elib::Utils::fillTuple(a+0, t0);
__tuple t1;elib::Utils::fillTuple(a+1, t1);
callHalcon(write_variation_model, err, t0,t1);
defFunctionEnd_SetErrorCode;