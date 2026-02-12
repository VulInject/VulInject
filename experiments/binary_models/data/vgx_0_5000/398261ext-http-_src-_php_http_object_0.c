php_http_object_method_t *php_http_object_method_init(php_http_object_method_t *cb, zval *zobject, const char *method_str, size_t method_len)
{
if (!cb) {
cb = ecalloc(1, sizeof(*cb));
} else {
memset(cb, 0, sizeof(*cb));
}

cb->fci.size = sizeof(cb->fci);
ZVAL_STRINGL(&cb->fci.function_name, method_str, method_len);
cb->fcc.initialized = 1;
cb->fcc.calling_scope = cb->fcc.called_scope = Z_OBJCE_P(zobject);
cb->fcc.function_handler = Z_OBJ_HT_P(zobject)->get_method(&Z_OBJ_P(zobject), Z_STR(cb->fci.function_name), NULL);

return cb;
}