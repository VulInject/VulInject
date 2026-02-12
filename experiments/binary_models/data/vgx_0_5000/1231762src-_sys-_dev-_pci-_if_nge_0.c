void
nge_miibus_statchg(struct device *dev)
{
struct nge_softc	*sc = (struct nge_softc *)dev;
struct mii_data		*mii = &sc->nge_mii;
u_int32_t		txcfg, rxcfg;

txcfg = CSR_READ_4(sc, NGE_TX_CFG);
rxcfg = CSR_READ_4(sc, NGE_RX_CFG);

DPRINTFN(4, ("%s: nge_miibus_statchg txcfg=%#x, rxcfg=%#x\n",
sc->sc_dv.dv_xname, txcfg, rxcfg));

if ((mii->mii_media_active & IFM_GMASK) == IFM_FDX) {
txcfg |= (NGE_TXCFG_IGN_HBEAT|NGE_TXCFG_IGN_CARR);
rxcfg |= (NGE_RXCFG_RX_FDX);
} else {
txcfg &= ~(NGE_TXCFG_IGN_HBEAT|NGE_TXCFG_IGN_CARR);
rxcfg &= ~(NGE_RXCFG_RX_FDX);
}

txcfg |= NGE_TXCFG_AUTOPAD;

CSR_WRITE_4(sc, NGE_TX_CFG, txcfg);
CSR_WRITE_4(sc, NGE_RX_CFG, rxcfg);


if (IFM_SUBTYPE(mii->mii_media_active) == IFM_1000_T)
NGE_SETBIT(sc, NGE_CFG, NGE_CFG_MODE_1000);
else
NGE_CLRBIT(sc, NGE_CFG, NGE_CFG_MODE_1000);
}