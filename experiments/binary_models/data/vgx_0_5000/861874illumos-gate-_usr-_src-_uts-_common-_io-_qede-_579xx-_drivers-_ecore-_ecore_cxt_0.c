static void ecore_cxt_src_iids(struct ecore_hwfn *p_hwfn,
struct ecore_cxt_mngr *p_mngr,
struct ecore_src_iids *iids)
{
u32 i;

for (i = 0; i < MAX_CONN_TYPES; i++) {
if (!src_proto(p_hwfn, i))
continue;

iids->pf_cids += p_mngr->conn_cfg[i].cid_count;
iids->per_vf_cids += p_mngr->conn_cfg[i].cids_per_vf;
}


iids->pf_cids += p_mngr->arfs_count;
}