static int is_subscriber(sip_msg_t *msg, str *suri, str *stable, int iflags)
{
int ret;
sip_uri_t puri;

if (suri->len<=0) {
LM_ERR("invalid uri parameter - empty value\n");
return -1;
}
if(parse_uri(suri->s, suri->len, &puri)<0){
LM_ERR("invalid uri parameter format\n");
return -1;
}
if (stable->len<=0) {
LM_ERR("invalid table parameter - empty value\n");
return -1;
}

LM_DBG("uri [%.*s] table [%.*s] flags [%d]\n", suri->len, suri->s,
stable->len,  stable->s, iflags);
ret = fetch_credentials(msg, &puri.user,
(iflags&AUTH_DB_SUBS_USE_DOMAIN)?&puri.host:NULL,
stable, iflags);

if(ret>=0)
return 1;
return ret;
}