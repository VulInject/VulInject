map_action_fn (splay_tree_node node, void *p)
{
map_action_fn_context *ctx = p;
text_action *r = (text_action *)node->value;
removal_by_action_entry *ientry = ctx->map.entry + ctx->map.n_entries;

if (ctx->map.n_entries && (ientry - 1)->offset == r->offset)
{
--ientry;
}
else
{
++ctx->map.n_entries;
ctx->eq_complete = FALSE;
ientry->offset = r->offset;
ientry->eq_removed_before_fill = ctx->removed;
}

if (!ctx->eq_complete)
{
if (r->action != ta_fill || r->removed_bytes >= 0)
{
ientry->eq_removed = ctx->removed;
ctx->eq_complete = TRUE;
}
else
ientry->eq_removed = ctx->removed + r->removed_bytes;
}

ctx->removed += r->removed_bytes;
ientry->removed = ctx->removed;
return 0;
}