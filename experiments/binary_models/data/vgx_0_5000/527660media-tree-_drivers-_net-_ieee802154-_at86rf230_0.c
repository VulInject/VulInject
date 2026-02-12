static void
at86rf230_async_state_assert(void *context)
{
struct at86rf230_state_change *ctx = context;
struct at86rf230_local *lp = ctx->lp;
const u8 *buf = ctx->buf;
const u8 trx_state = buf[1] & TRX_STATE_MASK;


if (trx_state != ctx->to_state) {

if  (trx_state == STATE_BUSY_RX_AACK) {

if (ctx->to_state == STATE_RX_AACK_ON)
goto done;


if (ctx->to_state == STATE_TX_ON ||
ctx->to_state == STATE_TRX_OFF) {
u8 state = ctx->to_state;

if (lp->tx_retry >= AT86RF2XX_MAX_TX_RETRIES)
state = STATE_FORCE_TRX_OFF;
lp->tx_retry++;

at86rf230_async_state_change(lp, ctx, state,
ctx->complete);
return;
}
}

dev_warn(&lp->spi->dev, "unexcept state change from 0x%02x to 0x%02x. Actual state: 0x%02x\n",
ctx->from_state, ctx->to_state, trx_state);
}

done:
if (ctx->complete)
ctx->complete(context);
}