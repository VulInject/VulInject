int gxio_mpipe_link_enumerate_mac(int idx, char *link_name, uint8_t *link_mac)
{
int rv;
_gxio_mpipe_link_name_t name;
_gxio_mpipe_link_mac_t mac;

gxio_mpipe_context_t *context = _gxio_get_link_context();
if (!context)
return GXIO_ERR_NO_DEVICE;

rv = gxio_mpipe_info_enumerate_aux(context, idx, &name, &mac);
if (rv >= 0) {
if (strscpy(link_name, name.name, sizeof(name.name)) < 0)
return GXIO_ERR_INVAL_MEMORY_SIZE;
memcpy(link_mac, mac.mac, sizeof(mac.mac));
}

return rv;
}