static int
asru_walk_init(mdb_walk_state_t *wsp)
{
fmd_asru_hash_t ah;
fmd_t F;

if (wsp->walk_addr == 0 && mdb_readvar(&F, "fmd") != sizeof (F)) {
mdb_warn("failed to read fmd meta-data");
return (WALK_ERR);
}

if (wsp->walk_addr == 0)
wsp->walk_addr = (uintptr_t)F.d_asrus;

if (mdb_vread(&ah, sizeof (ah), wsp->walk_addr) != sizeof (ah)) {
mdb_warn("failed to read asru_hash at %p", wsp->walk_addr);
return (WALK_ERR);
}

return (hash_walk_init(wsp, (uintptr_t)ah.ah_hash, ah.ah_hashlen,
"fmd_asru", sizeof (fmd_asru_t), OFFSETOF(fmd_asru_t, asru_next)));
}