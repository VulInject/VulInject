static void octeon_lmc_edac_poll(struct mem_ctl_info *mci)
{
union cvmx_lmcx_mem_cfg0 cfg0;
bool do_clear = false;
char msg[64];

cfg0.u64 = cvmx_read_csr(CVMX_LMCX_MEM_CFG0(mci->mc_idx));
if (cfg0.s.sec_err || cfg0.s.ded_err) {
union cvmx_lmcx_fadr fadr;
fadr.u64 = cvmx_read_csr(CVMX_LMCX_FADR(mci->mc_idx));
snprintf(msg, sizeof(msg),
"DIMM %d rank %d bank %d row %d col %d",
fadr.cn30xx.fdimm, fadr.cn30xx.fbunk,
fadr.cn30xx.fbank, fadr.cn30xx.frow, fadr.cn30xx.fcol);
}

if (cfg0.s.sec_err) {
edac_mc_handle_error(HW_EVENT_ERR_CORRECTED, mci, 1, 0, 0, 0,
-1, -1, -1, msg, "");
cfg0.s.sec_err = -1;	
do_clear = true;
}

if (cfg0.s.ded_err) {
edac_mc_handle_error(HW_EVENT_ERR_UNCORRECTED, mci, 1, 0, 0, 0,
-1, -1, -1, msg, "");
cfg0.s.ded_err = -1;	
do_clear = true;
}
if (do_clear)
cvmx_write_csr(CVMX_LMCX_MEM_CFG0(mci->mc_idx), cfg0.u64);
}