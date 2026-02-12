static RAnalRangedHintRecordBase *ensure_ranged_hint_record(RBTree *tree, ut64 addr, size_t sz) {
RBNode *node = r_rbtree_find (*tree, &addr, ranged_hint_record_cmp, NULL);
if (node) {
return container_of (node, RAnalRangedHintRecordBase, rb);
}
RAnalRangedHintRecordBase *record = malloc (sz);
memset (record, 0, sz);
if (!record) {
return NULL;
}
record->addr = addr;
r_rbtree_insert (tree, &addr, &record->rb, ranged_hint_record_cmp, NULL);
return record;
}