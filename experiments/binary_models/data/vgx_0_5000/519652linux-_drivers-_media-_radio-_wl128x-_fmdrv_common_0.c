static int fm_power_down(struct fmdev *fmdev)
{
u16 payload;
int ret;

if (!test_bit(FM_CORE_READY, &fmdev->flag)) {
fmerr("FM core is not ready\n");
return -EPERM;
}
if (fmdev->curr_fmmode == FM_MODE_OFF) {
fmdbg("FM chip is already in OFF state\n");
return 0;
}

payload = 0x0;
ret = fmc_send_cmd(fmdev, FM_POWER_MODE, REG_WR, &payload,
sizeof(payload), NULL, NULL);
if (ret < 0)
return ret;

return fmc_release(fmdev);
}