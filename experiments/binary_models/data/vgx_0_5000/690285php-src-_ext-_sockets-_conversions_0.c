static void to_zval_read_aggregation(const char *structure,
zval *zarr, 
const field_descriptor *descriptors,
res_context *ctx)
{
const field_descriptor	*descr;

assert(Z_TYPE_P(zarr) == IS_ARRAY);
assert(Z_ARRVAL_P(zarr) != NULL);

for (descr = descriptors; descr->name != NULL && !ctx->err.has_error; descr++) {
zval *new_zv, tmp;

if (descr->to_zval == NULL) {
do_to_zval_err(ctx, "No information on how to convert native "
"field into value for key '%s'", descr->name);
break;
}

ZVAL_NULL(&tmp);
new_zv = zend_symtable_str_update(Z_ARRVAL_P(zarr), descr->name, descr->name_size - 1, &tmp);

zend_llist_add_element(&ctx->keys, (void*)&descr->name);
descr->to_zval(structure + descr->field_offset, new_zv, ctx);
zend_llist_remove_tail(&ctx->keys);
}
}