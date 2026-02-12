static int wait_for_reset_state(struct efa_com_dev *edev, u32 timeout, int on)
{
u32 val, i;

for (i = 0; i < timeout; i++) {
val = efa_com_reg_read32(edev, EFA_REGS_DEV_STS_OFF);

if (EFA_GET(&val, EFA_REGS_DEV_STS_RESET_IN_PROGRESS) == on)
return 0;

ibdev_dbg(edev->efa_dev, "Reset indication val %d\n", val);
msleep(EFA_POLL_INTERVAL_MS);
}

return -ETIME;
}