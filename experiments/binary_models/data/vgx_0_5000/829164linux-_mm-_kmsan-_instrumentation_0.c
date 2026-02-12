void __msan_instrument_asm_store(void *addr, uintptr_t size);
void __msan_instrument_asm_store(void *addr, uintptr_t size)
{
unsigned long ua_flags;

if (!kmsan_enabled)
return;

ua_flags = user_access_save();

if (size > 512) {
WARN_ONCE(1, "assembly store size too big: %ld\n", size);
size = 8;
}
if (is_bad_asm_addr(addr, size,  true)) {
user_access_restore(ua_flags);
return;
}

kmsan_internal_unpoison_memory(addr, size,  false);
user_access_restore(ua_flags);
}