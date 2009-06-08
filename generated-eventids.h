#define MPI_Abort_event 0
#define MPI_Accumulate_event 1
#define MPI_Add_error_class_event 2
#define MPI_Add_error_code_event 3
#define MPI_Add_error_string_event 4
#define MPI_Address_event 5
#define MPI_Allgather_event 6
#define MPI_Allgatherv_event 7
#define MPI_Alloc_mem_event 8
#define MPI_Allreduce_event 9
#define MPI_Alltoall_event 10
#define MPI_Alltoallv_event 11
#define MPI_Alltoallw_event 12
#define MPI_Attr_delete_event 13
#define MPI_Attr_get_event 14
#define MPI_Attr_put_event 15
#define MPI_Barrier_event 16
#define MPI_Bcast_event 17
#define MPI_Bsend_event 18
#define MPI_Bsend_init_event 19
#define MPI_Buffer_attach_event 20
#define MPI_Buffer_detach_event 21
#define MPI_Cancel_event 22
#define MPI_Cart_coords_event 23
#define MPI_Cart_create_event 24
#define MPI_Cart_get_event 25
#define MPI_Cart_map_event 26
#define MPI_Cart_rank_event 27
#define MPI_Cart_shift_event 28
#define MPI_Cart_sub_event 29
#define MPI_Cartdim_get_event 30
#define MPI_Close_port_event 31
#define MPI_Comm_accept_event 32
#define MPI_Comm_c2f_event 33
#define MPI_Comm_call_errhandler_event 34
#define MPI_Comm_compare_event 35
#define MPI_Comm_connect_event 36
#define MPI_Comm_create_errhandler_event 37
#define MPI_Comm_create_keyval_event 38
#define MPI_Comm_create_event 39
#define MPI_Comm_delete_attr_event 40
#define MPI_Comm_disconnect_event 41
#define MPI_Comm_dup_event 42
#define MPI_Comm_f2c_event 43
#define MPI_Comm_free_keyval_event 44
#define MPI_Comm_free_event 45
#define MPI_Comm_get_attr_event 46
#define MPI_Comm_get_errhandler_event 47
#define MPI_Comm_get_name_event 48
#define MPI_Comm_get_parent_event 49
#define MPI_Comm_group_event 50
#define MPI_Comm_join_event 51
#define MPI_Comm_rank_event 52
#define MPI_Comm_remote_group_event 53
#define MPI_Comm_remote_size_event 54
#define MPI_Comm_set_attr_event 55
#define MPI_Comm_set_errhandler_event 56
#define MPI_Comm_set_name_event 57
#define MPI_Comm_size_event 58
#define MPI_Comm_spawn_event 59
#define MPI_Comm_spawn_multiple_event 60
#define MPI_Comm_split_event 61
#define MPI_Comm_test_inter_event 62
#define MPI_Dims_create_event 63
#define MPI_Errhandler_c2f_event 64
#define MPI_Errhandler_create_event 65
#define MPI_Errhandler_f2c_event 66
#define MPI_Errhandler_free_event 67
#define MPI_Errhandler_get_event 68
#define MPI_Errhandler_set_event 69
#define MPI_Error_class_event 70
#define MPI_Error_string_event 71
#define MPI_Exscan_event 72
#define MPI_File_c2f_event 73
#define MPI_File_f2c_event 74
#define MPI_File_call_errhandler_event 75
#define MPI_File_create_errhandler_event 76
#define MPI_File_set_errhandler_event 77
#define MPI_File_get_errhandler_event 78
#define MPI_File_open_event 79
#define MPI_File_close_event 80
#define MPI_File_delete_event 81
#define MPI_File_set_size_event 82
#define MPI_File_preallocate_event 83
#define MPI_File_get_size_event 84
#define MPI_File_get_group_event 85
#define MPI_File_get_amode_event 86
#define MPI_File_set_info_event 87
#define MPI_File_get_info_event 88
#define MPI_File_set_view_event 89
#define MPI_File_get_view_event 90
#define MPI_File_read_at_event 91
#define MPI_File_read_at_all_event 92
#define MPI_File_write_at_event 93
#define MPI_File_write_at_all_event 94
#define MPI_File_iread_at_event 95
#define MPI_File_iwrite_at_event 96
#define MPI_File_read_event 97
#define MPI_File_read_all_event 98
#define MPI_File_write_event 99
#define MPI_File_write_all_event 100
#define MPI_File_iread_event 101
#define MPI_File_iwrite_event 102
#define MPI_File_seek_event 103
#define MPI_File_get_position_event 104
#define MPI_File_get_byte_offset_event 105
#define MPI_File_read_shared_event 106
#define MPI_File_write_shared_event 107
#define MPI_File_iread_shared_event 108
#define MPI_File_iwrite_shared_event 109
#define MPI_File_read_ordered_event 110
#define MPI_File_write_ordered_event 111
#define MPI_File_seek_shared_event 112
#define MPI_File_get_position_shared_event 113
#define MPI_File_read_at_all_begin_event 114
#define MPI_File_read_at_all_end_event 115
#define MPI_File_write_at_all_begin_event 116
#define MPI_File_write_at_all_end_event 117
#define MPI_File_read_all_begin_event 118
#define MPI_File_read_all_end_event 119
#define MPI_File_write_all_begin_event 120
#define MPI_File_write_all_end_event 121
#define MPI_File_read_ordered_begin_event 122
#define MPI_File_read_ordered_end_event 123
#define MPI_File_write_ordered_begin_event 124
#define MPI_File_write_ordered_end_event 125
#define MPI_File_get_type_extent_event 126
#define MPI_File_set_atomicity_event 127
#define MPI_File_get_atomicity_event 128
#define MPI_File_sync_event 129
#define MPI_Finalize_event 130
#define MPI_Finalized_event 131
#define MPI_Free_mem_event 132
#define MPI_Gather_event 133
#define MPI_Gatherv_event 134
#define MPI_Get_address_event 135
#define MPI_Get_count_event 136
#define MPI_Get_elements_event 137
#define MPI_Get_event 138
#define MPI_Get_processor_name_event 139
#define MPI_Get_version_event 140
#define MPI_Graph_create_event 141
#define MPI_Graph_get_event 142
#define MPI_Graph_map_event 143
#define MPI_Graph_neighbors_count_event 144
#define MPI_Graph_neighbors_event 145
#define MPI_Graphdims_get_event 146
#define MPI_Grequest_complete_event 147
#define MPI_Grequest_start_event 148
#define MPI_Group_c2f_event 149
#define MPI_Group_compare_event 150
#define MPI_Group_difference_event 151
#define MPI_Group_excl_event 152
#define MPI_Group_f2c_event 153
#define MPI_Group_free_event 154
#define MPI_Group_incl_event 155
#define MPI_Group_intersection_event 156
#define MPI_Group_range_excl_event 157
#define MPI_Group_range_incl_event 158
#define MPI_Group_rank_event 159
#define MPI_Group_size_event 160
#define MPI_Group_translate_ranks_event 161
#define MPI_Group_union_event 162
#define MPI_Ibsend_event 163
#define MPI_Info_c2f_event 164
#define MPI_Info_create_event 165
#define MPI_Info_delete_event 166
#define MPI_Info_dup_event 167
#define MPI_Info_f2c_event 168
#define MPI_Info_free_event 169
#define MPI_Info_get_event 170
#define MPI_Info_get_nkeys_event 171
#define MPI_Info_get_nthkey_event 172
#define MPI_Info_get_valuelen_event 173
#define MPI_Info_set_event 174
#define MPI_Init_event 175
#define MPI_Initialized_event 176
#define MPI_Init_thread_event 177
#define MPI_Intercomm_create_event 178
#define MPI_Intercomm_merge_event 179
#define MPI_Iprobe_event 180
#define MPI_Irecv_event 181
#define MPI_Irsend_event 182
#define MPI_Isend_event 183
#define MPI_Issend_event 184
#define MPI_Is_thread_main_event 185
#define MPI_Keyval_create_event 186
#define MPI_Keyval_free_event 187
#define MPI_Lookup_name_event 188
#define MPI_Op_c2f_event 189
#define MPI_Op_create_event 190
#define MPI_Open_port_event 191
#define MPI_Op_f2c_event 192
#define MPI_Op_free_event 193
#define MPI_Pack_external_event 194
#define MPI_Pack_external_size_event 195
#define MPI_Pack_event 196
#define MPI_Pack_size_event 197
#define MPI_Pcontrol_event 198
#define MPI_Probe_event 199
#define MPI_Publish_name_event 200
#define MPI_Put_event 201
#define MPI_Query_thread_event 202
#define MPI_Recv_init_event 203
#define MPI_Recv_event 204
#define MPI_Reduce_event 205
#define MPI_Reduce_scatter_event 206
#define MPI_Register_datarep_event 207
#define MPI_Request_c2f_event 208
#define MPI_Request_f2c_event 209
#define MPI_Request_free_event 210
#define MPI_Request_get_status_event 211
#define MPI_Rsend_event 212
#define MPI_Rsend_init_event 213
#define MPI_Scan_event 214
#define MPI_Scatter_event 215
#define MPI_Scatterv_event 216
#define MPI_Send_init_event 217
#define MPI_Send_event 218
#define MPI_Sendrecv_event 219
#define MPI_Sendrecv_replace_event 220
#define MPI_Ssend_init_event 221
#define MPI_Ssend_event 222
#define MPI_Start_event 223
#define MPI_Startall_event 224
#define MPI_Status_c2f_event 225
#define MPI_Status_f2c_event 226
#define MPI_Status_set_cancelled_event 227
#define MPI_Status_set_elements_event 228
#define MPI_Testall_event 229
#define MPI_Testany_event 230
#define MPI_Test_event 231
#define MPI_Test_cancelled_event 232
#define MPI_Testsome_event 233
#define MPI_Topo_test_event 234
#define MPI_Type_c2f_event 235
#define MPI_Type_commit_event 236
#define MPI_Type_contiguous_event 237
#define MPI_Type_create_darray_event 238
#define MPI_Type_create_f90_complex_event 239
#define MPI_Type_create_f90_integer_event 240
#define MPI_Type_create_f90_real_event 241
#define MPI_Type_create_hindexed_event 242
#define MPI_Type_create_hvector_event 243
#define MPI_Type_create_keyval_event 244
#define MPI_Type_create_indexed_block_event 245
#define MPI_Type_create_struct_event 246
#define MPI_Type_create_subarray_event 247
#define MPI_Type_create_resized_event 248
#define MPI_Type_delete_attr_event 249
#define MPI_Type_dup_event 250
#define MPI_Type_extent_event 251
#define MPI_Type_free_event 252
#define MPI_Type_free_keyval_event 253
#define MPI_Type_f2c_event 254
#define MPI_Type_get_attr_event 255
#define MPI_Type_get_contents_event 256
#define MPI_Type_get_envelope_event 257
#define MPI_Type_get_extent_event 258
#define MPI_Type_get_name_event 259
#define MPI_Type_get_true_extent_event 260
#define MPI_Type_hindexed_event 261
#define MPI_Type_hvector_event 262
#define MPI_Type_indexed_event 263
#define MPI_Type_lb_event 264
#define MPI_Type_match_size_event 265
#define MPI_Type_set_attr_event 266
#define MPI_Type_set_name_event 267
#define MPI_Type_size_event 268
#define MPI_Type_struct_event 269
#define MPI_Type_ub_event 270
#define MPI_Type_vector_event 271
#define MPI_Unpack_event 272
#define MPI_Unpublish_name_event 273
#define MPI_Unpack_external_event 274
#define MPI_Waitall_event 275
#define MPI_Waitany_event 276
#define MPI_Wait_event 277
#define MPI_Waitsome_event 278
#define MPI_Win_c2f_event 279
#define MPI_Win_call_errhandler_event 280
#define MPI_Win_complete_event 281
#define MPI_Win_create_event 282
#define MPI_Win_create_errhandler_event 283
#define MPI_Win_create_keyval_event 284
#define MPI_Win_delete_attr_event 285
#define MPI_Win_f2c_event 286
#define MPI_Win_fence_event 287
#define MPI_Win_free_event 288
#define MPI_Win_free_keyval_event 289
#define MPI_Win_get_attr_event 290
#define MPI_Win_get_errhandler_event 291
#define MPI_Win_get_group_event 292
#define MPI_Win_get_name_event 293
#define MPI_Win_lock_event 294
#define MPI_Win_post_event 295
#define MPI_Win_set_attr_event 296
#define MPI_Win_set_errhandler_event 297
#define MPI_Win_set_name_event 298
#define MPI_Win_start_event 299
#define MPI_Win_test_event 300
#define MPI_Win_unlock_event 301
#define MPI_Win_wait_event 302
#define MPI_Wtick_event 303
#define MPI_Wtime_event 304



#define NUM_EVENTS 305

