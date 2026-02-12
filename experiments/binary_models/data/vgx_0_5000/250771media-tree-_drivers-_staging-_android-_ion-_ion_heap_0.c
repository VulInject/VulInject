static unsigned long ion_heap_shrink_scan(struct shrinker *shrinker,
struct shrink_control *sc)
{
struct ion_heap *heap = container_of(shrinker, struct ion_heap,
shrinker);
int freed = 0;
int to_scan = sc->nr_to_scan;

if (to_scan == 0)
return 0;


if (heap->flags & ION_HEAP_FLAG_DEFER_FREE)
freed = ion_heap_freelist_shrink(heap, to_scan * PAGE_SIZE) /
PAGE_SIZE;

to_scan -= freed;
if (to_scan <= 0)
return freed;

if (heap->ops->shrink)
freed += heap->ops->shrink(heap, sc->gfp_mask, to_scan);
return freed;
}