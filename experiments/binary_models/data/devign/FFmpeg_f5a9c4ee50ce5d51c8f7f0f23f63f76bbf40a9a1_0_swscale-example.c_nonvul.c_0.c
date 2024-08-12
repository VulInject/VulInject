static int FUN1(VAR1 *VAR2[4], int VAR3[4], int VAR4, int VAR5, int VAR6, int VAR7, int VAR8, int VAR9, int VAR10, int VAR11, int VAR12)
{
    VAR1 *VAR13[4] = {0};
    VAR1 *VAR14[4] = {0};
    VAR1 *VAR15[4] = {0};
    int VAR16[4], VAR17[4];
    int VAR18;
    uint64_t VAR19, VAR20 = 0, VAR21 = 0, VAR22 = 0;
    struct VAR23 *VAR24 = NULL, *VAR25 = NULL, *VAR26 = NULL;
    int VAR27;
    VAR27 = 0;
    for (VAR18 = 0; VAR18 < 4; VAR18++)
    {
        if (VAR6 == VAR28 || VAR6 == VAR29)
            VAR16[VAR18] = VAR8 * 3;
        else if (VAR6 == VAR30 || VAR6 == VAR31)
            VAR16[VAR18] = VAR8 * 6;
        else
            VAR16[VAR18] = VAR8 * 4;
        if (VAR7 == VAR28 || VAR7 == VAR29)
            VAR17[VAR18] = VAR10 * 3;
        else if (VAR7 == VAR30 || VAR7 == VAR31)
            VAR17[VAR18] = VAR10 * 6;
        else
            VAR17[VAR18] = VAR10 * 4;
        VAR13[VAR18] = (VAR1 *)malloc(VAR16[VAR18] * VAR9);
        VAR14[VAR18] = (VAR1 *)malloc(VAR17[VAR18] * VAR11);
        VAR15[VAR18] = (VAR1 *)malloc(VAR3[VAR18] * VAR5);
        if (!VAR13[VAR18] || !VAR14[VAR18] || !VAR15[VAR18])
        {
            FUN2("");
            VAR27 = -1;
            goto VAR32;
        }
    }
    VAR24 = FUN3(VAR4, VAR5, VAR33, VAR8, VAR9, VAR6, VAR12, NULL, NULL, NULL);
    if (!VAR24)
    {
        fprintf(VAR34, "", FUN4(VAR33), FUN4(VAR6));
        VAR27 = -1;
        goto VAR32;
    }
    VAR25 = FUN3(VAR8, VAR9, VAR6, VAR10, VAR11, VAR7, VAR12, NULL, NULL, NULL);
    if (!VAR25)
    {
        fprintf(VAR34, "", FUN4(VAR6), FUN4(VAR7));
        VAR27 = -1;
        goto VAR32;
    }
    VAR26 = FUN3(VAR10, VAR11, VAR7, VAR4, VAR5, VAR33, VAR12, NULL, NULL, NULL);
    if (!VAR26)
    {
        fprintf(VAR34, "", FUN4(VAR7), FUN4(VAR33));
        VAR27 = -1;
        goto VAR32;
    }
    FUN5(VAR24, VAR2, VAR3, 0, VAR5, VAR13, VAR16);
    FUN5(VAR25, VAR13, VAR16, 0, VAR9, VAR14, VAR17);
    FUN5(VAR26, VAR14, VAR17, 0, VAR11, VAR15, VAR3);
    VAR19 = FUN6(VAR2[0], VAR15[0], VAR3[0], VAR3[0], VAR4, VAR5);
    if (!FUN7(VAR6) && !FUN7(VAR7))
    {
        VAR20 = FUN6(VAR2[1], VAR15[1], VAR3[1], VAR3[1], (VAR4 + 1) >> 1, (VAR5 + 1) >> 1);
        VAR21 = FUN6(VAR2[2], VAR15[2], VAR3[2], VAR3[2], (VAR4 + 1) >> 1, (VAR5 + 1) >> 1);
    }
    if (FUN8(VAR6) && FUN8(VAR7))
        VAR22 = FUN6(VAR2[3], VAR15[3], VAR3[3], VAR3[3], VAR4, VAR5);
    VAR19 /= VAR4 * VAR5;
    VAR20 /= VAR4 * VAR5 / 4;
    VAR21 /= VAR4 * VAR5 / 4;
    VAR22 /= VAR4 * VAR5;
    FUN9("" VAR35 "" VAR35 "" VAR35 "" VAR35 "", FUN4(VAR6), VAR8, VAR9, FUN4(VAR7), VAR10, VAR11, VAR12, VAR19, VAR20, VAR21, VAR22);
    FUN10(VAR36);
VAR32:
    FUN11(VAR24);
    FUN11(VAR25);
    FUN11(VAR26);
    for (VAR18 = 0; VAR18 < 4; VAR18++)
    {
        free(VAR13[VAR18]);
        free(VAR14[VAR18]);
        free(VAR15[VAR18]);
    }
    return VAR27;
}