void FUN1(VAR1 *VAR2, const char *VAR3, uint32_t VAR4, uint8_t VAR5, const char *VAR6, uint32_t VAR7)
{
    uint64_t VAR8;
    BiosLinkerLoaderEntry VAR9;
    const VAR10 *VAR11 = FUN2(VAR2, VAR3);
    const VAR10 *VAR12 = FUN2(VAR2, VAR6);
    assert(VAR4 < VAR11->VAR13->VAR14);
    assert(VAR4 + VAR5 <= VAR11->VAR13->VAR14);
    assert(VAR7 < VAR12->VAR13->VAR14);
    memset(&VAR9, 0, sizeof VAR9);
    strncpy(VAR9.VAR15.VAR3, VAR3, sizeof VAR9.VAR15.VAR3 - 1);
    strncpy(VAR9.VAR15.VAR6, VAR6, sizeof VAR9.VAR15.VAR6 - 1);
    VAR9.VAR16 = FUN3(VAR17);
    VAR9.VAR15.VAR18 = FUN3(VAR4);
    VAR9.VAR15.VAR19 = VAR5;
    assert(VAR5 == 1 || VAR5 == 2 || VAR5 == 4 || VAR5 == 8);
    VAR8 = FUN4(VAR7);
    memcpy(VAR11->VAR13->VAR20 + VAR4, &VAR8, VAR5);
    FUN5(VAR2->VAR21, &VAR9, sizeof VAR9);
}