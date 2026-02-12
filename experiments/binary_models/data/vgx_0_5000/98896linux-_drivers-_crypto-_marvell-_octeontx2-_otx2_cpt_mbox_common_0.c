}
EXPORT_SYMBOL_NS_GPL(otx2_cpt_detach_rsrcs_msg, CRYPTO_DEV_OCTEONTX2_CPT);

int otx2_cpt_msix_offset_msg(struct otx2_cptlfs_info *lfs)
{
struct otx2_mbox *mbox = lfs->mbox;
struct pci_dev *pdev = lfs->pdev;
struct mbox_msghdr *req;
int ret, i;

req = otx2_mbox_alloc_msg_rsp(mbox, 0, sizeof(*req),
sizeof(struct msix_offset_rsp));
if (req == NULL) {
dev_err(&pdev->dev, "RVU MBOX failed to get message.\n");
return -EFAULT;
}

req->id = MBOX_MSG_MSIX_OFFSET;
req->sig = OTX2_MBOX_REQ_SIG;
req->pcifunc = 0;
ret = otx2_cpt_send_mbox_msg(mbox, pdev);
if (ret)
return ret;

for (i = 0; i < lfs->lfs_num; i++) {
if (lfs->lf[i].msix_offset == MSIX_VECTOR_INVALID) {
dev_err(&pdev->dev,
"Invalid msix offset %d for LF %d\n",
lfs->lf[i].msix_offset, i);
return -EINVAL;
}
}
return ret;
}