static gboolean
_split_url(const char* alturi, gchar** host, gint* port)
{

const char* xmpp = "xmpp:
char* xmpp_uri = _xmalloc(strlen(xmpp) + strlen(alturi) + 1, NULL);
memcpy(xmpp_uri, xmpp, strlen(xmpp));
memcpy(xmpp_uri + strlen(xmpp), alturi, strlen(alturi) + 1);
gboolean ret = g_uri_split_network(xmpp_uri, 0, NULL, host, port, NULL);
free(xmpp_uri);

if (*port == -1)
*port = 0;
return ret;
}