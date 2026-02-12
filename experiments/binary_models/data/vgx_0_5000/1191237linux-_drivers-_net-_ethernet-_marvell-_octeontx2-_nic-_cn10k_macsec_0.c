static int cn10k_mdo_get_rx_sa_stats(struct macsec_context *ctx)
{
struct macsec_rx_sc *sw_rx_sc = ctx->sa.rx_sa->sc;
struct otx2_nic *pfvf = netdev_priv(ctx->netdev);
struct cn10k_mcs_cfg *cfg = pfvf->macsec_cfg;
struct mcs_sa_stats rsp = { 0 };
u8 sa_num = ctx->sa.assoc_num;
struct cn10k_mcs_rxsc *rxsc;

rxsc = cn10k_mcs_get_rxsc(cfg, ctx->secy, sw_rx_sc);
if (!rxsc)
return -ENOENT;

if (sa_num >= CN10K_MCS_SA_PER_SC)
return -EOPNOTSUPP;

cn10k_mcs_sa_stats(pfvf, rxsc->hw_sa_id[sa_num], &rsp, MCS_RX, false);

ctx->stats.rx_sa_stats->InPktsOK = rsp.pkt_ok_cnt;
ctx->stats.rx_sa_stats->InPktsInvalid = rsp.pkt_invalid_cnt;
ctx->stats.rx_sa_stats->InPktsNotValid = rsp.pkt_notvalid_cnt;
ctx->stats.rx_sa_stats->InPktsNotUsingSA = rsp.pkt_nosaerror_cnt;
ctx->stats.rx_sa_stats->InPktsUnusedSA = rsp.pkt_nosa_cnt;

return 0;
}