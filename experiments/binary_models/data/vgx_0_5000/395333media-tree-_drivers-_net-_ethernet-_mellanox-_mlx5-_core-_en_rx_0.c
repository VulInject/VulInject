static inline bool mlx5e_rx_cache_put(struct mlx5e_rq *rq,
struct mlx5e_dma_info *dma_info)
{
struct mlx5e_page_cache *cache = &rq->page_cache;
u32 tail_next = (cache->tail + 1) & (MLX5E_CACHE_SIZE - 1);

if (tail_next == cache->head) {
rq->stats.cache_full++;
return false;
}

if (unlikely(page_is_pfmemalloc(dma_info->page)))
return false;

cache->page_cache[cache->tail] = *dma_info;
cache->tail = tail_next;
return true;
}