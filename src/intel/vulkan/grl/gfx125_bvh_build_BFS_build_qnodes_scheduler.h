#include "intel/compiler/brw_kernel.h"

static const struct brw_shader_reloc gfx125_bvh_build_BFS_build_qnodes_scheduler_relocs[] = {
};
static const u_printf_info gfx125_bvh_build_BFS_build_qnodes_scheduler_printfs[] = {
};
static const struct brw_kernel_arg_desc gfx125_bvh_build_BFS_build_qnodes_scheduler_args[] = {
   { 0, 8 },
};

#if 0  /* BEGIN KERNEL ASSEMBLY */

and(1)          g22<1>UD        g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
mov(8)          g21<1>UD        0x00000000UD                    { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(1)         g1UD            g22UD           nullUD          0x0220d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $0 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
add(8)          g1<1>D          g2<0,1,0>D      28D             { align1 1Q compacted };
add(8)          g7<1>D          g2<0,1,0>D      4D              { align1 1Q compacted };
mov(8)          g18.1<2>D       g2.1<0,1,0>D                    { align1 1Q };
cmp.l.f0.0(8)   g3<1>UD         g1<1,1,0>UD     g2<0,1,0>UD     { align1 1Q I@3 compacted };
mov(8)          g5<2>UD         g1<4,4,1>UD                     { align1 1Q };
cmp.l.f0.0(8)   g8<1>UD         g7<1,1,0>UD     g2<0,1,0>UD     { align1 1Q I@4 compacted };
mov(8)          g10<2>UD        g7<4,4,1>UD                     { align1 1Q };
mov(8)          g18<2>D         g2<0,1,0>D                      { align1 1Q I@5 };
add(8)          g4<1>D          -g3<1,1,0>D     g2.1<0,1,0>D    { align1 1Q I@5 compacted };
add(8)          g9<1>D          -g8<1,1,0>D     g2.1<0,1,0>D    { align1 1Q I@4 compacted };
mov(8)          g5.1<2>UD       g4<4,4,1>UD                     { align1 1Q I@2 };
mov(8)          g10.1<2>UD      g9<4,4,1>UD                     { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(8)         g6UD            g5UD            nullUD          0x04100580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1Q $1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(8)         g11UD           g10UD           nullUD          0x04100580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1Q $2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.dst };
sel.l(8)        g20<1>UD        g11<1,1,0>UD    g6<1,1,0>UD     { align1 1Q $2.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(8)         nullUD          g18UD           g20UD           0x04001584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V2, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 2 flat )  base_offset 0  { align1 1Q $3 };
add(8)          g12<1>D         g2<0,1,0>D      40D             { align1 1Q compacted };
cmp.l.f0.0(8)   g13<1>UD        g12<1,1,0>UD    g2<0,1,0>UD     { align1 1Q I@1 compacted };
mov(8)          g15<2>UD        g12<4,4,1>UD                    { align1 1Q };
add(8)          g14<1>D         -g13<1,1,0>D    g2.1<0,1,0>D    { align1 1Q I@2 compacted };
mov(8)          g15.1<2>UD      g14<4,4,1>UD                    { align1 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(8)         g17UD           g15UD           nullUD          0x04100580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1Q $4 };
cmp.nz.f0.0(8)  null<1>D        g17<8,8,1>D     0D              { align1 1Q $4.dst };
(-f0.0) sel(8)  g21<1>UD        g6<8,8,1>UD     0x00000000UD    { align1 1Q $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(8)         nullUD          g15UD           g21UD           0x04000584                0x00000040
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 1 flat )  base_offset 0  { align1 1Q $5 };
mov(8)          g126<1>UD       g0<8,8,1>UD                     { align1 WE_all 1Q };
send(8)         nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1Q A@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx125_bvh_build_BFS_build_qnodes_scheduler_code[] = {
    0x80000065, 0x16058220, 0x02000004, 0xffffffc0,
    0x00030061, 0x15054220, 0x00000000, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x80004031, 0x01140000, 0xfa00160c, 0x00340000,
    0x80002001, 0x00000000, 0x00000000, 0x00000000,
    0xa1010040, 0x01c10203, 0xa1070040, 0x00410203,
    0x00030061, 0x12260660, 0x00000224, 0x00000000,
    0x30031b70, 0x02100103, 0x00030061, 0x05060220,
    0x00340105, 0x00000000, 0x30081c70, 0x02100703,
    0x00030061, 0x0a060220, 0x00340705, 0x00000000,
    0x00031d61, 0x12060660, 0x00000204, 0x00000000,
    0xa1041d40, 0x02120312, 0xa1091c40, 0x02120812,
    0x00031a61, 0x05260220, 0x00340405, 0x00000000,
    0x00031a61, 0x0a260220, 0x00340905, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00034131, 0x060c0000, 0xfb000514, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00034231, 0x0b0c0000, 0xfb000a14, 0x00000000,
    0x80002101, 0x00000000, 0x00000000, 0x00000000,
    0x30142262, 0x06000b03, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00034331, 0x00000000,
    0xfb081214, 0x00041414, 0xa10c0040, 0x02810203,
    0x300d1970, 0x02100c03, 0x00030061, 0x0f060220,
    0x00340c05, 0x00000000, 0xa10e1a40, 0x02120d12,
    0x00031961, 0x0f260220, 0x00340e05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00034431, 0x110c0000, 0xfb000f14, 0x00000000,
    0x00032470, 0x00018660, 0x26461105, 0x00000000,
    0x11033362, 0x15058220, 0x02460605, 0x00000000,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00034531, 0x00000000, 0xfb080f14, 0x0000150c,
    0x80030061, 0x7e050220, 0x00460005, 0x00000000,
    0x80030931, 0x00000004, 0x30007e0c, 0x00000000,
};
static const struct brw_kernel gfx125_bvh_build_BFS_build_qnodes_scheduler = {
   .prog_data = {
      .base.nr_params = 10,
      .base.stage = MESA_SHADER_COMPUTE,
      .base.curb_read_length = 2,
      .base.total_scratch = 0,
      .base.total_shared = 0,
      .base.program_size = 544,
      .base.const_data_size = 0,
      .base.const_data_offset = 0,
      .base.num_relocs = 0,
      .base.relocs = gfx125_bvh_build_BFS_build_qnodes_scheduler_relocs,
      .base.printf_info_count = 0,
      .base.printf_info = (u_printf_info *)gfx125_bvh_build_BFS_build_qnodes_scheduler_printfs,
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
      .push.cross_thread.dwords = 10,
      .push.cross_thread.regs = 2,
      .push.cross_thread.size = 64,
   },
   .args_size = 8,
   .arg_count = 1,
   .args = gfx125_bvh_build_BFS_build_qnodes_scheduler_args,
   .code = gfx125_bvh_build_BFS_build_qnodes_scheduler_code,
};
const char *gfx125_bvh_build_BFS_build_qnodes_scheduler_sha1 = "e6f39945a83256dc48e2c786c5bc4feaca26a5a5";
