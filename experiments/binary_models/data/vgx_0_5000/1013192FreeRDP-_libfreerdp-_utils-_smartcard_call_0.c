static LONG smartcard_GetDeviceTypeId_Call(scard_call_context* smartcard, wStream* out,
SMARTCARD_OPERATION* operation)
{
LONG status;
GetDeviceTypeId_Return ret = { 0 };
GetDeviceTypeId_Call* call;

WINPR_ASSERT(smartcard);
WINPR_ASSERT(out);
WINPR_ASSERT(operation);

call = &operation->call.getDeviceTypeId;

ret.ReturnCode = wrap(smartcard, SCardGetDeviceTypeIdW, operation->hContext, call->szReaderName,
&ret.dwDeviceId);
scard_log_status_error(TAG, "SCardGetDeviceTypeIdW", ret.ReturnCode);

status = smartcard_pack_device_type_id_return(out, &ret);
if (status != SCARD_S_SUCCESS)
return status;

return ret.ReturnCode;
}