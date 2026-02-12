};
EXPORT_SYMBOL(dma_fence_chain_ops);


void dma_fence_chain_init(struct dma_fence_chain *chain,
struct dma_fence *prev,
struct dma_fence *fence,
uint64_t seqno)
{
struct dma_fence_chain *prev_chain = to_dma_fence_chain(prev);
uint64_t context;

spin_lock_init(&chain->lock);
rcu_assign_pointer(chain->prev, prev);
chain->fence = fence;
chain->prev_seqno = 0;


if (prev_chain && __dma_fence_is_later(seqno, prev->seqno, prev->ops)) {
context = prev->context;
chain->prev_seqno = prev->seqno;
} else {
context = dma_fence_context_alloc(1);

if (prev_chain)
seqno = max(prev->seqno, seqno);
}

dma_fence_init(&chain->base, &dma_fence_chain_ops,
&chain->lock, context, seqno);


WARN_ON(dma_fence_is_chain(fence));
}