static void handle_error(struct edac_device_ctl_info *dci, struct ecc_status *p)
{
struct edac_priv *priv = dci->pvt_info;
struct ecc_error_info *pinf;

if (p->ce_cnt) {
pinf = &p->ceinfo;
snprintf(priv->message, ZYNQMP_OCM_EDAC_MSG_SIZE,
"\nOCM ECC error type :%s\nAddr: [0x%x]\nFault Data[0x%08x%08x]",
"CE", pinf->addr, pinf->fault_hi, pinf->fault_lo);
edac_device_handle_ce(dci, 0, 0, priv->message);
}

if (p->ue_cnt) {
pinf = &p->ueinfo;
snprintf(priv->message, ZYNQMP_OCM_EDAC_MSG_SIZE,
"\nOCM ECC error type :%s\nAddr: [0x%x]\nFault Data[0x%08x%08x]",
"UE", pinf->addr, pinf->fault_hi, pinf->fault_lo);
edac_device_handle_ue(dci, 0, 0, priv->message);
}

memset(p, 0, sizeof(*p));
}