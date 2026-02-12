static u8 bm_rcr_cce_update(struct bm_portal *portal)
{
struct bm_rcr *rcr = &portal->rcr;
u8 diff, old_ci = rcr->ci;

DPAA_ASSERT(rcr->cmode == bm_rcr_cce);
rcr->ci = bm_ce_in(portal, BM_CL_RCR_CI_CENA) & (BM_RCR_SIZE - 1);
bm_cl_invalidate(portal, BM_CL_RCR_CI_CENA);
diff = dpaa_cyc_diff(BM_RCR_SIZE, old_ci, rcr->ci);
rcr->available += diff;
return diff;
}