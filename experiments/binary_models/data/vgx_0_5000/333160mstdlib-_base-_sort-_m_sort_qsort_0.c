static __inline__ void *qsort_choose_pivot(void *base, size_t nmemb, size_t esize, M_sort_compar_t compar, void *thunk)
{
unsigned char *middle;
unsigned char *left;
unsigned char *right;
size_t         srange;

middle = (unsigned char *)base + (nmemb / 2) * esize;
if (nmemb > 7) {
left  = base;
right = (unsigned char *)base + (nmemb - 1) * esize;
if (nmemb > 40) {

srange  = (nmemb / 8) * esize; 
left    = qsort_median(left,               left + srange,  left + 2 * srange, compar, thunk);
middle  = qsort_median(middle - srange,    middle,         middle + srange,   compar, thunk);
right   = qsort_median(right - 2 * srange, right - srange, right,             compar, thunk);
}
middle = qsort_median(left, middle, right, compar, thunk);
}

return middle;
}