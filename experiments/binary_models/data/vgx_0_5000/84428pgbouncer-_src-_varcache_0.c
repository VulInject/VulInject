bool varcache_apply(PgSocket *server, PgSocket *client, bool *changes_p)
{
int changes = 0;
struct PStr *cval, *sval;
const struct var_lookup *lk;
int sql_ofs;
struct PktBuf *pkt = pktbuf_temp();

pktbuf_start_packet(pkt, 'Q');


sql_ofs = pktbuf_written(pkt);

for (lk = lookup; lk->name; lk++) {
sval = get_value(&server->vars, lk);
cval = get_value(&client->vars, lk);
changes += apply_var(pkt, lk->name, cval, sval);
}
*changes_p = changes > 0;
if (!changes)
return true;

pktbuf_put_char(pkt, 0);
pktbuf_finish_packet(pkt);

slog_debug(server, "varcache_apply: %s", pkt->buf + sql_ofs);
return pktbuf_send_immediate(pkt, server);
}