#include "intel/compiler/brw_kernel.h"

static const struct brw_shader_reloc gfx125_bvh_postbuild_info_current_size_relocs[] = {
};
static const u_printf_info gfx125_bvh_postbuild_info_current_size_printfs[] = {
};
static const struct brw_kernel_arg_desc gfx125_bvh_postbuild_info_current_size_args[] = {
   { 0, 8 },
   { 8, 8 },
};

#if 0  /* BEGIN KERNEL ASSEMBLY */

and(1)          g10<1>UD        g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(1)         g1UD            g10UD           nullUD          0x0220d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $0 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
add(8)          g1<1>D          g2<0,1,0>D      168D            { align1 1Q compacted };
mov(8)          g7.1<2>D        g2.3<0,1,0>D                    { align1 1Q };
cmp.l.f0.0(8)   g3<1>UD         g1<1,1,0>UD     0x000000a8UD    { align1 1Q I@2 compacted };
mov(8)          g5<2>UD         g1<4,4,1>UD                     { align1 1Q };
mov(8)          g7<2>D          g2.2<0,1,0>D                    { align1 1Q I@3 };
add(8)          g4<1>D          -g3<1,1,0>D     g2.1<0,1,0>D    { align1 1Q I@3 compacted };
mov(8)          g5.1<2>UD       g4<4,4,1>UD                     { align1 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(8)         g9UD            g5UD            nullUD          0x04201580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1Q $1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(8)         nullUD          g7UD            g9UD            0x04001584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V2, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 2 flat )  base_offset 0  { align1 1Q $2 };
mov(8)          g126<1>UD       g0<8,8,1>UD                     { align1 WE_all 1Q };
send(8)         nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1Q A@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx125_bvh_postbuild_info_current_size_code[] = {
    0x80000065, 0x0a058220, 0x02000004, 0xffffffc0,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80004031, 0x01140000, 0xfa000a0c, 0x00340000,
    0x80002001, 0x00000000, 0x00000000, 0x00000000,
    0xa1010040, 0x0a810203, 0x00030061, 0x07260660,
    0x00000264, 0x00000000, 0xf0031a70, 0x0a800103,
    0x00030061, 0x05060220, 0x00340105, 0x00000000,
    0x00031b61, 0x07060660, 0x00000244, 0x00000000,
    0xa1041b40, 0x02120312, 0x00031961, 0x05260220,
    0x00340405, 0x00000000, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00034131, 0x09140000,
    0xfb000514, 0x00040000, 0x80002101, 0x00000000,
    0x00000000, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x00034231, 0x00000000,
    0xfb080714, 0x00040914, 0x80030061, 0x7e050220,
    0x00460005, 0x00000000, 0x80030931, 0x00000004,
    0x30007e0c, 0x00000000, 0x20000060, 0x00000000,
};
static const struct brw_kernel gfx125_bvh_postbuild_info_current_size = {
   .prog_data = {
      .base.nr_params = 12,
      .base.stage = MESA_SHADER_COMPUTE,
      .base.curb_read_length = 2,
      .base.total_scratch = 0,
      .base.total_shared = 0,
      .base.program_size = 288,
      .base.const_data_size = 0,
      .base.const_data_offset = 0,
      .base.num_relocs = 0,
      .base.relocs = gfx125_bvh_postbuild_info_current_size_relocs,
      .base.printf_info_count = 0,
      .base.printf_info = (u_printf_info *)gfx125_bvh_postbuild_info_current_size_printfs,
      .base.uses_atomic_load_store = false,
      .local_size = { 1, 1, 1 },
      .prog_offset = { 0, 0, 0 },
      .prog_mask = 1,
      .prog_spilled = 0,
      .uses_barrier = false,
      .uses_num_work_groups = false,
      .push.per_thread.dwords = 0,
      .push.per_thread.regs = 0,
      .push.per_thread.size = 0,
      .push.cross_thread.dwords = 12,
      .push.cross_thread.regs = 2,
      .push.cross_thread.size = 64,
   },
   .args_size = 16,
   .arg_count = 2,
   .args = gfx125_bvh_postbuild_info_current_size_args,
   .code = gfx125_bvh_postbuild_info_current_size_code,
};
const char *gfx125_bvh_postbuild_info_current_size_sha1 = "aa28e5c0db1ef17e2a63df986c8b63fc8aedcdc6";
