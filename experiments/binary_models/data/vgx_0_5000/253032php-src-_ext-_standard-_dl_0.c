PHPAPI PHP_FUNCTION(dl)
{
char *filename;
size_t filename_len;

ZEND_PARSE_PARAMETERS_START(1, 1)
Z_PARAM_STRING(filename, filename_len)
ZEND_PARSE_PARAMETERS_END();

if (!PG(enable_dl)) {
php_error_docref(NULL, E_WARNING, "Dynamically loaded extensions aren't enabled");
RETURN_FALSE;
}

if (filename_len >= MAXPATHLEN) {
php_error_docref(NULL, E_WARNING, "Filename exceeds the maximum allowed length of %d characters", MAXPATHLEN);
RETURN_FALSE;
}

bool orig_rc_debug = zend_rc_debug;

zend_rc_debug = false;

php_dl(filename, MODULE_TEMPORARY, return_value, 0);
if (Z_TYPE_P(return_value) == IS_TRUE) {
EG(full_tables_cleanup) = 1;
}

zend_rc_debug = orig_rc_debug;
}