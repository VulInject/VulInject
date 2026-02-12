void
amphyattach(struct device *parent, struct device *self, void *aux)
{
struct mii_softc *sc = (struct mii_softc *)self;
struct mii_attach_args *ma = aux;
struct mii_data *mii = ma->mii_data;
const struct mii_phydesc *mpd;

mpd = mii_phy_match(ma, amphys);
printf(": %s, rev. %d\n", mpd->mpd_name, MII_REV(ma->mii_id2));

sc->mii_inst = mii->mii_instance;
sc->mii_phy = ma->mii_phyno;
sc->mii_funcs = &amphy_funcs;
sc->mii_pdata = mii;
sc->mii_flags = ma->mii_flags;

sc->mii_flags |= MIIF_NOISOLATE;

PHY_RESET(sc);

sc->mii_capabilities =
PHY_READ(sc, MII_BMSR) & ma->mii_capmask;
if (sc->mii_capabilities & BMSR_MEDIAMASK)
mii_phy_add_media(sc);
}