cherokee_config_entry_set_encoder (cherokee_config_entry_t  *entry,
cherokee_buffer_t        *encoder_name,
cherokee_plugin_info_t   *plugin_info,
cherokee_encoder_props_t *encoder_props)
{

return_if_fail (plugin_info != NULL, ret_error);

if (unlikely (PLUGIN_INFO(plugin_info)->type != cherokee_encoder)) {
LOG_ERROR_S (CHEROKEE_ERROR_CONFIG_ENTRY_BAD_TYPE);
return ret_error;
}


if (entry->encoders == NULL) {
cherokee_avl_new (&entry->encoders);
}

return cherokee_avl_add (entry->encoders, encoder_name, (void*)encoder_props);
}