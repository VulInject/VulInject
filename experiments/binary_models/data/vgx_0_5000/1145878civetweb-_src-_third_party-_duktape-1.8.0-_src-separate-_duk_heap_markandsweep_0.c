DUK_LOCAL void duk__finalize_refcounts(duk_heap *heap) {
duk_hthread *thr;
duk_heaphdr *hdr;

thr = duk__get_temp_hthread(heap);
DUK_ASSERT(thr != NULL);

DUK_DD(DUK_DDPRINT("duk__finalize_refcounts: heap=%p, hthread=%p",
(void *) heap, (void *) thr));

hdr = heap->heap_allocated;
while (hdr) {
if (!DUK_HEAPHDR_HAS_REACHABLE(hdr)) {


DUK_DDD(DUK_DDDPRINT("unreachable object, refcount finalize before sweeping: %p", (void *) hdr));
duk_heaphdr_refcount_finalize(thr, hdr);
}

hdr = DUK_HEAPHDR_GET_NEXT(heap, hdr);
}
}