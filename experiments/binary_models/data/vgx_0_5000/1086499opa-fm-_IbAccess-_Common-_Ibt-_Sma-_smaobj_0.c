FSTATUS
iba_smi_close(
IN	SMA_OBJECT			*SmObject
)
{
FSTATUS					status = FSUCCESS;
SMA_OBJECT_PRIVATE		*pSmaObj;


_DBG_ENTER_LVL(_DBG_LVL_OBJ, iba_smi_close);











if ( NULL != g_Sma->SmUserTbl )
{
pSmaObj = (SMA_OBJECT_PRIVATE *)SmObject;

pSmaObj->u.UserNo = 0;
g_Sma->SmUserTbl->Current--;



if ( pSmaObj->u.RcvCallback == \
g_Sma->SmUserTbl->DefRecv.RcvCallback )
{

g_Sma->SmUserTbl->DefRecv.RcvCallback = NULL;
g_Sma->SmUserTbl->DefRecv.Context = NULL;
g_Sma->SmUserTbl->DefRecv.EventCallback = NULL;
}

g_Sma->NumUser--;			



if ( pSmaObj->SmaObj.CaTbl )
MemoryDeallocate( pSmaObj->SmaObj.CaTbl );
} else {
_DBG_ERROR(("Could not locate userInfo!\n"));
}



_DBG_LEAVE_LVL(_DBG_LVL_OBJ);

return status;
}