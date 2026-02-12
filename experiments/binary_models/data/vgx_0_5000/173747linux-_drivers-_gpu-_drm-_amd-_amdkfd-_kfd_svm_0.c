static int
svm_range_split_nodes(struct svm_range *new, struct svm_range *old,
uint64_t start, uint64_t last)
{
uint64_t npages = last - start + 1;

pr_debug("svms 0x%p new prange 0x%p start 0x%lx [0x%llx 0x%llx]\n",
new->svms, new, new->start, start, last);

if (new->start == old->start) {
new->offset = old->offset;
old->offset += new->npages;
} else {
new->offset = old->offset + npages;
}

new->svm_bo = svm_range_bo_ref(old->svm_bo);
new->ttm_res = old->ttm_res;

spin_lock(&new->svm_bo->list_lock);
list_add(&new->svm_bo_list, &new->svm_bo->range_list);
spin_unlock(&new->svm_bo->list_lock);

return 0;
}