krb5_error_code
k5_locate_server(krb5_context context, const krb5_data *realm,
struct serverlist *serverlist, enum locate_service_type svc,
krb5_boolean no_udp)
{
krb5_error_code ret;
k5_transport transport = no_udp ? TCP : TCP_OR_UDP;

memset(serverlist, 0, sizeof(*serverlist));
if (realm == NULL || realm->data == NULL || realm->data[0] == 0) {
k5_setmsg(context, KRB5_REALM_CANT_RESOLVE,
"Cannot find KDC for invalid realm name \"\"");
return KRB5_REALM_CANT_RESOLVE;
}

ret = locate_server(context, realm, serverlist, svc, transport);
if (ret)
return ret;

if (serverlist->nservers == 0) {
k5_free_serverlist(serverlist);
k5_setmsg(context, KRB5_REALM_UNKNOWN,
_("Cannot find KDC for realm \"%.*s\""),
realm->length, realm->data);
return KRB5_REALM_UNKNOWN;
}
return 0;
}