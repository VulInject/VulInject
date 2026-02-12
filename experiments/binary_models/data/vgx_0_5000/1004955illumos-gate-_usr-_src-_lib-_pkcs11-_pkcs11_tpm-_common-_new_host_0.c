CK_RV
SC_CreateObject(ST_SESSION_HANDLE    sSession,
CK_ATTRIBUTE_PTR	pTemplate,
CK_ULONG		ulCount,
CK_OBJECT_HANDLE_PTR phObject)
{
SESSION		* sess = NULL;
CK_RV		   rc = CKR_OK;
SESS_SET

if (st_Initialized() == FALSE) {
rc = CKR_CRYPTOKI_NOT_INITIALIZED;
goto done;
}

sess = session_mgr_find(hSession);
if (! sess) {
rc = CKR_SESSION_HANDLE_INVALID;
goto done;
}

if (pin_expired(&sess->session_info,
nv_token_data->token_info.flags) == TRUE) {
rc = CKR_PIN_EXPIRED;
goto done;
}
rc = object_mgr_add(sess, pTemplate, ulCount, phObject);

done:
return (rc);

}