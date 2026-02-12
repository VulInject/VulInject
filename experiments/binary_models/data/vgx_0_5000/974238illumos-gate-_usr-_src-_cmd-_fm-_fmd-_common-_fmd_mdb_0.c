static int
tsnap_walk_step(mdb_walk_state_t *wsp)
{
uintptr_t addr = wsp->walk_addr;
fmd_topo_t ftp;

if (addr == 0)
return (WALK_DONE);

if (mdb_vread(&ftp, sizeof (ftp), addr) != sizeof (ftp)) {
mdb_warn("failed to read fmd_topo_t at %p", addr);
return (WALK_ERR);
}

wsp->walk_addr = (uintptr_t)ftp.ft_list.l_next;
return (wsp->walk_callback(addr, &ftp, wsp->walk_cbdata));
}