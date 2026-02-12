static int
mcp251xfd_regmap_crc_read_one(struct mcp251xfd_priv *priv,
struct spi_message *msg, unsigned int data_len)
{
const struct mcp251xfd_map_buf_crc *buf_rx = priv->map_buf_crc_rx;
const struct mcp251xfd_map_buf_crc *buf_tx = priv->map_buf_crc_tx;
int err;

BUILD_BUG_ON(sizeof(buf_rx->cmd) != sizeof(__be16) + sizeof(u8));
BUILD_BUG_ON(sizeof(buf_tx->cmd) != sizeof(__be16) + sizeof(u8));

err = spi_sync(priv->spi, msg);
if (err)
return err;

return mcp251xfd_regmap_crc_read_check_crc(buf_rx, buf_tx, data_len);
}