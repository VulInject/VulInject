u8_t lm_pf_is_sriov_valid(struct _lm_device_t *pdev)
{
u8_t res = FALSE;
if (IS_PFDEV(pdev)) {
if (pdev->hw_info.sriov_info.total_vfs) {
DbgMessage(pdev, FATAL, "The card has valid SRIOV caps\n");
res = TRUE;
} else {
DbgMessage(pdev, FATAL, "The card has not valid SRIOV caps\n");
res = FALSE;
}
} else {
DbgMessage(pdev, FATAL, "Request of validity SRIOV caps is not applicable for VF\n");
res = FALSE;
}
return res;
}