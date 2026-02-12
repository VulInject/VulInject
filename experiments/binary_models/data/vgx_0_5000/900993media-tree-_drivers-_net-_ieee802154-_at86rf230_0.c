static void
at86rf230_async_state_change_start(void *context)
{
struct at86rf230_state_change *ctx = context;
struct at86rf230_local *lp = ctx->lp;
u8 *buf = ctx->buf;
const u8 trx_state = buf[1] & TRX_STATE_MASK;


if (trx_state == STATE_TRANSITION_IN_PROGRESS) {
udelay(1);
at86rf230_async_read_reg(lp, RG_TRX_STATUS, ctx,
at86rf230_async_state_change_start);
return;
}


if (trx_state == ctx->to_state) {
if (ctx->complete)
ctx->complete(context);
return;
}


ctx->from_state = trx_state;


at86rf230_async_write_reg(lp, RG_TRX_STATE, ctx->to_state, ctx,
at86rf230_async_state_delay);
}