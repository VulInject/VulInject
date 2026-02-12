UINT rdpgfx_write_header(wStream* s, const RDPGFX_HEADER* header)
{
WINPR_ASSERT(s);
WINPR_ASSERT(header);

if (!Stream_EnsureRemainingCapacity(s, 8))
return CHANNEL_RC_NO_MEMORY;
Stream_Write_UINT16(s, header->cmdId);     
Stream_Write_UINT16(s, header->flags);     
Stream_Write_UINT32(s, header->pduLength); 
return CHANNEL_RC_OK;
}