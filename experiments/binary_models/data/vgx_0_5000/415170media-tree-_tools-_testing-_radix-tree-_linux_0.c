void kmem_cache_free(struct kmem_cache *cachep, void *objp)
{
assert(objp);
uatomic_dec(&nr_allocated);
if (kmalloc_verbose)
printf("Freeing %p to slab\n", objp);
pthread_mutex_lock(&cachep->lock);
if (cachep->nr_objs > 10) {
memset(objp, POISON_FREE, cachep->size);
free(objp);
} else {
struct radix_tree_node *node = objp;
cachep->nr_objs++;
node->parent = cachep->objs;
cachep->objs = node;
}
pthread_mutex_unlock(&cachep->lock);
}