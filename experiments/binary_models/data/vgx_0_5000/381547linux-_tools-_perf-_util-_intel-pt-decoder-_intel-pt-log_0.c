void __intel_pt_log_insn(struct intel_pt_insn *intel_pt_insn, uint64_t ip)
{
char desc[INTEL_PT_INSN_DESC_MAX];
size_t len = intel_pt_insn->length;

if (intel_pt_log_open())
return;

if (len > INTEL_PT_INSN_BUF_SZ)
len = INTEL_PT_INSN_BUF_SZ;
intel_pt_print_data(intel_pt_insn->buf, len, ip, 8);
if (intel_pt_insn_desc(intel_pt_insn, desc, INTEL_PT_INSN_DESC_MAX) > 0)
fprintf(f, "%s\n", desc);
else
fprintf(f, "Bad instruction!\n");
}