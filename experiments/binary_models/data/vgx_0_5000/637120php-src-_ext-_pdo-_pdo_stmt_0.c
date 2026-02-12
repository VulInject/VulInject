static bool make_callable_ex(pdo_stmt_t *stmt, zval *callable, zend_fcall_info * fci, zend_fcall_info_cache * fcc, int num_args) 
{
char *is_callable_error = NULL;

if (zend_fcall_info_init(callable, 0, fci, fcc, NULL, &is_callable_error) == FAILURE) {
if (is_callable_error) {
zend_type_error("%s", is_callable_error);
efree(is_callable_error);
} else {
zend_type_error("User-supplied function must be a valid callback");
}
return false;
}
if (is_callable_error) {

efree(is_callable_error);
}

fci->param_count = num_args; 
fci->params = safe_emalloc(sizeof(zval), num_args, 0);

return true;
}