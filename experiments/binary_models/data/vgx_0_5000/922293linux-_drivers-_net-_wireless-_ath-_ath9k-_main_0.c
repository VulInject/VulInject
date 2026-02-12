static void ath9k_set_coverage_class(struct ieee80211_hw *hw,
s16 coverage_class)
{
struct ath_softc *sc = hw->priv;
struct ath_hw *ah = sc->sc_ah;

if (IS_ENABLED(CONFIG_ATH9K_TX99))
return;

mutex_lock(&sc->mutex);

if (coverage_class >= 0) {
ah->coverage_class = coverage_class;
if (ah->dynack.enabled) {
u32 rfilt;

ah->dynack.enabled = false;
rfilt = ath_calcrxfilter(sc);
ath9k_hw_setrxfilter(ah, rfilt);
}
ath9k_ps_wakeup(sc);
ath9k_hw_init_global_settings(ah);
ath9k_ps_restore(sc);
} else if (!ah->dynack.enabled) {
ath9k_enable_dynack(sc);
}

mutex_unlock(&sc->mutex);
}