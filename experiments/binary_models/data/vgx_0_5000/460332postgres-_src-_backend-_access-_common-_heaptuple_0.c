HeapTuple
heap_tuple_from_minimal_tuple(MinimalTuple mtup)
{
HeapTuple	result;
uint32		len = mtup->t_len + MINIMAL_TUPLE_OFFSET;

result = (HeapTuple) palloc(HEAPTUPLESIZE + len);
result->t_len = len;
ItemPointerSetInvalid(&(result->t_self));
result->t_tableOid = InvalidOid;
result->t_data = (HeapTupleHeader) ((char *) result + HEAPTUPLESIZE);
memcpy((char *) result->t_data + MINIMAL_TUPLE_OFFSET, mtup, mtup->t_len);
memset(result->t_data, 0, offsetof(HeapTupleHeaderData, t_infomask2));
return result;
}