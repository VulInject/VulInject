static BOOL input_recv_unicode_keyboard_event(rdpInput* input, wStream* s)
{
UINT16 keyboardFlags, unicodeCode;

WINPR_ASSERT(input);
WINPR_ASSERT(s);

if (!Stream_CheckAndLogRequiredLength(TAG, s, 6))
return FALSE;

Stream_Read_UINT16(s, keyboardFlags); 
Stream_Read_UINT16(s, unicodeCode);   
Stream_Seek(s, 2);                    



if (keyboardFlags & KBD_FLAGS_RELEASE)
keyboardFlags &= ~KBD_FLAGS_DOWN;

return IFCALLRESULT(TRUE, input->UnicodeKeyboardEvent, input, keyboardFlags, unicodeCode);
}