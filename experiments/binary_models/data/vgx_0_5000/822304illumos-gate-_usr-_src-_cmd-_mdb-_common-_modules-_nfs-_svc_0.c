static int
svc_get_pool(uintptr_t zone_addr, uintptr_t *svc_addr)
{
mdb_ctf_id_t id;
ulong_t offset;
uintptr_t glob_addr;

if (zoned_get_zsd(zone_addr, "svc_zone_key", &glob_addr) != DCMD_OK) {
mdb_warn("failed to get zoned svc");
return (WALK_ERR);
}

if (mdb_ctf_lookup_by_name("struct svc_globals", &id)) {
mdb_warn("failed to look up type %s", "struct svc_globals");
return (WALK_ERR);
}

if (mdb_ctf_offsetof(id, "svc_pools", &offset)) {
mdb_warn("failed to get %s offset", "svc_pools");
return (WALK_ERR);
}

offset /= NBBY;
if (mdb_vread(svc_addr, sizeof (*svc_addr), glob_addr + offset) == -1) {
mdb_warn("failed to read svc_pools address");
return (WALK_ERR);
}

return (WALK_NEXT);
}