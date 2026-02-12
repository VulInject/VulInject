static RAnalAddrHintRecord *ensure_addr_hint_record(RAnal *anal, RAnalAddrHintType type, ut64 addr) {
RVector *records = ht_up_find (anal->addr_hints, addr, NULL);
if (!records) {
records = r_vector_new (sizeof (RAnalAddrHintRecord), addr_hint_record_fini, NULL);
if (!records) {
return NULL;
}
ht_up_insert (anal->addr_hints, addr, records);
}
void *pos;
r_vector_foreach (records, pos) {
RAnalAddrHintRecord *record = pos;
if (record->type == type) {
return record;
}
}
RAnalAddrHintRecord *record = r_vector_push (records, NULL);
memset (record, 0, sizeof (*record));
record->type = type;
return record;
}