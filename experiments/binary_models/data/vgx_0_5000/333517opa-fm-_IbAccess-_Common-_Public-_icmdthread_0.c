boolean CmdThreadQueue(CMD_THREAD* pCmdThread, void *Cmd)
{
LIST_ITEM *pItem;

ASSERT( pCmdThread->m_Initialized );
pItem = (LIST_ITEM*)MemoryAllocate2(sizeof(LIST_ITEM), IBA_MEM_FLAG_SHORT_DURATION, CMD_THREAD_TAG);
if (pItem == NULL)
return FALSE;
QListSetObj(pItem, Cmd);
SpinLockAcquire(&pCmdThread->m_QueueLock);
QListInsertTail(&pCmdThread->m_Queue, pItem);
SpinLockRelease(&pCmdThread->m_QueueLock);
EventTrigger(&pCmdThread->m_Event);
return TRUE;
}