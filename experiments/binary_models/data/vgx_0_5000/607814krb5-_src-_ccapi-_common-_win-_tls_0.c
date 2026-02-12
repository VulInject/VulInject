char*        tspdata_getUUID      (const struct tspdata* p)         {return p->_uuid;}

RPC_ASYNC_STATE* tspdata_getRpcAState (const struct tspdata* p)     {return p->_rpcState;}


BOOL WINAPI GetTspData(DWORD dwTlsIndex, struct tspdata**  pdw) {
struct tspdata*  pData;      

pData = (struct tspdata*)TlsGetValue(dwTlsIndex);
if (pData == NULL) {
pData = malloc(sizeof(*pData));
if (pData == NULL)
return FALSE;
memset(pData, 0, sizeof(*pData));
TlsSetValue(dwTlsIndex, pData);
}
(*pdw) = pData;
return TRUE;
}
