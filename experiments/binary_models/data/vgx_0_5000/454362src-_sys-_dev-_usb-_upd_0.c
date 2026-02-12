void
upd_update_report_cb(void *priv, int repid, void *data, int len)
{
struct upd_softc	*sc = priv;
struct upd_report	*report = &sc->sc_reports[repid];
struct upd_sensor	*sensor;


if (len > 0 && report->size != len)
report->size = len;

if (data == NULL || len <= 0) {
SLIST_FOREACH(sensor, &report->sensors, rep_next)
upd_sensor_invalidate(sc, sensor);
} else {
SLIST_FOREACH(sensor, &report->sensors, rep_next)
upd_sensor_update(sc, sensor, data, len);
}
report->pending = 0;
}