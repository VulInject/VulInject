int
utvfu_configure_for_norm(struct utvfu_softc *sc, v4l2_std_id norm)
{
int i, ret = EINVAL;
struct utvfu_norm_params *params = NULL;

for (i = 0; i < nitems(utvfu_norm_params); i++) {
if (utvfu_norm_params[i].norm & norm) {
params = &utvfu_norm_params[i];
break;
}
}

if (params != NULL) {
sc->sc_normi = i;
sc->sc_nchunks = params->cap_width * params->cap_height
/ 4 / UTVFU_CHUNK;
ret = 0;
}

return (ret);
}