int ynandif_QueryNANDBlock(struct yaffs_dev *dev, int blockId,
enum yaffs_block_state *state, u32 *seq_number)
{
unsigned chunkNo;
struct yaffs_ext_tags tags;

*seq_number = 0;

chunkNo = blockId * dev->param.chunks_per_block;

if (!ynandif_IsBlockOk(dev, blockId)) {
*state = YAFFS_BLOCK_STATE_DEAD;
} else {
ynandif_ReadChunkWithTagsFromNAND(dev, chunkNo, NULL, &tags);

if (!tags.chunk_used) {
*state = YAFFS_BLOCK_STATE_EMPTY;
} else {
*state = YAFFS_BLOCK_STATE_NEEDS_SCAN;
*seq_number = tags.seq_number;
}
}

return YAFFS_OK;
}