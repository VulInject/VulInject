static mblk_t * BnxeRxRingPoll(void * ringHandle,
int    numBytes)
{
RxQueue *     pRxQ  = (RxQueue *)ringHandle;
um_device_t * pUM   = (um_device_t *)pRxQ->pUM;
u32_t         idx   = pRxQ->idx;
mblk_t *      pMblk = NULL;
boolean_t     pktsRxed = 0;
boolean_t     pktsTxed = 0;

_NOTE(ARGUNUSED(numPkts))

if (numBytes <= 0)
{
return NULL;
}

if (pRxQ->inPollMode == B_FALSE)
{
BnxeLogWarn(pUM, "Polling on ring %d when NOT in poll mode!", idx);
return NULL;
}

BNXE_LOCK_ENTER_INTR(pUM, idx);

pRxQ->pollCnt++;

BnxePollRxRing(pUM, idx, &pktsRxed, &pktsTxed);

if (pktsTxed) BnxeTxRingProcess(pUM, idx);
if (pktsRxed) pMblk = BnxeRxRingProcess(pUM, idx, TRUE, numBytes);


lm_sq_post_pending(&pUM->lm_dev);

BNXE_LOCK_EXIT_INTR(pUM, idx);

return pMblk;
}