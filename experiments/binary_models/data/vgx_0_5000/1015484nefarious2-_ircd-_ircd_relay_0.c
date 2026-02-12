void server_relay_masked_message(struct Client* sptr, const char* mask, const char* text)
{
const char* s = mask;
int         host_mask = 0;
assert(0 != sptr);
assert(0 != mask);
assert(0 != text);

if ('@' == *++s) {
host_mask = 1;
++s;
}
sendcmdto_match_butone(sptr, CMD_PRIVATE, s,
IsServer(cli_from(sptr)) ? cli_from(sptr) : 0,
host_mask ? MATCH_HOST : MATCH_SERVER,
"%s :%s", mask, text);
}