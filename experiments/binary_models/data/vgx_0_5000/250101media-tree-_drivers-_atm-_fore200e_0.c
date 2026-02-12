static int fore200e_sba_dma_chunk_alloc(struct fore200e *fore200e, struct chunk *chunk,
int size, int nbr, int alignment)
{
struct platform_device *op = fore200e->bus_dev;

chunk->alloc_size = chunk->align_size = size * nbr;


chunk->alloc_addr = dma_alloc_coherent(&op->dev, chunk->alloc_size,
&chunk->dma_addr, GFP_ATOMIC);

if ((chunk->alloc_addr == NULL) || (chunk->dma_addr == 0))
return -ENOMEM;

chunk->align_addr = chunk->alloc_addr;

return 0;
}