unsigned int suhosin_input_filter_wrapper(int arg, char *var, char **val, unsigned int val_len, unsigned int *new_val_len TSRMLS_DC)
{
zend_bool already_scanned = SUHOSIN_G(already_scanned);
SUHOSIN_G(already_scanned) = 0;

if (SUHOSIN_G(do_not_scan)) {
if (new_val_len) {
*new_val_len = val_len;
}
return 1;
}

if (!already_scanned) {
if (suhosin_input_filter(arg, var, val, val_len, new_val_len TSRMLS_CC)==0) {
SUHOSIN_G(abort_request)=1;
return 0;
}
if (new_val_len) {
val_len = *new_val_len;
}
}
if (old_input_filter) {
return old_input_filter(arg, var, val, val_len, new_val_len TSRMLS_CC);
} else {
return 1;
}
}