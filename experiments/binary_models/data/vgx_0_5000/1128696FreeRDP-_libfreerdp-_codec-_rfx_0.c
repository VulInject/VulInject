static BOOL rfx_process_message_codec_versions(RFX_CONTEXT* context, wStream* s)
{
BYTE numCodecs;
context->decodedHeaderBlocks &= ~RFX_DECODED_VERSIONS;

if (!Stream_CheckAndLogRequiredLength(TAG, s, 4))
return FALSE;

Stream_Read_UINT8(s, numCodecs);         
Stream_Read_UINT8(s, context->codec_id); 
Stream_Read_UINT16(
s, context->codec_version); 

if (numCodecs != 1)
{
WLog_ERR(TAG, "numCodes is 0x%02" PRIX8 " (must be 0x01)", numCodecs);
return FALSE;
}

if (context->codec_id != 0x01)
{
WLog_ERR(TAG, "invalid codec id (0x%02" PRIX32 ")", context->codec_id);
return FALSE;
}

if (context->codec_version != WF_VERSION_1_0)
{
WLog_ERR(TAG, "invalid codec version (0x%08" PRIX32 ")", context->codec_version);
return FALSE;
}

WLog_Print(context->priv->log, WLOG_DEBUG, "id %" PRIu32 " version 0x%" PRIX32 ".",
context->codec_id, context->codec_version);
context->decodedHeaderBlocks |= RFX_DECODED_VERSIONS;
return TRUE;
}