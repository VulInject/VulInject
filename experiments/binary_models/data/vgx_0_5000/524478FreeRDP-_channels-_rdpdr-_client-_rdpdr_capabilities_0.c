static void rdpdr_write_general_capset(rdpdrPlugin* rdpdr, wStream* s)
{
WINPR_UNUSED(rdpdr);
const RDPDR_CAPABILITY_HEADER header = { CAP_GENERAL_TYPE, RDPDR_CAPABILITY_HEADER_LENGTH + 36,
GENERAL_CAPABILITY_VERSION_02 };
rdpdr_write_capset_header(rdpdr->log, s, &header);
Stream_Write_UINT32(s, 0);                   
Stream_Write_UINT32(s, 0);                   
Stream_Write_UINT16(s, rdpdr->clientVersionMajor); 
Stream_Write_UINT16(s, rdpdr->clientVersionMinor); 
Stream_Write_UINT32(s, 0x0000FFFF);          
Stream_Write_UINT32(s, 0); 
Stream_Write_UINT32(s, RDPDR_DEVICE_REMOVE_PDUS | RDPDR_CLIENT_DISPLAY_NAME_PDU |
RDPDR_USER_LOGGEDON_PDU); 
Stream_Write_UINT32(s, ENABLE_ASYNCIO);              
Stream_Write_UINT32(s, 0); 
Stream_Write_UINT32(
s, 0); 
}