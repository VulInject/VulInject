int
efiioc_get_table(struct efi_softc *sc, void *data)
{
EFI_GUID esrt_guid = EFI_SYSTEM_RESOURCE_TABLE_GUID;
struct efi_get_table_ioc *ioc = data;
char *buf = NULL;
int error;


if (memcmp(&ioc->uuid, &esrt_guid, sizeof(ioc->uuid)) != 0)
return EINVAL;


if (sc->sc_esrt == NULL)
return ENXIO;

if (efi_enter_check(sc)) {
free(buf, M_TEMP, ioc->table_len);
return ENOSYS;
}

ioc->table_len = sizeof(*sc->sc_esrt) +
sizeof(EFI_SYSTEM_RESOURCE_ENTRY) * sc->sc_esrt->FwResourceCount;


if (ioc->buf == NULL) {
efi_leave(sc);
return 0;
}


if (ioc->buf_len < ioc->table_len) {
efi_leave(sc);
return EINVAL;
}

buf = malloc(ioc->table_len, M_TEMP, M_WAITOK);
memcpy(buf, sc->sc_esrt, ioc->table_len);

efi_leave(sc);

error = copyout(buf, ioc->buf, ioc->table_len);
free(buf, M_TEMP, ioc->table_len);

return error;
}