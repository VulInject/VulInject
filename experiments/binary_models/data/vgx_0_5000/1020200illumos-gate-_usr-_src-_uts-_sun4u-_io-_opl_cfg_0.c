static int
opl_probe_init(opl_probe_t *probe)
{
hwd_header_t		**hdrp;
hwd_sb_status_t		**statp;
hwd_domain_info_t	**dinfop;
hwd_sb_t		**sbp;
int			board, ret;

board = probe->pr_board;

hdrp = &probe->pr_hdr;
statp = &probe->pr_sb_status;
dinfop = &probe->pr_dinfo;
sbp = &probe->pr_sb;


ret = opl_read_hwd(board, hdrp, statp, dinfop, sbp);
if (ret != 0) {

cmn_err(CE_WARN, "IKP: failed to read HWD header");
return (-1);
}

opl_dump_hwd(probe);
return (0);
}