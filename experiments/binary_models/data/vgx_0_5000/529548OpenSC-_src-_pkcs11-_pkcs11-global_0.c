CK_RV C_GetInterfaceList(CK_INTERFACE_PTR pInterfacesList,  
CK_ULONG_PTR pulCount)         
{
sc_log(context, "C_GetInterfaceList()");

if (pulCount == NULL_PTR)
return CKR_ARGUMENTS_BAD;

if (pInterfacesList == NULL_PTR) {
*pulCount = NUM_INTERFACES;
sc_log(context, "was only a size inquiry (%lu)\n", *pulCount);
return CKR_OK;
}

if (*pulCount < NUM_INTERFACES) {
sc_log(context, "buffer was too small (needed %d)\n", NUM_INTERFACES);
*pulCount = NUM_INTERFACES;
return CKR_BUFFER_TOO_SMALL;
}

memcpy(pInterfacesList, interfaces, NUM_INTERFACES * sizeof(CK_INTERFACE));
*pulCount = NUM_INTERFACES;

sc_log(context, "returned %lu interfaces\n", *pulCount);
return CKR_OK;
}