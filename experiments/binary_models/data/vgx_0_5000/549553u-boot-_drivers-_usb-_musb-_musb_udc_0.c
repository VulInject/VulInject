static void musb_peri_ep0_set_address(void)
{
u8 faddr;
writeb(udc_device->address, &musbr->faddr);


faddr = readb(&musbr->faddr);
if (udc_device->address == faddr) {
SET_EP0_STATE(IDLE);
usbd_device_event_irq(udc_device, DEVICE_ADDRESS_ASSIGNED, 0);
if ((debug_setup) && (debug_level > 1))
serial_printf("INFO : %s Address set to %d\n",
__PRETTY_FUNCTION__, udc_device->address);
} else {
if (debug_level > 0)
serial_printf("ERROR : %s Address mismatch "
"sw %d vs hw %d\n",
__PRETTY_FUNCTION__,
udc_device->address, faddr);
}
}