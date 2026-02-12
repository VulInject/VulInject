static void anal_pic_midrange_malloc(RAnal *anal, bool force) {
static R_TH_LOCAL bool init_done = false;

if (!init_done || force) {



mem_sram =
cpu_memory_map (&anal->iob, mem_sram,
PIC_MIDRANGE_ESIL_SRAM_START, 0x1000);
mem_stack =
cpu_memory_map (&anal->iob, mem_stack,
PIC_MIDRANGE_ESIL_CSTACK_TOP, 0x20);

pic_midrange_reg_write (anal->reg, "_sram",
PIC_MIDRANGE_ESIL_SRAM_START);
pic_midrange_reg_write (anal->reg, "_stack",
PIC_MIDRANGE_ESIL_CSTACK_TOP);
pic_midrange_reg_write (anal->reg, "stkptr", 0x1f);

init_done = true;
}
}