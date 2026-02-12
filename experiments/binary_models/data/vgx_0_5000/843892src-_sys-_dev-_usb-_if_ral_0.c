void
ural_enable_tsf_sync(struct ural_softc *sc)
{
struct ieee80211com *ic = &sc->sc_ic;
uint16_t logcwmin, preload, tmp;


ural_write(sc, RAL_TXRX_CSR19, 0);

tmp = (16 * ic->ic_bss->ni_intval) << 4;
ural_write(sc, RAL_TXRX_CSR18, tmp);

if (ic->ic_opmode == IEEE80211_M_IBSS) {
logcwmin = 2;
preload = 320;
} else
{
logcwmin = 0;
preload = 6;
}
tmp = logcwmin << 12 | preload;
ural_write(sc, RAL_TXRX_CSR20, tmp);


tmp = RAL_ENABLE_TSF | RAL_ENABLE_TBCN;
if (ic->ic_opmode == IEEE80211_M_STA)
tmp |= RAL_ENABLE_TSF_SYNC(1);
else
tmp |= RAL_ENABLE_TSF_SYNC(2) | RAL_ENABLE_BEACON_GENERATOR;
ural_write(sc, RAL_TXRX_CSR19, tmp);

DPRINTF(("enabling TSF synchronization\n"));
}