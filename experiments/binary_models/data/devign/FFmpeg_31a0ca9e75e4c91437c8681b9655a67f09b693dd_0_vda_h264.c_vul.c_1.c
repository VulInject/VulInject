static void FUN1(void *VAR1, CFDictionaryRef VAR2, OSStatus VAR3, uint32_t VAR4, CVImageBufferRef VAR5)
{
    struct VAR6 *VAR7 = VAR1;
    if (!VAR5)
        return;
    if (VAR7->VAR8 != FUN2(VAR5))
        return;
    VAR7->VAR9 = FUN3(VAR5);