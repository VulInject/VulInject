static int dw_mipi_dsi_write(struct dw_mipi_dsi *dsi,
const struct mipi_dsi_packet *packet)
{
const u8 *tx_buf = packet->payload;
int len = packet->payload_length, pld_data_bytes = sizeof(u32), ret;
__le32 word;
u32 val;

while (len) {
if (len < pld_data_bytes) {
word = 0;
memcpy(&word, tx_buf, len);
dsi_write(dsi, DSI_GEN_PLD_DATA, le32_to_cpu(word));
len = 0;
} else {
memcpy(&word, tx_buf, pld_data_bytes);
dsi_write(dsi, DSI_GEN_PLD_DATA, le32_to_cpu(word));
tx_buf += pld_data_bytes;
len -= pld_data_bytes;
}

ret = readl_poll_timeout(dsi->base + DSI_CMD_PKT_STATUS,
val, !(val & GEN_PLD_W_FULL),
CMD_PKT_STATUS_TIMEOUT_US);
if (ret) {
dev_err(dsi->dsi_host.dev,
"failed to get available write payload FIFO\n");
return ret;
}
}

word = 0;
memcpy(&word, packet->header, sizeof(packet->header));
return dw_mipi_dsi_gen_pkt_hdr_write(dsi, le32_to_cpu(word));
}