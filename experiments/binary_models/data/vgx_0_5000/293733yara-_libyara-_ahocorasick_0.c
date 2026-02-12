static int _yr_ac_queue_push(QUEUE* queue, YR_AC_STATE* state)
{
QUEUE_NODE* pushed_node;

pushed_node = (QUEUE_NODE*) yr_malloc(sizeof(QUEUE_NODE));

if (pushed_node == NULL)
return ERROR_INSUFFICIENT_MEMORY;

pushed_node->previous = queue->tail;
pushed_node->next = NULL;
pushed_node->value = state;

if (queue->tail != NULL)
queue->tail->next = pushed_node;
else  
queue->head = pushed_node;

queue->tail = pushed_node;

return ERROR_SUCCESS;
}