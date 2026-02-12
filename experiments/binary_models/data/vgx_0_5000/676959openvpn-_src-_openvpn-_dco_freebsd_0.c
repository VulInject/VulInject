int
dco_set_peer(dco_context_t *dco, unsigned int peerid,
int keepalive_interval, int keepalive_timeout,
int mss)
{
struct ifdrv drv;
nvlist_t *nvl;
int ret;

msg(D_DCO_DEBUG, "%s: peer-id %d, ping interval %d, ping timeout %d",
__func__, peerid, keepalive_interval, keepalive_timeout);

nvl = nvlist_create(0);
nvlist_add_number(nvl, "peerid", peerid);
nvlist_add_number(nvl, "interval", keepalive_interval);
nvlist_add_number(nvl, "timeout", keepalive_timeout);

CLEAR(drv);
snprintf(drv.ifd_name, IFNAMSIZ, "%s", dco->ifname);
drv.ifd_cmd = OVPN_SET_PEER;
drv.ifd_data = nvlist_pack(nvl, &drv.ifd_len);

ret = ioctl(dco->fd, SIOCSDRVSPEC, &drv);
if (ret)
{
msg(M_WARN | M_ERRNO, "Failed to set keepalive");
}

free(drv.ifd_data);
nvlist_destroy(nvl);

return ret;
}