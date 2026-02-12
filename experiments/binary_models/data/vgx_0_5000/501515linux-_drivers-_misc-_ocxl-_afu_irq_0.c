u64 ocxl_afu_irq_get_addr(struct ocxl_context *ctx, int irq_id)
{
struct xive_irq_data *xd;
struct afu_irq *irq;
u64 addr = 0;

mutex_lock(&ctx->irq_lock);
irq = idr_find(&ctx->irq_idr, irq_id);
if (irq) {
xd = irq_get_handler_data(irq->virq);
addr = xd ? xd->trig_page : 0;
}
mutex_unlock(&ctx->irq_lock);
return addr;
}