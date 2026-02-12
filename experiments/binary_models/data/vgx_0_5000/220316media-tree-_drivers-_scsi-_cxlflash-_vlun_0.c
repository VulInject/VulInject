static int init_vlun(struct llun_info *lli)
{
int rc = 0;
struct glun_info *gli = lli->parent;
struct blka *blka = &gli->blka;

memset(blka, 0, sizeof(*blka));
mutex_init(&blka->mutex);


blka->ba_lun.lun_id = lli->lun_index;
blka->ba_lun.lsize = gli->max_lba + 1;
blka->ba_lun.lba_size = gli->blk_len;

blka->ba_lun.au_size = MC_CHUNK_SIZE;
blka->nchunk = blka->ba_lun.lsize / MC_CHUNK_SIZE;

rc = ba_init(&blka->ba_lun);
if (unlikely(rc))
pr_debug("%s: cannot init block_alloc, rc=%d\n", __func__, rc);

pr_debug("%s: returning rc=%d lli=%p\n", __func__, rc, lli);
return rc;
}