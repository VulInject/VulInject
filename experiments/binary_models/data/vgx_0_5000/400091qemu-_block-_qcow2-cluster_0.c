int qcow2_write_l1_entry(BlockDriverState *bs, int l1_index)
{
BDRVQcow2State *s = bs->opaque;
int l1_start_index;
int i, ret;
int bufsize = MAX(L1E_SIZE,
MIN(bs->file->bs->bl.request_alignment, s->cluster_size));
int nentries = bufsize / L1E_SIZE;
g_autofree uint64_t *buf = g_try_new0(uint64_t, nentries);

if (buf == NULL) {
return -ENOMEM;
}

l1_start_index = QEMU_ALIGN_DOWN(l1_index, nentries);
for (i = 0; i < MIN(nentries, s->l1_size - l1_start_index); i++) {
buf[i] = cpu_to_be64(s->l1_table[l1_start_index + i]);
}

ret = qcow2_pre_write_overlap_check(bs, QCOW2_OL_ACTIVE_L1,
s->l1_table_offset + L1E_SIZE * l1_start_index, bufsize, false);
if (ret < 0) {
return ret;
}

BLKDBG_EVENT(bs->file, BLKDBG_L1_UPDATE);
ret = bdrv_pwrite_sync(bs->file,
s->l1_table_offset + L1E_SIZE * l1_start_index,
buf, bufsize);
if (ret < 0) {
return ret;
}

return 0;
}