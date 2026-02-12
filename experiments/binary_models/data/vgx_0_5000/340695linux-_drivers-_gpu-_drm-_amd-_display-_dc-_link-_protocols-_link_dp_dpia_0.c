bool dc_link_dpia_query_hpd_status(struct dc_link *link)
{
union dmub_rb_cmd cmd = {0};
struct dc_dmub_srv *dmub_srv = link->ctx->dmub_srv;
bool is_hpd_high = false;


cmd.query_hpd.header.type = DMUB_CMD__QUERY_HPD_STATE;
cmd.query_hpd.data.instance = link->link_id.enum_id - ENUM_ID_1;
cmd.query_hpd.data.ch_type = AUX_CHANNEL_DPIA;


if (dc_dmub_srv_cmd_with_reply_data(dmub_srv, &cmd) && cmd.query_hpd.data.status == AUX_RET_SUCCESS)
is_hpd_high = cmd.query_hpd.data.result;

DC_LOG_DEBUG("%s: link(%d) dpia(%d) cmd_status(%d) result(%d)\n",
__func__,
link->link_index,
link->link_id.enum_id - ENUM_ID_1,
cmd.query_hpd.data.status,
cmd.query_hpd.data.result);

return is_hpd_high;
}