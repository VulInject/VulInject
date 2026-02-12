int
get_ind_adb_info(struct adb_softc *sc, ADBDataBlock * info, int index)
{
if ((index < 1) || (index > 15))	
return (-1);

if (adb_debug & 0x80)
printf_intr("index 0x%x handler id 0x%x\n", index,
sc->sc_devtable[index].handler_id);
if (0 == sc->sc_devtable[index].handler_id)	
return (-1);

info->devType = sc->sc_devtable[index].handler_id;
info->origADBAddr = sc->sc_devtable[index].orig_addr;
info->dbServiceRtPtr = (Ptr)sc->sc_devtable[index].handler;
info->dbDataAreaAddr = (Ptr)sc->sc_devtable[index].data;

return (sc->sc_devtable[index].curr_addr);
}