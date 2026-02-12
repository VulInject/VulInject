static BOOL nla_write_octet_string(WinPrAsn1Encoder* enc, const SecBuffer* buffer,
WinPrAsn1_tagId tagId, const char* msg)
{
BOOL res = FALSE;

WINPR_ASSERT(enc);
WINPR_ASSERT(buffer);
WINPR_ASSERT(msg);

if (buffer->cbBuffer > 0)
{
size_t rc = 0;
WinPrAsn1_OctetString octet_string = { 0 };

WLog_DBG(TAG, "   ----->> %s", msg);
octet_string.data = buffer->pvBuffer;
octet_string.len = buffer->cbBuffer;
rc = WinPrAsn1EncContextualOctetString(enc, tagId, &octet_string);
if (rc != 0)
res = TRUE;
}

return res;
}