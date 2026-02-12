static wStream* urb_create_iocompletion(UINT32 InterfaceField, UINT32 MessageId, UINT32 RequestId,
UINT32 OutputBufferSize)
{
const UINT32 InterfaceId = (STREAM_ID_PROXY << 30) | (InterfaceField & 0x3FFFFFFF);

if (OutputBufferSize > UINT32_MAX - 28ull)
return NULL;

wStream* out = Stream_New(NULL, OutputBufferSize + 28ull);

if (!out)
return NULL;

Stream_Write_UINT32(out, InterfaceId);          
Stream_Write_UINT32(out, MessageId);            
Stream_Write_UINT32(out, IOCONTROL_COMPLETION); 
Stream_Write_UINT32(out, RequestId);            
Stream_Write_UINT32(out, USBD_STATUS_SUCCESS);  
Stream_Write_UINT32(out, OutputBufferSize);     
Stream_Write_UINT32(out, OutputBufferSize);     
return out;
}