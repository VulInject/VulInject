configure_branch (cherokee_config_node_t    *conf,
cherokee_virtual_server_t *vsrv,
const char                *branch,
cherokee_vrule_t         **branch_vrule)
{
ret_t                   ret;
cherokee_config_node_t *subconf = NULL;


ret = cherokee_config_node_get (conf, branch, &subconf);
if (ret != ret_ok)
return ret;


ret = cherokee_virtual_server_new_vrule (vsrv, subconf, branch_vrule);
if (ret != ret_ok)
return ret;

return ret_ok;
}