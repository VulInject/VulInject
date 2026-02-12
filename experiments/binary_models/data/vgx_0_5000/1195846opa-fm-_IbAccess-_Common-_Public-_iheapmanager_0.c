void HeapManagerPrintSummary(HEAP_MANAGER *heap_mng)
{
uint32 i;
QUICK_LIST *list;

SpinLockAcquire(&heap_mng->heap_lock);

MsgOut("Heap Manager: %s\n",heap_mng->name);
MsgOut("Max memory: %u\n",heap_mng->max_memory);
MsgOut("Available memory: %u\n",heap_mng->available_memory);
MsgOut("Current Offset: %u\n",heap_mng->cur_offset);

for(i = 0;i < 32;i++)
{
list = &heap_mng->bucket_lists[i];
MsgOut("Free List size: %u count: %u\n",1<<i,QListCount(list));
}
SpinLockRelease(&heap_mng->heap_lock);
}