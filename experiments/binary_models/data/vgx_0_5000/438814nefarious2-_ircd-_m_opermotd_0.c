*            note:   it is guaranteed that parv[0]..parv[parc-1] are all
*                    non-NULL pointers.
*/





int m_opermotd(struct Client* cptr, struct Client* sptr, int parc, char* parv[])
{
if (!feature_bool(FEAT_OPERMOTD))
return send_reply(sptr, ERR_DISABLED, "OPERMOTD");

if (hunt_server_cmd(sptr, CMD_OPERMOTD, cptr, feature_int(FEAT_HIS_REMOTE), "%C", 1,
parc, parv) != HUNTED_ISME)
return 0;

return motd_send_type(sptr, MOTD_OPER);
}