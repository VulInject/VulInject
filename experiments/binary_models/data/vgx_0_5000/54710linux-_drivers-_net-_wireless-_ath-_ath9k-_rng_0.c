static int ath9k_rng_data_read(struct ath_softc *sc, u32 *buf, u32 buf_size)
{
int i, j;
u32  v1, v2, rng_last = sc->rng_last;
struct ath_hw *ah = sc->sc_ah;

ath9k_ps_wakeup(sc);

REG_RMW_FIELD(ah, AR_PHY_TEST(ah), AR_PHY_TEST_BBB_OBS_SEL, 1);
REG_CLR_BIT(ah, AR_PHY_TEST(ah), AR_PHY_TEST_RX_OBS_SEL_BIT5);
REG_RMW_FIELD(ah, AR_PHY_TEST_CTL_STATUS(ah), AR_PHY_TEST_CTL_RX_OBS_SEL, 0);

for (i = 0, j = 0; i < buf_size; i++) {
v1 = REG_READ(ah, AR_PHY_TST_ADC) & 0xffff;
v2 = REG_READ(ah, AR_PHY_TST_ADC) & 0xffff;


if (v1 && v2 && rng_last != v1 && v1 != v2 && v1 != 0xffff &&
v2 != 0xffff)
buf[j++] = (v1 << 16) | v2;

rng_last = v2;
}

ath9k_ps_restore(sc);

sc->rng_last = rng_last;

return j << 2;
}