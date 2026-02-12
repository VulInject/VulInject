CK_RV
C_GetSessionInfo(CK_SESSION_HANDLE hSession, CK_SESSION_INFO_PTR pInfo)
{
kernel_session_t *session_p;
CK_RV rv;
boolean_t ses_lock_held = B_FALSE;

if (!kernel_initialized)
return (CKR_CRYPTOKI_NOT_INITIALIZED);

if (pInfo == NULL)
return (CKR_ARGUMENTS_BAD);


rv = handle2session(hSession, &session_p);
if (rv != CKR_OK)
return (rv);


pInfo->slotID = session_p->ses_slotid;
pInfo->flags = session_p->flags;
pInfo->ulDeviceError = 0;
pInfo->state = get_ses_state(session_p);


REFRELE(session_p, ses_lock_held);

return (CKR_OK);
}