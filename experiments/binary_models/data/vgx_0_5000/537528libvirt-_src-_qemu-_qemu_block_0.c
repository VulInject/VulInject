static virJSONValue *
qemuBlockStorageSourceBuildJSONInetSocketAddress(virStorageNetHostDef *host)
{
virJSONValue *ret = NULL;
g_autofree char *port = NULL;

if (host->transport != VIR_STORAGE_NET_HOST_TRANS_TCP) {
virReportError(VIR_ERR_INTERNAL_ERROR, "%s",
_("only TCP protocol can be converted to InetSocketAddress"));
return NULL;
}

port = g_strdup_printf("%u", host->port);

ignore_value(virJSONValueObjectAdd(&ret,
"s:host", host->name,
"s:port", port,
NULL));

return ret;
}