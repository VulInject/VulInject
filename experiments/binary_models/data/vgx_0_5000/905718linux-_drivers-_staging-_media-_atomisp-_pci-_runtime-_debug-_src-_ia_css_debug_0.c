void ia_css_debug_pc_dump(sp_ID_t id, unsigned int num_of_dumps)
{
unsigned int pc;
unsigned int i;
hrt_data sc = sp_ctrl_load(id, SP_SC_REG);

ia_css_debug_dtrace(IA_CSS_DEBUG_TRACE, "SP%-1d Status reg: 0x%X\n", id, sc);
sc = sp_ctrl_load(id, SP_CTRL_SINK_REG);
ia_css_debug_dtrace(IA_CSS_DEBUG_TRACE, "SP%-1d Stall reg: 0x%X\n", id, sc);
for (i = 0; i < num_of_dumps; i++) {
pc = sp_ctrl_load(id, SP_PC_REG);
ia_css_debug_dtrace(IA_CSS_DEBUG_TRACE, "SP%-1d PC: 0x%X\n", id, pc);
}
}