static int
nv04_sgdma_bind(struct ttm_tt *ttm, struct ttm_mem_reg *reg)
{
struct nouveau_sgdma_be *nvbe = (struct nouveau_sgdma_be *)ttm;
struct nvkm_mem *node = reg->mm_node;

if (ttm->sg) {
node->sg    = ttm->sg;
node->pages = NULL;
} else {
node->sg    = NULL;
node->pages = nvbe->ttm.dma_address;
}
node->size = (reg->num_pages << PAGE_SHIFT) >> 12;

nvkm_vm_map(&node->vma[0], node);
nvbe->node = node;
return 0;
}