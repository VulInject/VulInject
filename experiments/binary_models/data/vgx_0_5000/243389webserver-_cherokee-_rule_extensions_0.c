configure (cherokee_rule_extensions_t *rule,
cherokee_config_node_t     *conf,
cherokee_virtual_server_t  *vsrv)
{
ret_t              ret;
cherokee_buffer_t *tmp = NULL;

UNUSED(vsrv);

ret = cherokee_config_node_read (conf, "extensions", &tmp);
if (ret != ret_ok) {
LOG_CRITICAL (CHEROKEE_ERROR_RULE_NO_PROPERTY,
RULE(rule)->priority, "extensions");
return ret_error;
}

cherokee_config_node_read_bool (conf, "check_local_file", &rule->check_local_file);
cherokee_config_node_read_bool (conf, "iocache",          &rule->use_iocache);

return parse_value (tmp, &rule->extensions);
}