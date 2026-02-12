static int sunxi_nfc_wait_cmd_fifo_empty(struct sunxi_nfc *nfc)
{
unsigned long timeout = (CONFIG_SYS_HZ *
NFC_DEFAULT_TIMEOUT_MS) / 1000;
u32 time_start;

time_start = get_timer(0);
do {
if (!(readl(nfc->regs + NFC_REG_ST) & NFC_CMD_FIFO_STATUS))
return 0;
} while (get_timer(time_start) < timeout);

dev_err(nfc->dev, "wait for empty cmd FIFO timedout\n");
return -ETIMEDOUT;
}