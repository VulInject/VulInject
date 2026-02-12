int hfa384x_drvr_ramdl_enable(struct hfa384x *hw, u32 exeaddr)
{
int result = 0;
u16 lowaddr;
u16 hiaddr;
int i;


for (i = 0; i < HFA384x_PORTID_MAX; i++) {
if (hw->port_enabled[i]) {
netdev_err(hw->wlandev->netdev,
"Can't download with a macport enabled.\n");
return -EINVAL;
}
}


if (hw->dlstate != HFA384x_DLSTATE_DISABLED) {
netdev_err(hw->wlandev->netdev,
"Download state not disabled.\n");
return -EINVAL;
}

pr_debug("ramdl_enable, exeaddr=0x%08x\n", exeaddr);


lowaddr = HFA384x_ADDR_CMD_MKOFF(exeaddr);
hiaddr = HFA384x_ADDR_CMD_MKPAGE(exeaddr);

result = hfa384x_cmd_download(hw, HFA384x_PROGMODE_RAM,
lowaddr, hiaddr, 0);

if (result == 0) {

hw->dlstate = HFA384x_DLSTATE_RAMENABLED;
} else {
pr_debug("cmd_download(0x%04x, 0x%04x) failed, result=%d.\n",
lowaddr, hiaddr, result);
}

return result;
}