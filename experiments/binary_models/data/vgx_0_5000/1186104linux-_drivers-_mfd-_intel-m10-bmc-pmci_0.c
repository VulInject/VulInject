static int indirect_reg_write(void *context, unsigned int reg, unsigned int val)
{
struct indirect_ctx *ctx = context;
unsigned int cmd, ack;
int ret, ret2;

cmd = readl(ctx->base + INDIRECT_CMD_OFF);
if (cmd != INDIRECT_CMD_CLR)
dev_warn(ctx->dev, "residual cmd 0x%x on write entry\n", cmd);

writel(val, ctx->base + INDIRECT_WR_OFF);
writel(reg, ctx->base + INDIRECT_ADDR_OFF);
writel(INDIRECT_CMD_WR, ctx->base + INDIRECT_CMD_OFF);

ret = readl_poll_timeout(ctx->base + INDIRECT_CMD_OFF, ack,
(ack & INDIRECT_CMD_ACK) == INDIRECT_CMD_ACK,
INDIRECT_INT_US, INDIRECT_TIMEOUT_US);
if (ret)
dev_err(ctx->dev, "write timed out on reg 0x%x ack 0x%x\n", reg, ack);

ret2 = indirect_clear_cmd(ctx);

if (ret)
return ret;
return ret2;
}