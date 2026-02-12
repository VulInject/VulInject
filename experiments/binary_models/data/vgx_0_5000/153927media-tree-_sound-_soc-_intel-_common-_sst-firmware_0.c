}
EXPORT_SYMBOL_GPL(sst_module_runtime_restore);


struct sst_mem_block *sst_mem_block_register(struct sst_dsp *dsp, u32 offset,
u32 size, enum sst_mem_type type, const struct sst_block_ops *ops,
u32 index, void *private)
{
struct sst_mem_block *block;

block = kzalloc(sizeof(*block), GFP_KERNEL);
if (block == NULL)
return NULL;

block->offset = offset;
block->size = size;
block->index = index;
block->type = type;
block->dsp = dsp;
block->private = private;
block->ops = ops;

mutex_lock(&dsp->mutex);
list_add(&block->list, &dsp->free_block_list);
mutex_unlock(&dsp->mutex);

return block;
}