void cvmx_pki_enable(int node)
{
cvmx_pki_sft_rst_t sft_rst;
cvmx_pki_buf_ctl_t buf_ctl;

sft_rst.u64 = csr_rd_node(node, CVMX_PKI_SFT_RST);
while (sft_rst.s.busy != 0)
sft_rst.u64 = csr_rd_node(node, CVMX_PKI_SFT_RST);

buf_ctl.u64 = csr_rd_node(node, CVMX_PKI_BUF_CTL);
if (buf_ctl.s.pki_en)
debug("Warning: Enabling PKI when PKI already enabled.\n");

buf_ctl.s.pki_en = 1;
csr_wr_node(node, CVMX_PKI_BUF_CTL, buf_ctl.u64);
}