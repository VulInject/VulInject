static inline int rk_nfc_wait_ioready(struct rk_nfc *nfc)
{
u32 timeout = (CONFIG_SYS_HZ * NFC_TIMEOUT_MS) / 1000;
u32 time_start;

time_start = get_timer(0);
do {
if (readl(nfc->regs + NFC_FMCTL) & FMCTL_RDY)
return 0;
} while (get_timer(time_start) < timeout);

dev_err(nfc->dev, "wait for io ready timedout\n");
return -ETIMEDOUT;
}