void
bfa_ioim_lm_init(struct bfa_s *bfa)
{
struct bfa_lun_mask_s *lunm_list;
int	i;

if (bfa_get_lun_mask_status(bfa) == BFA_LUNMASK_MINCFG)
return;

lunm_list = bfa_get_lun_mask_list(bfa);
for (i = 0; i < MAX_LUN_MASK_CFG; i++) {
lunm_list[i].ua = BFA_IOIM_LM_UA_RESET;
lunm_list[i].lp_tag = BFA_LP_TAG_INVALID;
lunm_list[i].rp_tag = BFA_RPORT_TAG_INVALID;
}
}