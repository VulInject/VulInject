int
acpihid_notify(struct aml_node *node, int notify_type, void *arg)
{
struct acpihid_softc *sc = arg;

DPRINTF(("%s: %s: %.2x\n", sc->sc_dev.dv_xname, __func__,
notify_type));

switch (notify_type) {
case 0xc2: 
break;
case 0xc3: 
break;
case 0xc4: 
wskbd_set_mixervolume(1, 1);
break;
case 0xc5: 
break;
case 0xc6: 
wskbd_set_mixervolume(-1, 1);
break;
case 0xc7: 
break;
case 0xc8: 
break;
case 0xc9: 
break;
case 0xce: 
break;
case 0xcf: 
break;
default:
DPRINTF(("%s: unhandled button 0x%x\n", sc->sc_dev.dv_xname,
notify_type));
}

return 0;
}