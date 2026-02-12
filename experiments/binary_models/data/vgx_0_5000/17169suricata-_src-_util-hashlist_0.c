int HashListTableAdd(HashListTable *ht, void *data, uint16_t datalen)
{
if (ht == NULL || data == NULL)
return -1;

uint32_t hash = ht->Hash(ht, data, datalen);

SCLogDebug("ht %p hash %"PRIu32"", ht, hash);

HashListTableBucket *hb = SCMalloc(sizeof(HashListTableBucket));
if (unlikely(hb == NULL))
goto error;
memset(hb, 0, sizeof(HashListTableBucket));
hb->data = data;
hb->size = datalen;
hb->bucknext = NULL;
hb->listnext = NULL;
hb->listprev = NULL;

if (ht->array[hash] == NULL) {
ht->array[hash] = hb;
} else {
hb->bucknext = ht->array[hash];
ht->array[hash] = hb;
}

if (ht->listtail == NULL) {
ht->listhead = hb;
ht->listtail = hb;
} else {
hb->listprev = ht->listtail;
ht->listtail->listnext = hb;
ht->listtail = hb;
}

return 0;

error:
return -1;
}