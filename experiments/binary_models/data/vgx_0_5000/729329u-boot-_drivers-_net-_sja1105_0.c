static int sja1105_cgu_idiv_config(struct sja1105_private *priv, int port,
bool enabled, int factor)
{
const struct sja1105_regs *regs = priv->info->regs;
u8 packed_buf[SJA1105_SIZE_CGU_CMD] = {0};
struct sja1105_cgu_idiv idiv;

if (regs->cgu_idiv[port] == SJA1105_RSV_ADDR)
return 0;

if (enabled && factor != 1 && factor != 10)
return -ERANGE;


idiv.clksrc    = 0x0A;            
idiv.autoblock = 1;               
idiv.idiv      = factor - 1;      
idiv.pd        = enabled ? 0 : 1; 
sja1105_cgu_idiv_packing(packed_buf, &idiv, PACK);

return sja1105_xfer_buf(priv, SPI_WRITE, regs->cgu_idiv[port],
packed_buf, SJA1105_SIZE_CGU_CMD);
}