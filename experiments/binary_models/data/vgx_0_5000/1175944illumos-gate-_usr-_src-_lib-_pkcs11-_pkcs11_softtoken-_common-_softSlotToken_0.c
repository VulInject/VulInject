CK_RV
C_GetMechanismList(CK_SLOT_ID slotID, CK_MECHANISM_TYPE_PTR pMechanismList,
CK_ULONG_PTR pulCount)
{

ulong_t i;
ulong_t mechnum;

if (!softtoken_initialized)
return (CKR_CRYPTOKI_NOT_INITIALIZED);

if (slotID != SOFTTOKEN_SLOTID)
return (CKR_SLOT_ID_INVALID);

if (pulCount == NULL)
return (CKR_ARGUMENTS_BAD);

mechnum = sizeof (soft_mechanisms) / sizeof (CK_MECHANISM_TYPE);

if (pMechanismList == NULL) {

*pulCount = mechnum;
return (CKR_OK);
}

if (*pulCount < mechnum) {
*pulCount = mechnum;
return (CKR_BUFFER_TOO_SMALL);
}

for (i = 0; i < mechnum; i++) {
pMechanismList[i] = soft_mechanisms[i];
}

*pulCount = mechnum;

return (CKR_OK);
}