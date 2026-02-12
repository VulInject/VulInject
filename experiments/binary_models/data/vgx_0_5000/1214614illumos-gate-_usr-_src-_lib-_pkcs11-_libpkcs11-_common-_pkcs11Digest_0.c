CK_RV
C_DigestFinal(CK_SESSION_HANDLE hSession, CK_BYTE_PTR pDigest,
CK_ULONG_PTR pulDigestLen)
{
CK_RV rv;
pkcs11_session_t *sessp;


if (purefastpath || policyfastpath) {
return (fast_funcs->C_DigestFinal(hSession, pDigest,
pulDigestLen));
}

if (!pkcs11_initialized) {
return (CKR_CRYPTOKI_NOT_INITIALIZED);
}


HANDLE2SESSION(hSession, sessp, rv);

if (rv != CKR_OK) {
return (rv);
}


rv = FUNCLIST(sessp->se_slotid)->C_DigestFinal(sessp->se_handle,
pDigest, pulDigestLen);


if (rv == CKR_FUNCTION_NOT_SUPPORTED) {
return (CKR_FUNCTION_FAILED);
}

return (rv);
}