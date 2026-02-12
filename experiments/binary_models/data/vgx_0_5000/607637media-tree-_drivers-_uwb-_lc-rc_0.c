int uwb_rc_mac_addr_setup(struct uwb_rc *rc)
{
int result;
struct device *dev = &rc->uwb_dev.dev;
struct uwb_dev *uwb_dev = &rc->uwb_dev;
char devname[UWB_ADDR_STRSIZE];
struct uwb_mac_addr addr;

result = uwb_rc_mac_addr_get(rc, &addr);
if (result < 0) {
dev_err(dev, "cannot retrieve UWB EUI-48 address: %d\n", result);
return result;
}

if (uwb_mac_addr_unset(&addr) || uwb_mac_addr_bcast(&addr)) {
addr.data[0] = 0x02; 
get_random_bytes(&addr.data[1], sizeof(addr.data)-1);

result = uwb_rc_mac_addr_set(rc, &addr);
if (result < 0) {
uwb_mac_addr_print(devname, sizeof(devname), &addr);
dev_err(dev, "cannot set EUI-48 address %s: %d\n",
devname, result);
return result;
}
}
uwb_dev->mac_addr = addr;
return 0;
}