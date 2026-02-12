static void esp_send_dma_cmd(struct esp *esp, int len, int max_len, int cmd)
{
if (esp->flags & ESP_FLAG_USE_FIFO) {
int i;

scsi_esp_cmd(esp, ESP_CMD_FLUSH);
for (i = 0; i < len; i++)
esp_write8(esp->command_block[i], ESP_FDATA);
scsi_esp_cmd(esp, cmd);
} else {
if (esp->rev == FASHME)
scsi_esp_cmd(esp, ESP_CMD_FLUSH);
cmd |= ESP_CMD_DMA;
esp->ops->send_dma_cmd(esp, esp->command_block_dma,
len, max_len, 0, cmd);
}
}