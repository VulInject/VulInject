static int aq_clear_txsc(struct aq_nic_s *nic, const int txsc_idx,
enum aq_clear_type clear_type)
{
struct aq_macsec_txsc *tx_sc = &nic->macsec_cfg->aq_txsc[txsc_idx];
struct aq_mss_egress_class_record tx_class_rec = { 0 };
struct aq_mss_egress_sc_record sc_rec = { 0 };
struct aq_hw_s *hw = nic->aq_hw;
int ret = 0;
int sa_num;

for_each_set_bit (sa_num, &tx_sc->tx_sa_idx_busy, AQ_MACSEC_MAX_SA) {
ret = aq_clear_txsa(nic, tx_sc, sa_num, clear_type);
if (ret)
return ret;
}

if (clear_type & AQ_CLEAR_HW) {
ret = aq_mss_set_egress_class_record(hw, &tx_class_rec,
txsc_idx);
if (ret)
return ret;

sc_rec.fresh = 1;
ret = aq_mss_set_egress_sc_record(hw, &sc_rec,
tx_sc->hw_sc_idx);
if (ret)
return ret;
}

if (clear_type & AQ_CLEAR_SW) {
clear_bit(txsc_idx, &nic->macsec_cfg->txsc_idx_busy);
nic->macsec_cfg->aq_txsc[txsc_idx].sw_secy = NULL;
}

return ret;
}