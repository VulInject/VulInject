static void esp_setsync(struct esp *esp, struct esp_target_data *tp,
u8 scsi_period, u8 scsi_offset,
u8 esp_stp, u8 esp_soff)
{
spi_period(tp->starget) = scsi_period;
spi_offset(tp->starget) = scsi_offset;
spi_width(tp->starget) = (tp->flags & ESP_TGT_WIDE) ? 1 : 0;

if (esp_soff) {
esp_stp &= 0x1f;
esp_soff |= esp->radelay;
if (esp->rev >= FAS236) {
u8 bit = ESP_CONFIG3_FSCSI;
if (esp->rev >= FAS100A)
bit = ESP_CONFIG3_FAST;

if (scsi_period < 50) {
if (esp->rev == FASHME)
esp_soff &= ~esp->radelay;
tp->esp_config3 |= bit;
} else {
tp->esp_config3 &= ~bit;
}
esp->prev_cfg3 = tp->esp_config3;
esp_write8(esp->prev_cfg3, ESP_CFG3);
}
}

tp->esp_period = esp->prev_stp = esp_stp;
tp->esp_offset = esp->prev_soff = esp_soff;

esp_write8(esp_soff, ESP_SOFF);
esp_write8(esp_stp, ESP_STP);

tp->flags &= ~(ESP_TGT_NEGO_SYNC | ESP_TGT_CHECK_NEGO);

spi_display_xfer_agreement(tp->starget);
}