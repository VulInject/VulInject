void *mallocz_int(size_t size, const char *file, const char *function, size_t line) {
struct malloc_trace *p = malloc_trace_find_or_create(file, function, line);

size_t_atomic_count(add, p->malloc_calls, 1);
size_t_atomic_count(add, p->allocations, 1);
size_t_atomic_bytes(add, p->bytes, size);

struct malloc_header *t = (struct malloc_header *)libc_malloc(malloc_header_size + size);
if (unlikely(!t)) fatal("mallocz() cannot allocate %zu bytes of memory (%zu with header).", size, malloc_header_size + size);
t->signature.magic = 0x0BADCAFE;
t->signature.trace = p;
t->signature.size = size;

for(ssize_t i = 0; i < (ssize_t)sizeof(t->padding) ;i++) 
t->padding[i] = 0xFF;

return (void *)&t->data;
}