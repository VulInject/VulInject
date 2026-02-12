static int
smap_reloc_resolve(struct module *mp, char *symname, uint8_t *instr)
{
uint_t symlen;
hotinline_desc_t *hid;

if (strcmp(symname, "smap_enable") == 0 ||
strcmp(symname, "smap_disable") == 0) {

if (kobj_debug & D_RELOCATIONS) {
_kobj_printf(ops, "smap_reloc_resolve: %s relocating "
"enable/disable_smap\n", mp->filename);
}

hid = kobj_alloc(sizeof (hotinline_desc_t), KM_WAIT);
symlen = strlen(symname) + 1;
hid->hid_symname = kobj_alloc(symlen, KM_WAIT);
bcopy(symname, hid->hid_symname, symlen);


hid->hid_instr_offset = (uintptr_t)instr - 1;
hid->hid_next = mp->hi_calls;
mp->hi_calls = hid;

memset((void *)hid->hid_instr_offset, NOP_INSTR, SMAP_NOPS);

return (0);
}

return (1);
}