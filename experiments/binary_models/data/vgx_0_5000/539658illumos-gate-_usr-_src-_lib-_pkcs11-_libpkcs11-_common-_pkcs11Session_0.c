CK_RV
C_GetSessionInfo(CK_SESSION_HANDLE hSession, CK_SESSION_INFO_PTR pInfo)
{

CK_RV rv;
CK_SLOT_ID slot_id;
pkcs11_session_t *sessp;


if (purefastpath || policyfastpath) {
rv = fast_funcs->C_GetSessionInfo(hSession, pInfo);


if (metaslot_enabled) {
pInfo->slotID = METASLOT_FRAMEWORK_ID;
}
return (rv);
}

if (!pkcs11_initialized) {
return (CKR_CRYPTOKI_NOT_INITIALIZED);
}


HANDLE2SESSION(hSession, sessp, rv);

if (rv != CKR_OK) {
return (rv);
}


slot_id = sessp->se_slotid;


rv = FUNCLIST(slot_id)->
C_GetSessionInfo(sessp->se_handle, pInfo);


if (rv == CKR_FUNCTION_NOT_SUPPORTED) {
return (CKR_FUNCTION_FAILED);
}


pInfo->slotID = slot_id;

return (rv);
}