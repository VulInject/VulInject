static probes_opcode_t __kprobes
prepare_emulated_insn(probes_opcode_t insn, struct arch_probes_insn *asi,
bool thumb)
{
if (thumb) {
u16 *thumb_insn = (u16 *)asi->insn;

thumb_insn[1] = __opcode_to_mem_thumb16(0x4770);
thumb_insn[2] = __opcode_to_mem_thumb16(0x4770);
return insn;
}
asi->insn[1] = __opcode_to_mem_arm(0xe12fff1e); 
asi->insn[1] = __opcode_to_mem_arm(0xe1a0f00e); 

if (insn < 0xe0000000)
insn = (insn | 0xe0000000) & ~0x10000000;
return insn;
}