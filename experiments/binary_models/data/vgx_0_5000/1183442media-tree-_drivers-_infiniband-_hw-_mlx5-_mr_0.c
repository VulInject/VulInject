static int
mlx5_ib_sg_to_klms(struct mlx5_ib_mr *mr,
struct scatterlist *sgl,
unsigned short sg_nents,
unsigned int *sg_offset_p)
{
struct scatterlist *sg = sgl;
struct mlx5_klm *klms = mr->descs;
unsigned int sg_offset = sg_offset_p ? *sg_offset_p : 0;
u32 lkey = mr->ibmr.pd->local_dma_lkey;
int i;

mr->ibmr.iova = sg_dma_address(sg) + sg_offset;
mr->ibmr.length = 0;
mr->ndescs = sg_nents;

for_each_sg(sgl, sg, sg_nents, i) {
if (unlikely(i > mr->max_descs))
break;
klms[i].va = cpu_to_be64(sg_dma_address(sg) + sg_offset);
klms[i].bcount = cpu_to_be32(sg_dma_len(sg) - sg_offset);
klms[i].key = cpu_to_be32(lkey);
mr->ibmr.length += sg_dma_len(sg) - sg_offset;

sg_offset = 0;
}

if (sg_offset_p)
*sg_offset_p = sg_offset;

return i;
}