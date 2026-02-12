static int
zsd_print(uintptr_t addrp, const void * datap, void * privatep)
{
struct zsd_entry entry;
struct zsd_cb_data *cbdp;

if (mdb_vread(&entry, sizeof (entry), addrp) == -1) {
mdb_warn("couldn't read zsd_entry at %p", addrp);
return (WALK_ERR);
}
cbdp = (struct zsd_cb_data *)privatep;


if (cbdp->keygiven == TRUE && cbdp->key != entry.zsd_key)
return (WALK_NEXT);

mdb_printf("%?x %0?p %8x\n", entry.zsd_key, entry.zsd_data,
entry.zsd_flags);
if (cbdp->voptgiven == TRUE)
mdb_printf("    Create CB:   %a\n    Shutdown CB: %a\n"
"    Destroy CB:  %a\n", entry.zsd_create,
entry.zsd_shutdown, entry.zsd_destroy);
if (cbdp->keygiven == TRUE) {
cbdp->found = TRUE;
return (WALK_DONE);
}
return (WALK_NEXT);
}