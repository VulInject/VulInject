static int qed_iwarp_alloc_cid(struct qed_hwfn *p_hwfn, u32 *cid)
{
int rc;

spin_lock_bh(&p_hwfn->p_rdma_info->lock);
rc = qed_rdma_bmap_alloc_id(p_hwfn, &p_hwfn->p_rdma_info->cid_map, cid);
spin_unlock_bh(&p_hwfn->p_rdma_info->lock);
if (rc) {
DP_NOTICE(p_hwfn, "Failed in allocating iwarp cid\n");
return rc;
}
*cid += qed_cxt_get_proto_cid_start(p_hwfn, p_hwfn->p_rdma_info->proto);

rc = qed_cxt_dynamic_ilt_alloc(p_hwfn, QED_ELEM_CXT, *cid);
if (rc)
qed_iwarp_cid_cleaned(p_hwfn, *cid);

return rc;
}