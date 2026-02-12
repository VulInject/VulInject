static BOOL pf_client_begin_paint(rdpContext* context)
{
pClientContext* pc = (pClientContext*)context;
proxyData* pdata;
rdpContext* ps;
WINPR_ASSERT(pc);
pdata = pc->pdata;
WINPR_ASSERT(pdata);
ps = (rdpContext*)pdata->ps;
WINPR_ASSERT(ps);
WINPR_ASSERT(ps->update);
WINPR_ASSERT(ps->update->BeginPaint);
WLog_DBG(TAG, "called");
return ps->update->BeginPaint(ps);
}