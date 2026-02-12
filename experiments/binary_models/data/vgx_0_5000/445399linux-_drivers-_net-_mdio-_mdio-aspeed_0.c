static int aspeed_mdio_op(struct mii_bus *bus, u8 st, u8 op, u8 phyad, u8 regad,
u16 data)
{
struct aspeed_mdio *ctx = bus->priv;
u32 ctrl;

dev_dbg(&bus->dev, "%s: st: %u op: %u, phyad: %u, regad: %u, data: %u\n",
__func__, st, op, phyad, regad, data);

ctrl = ASPEED_MDIO_CTRL_FIRE
| FIELD_PREP(ASPEED_MDIO_CTRL_ST, st)
| FIELD_PREP(ASPEED_MDIO_CTRL_OP, op)
| FIELD_PREP(ASPEED_MDIO_CTRL_PHYAD, phyad)
| FIELD_PREP(ASPEED_MDIO_CTRL_REGAD, regad)
| FIELD_PREP(ASPEED_MDIO_DATA_MIIRDATA, data);

iowrite32(ctrl, ctx->base + ASPEED_MDIO_CTRL);

return readl_poll_timeout(ctx->base + ASPEED_MDIO_CTRL, ctrl,
!(ctrl & ASPEED_MDIO_CTRL_FIRE),
ASPEED_MDIO_INTERVAL_US,
ASPEED_MDIO_TIMEOUT_US);
}