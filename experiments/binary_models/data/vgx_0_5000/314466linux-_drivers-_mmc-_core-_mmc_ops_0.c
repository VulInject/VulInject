static int __mmc_send_op_cond_cb(void *cb_data, bool *busy)
{
struct mmc_op_cond_busy_data *data = cb_data;
struct mmc_host *host = data->host;
struct mmc_command *cmd = data->cmd;
u32 ocr = data->ocr;
int err = 0;

err = mmc_wait_for_cmd(host, cmd, 0);
if (err)
return err;

if (mmc_host_is_spi(host)) {
if (!(cmd->resp[0] & R1_SPI_IDLE)) {
*busy = false;
return 0;
}
} else {
if (cmd->resp[0] & MMC_CARD_BUSY) {
*busy = false;
return 0;
}
}

*busy = true;


if (!ocr && !mmc_host_is_spi(host))
cmd->arg = cmd->resp[0] | BIT(30);

return 0;
}