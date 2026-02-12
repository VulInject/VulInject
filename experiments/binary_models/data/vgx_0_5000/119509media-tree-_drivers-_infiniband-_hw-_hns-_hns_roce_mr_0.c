static int hns_roce_mr_alloc(struct hns_roce_dev *hr_dev, u32 pd, u64 iova,
u64 size, u32 access, int npages,
struct hns_roce_mr *mr)
{
unsigned long index = 0;
int ret = 0;
struct device *dev = &hr_dev->pdev->dev;


ret = hns_roce_bitmap_alloc(&hr_dev->mr_table.mtpt_bitmap, &index);
if (ret == -1)
return -ENOMEM;

mr->iova = iova;			
mr->size = size;			
mr->pd = pd;				
mr->access = access;			
mr->enabled = 0;			
mr->key = hw_index_to_key(index);	

if (size == ~0ull) {
mr->type = MR_TYPE_DMA;
mr->pbl_buf = NULL;
mr->pbl_dma_addr = 0;
} else {
mr->type = MR_TYPE_MR;
mr->pbl_buf = dma_alloc_coherent(dev, npages * 8,
&(mr->pbl_dma_addr),
GFP_KERNEL);
if (!mr->pbl_buf)
return -ENOMEM;
}

return 0;
}