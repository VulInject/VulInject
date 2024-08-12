VAR1* FUN1(const void* VAR2, size_t VAR3,
ZSTD_dictLoadMethod_e VAR4,
ZSTD_dictContentType_e VAR5,
ZSTD_customMem VAR6)
{
if ((!VAR6.VAR7) ^ (!VAR6.VAR8)) return NULL;

{   VAR1* const VAR9 = (VAR1*) FUN2(sizeof(VAR1), VAR6);
if (VAR9 == NULL) return NULL;
VAR9->VAR10 = VAR6;
{   size_t const VAR11 = FUN3(VAR9,
VAR2, VAR3,
VAR4, VAR5);
if (FUN4(VAR11)) {
FUN5(VAR9);
return NULL;
}   }
return VAR9;
}
}