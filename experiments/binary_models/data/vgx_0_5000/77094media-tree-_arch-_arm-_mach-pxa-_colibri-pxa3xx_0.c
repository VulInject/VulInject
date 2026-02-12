void __init colibri_pxa3xx_init_eth(struct ax_plat_data *plat_data)
{
int i;
u64 serial = ((u64) system_serial_high << 32) | system_serial_low;



for (i = 0; i < ETHER_ADDR_LEN; i++) {
ether_mac_addr[i] = serial & 0xff;
serial >>= 8;
}

if (is_valid_ether_addr(ether_mac_addr)) {
plat_data->flags |= AXFLG_MAC_FROMPLATFORM;
plat_data->mac_addr = ether_mac_addr;
printk(KERN_INFO "%s(): taking MAC from serial boot tag\n",
__func__);
} else {
plat_data->flags |= AXFLG_MAC_FROMDEV;
printk(KERN_INFO "%s(): no valid serial boot tag found, "
"taking MAC from device\n", __func__);
}
}