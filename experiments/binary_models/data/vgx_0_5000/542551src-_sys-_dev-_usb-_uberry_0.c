void
uberry_attach(struct device *parent, struct device *self, void *aux)
{
struct uberry_softc *sc = (struct uberry_softc *)self;
struct usb_attach_arg *uaa = aux;
usb_device_descriptor_t *dd;

sc->sc_udev = uaa->device;

dd = usbd_get_device_descriptor(uaa->device);

printf("%s: Charging at %dmA", sc->sc_dev.dv_xname,
sc->sc_udev->power);
if (sc->sc_udev->power >= 250)
printf("\n");
else {
printf("... requesting higher-power charging\n");
uberry_charge(sc);

}


if (UGETW(dd->idProduct) == USB_PRODUCT_RIM_PEARL)
uberry_pearlmode(sc);


if (usbd_set_config_no(sc->sc_udev, UBERRY_CONFIG_NO, 1) != 0) {
printf("%s: could not set configuration no\n",
sc->sc_dev.dv_xname);
return;
}

if (UGETW(dd->idProduct) == USB_PRODUCT_RIM_PEARL) {

usb_needs_reattach(sc->sc_udev);
}
}