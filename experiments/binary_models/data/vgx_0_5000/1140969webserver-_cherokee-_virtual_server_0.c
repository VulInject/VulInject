cherokee_virtual_server_new_vrule (cherokee_virtual_server_t  *vserver,
cherokee_config_node_t     *config,
cherokee_vrule_t          **vrule)
{
ret_t                   ret;
vrule_func_new_t        func_new;
cherokee_plugin_info_t *info      = NULL;
cherokee_buffer_t      *type      = &config->val;
cherokee_server_t      *srv       = VSERVER_SRV(vserver);


TRACE (ENTRIES, "Loading %s\n", type->buf);

ret = cherokee_plugin_loader_get (&srv->loader, type->buf, &info);
if (ret < ret_ok) {
LOG_CRITICAL (CHEROKEE_ERROR_VSERVER_LOAD_MODULE, type->buf, 0);
return ret_error;
}


func_new = (rule_func_new_t) info->instance;
if (func_new == NULL)
return ret_error;

ret = func_new ((void **) vrule);
if ((ret != ret_ok) || (*vrule == NULL))
return ret_error;


ret = cherokee_vrule_configure (*vrule, config, vserver);
if (ret != ret_ok)
return ret_error;

return ret_ok;
}