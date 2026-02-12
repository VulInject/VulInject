void *ajsheap_dec16(void *ud, duk_uint16_t x) {
void *ret;
char *base = (char *) ajsheap_ram - 4;

if (x >= DUK__ROMPTR_FIRST) {

ret = (void *) ajduk__lose_const(duk_rom_compressed_pointers[x - DUK__ROMPTR_FIRST]);
fprintf(stderr, "ajsheap_dec16: rom pointer: 0x%04lx -> %p\n", (long) x, ret);
fflush(stderr);
return ret;
}


(void) ud;

if (ud != (void *) 0xdeadbeef) {
fprintf(stderr, "invalid udata for ajsheap_dec16: %p\n", ud);
fflush(stderr);
}

if (x == 0) {
ret = NULL;
} else {
ret = (void *) (base + (((duk_uint32_t) x) << 2));
}
printf("ajsheap_dec16: %u -> %p\n", (unsigned int) x, ret);
return ret;
}