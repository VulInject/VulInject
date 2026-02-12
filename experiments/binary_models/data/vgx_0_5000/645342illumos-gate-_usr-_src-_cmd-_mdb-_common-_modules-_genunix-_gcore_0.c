static void
gcore_anon_get(uintptr_t ahp, ulong_t an_index, uintptr_t *vp, u_offset_t *off)
{
mdb_anon_t	anon;
uintptr_t	ap;

ap = gcore_anon_get_ptr(ahp, an_index);
if (ap != 0) {
if (mdb_ctf_vread(&anon, "struct anon", "mdb_anon_t", ap, 0) ==
-1) {
return;
}

*vp = anon.an_vp;
*off = anon.an_off;
} else {
*vp = 0;
*off = 0;
}
}