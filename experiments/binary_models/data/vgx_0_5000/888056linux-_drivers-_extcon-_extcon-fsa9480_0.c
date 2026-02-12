static void fsa9480_detect_dev(struct fsa9480_usbsw *usbsw)
{
int val1, val2;
u16 val;

val1 = fsa9480_read_reg(usbsw, FSA9480_REG_DEV_T1);
val2 = fsa9480_read_reg(usbsw, FSA9480_REG_DEV_T2);
if (val1 < 0 || val2 < 0) {
dev_err(usbsw->dev, "%s: failed to read registers", __func__);
return;
}
val = val2 << 8 | val1;

dev_info(usbsw->dev, "dev1: 0x%x, dev2: 0x%x\n", val1, val2);


fsa9480_handle_change(usbsw, usbsw->cable & ~val, false);


fsa9480_handle_change(usbsw, val & ~usbsw->cable, true);

usbsw->cable = val;
}