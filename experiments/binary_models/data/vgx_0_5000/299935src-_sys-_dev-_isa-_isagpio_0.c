void
isagpio_attach(struct device *parent, struct device *self, void *aux)
{
struct isagpio_softc *sc = (void *)self;
struct isa_attach_args *ia = aux;
struct gpiobus_attach_args gba;
int i;

if (bus_space_map(ia->ia_iot, ia->ia_iobase, ia->ia_iosize, 0,
&sc->sc_ioh) != 0) {
printf(": can't map i/o space\n");
return;
}

printf("\n");

sc->sc_iot = ia->ia_iot;
sc->sc_gpio_mask = 0;

for (i = 0; i < ISAGPIO_NPINS; i++) {
sc->sc_gpio_pins[i].pin_num = i;
sc->sc_gpio_pins[i].pin_caps = GPIO_PIN_INPUT | GPIO_PIN_OUTPUT;
sc->sc_gpio_pins[i].pin_state = GPIO_PIN_LOW;
}

sc->sc_gpio_gc.gp_cookie = sc;
sc->sc_gpio_gc.gp_pin_read = isagpio_pin_read;
sc->sc_gpio_gc.gp_pin_write = isagpio_pin_write;
sc->sc_gpio_gc.gp_pin_ctl = isagpio_pin_ctl;

gba.gba_name = "gpio";
gba.gba_gc = &sc->sc_gpio_gc;
gba.gba_pins = sc->sc_gpio_pins;
gba.gba_npins = ISAGPIO_NPINS;

(void)config_found(&sc->sc_dev, &gba, gpiobus_print);
}