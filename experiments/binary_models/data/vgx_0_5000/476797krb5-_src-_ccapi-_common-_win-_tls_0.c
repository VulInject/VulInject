void         tspdata_setSST       (struct tspdata* p, time_t t)         {p->_sst = t;}

void         tspdata_setStream    (struct tspdata* p, k5_ipc_stream s)   {p->_stream = s;}

BOOL         tspdata_getListening (const struct tspdata* p)         {return p->_listening;}

BOOL         tspdata_getConnected (const struct tspdata* p)         {return p->_CCAPI_Connected;}

HANDLE       tspdata_getReplyEvent(const struct tspdata* p)         {return p->_replyEvent;}

time_t       tspdata_getSST       (const struct tspdata* p)         {return p->_sst;}

k5_ipc_stream tspdata_getStream    (const struct tspdata* p)         {return p->_stream;}

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
