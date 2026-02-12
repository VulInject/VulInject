static void
di_allocmem(struct di_state *st, size_t size)
{
struct di_mem	*mem = kmem_zalloc(sizeof (struct di_mem), KM_SLEEP);


size_t tmp = 1;
while (tmp < size) {
tmp <<= 1;
}
size = (tmp > st->mem_size) ? tmp : st->mem_size;

mem->buf = ddi_umem_alloc(size, DDI_UMEM_SLEEP, &mem->cook);
mem->buf_size = size;

dcmn_err2((CE_CONT, "di_allocmem: mem_size=%x\n", st->mem_size));

if (st->mem_size == 0) {	
st->memlist = mem;
} else {

struct di_mem *dcp = st->memlist;
while (dcp->next != NULL) {
dcp = dcp->next;
}

dcp->next = mem;
}

st->mem_size += size;
}