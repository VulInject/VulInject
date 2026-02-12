static void ncsi_rsp_sp(struct ncsi_rsp_pkt *pkt)
{
struct ncsi_rsp_pkt_hdr *rsp = (struct ncsi_rsp_pkt_hdr *)pkt;
unsigned int np;

np = NCSI_PACKAGE_INDEX(rsp->common.channel);

if (np < ncsi_priv->n_packages) {

debug("NCSI: package 0x%02x selected\n", np);
return;
}

debug("NCSI: adding new package %d\n", np);

ncsi_priv->packages = realloc(ncsi_priv->packages,
sizeof(struct ncsi_package) *
(ncsi_priv->n_packages + 1));
if (!ncsi_priv->packages) {
printf("NCSI: could not allocate memory for new package\n");
return;
}

ncsi_priv->packages[np].id = np;
ncsi_priv->packages[np].n_channels = 0;
ncsi_priv->packages[np].channels = NULL;
ncsi_priv->n_packages++;
}