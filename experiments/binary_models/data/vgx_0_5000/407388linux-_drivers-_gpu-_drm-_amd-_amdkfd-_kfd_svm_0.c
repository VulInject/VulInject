static int
svm_range_split(struct svm_range *prange, uint64_t start, uint64_t last,
struct svm_range **new)
{
uint64_t old_start = prange->start;
uint64_t old_last = prange->last;
struct svm_range_list *svms;
int r = 0;

pr_debug("svms 0x%p [0x%llx 0x%llx] to [0x%llx 0x%llx]\n", prange->svms,
old_start, old_last, start, last);

if (old_start != start && old_last != last)
return -EINVAL;
if (start < old_start || last > old_last)
return -EINVAL;

svms = prange->svms;
if (old_start == start)
*new = svm_range_new(svms, last + 1, old_last, false);
else
*new = svm_range_new(svms, old_start, start - 1, false);
if (!*new)
return -ENOMEM;

r = svm_range_split_adjust(*new, prange, start, last);
if (r) {
pr_debug("failed %d split [0x%llx 0x%llx] to [0x%llx 0x%llx]\n",
r, old_start, old_last, start, last);
svm_range_free(*new, false);
*new = NULL;
}

return r;
}