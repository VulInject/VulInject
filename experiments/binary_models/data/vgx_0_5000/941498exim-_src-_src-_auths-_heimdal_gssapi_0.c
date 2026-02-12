static void dummy(int x) { dummy2(x-1); }






optionlist auth_heimdal_gssapi_options[] = {
{ "server_hostname",      opt_stringptr,
OPT_OFF(auth_heimdal_gssapi_options_block, server_hostname) },
{ "server_keytab",        opt_stringptr,
OPT_OFF(auth_heimdal_gssapi_options_block, server_keytab) },
{ "server_service",       opt_stringptr,
OPT_OFF(auth_heimdal_gssapi_options_block, server_service) }
};

int auth_heimdal_gssapi_options_count =
sizeof(auth_heimdal_gssapi_options)/sizeof(optionlist);


auth_heimdal_gssapi_options_block auth_heimdal_gssapi_option_defaults = {
US"$primary_hostname",    
NULL,                     
US"smtp",                 
};