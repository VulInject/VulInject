cherokee_handler_cgi_base_init (cherokee_handler_cgi_base_t              *cgi,
cherokee_connection_t                    *conn,
cherokee_plugin_info_handler_t           *info,
cherokee_handler_props_t                 *props,
cherokee_handler_cgi_base_add_env_pair_t  add_env_pair,
cherokee_handler_cgi_base_read_from_cgi_t read_from_cgi)
{

cherokee_handler_init_base (HANDLER(cgi), conn, props, info);


cgi->init_phase          = hcgi_phase_build_headers;
cgi->content_length      = 0;
cgi->got_eof             = false;
cgi->file_handler        = NULL;

cherokee_buffer_init (&cgi->xsendfile);
cherokee_buffer_init (&cgi->executable);

cherokee_buffer_init (&cgi->data);
cherokee_buffer_ensure_size (&cgi->data, 2*1024);


cgi->add_env_pair  = add_env_pair;
cgi->read_from_cgi = read_from_cgi;


if (PROP_CGI_BASE(props)->allow_xsendfile == false) {
HANDLER(cgi)->support = hsupport_nothing;
} else {
HANDLER(cgi)->support = hsupport_range;
}

return ret_ok;
}