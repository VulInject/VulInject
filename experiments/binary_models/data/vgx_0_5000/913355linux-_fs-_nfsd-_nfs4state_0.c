static int nfs4_init_cp_state(struct nfsd_net *nn, copy_stateid_t *stid,
unsigned char cs_type)
{
int new_id;

stid->cs_stid.si_opaque.so_clid.cl_boot = (u32)nn->boot_time;
stid->cs_stid.si_opaque.so_clid.cl_id = nn->s2s_cp_cl_id;

idr_preload(GFP_KERNEL);
spin_lock(&nn->s2s_cp_lock);
new_id = idr_alloc_cyclic(&nn->s2s_cp_stateids, stid, 0, 0, GFP_NOWAIT);
stid->cs_stid.si_opaque.so_id = new_id;
stid->cs_stid.si_generation = 1;
spin_unlock(&nn->s2s_cp_lock);
idr_preload_end();
if (new_id < 0)
return 0;
stid->cs_type = cs_type;
return 1;
}