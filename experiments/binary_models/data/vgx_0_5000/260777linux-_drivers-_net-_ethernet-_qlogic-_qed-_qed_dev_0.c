static int
qed_llh_shadow_add_filter(struct qed_dev *cdev,
u8 ppfid,
enum qed_llh_filter_type type,
union qed_llh_filter *p_filter,
u8 *p_filter_idx, u32 *p_ref_cnt)
{
int rc;


rc = qed_llh_shadow_search_filter(cdev, ppfid, p_filter, p_filter_idx);
if (rc)
return rc;


if (*p_filter_idx == QED_LLH_INVALID_FILTER_IDX) {
rc = qed_llh_shadow_get_free_idx(cdev, ppfid, p_filter_idx);
if (rc)
return rc;
}


if (*p_filter_idx == QED_LLH_INVALID_FILTER_IDX) {
DP_NOTICE(cdev,
"Failed to find an empty LLH filter to utilize [ppfid %d]\n",
ppfid);
return -EINVAL;
}

return __qed_llh_shadow_add_filter(cdev, ppfid, *p_filter_idx, type,
p_filter, p_ref_cnt);
}