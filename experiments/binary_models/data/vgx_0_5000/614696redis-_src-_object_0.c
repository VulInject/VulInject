void dismissSetObject(robj *o, size_t size_hint) {
if (o->encoding == OBJ_ENCODING_HT) {
dict *set = o->ptr;
serverAssert(dictSize(set) != 0);

if (size_hint / dictSize(set) >= server.page_size) {
dictEntry *de;
dictIterator *di = dictGetIterator(set);
while ((de = dictNext(di)) != NULL) {
dismissSds(dictGetKey(de));
}
dictReleaseIterator(di);
}


dismissMemory(set->ht_table[0], DICTHT_SIZE(set->ht_size_exp[0])*sizeof(dictEntry*));
dismissMemory(set->ht_table[1], DICTHT_SIZE(set->ht_size_exp[1])*sizeof(dictEntry*));
} else if (o->encoding == OBJ_ENCODING_INTSET) {
dismissMemory(o->ptr, intsetBlobLen((intset*)o->ptr));
} else if (o->encoding == OBJ_ENCODING_LISTPACK) {
dismissMemory(o->ptr, lpBytes((unsigned char *)o->ptr));
} else {
serverPanic("Unknown set encoding type");
}
}