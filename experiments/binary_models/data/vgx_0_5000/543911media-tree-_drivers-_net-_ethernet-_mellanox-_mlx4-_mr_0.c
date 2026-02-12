int __mlx4_write_mtt(struct mlx4_dev *dev, struct mlx4_mtt *mtt,
int start_index, int npages, u64 *page_list)
{
int err = 0;
int chunk;
int mtts_per_page;
int max_mtts_first_page;


mtts_per_page = PAGE_SIZE / sizeof(u64);
max_mtts_first_page = mtts_per_page - (mtt->offset + start_index)
% mtts_per_page;

chunk = min_t(int, max_mtts_first_page, npages);

while (npages > 0) {
err = mlx4_write_mtt_chunk(dev, mtt, start_index, chunk, page_list);
if (err)
return err;
npages      -= chunk;
start_index += chunk;
page_list   += chunk;

chunk = min_t(int, mtts_per_page, npages);
}
return err;
}