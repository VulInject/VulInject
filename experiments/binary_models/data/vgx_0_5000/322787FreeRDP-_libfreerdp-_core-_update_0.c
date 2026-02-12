static BOOL update_send_suppress_output(rdpContext* context, BYTE allow, const RECTANGLE_16* area)
{
WINPR_ASSERT(context);
rdpRdp* rdp = context->rdp;

WINPR_ASSERT(rdp);
WINPR_ASSERT(rdp->settings);
if (rdp->settings->SuppressOutput)
{
wStream* s = rdp_data_pdu_init(rdp);

if (!s)
return FALSE;

update_write_suppress_output(s, allow, area);
WINPR_ASSERT(rdp->mcs);
return rdp_send_data_pdu(rdp, s, DATA_PDU_TYPE_SUPPRESS_OUTPUT, rdp->mcs->userId);
}

return TRUE;
}