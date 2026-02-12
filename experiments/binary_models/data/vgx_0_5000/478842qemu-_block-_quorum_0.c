static int coroutine_fn quorum_co_block_status(BlockDriverState *bs,
bool want_zero,
int64_t offset, int64_t count,
int64_t *pnum, int64_t *map,
BlockDriverState **file)
{
BDRVQuorumState *s = bs->opaque;
int i, ret;
int64_t pnum_zero = count;
int64_t pnum_data = 0;

for (i = 0; i < s->num_children; i++) {
int64_t bytes;
ret = bdrv_co_common_block_status_above(s->children[i]->bs, NULL, false,
want_zero, offset, count,
&bytes, NULL, NULL, NULL);
if (ret < 0) {
quorum_report_bad(QUORUM_OP_TYPE_READ, offset, count,
s->children[i]->bs->node_name, ret);
pnum_data = count;
break;
}

if (ret & BDRV_BLOCK_ZERO) {
pnum_zero = MIN(pnum_zero, bytes);
} else {
pnum_data = MAX(pnum_data, bytes);
}
}

if (pnum_data) {
*pnum = pnum_data;
return BDRV_BLOCK_DATA;
} else {
*pnum = pnum_zero;
return BDRV_BLOCK_ZERO;
}
}