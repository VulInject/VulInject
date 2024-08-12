static int FUN1(VAR1 *VAR2, void *VAR3)
{
    VAR4 *VAR5 = VAR3;
    VAR6 *VAR7 = VAR5->VAR7;
    void *VAR8 = VAR5->VAR8;
    const char *VAR9 = VAR5->VAR10;
    int VAR11, VAR12;
    char *VAR13;
    VAR14 *VAR15, *VAR16;
    uint64_t VAR17, VAR18;
    VAR19 *VAR20 = FUN2(VAR2);
    VAR21 *VAR22 = &VAR20->VAR22;
    VAR17 = FUN3(VAR7, VAR2, 0);
    VAR13 = FUN4("" VAR23, VAR9, VAR22->VAR24, VAR17);
    FUN5(VAR8, VAR13);
    VAR11 = strlen(VAR20->VAR25) + 1;
    FUN6(VAR8, VAR13, "", VAR20->VAR25, VAR11);
    FUN6(VAR8, VAR13, "", "", 0);
    VAR16 = FUN7(VAR14, VAR22->VAR26 * 2);
    for (VAR12 = 0; VAR12 < VAR22->VAR26; VAR12++)
    {
        VAR17 = FUN3(VAR7, VAR2, VAR12);
        VAR16[2 * VAR12] = FUN8(VAR17);
        VAR16[2 * VAR12 + 1] = FUN8(FUN9(&VAR20->VAR27[VAR12]->VAR28));
    }
    FUN6(VAR8, VAR13, "", VAR16, VAR22->VAR26 * 2 * sizeof(VAR14));
    VAR15 = FUN7(VAR14, VAR22->VAR29 * 3);
    for (VAR12 = 0; VAR12 < VAR22->VAR29; VAR12++)
    {
        VAR18 = FUN10(VAR7, VAR2, VAR12) + VAR5->VAR30;
        VAR15[3 * VAR12] = FUN8(VAR31);
        VAR15[3 * VAR12 + 1] = FUN8(VAR18);
        VAR15[3 * VAR12 + 2] = FUN8(VAR32);
    }
    FUN6(VAR8, VAR13, "", VAR15, VAR22->VAR29 * 3 * sizeof(VAR14));
    FUN11(VAR15);
    FUN11(VAR16);
    FUN11(VAR13);
    return 0;
}