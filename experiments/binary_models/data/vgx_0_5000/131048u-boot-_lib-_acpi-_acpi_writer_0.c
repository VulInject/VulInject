int acpi_write_one(struct acpi_ctx *ctx, const struct acpi_writer *entry)
{
int ret;

log_debug("%s: writing table '%s'\n", entry->name,
entry->table);
ctx->tab_start = ctx->current;
ret = entry->h_write(ctx, entry);
if (ret == -ENOENT) {
log_debug("%s: Omitted due to being empty\n",
entry->name);
ret = 0;
ctx->current = ctx->tab_start;	
return ret;
}
if (ret)
return log_msg_ret("write", ret);

if (entry->flags & ACPIWF_ALIGN64)
acpi_align64(ctx);
else
acpi_align(ctx);


ret = acpi_add_other_item(ctx, entry, ctx->tab_start);
if (ret)
return log_msg_ret("add", ret);

return 0;
}