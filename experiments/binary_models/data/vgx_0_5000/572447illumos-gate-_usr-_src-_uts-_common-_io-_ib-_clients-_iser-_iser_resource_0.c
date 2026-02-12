iser_msg_t *
iser_msg_get(iser_hca_t *hca, int num, int *ret)
{
iser_msg_t	*tmp, *msg = NULL;
int i;

ASSERT(hca != NULL);


for (i = 0; i < num; i++) {
tmp = kmem_cache_alloc(hca->iser_msg_cache, KM_NOSLEEP);
if (tmp == NULL) {
ISER_LOG(CE_NOTE, "iser_msg_get: alloc failed, "
"requested (%d) allocated (%d)", num, i);
break;
}
tmp->msg_ds.ds_len	= ISER_MAX_CTRLPDU_LEN;
tmp->nextp = msg;
msg = tmp;
}

if (ret != NULL) {
*ret = i;
}

return (msg);
}