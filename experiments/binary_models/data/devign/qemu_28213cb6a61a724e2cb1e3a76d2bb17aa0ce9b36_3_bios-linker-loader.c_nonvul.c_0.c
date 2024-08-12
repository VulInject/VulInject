void FUN1(VAR1 *VAR2, const char *VAR3, unsigned VAR4, unsigned VAR5, unsigned VAR6)
{
    BiosLinkerLoaderEntry VAR7;
    const VAR8 *VAR9 = FUN2(VAR2, VAR3);
    assert(VAR9);
    assert(VAR4 < VAR9->VAR10->VAR11);
    assert(VAR4 + VAR5 <= VAR9->VAR10->VAR11);
    assert(VAR6 >= VAR4);
    assert(VAR6 + 1 <= VAR4 + VAR5);
    *(VAR9->VAR10->VAR12 + VAR6) = 0;
    memset(&VAR7, 0, sizeof VAR7);
    strncpy(VAR7.VAR13.VAR9, VAR3, sizeof VAR7.VAR13.VAR9 - 1);
    VAR7.VAR14 = FUN3(VAR15);
    VAR7.VAR13.VAR16 = FUN3(VAR6);
    VAR7.VAR13.VAR17 = FUN3(VAR4);
    VAR7.VAR13.VAR18 = FUN3(VAR5);
    FUN4(VAR2->VAR19, &VAR7, sizeof VAR7);
}