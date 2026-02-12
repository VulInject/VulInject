rd_err_e
_rd_event_getmsg32(rd_agent_t *rap, rd_event_msg_t *emsg)
{
Rtld_db_priv	rdb;

if (ps_pread(rap->rd_psp, rap->rd_rdebug, (char *)&rdb,
sizeof (Rtld_db_priv)) != PS_OK) {
LOG(ps_plog(MSG_ORIG(MSG_DB_READDBGFAIL_2),
EC_ADDR(rap->rd_rdebug)));
return (RD_DBERR);
}
emsg->type = rdb.rtd_rdebug.r_rdevent;
if (emsg->type == RD_DLACTIVITY) {
switch (rdb.rtd_rdebug.r_state) {
case RT_CONSISTENT:
emsg->u.state = RD_CONSISTENT;
break;
case RT_ADD:
emsg->u.state = RD_ADD;
break;
case RT_DELETE:
emsg->u.state = RD_DELETE;
break;
}
} else
emsg->u.state = RD_NOSTATE;

LOG(ps_plog(MSG_ORIG(MSG_DB_RDEVENTGETMSG), rap->rd_dmodel,
emsg->type, emsg->u.state));

return (RD_OK);
}