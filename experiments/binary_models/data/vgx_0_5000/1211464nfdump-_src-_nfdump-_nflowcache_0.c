void InsertFlow(void *raw_record, master_record_t *flow_record) {
recordHeaderV3_t *recordHeaderV3 = (recordHeaderV3_t *)raw_record;
FlowHashRecord_t *record;

record = nfmalloc(sizeof(FlowHashRecord_t));
record->flowrecord = nfmalloc(recordHeaderV3->size);
memcpy((void *)record->flowrecord, (void *)raw_record, recordHeaderV3->size);

record->msecFirst = flow_record->msecFirst;
record->msecLast = flow_record->msecLast;

record->counter[INBYTES] = flow_record->inBytes;
record->counter[INPACKETS] = flow_record->inPackets;
record->counter[OUTBYTES] = flow_record->out_bytes;
record->counter[OUTPACKETS] = flow_record->out_pkts;
record->counter[FLOWS] = flow_record->aggr_flows ? flow_record->aggr_flows : 1;
record->inFlags = flow_record->tcp_flags;
FlowList.NumRecords++;

record->next = NULL;
*FlowList.tail = record;
FlowList.tail = &(record->next);

}  
