void *duk_alloc_torture(void *udata, duk_size_t size) {
unsigned char *p;

(void) udata;  

if (size == 0) {
return NULL;
}

p = (unsigned char *) malloc(size + sizeof(alloc_hdr) + 2 * RED_ZONE_SIZE);
if (!p) {
return NULL;
}

((alloc_hdr *) (void *) p)->u.sz = size;
p += sizeof(alloc_hdr);
memset((void *) p, RED_ZONE_BYTE, RED_ZONE_SIZE);
p += RED_ZONE_SIZE;
memset((void *) p, INIT_BYTE, size);
p += size;
memset((void *) p, RED_ZONE_BYTE, RED_ZONE_SIZE);
p -= size;
return (void *) p;
}