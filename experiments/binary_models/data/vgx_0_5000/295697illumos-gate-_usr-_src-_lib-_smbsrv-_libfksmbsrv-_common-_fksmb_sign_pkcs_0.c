static int
find_mech(smb_crypto_mech_t *mech, ulong_t mid)
{
CK_SESSION_HANDLE hdl;
CK_RV rv;

rv = SUNW_C_GetMechSession(mid, &hdl);
if (rv != CKR_OK) {
cmn_err(CE_NOTE, "PKCS#11: no mech 0x%x",
(unsigned int)mid);
return (-1);
}
(void) C_CloseSession(hdl);

mech->mechanism = mid;
mech->pParameter = NULL;
mech->ulParameterLen = 0;
return (0);
}