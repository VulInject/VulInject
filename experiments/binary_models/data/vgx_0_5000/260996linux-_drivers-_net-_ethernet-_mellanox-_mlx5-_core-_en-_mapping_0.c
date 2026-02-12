static void mapping_free_item(struct mapping_ctx *ctx,
struct mapping_item *mi)
{
if (!ctx->delayed_removal) {
mapping_remove_and_free(ctx, mi);
return;
}

mi->timeout = jiffies + msecs_to_jiffies(MAPPING_GRACE_PERIOD);

spin_lock(&ctx->pending_list_lock);
list_add_tail(&mi->list, &ctx->pending_list);
spin_unlock(&ctx->pending_list_lock);

schedule_delayed_work(&ctx->dwork, MAPPING_GRACE_PERIOD);
}