static int qed_nic_setup(struct qed_dev *cdev)
{
int rc, i;


if (QED_LEADING_HWFN(cdev)->hw_info.personality != QED_PCI_ETH) {
for (i = 0; i < cdev->num_hwfns; i++) {
struct qed_hwfn *p_hwfn = &cdev->hwfns[i];

p_hwfn->using_ll2 = true;
}
}

rc = qed_resc_alloc(cdev);
if (rc)
return rc;

DP_INFO(cdev, "Allocated qed resources\n");

qed_resc_setup(cdev);

return rc;
}