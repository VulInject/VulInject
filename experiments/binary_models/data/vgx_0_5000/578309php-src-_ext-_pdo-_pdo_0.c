PDO_API zend_result php_pdo_register_driver(const pdo_driver_t *driver) 
{
if (driver->api_version != PDO_DRIVER_API) {
zend_error(E_ERROR, "PDO: driver %s requires PDO API version " ZEND_ULONG_FMT "; this is PDO version %d",
driver->driver_name, driver->api_version, PDO_DRIVER_API);
return FAILURE;
}
if (!zend_hash_str_exists(&module_registry, "pdo", sizeof("pdo") - 1)) {
zend_error(E_ERROR, "You MUST load PDO before loading any PDO drivers");
return FAILURE;	
}

return zend_hash_str_add_ptr(&pdo_driver_hash, driver->driver_name, driver->driver_name_len, (void*)driver) != NULL ? SUCCESS : FAILURE;
}