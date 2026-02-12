void
uoaklux_refresh(void *arg)
{
struct uoaklux_softc *sc = arg;
struct uoak_softc *scc = &sc->sc_uoak_softc;
uint8_t led;


if (uoak_led_status(scc, OAK_TARGET_RAM, &led) < 0)
DPRINTF(("status query error\n"));
if (led == OAK_LED_OFF) 
(void)uoak_led_ctrl(scc, OAK_TARGET_RAM, OAK_LED_ON);
else 
(void)uoak_led_ctrl(scc, OAK_TARGET_RAM, OAK_LED_OFF);

uoak_sensor_refresh(&sc->sc_sensor.lux, 1000000, 0);
}