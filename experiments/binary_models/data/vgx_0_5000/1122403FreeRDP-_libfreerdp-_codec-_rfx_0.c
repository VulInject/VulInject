static BOOL rfx_process_message_sync(RFX_CONTEXT* context, wStream* s)
{
UINT32 magic;
context->decodedHeaderBlocks &= ~RFX_DECODED_SYNC;


if (!Stream_CheckAndLogRequiredLength(TAG, s, 6))
return FALSE;

Stream_Read_UINT32(s, magic); 
if (magic != WF_MAGIC)
{
WLog_ERR(TAG, "invalid magic number 0x%08" PRIX32 "", magic);
return FALSE;
}

Stream_Read_UINT16(s, context->version); 
if (context->version != WF_VERSION_1_0)
{
WLog_ERR(TAG, "invalid version number 0x%08" PRIX32 "", context->version);
return FALSE;
}

WLog_Print(context->priv->log, WLOG_DEBUG, "version 0x%08" PRIX32 "", context->version);
context->decodedHeaderBlocks |= RFX_DECODED_SYNC;
return TRUE;
}