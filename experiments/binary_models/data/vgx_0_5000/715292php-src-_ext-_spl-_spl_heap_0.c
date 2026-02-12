static spl_ptr_heap *spl_ptr_heap_clone(spl_ptr_heap *from) { 
int i;

spl_ptr_heap *heap = emalloc(sizeof(spl_ptr_heap));

heap->dtor     = from->dtor;
heap->ctor     = from->ctor;
heap->cmp      = from->cmp;
heap->max_size = from->max_size;
heap->count    = from->count;
heap->flags    = from->flags;
heap->elem_size = from->elem_size;

heap->elements = safe_emalloc(from->elem_size, from->max_size, 0);
memcpy(heap->elements, from->elements, from->elem_size * from->max_size);

for (i = 0; i < heap->count; ++i) {
heap->ctor(spl_heap_elem(heap, i));
}

return heap;
}