static void
smsc911x_rx_fastforward(struct smsc911x_data *pdata, unsigned int pktwords)
{
if (likely(pktwords >= 4)) {
unsigned int timeout = 500;
unsigned int val;
smsc911x_reg_write(pdata, RX_DP_CTRL, RX_DP_CTRL_RX_FFWD_);
do {
udelay(1);
val = smsc911x_reg_read(pdata, RX_DP_CTRL);
} while ((val & RX_DP_CTRL_RX_FFWD_) && --timeout);

if (unlikely(timeout == 0))
SMSC_WARN(pdata, hw, "Timed out waiting for "
"RX FFWD to finish, RX_DP_CTRL: 0x%08X", val);
} else {
while (pktwords--)
smsc911x_reg_read(pdata, RX_DATA_FIFO);
}
}