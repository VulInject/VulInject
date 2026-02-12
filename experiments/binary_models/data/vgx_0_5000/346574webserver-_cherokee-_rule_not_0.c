configure (cherokee_rule_not_t       *rule,
cherokee_config_node_t    *conf,
cherokee_virtual_server_t *vsrv)
{
ret_t                   ret;
cherokee_config_node_t *subconf = NULL;


ret = cherokee_config_node_get (conf, "right", &subconf);
if (ret != ret_ok)
return ret;


ret = cherokee_virtual_server_new_rule (vsrv, subconf,
RULE(rule)->priority,
&rule->right);
if (ret != ret_ok)
return ret;

if (rule->right == NULL)
return ret_error;


rule->right->parent_rule = RULE(rule);

return ret_ok;
}