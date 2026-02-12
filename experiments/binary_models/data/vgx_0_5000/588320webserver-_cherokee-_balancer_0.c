cherokee_balancer_instance (cherokee_buffer_t       *name,
cherokee_config_node_t  *conf,
cherokee_server_t       *srv,
cherokee_balancer_t    **balancer)
{
ret_t                      ret;
balancer_new_func_t        new_func;
balancer_configure_func_t  config_func;
cherokee_plugin_info_t    *info = NULL;

if (cherokee_buffer_is_empty (name)) {
LOG_CRITICAL_S (CHEROKEE_ERROR_BALANCER_UNDEFINED);
return ret_error;
}

ret = cherokee_plugin_loader_get (&srv->loader, name->buf, &info);
if (ret != ret_ok) return ret;

new_func = (balancer_new_func_t) info->instance;
ret = new_func (balancer);
if (ret != ret_ok) return ret;

config_func = (balancer_configure_func_t) info->configure;
ret = config_func (*balancer, srv, conf);
if (ret != ret_ok) return ret;

return ret_ok;
}