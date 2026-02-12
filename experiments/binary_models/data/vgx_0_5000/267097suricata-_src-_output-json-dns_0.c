static TmEcode LogDnsLogThreadInit(ThreadVars *t, const void *initdata, void **data)
{
LogDnsLogThread *aft = SCCalloc(1, sizeof(LogDnsLogThread));
if (unlikely(aft == NULL))
return TM_ECODE_FAILED;

if(initdata == NULL)
{
SCLogDebug("Error getting context for EveLogDNS.  \"initdata\" argument NULL");
goto error_exit;
}


aft->dnslog_ctx = ((OutputCtx *)initdata)->data;
aft->ctx = CreateEveThreadCtx(t, aft->dnslog_ctx->eve_ctx);
if (!aft->ctx) {
goto error_exit;
}

*data = (void *)aft;
return TM_ECODE_OK;

error_exit:
SCFree(aft);
return TM_ECODE_FAILED;
}