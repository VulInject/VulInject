int
hidpp_send_fap_report(struct uhidpp_softc *sc, uint8_t report_id,
uint8_t device_id, uint8_t feature_idx, uint8_t func_idx,
uint8_t *params, int nparams, struct uhidpp_report *resp)
{
struct uhidpp_report req;
int error;

error = hidpp_send_validate(report_id, nparams);
if (error)
return error;

memset(&req, 0, sizeof(req));
req.device_id = device_id;
req.fap.feature_idx = feature_idx;
sc->sc_swid = sc->sc_swid == HIDPP_SOFTWARE_ID_MAX ?
HIDPP_SOFTWARE_ID_MIN : sc->sc_swid + 1;
req.fap.funcidx_swid =
(func_idx << HIDPP_SOFTWARE_ID_LEN) | sc->sc_swid;
memcpy(req.fap.params, params, nparams);
return hidpp_send_report(sc, report_id, &req, resp);
}