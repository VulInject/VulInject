static int
bpf_program__relocate(struct bpf_program *prog, struct bpf_object *obj)
{
int i;

if (!prog || !prog->reloc_desc)
return 0;

for (i = 0; i < prog->nr_reloc; i++) {
int insn_idx, map_idx;
struct bpf_insn *insns = prog->insns;

insn_idx = prog->reloc_desc[i].insn_idx;
map_idx = prog->reloc_desc[i].map_idx;

if (insn_idx >= (int)prog->insns_cnt) {
pr_warning("relocation out of range: '%s'\n",
prog->section_name);
return -LIBBPF_ERRNO__RELOC;
}
insns[insn_idx].src_reg = BPF_PSEUDO_MAP_FD;
insns[insn_idx].imm = obj->maps[map_idx].fd;
}

zfree(&prog->reloc_desc);
prog->nr_reloc = 0;
return 0;
}