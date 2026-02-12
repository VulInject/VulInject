static void zorro_esp_send_blz2060_dma_cmd(struct esp *esp, u32 addr,
u32 esp_count, u32 dma_count, int write, u8 cmd)
{
struct blz2060_dma_registers __iomem *dregs = esp->dma_regs;
u8 phase = esp->sreg & ESP_STAT_PMASK;


if (phase == ESP_MIP && addr == esp->command_block_dma) {
esp_send_pio_cmd(esp, (u32)esp->command_block, esp_count,
dma_count, write, cmd);
return;
}

esp->send_cmd_error = 0;
esp->send_cmd_residual = 0;

if (write)

dma_sync_single_for_device(esp->dev, addr, esp_count,
DMA_FROM_DEVICE);
else

dma_sync_single_for_device(esp->dev, addr, esp_count,
DMA_TO_DEVICE);

addr >>= 1;
if (write)
addr &= ~(DMA_WRITE);
else
addr |= DMA_WRITE;

writeb(addr & 0xff, &dregs->dma_addr3);
writeb((addr >>  8) & 0xff, &dregs->dma_addr2);
writeb((addr >> 16) & 0xff, &dregs->dma_addr1);
writeb((addr >> 24) & 0xff, &dregs->dma_addr0);

scsi_esp_cmd(esp, ESP_CMD_DMA);
zorro_esp_write8(esp, (esp_count >> 0) & 0xff, ESP_TCLOW);
zorro_esp_write8(esp, (esp_count >> 8) & 0xff, ESP_TCMED);

scsi_esp_cmd(esp, cmd);
}