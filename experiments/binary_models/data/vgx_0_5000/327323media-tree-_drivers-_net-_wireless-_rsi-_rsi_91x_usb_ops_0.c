static int rsi_load_ta_instructions(struct rsi_common *common)
{
struct rsi_hw *adapter = common->priv;
struct rsi_91x_usbdev *dev = (struct rsi_91x_usbdev *)adapter->rsi_dev;
const struct firmware *fw_entry = NULL;
u32 block_size = dev->tx_blk_size;
const u8 *fw;
u32 num_blocks, len;
int status = 0;

status = request_firmware(&fw_entry, FIRMWARE_RSI9113, adapter->device);
if (status < 0) {
rsi_dbg(ERR_ZONE, "%s Firmware file %s not found\n",
__func__, FIRMWARE_RSI9113);
return status;
}


fw = kmemdup(fw_entry->data, fw_entry->size, GFP_KERNEL);
if (!fw) {
status = -ENOMEM;
goto out;
}
len = fw_entry->size;

if (len % 4)
len += (4 - (len % 4));

num_blocks = (len / block_size);

rsi_dbg(INIT_ZONE, "%s: Instruction size:%d\n", __func__, len);
rsi_dbg(INIT_ZONE, "%s: num blocks: %d\n", __func__, num_blocks);

status = rsi_copy_to_card(common, fw, len, num_blocks);
kfree(fw);

out:
release_firmware(fw_entry);
return status;
}