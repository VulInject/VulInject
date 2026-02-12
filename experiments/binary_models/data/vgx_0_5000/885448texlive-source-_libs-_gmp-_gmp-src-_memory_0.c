

void * (*__gmp_allocate_func) (size_t) = __gmp_default_allocate;
void * (*__gmp_reallocate_func) (void *, size_t, size_t) = __gmp_default_reallocate;
void   (*__gmp_free_func) (void *, size_t) = __gmp_default_free;




void *
__gmp_default_allocate (size_t size)
{
void *ret;
size_t req_size = size;
size += 2 * GMP_LIMB_BYTES;
ret = malloc (size);
if (ret == 0)
{
fprintf (stderr, "GNU MP: Cannot allocate memory (size=%lu)\n", (long) size);
abort ();
}

{
mp_ptr p = ret;
p++;
p[-1] = (0xdeadbeef << 31) + 0xdeafdeed;
if (req_size % GMP_LIMB_BYTES == 0)
p[req_size / GMP_LIMB_BYTES] = ~((0xdeadbeef << 31) + 0xdeafdeed);
ret = p;
}
return ret;
}