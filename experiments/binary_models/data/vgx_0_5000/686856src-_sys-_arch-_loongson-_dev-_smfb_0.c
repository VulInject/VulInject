void
smfb_attach_common(struct smfb_softc *sc, int is5xx, bus_space_tag_t memt,
bus_space_handle_t memh, bus_space_tag_t mmiot, bus_space_handle_t mmioh)
{
struct wsemuldisplaydev_attach_args waa;
int console;

console = smfbcn.ri.ri_hw != NULL;

if (console) {
sc->sc_fb = &smfbcn;
sc->sc_fb->sc = sc;
} else {
sc->sc_fb = &sc->sc_fb_store;
sc->sc_fb->is5xx = is5xx;
if (smfb_setup(sc->sc_fb, memt, memh, mmiot, mmioh) != 0) {
printf(": can't setup frame buffer\n");
return;
}
}

printf(": %dx%d, %dbpp\n", sc->sc_fb->ri.ri_width,
sc->sc_fb->ri.ri_height, sc->sc_fb->ri.ri_depth);

sc->sc_scrlist[0] = &sc->sc_fb->wsd;
sc->sc_wsl.nscreens = 1;
sc->sc_wsl.screens = (const struct wsscreen_descr **)sc->sc_scrlist;

waa.console = console;
waa.scrdata = &sc->sc_wsl;
waa.accessops = &smfb_accessops;
waa.accesscookie = sc;
waa.defaultscreens = 0;

config_found((struct device *)sc, &waa, wsemuldisplaydevprint);
}