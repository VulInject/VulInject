static void db_attrs_expand(struct db_context *ctx, int delta_attrs)
{
unsigned int ti;
int max_attrs = ctx->max_attrs + delta_attrs;
struct db_attr *const old_attrs = ctx->attrs0;
struct db_attr *const new_attrs = ALLOC_BYTES_ST(sizeof(struct db_attr) * max_attrs,
"db_context->attrs (expand)", db_attrs_st);

memcpy(new_attrs, old_attrs, ctx->max_attrs * sizeof(struct db_attr));


ctx->attrs0 = ctx->attrs0 - old_attrs + new_attrs;
ctx->attrs_cur = ctx->attrs_cur - old_attrs + new_attrs;

for (ti = 0; ti < ctx->prop.trans_cnt; ti++)
ctx->prop.trans[ti].attrs = ctx->prop.trans[ti].attrs - old_attrs + new_attrs;


ctx->max_attrs = max_attrs;

if (old_attrs != NULL)
PFREE_ST(old_attrs, db_attrs_st);
}