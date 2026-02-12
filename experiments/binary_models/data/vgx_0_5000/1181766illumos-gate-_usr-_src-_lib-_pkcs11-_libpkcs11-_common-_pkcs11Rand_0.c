CK_RV
C_GenerateRandom(CK_SESSION_HANDLE hSession, CK_BYTE_PTR pRandomData,
CK_ULONG ulRandomLen)
{
CK_RV rv;
pkcs11_session_t *sessp;
CK_SLOT_ID slotid;


if (purefastpath || policyfastpath) {

if (policyfastpath &&
slottable->st_slots[fast_slot]->sl_norandom) {
return (CKR_FUNCTION_FAILED);
}
return (fast_funcs->C_GenerateRandom(hSession, pRandomData,
ulRandomLen));
}

if (!pkcs11_initialized) {
return (CKR_CRYPTOKI_NOT_INITIALIZED);
}


HANDLE2SESSION(hSession, sessp, rv);

if (rv != CKR_OK) {
return (rv);
}

slotid = sessp->se_slotid;


if (slottable->st_slots[slotid]->sl_norandom)
return (CKR_FUNCTION_FAILED);


rv = FUNCLIST(sessp->se_slotid)->C_GenerateRandom(sessp->se_handle,
pRandomData, ulRandomLen);


if (rv == CKR_FUNCTION_NOT_SUPPORTED) {
return (CKR_FUNCTION_FAILED);
}

return (rv);
}