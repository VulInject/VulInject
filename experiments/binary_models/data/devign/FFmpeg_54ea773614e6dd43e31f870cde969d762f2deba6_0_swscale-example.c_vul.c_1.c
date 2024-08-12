static int FUN1(VAR1 *VAR2[3], int VAR3[3], int VAR4, int VAR5, int VAR6, int VAR7, int VAR8, int VAR9, int VAR10, int VAR11, int VAR12)
{
    VAR1 *VAR13[3];
    VAR1 *VAR14[3];
    VAR1 *VAR15[3];
    int VAR16[3], VAR17[3];
    int VAR18;
    uint64_t VAR19, VAR20, VAR21;
    struct VAR22 *VAR23, *VAR24, *VAR25;
    int VAR26;
    VAR26 = 0;
    for (VAR18 = 0; VAR18 < 3; VAR18++)
    {
        if (VAR6 == VAR27 || VAR6 == VAR28)
            VAR16[VAR18] = VAR8 * 3;
        else
            VAR16[VAR18] = VAR8 * 4;
        if (VAR7 == VAR27 || VAR7 == VAR28)
            VAR17[VAR18] = VAR10 * 3;
        else
            VAR17[VAR18] = VAR10 * 4;
        VAR13[VAR18] = (VAR1 *)malloc(VAR16[VAR18] * VAR9);
        VAR14[VAR18] = (VAR1 *)malloc(VAR17[VAR18] * VAR11);
        VAR15[VAR18] = (VAR1 *)malloc(VAR3[VAR18] * VAR5);
        if (!VAR13[VAR18] || !VAR14[VAR18] || !VAR15[VAR18])
        {
            FUN2("");
            VAR26 = -1;
            goto VAR29;
        }
    }
    VAR24 = VAR25 = NULL;
    VAR23 = FUN3(VAR4, VAR5, VAR30, VAR8, VAR9, VAR6, VAR12, NULL, NULL, NULL);
    if (!VAR23)
    {
        fprintf(VAR31, "", FUN4(VAR30), FUN4(VAR6));
        VAR26 = -1;
        goto VAR29;
    }
    VAR24 = FUN3(VAR8, VAR9, VAR6, VAR10, VAR11, VAR7, VAR12, NULL, NULL, NULL);
    if (!VAR24)
    {
        fprintf(VAR31, "", FUN4(VAR6), FUN4(VAR7));
        VAR26 = -1;
        goto VAR29;
    }
    VAR25 = FUN3(VAR10, VAR11, VAR7, VAR4, VAR5, VAR30, VAR12, NULL, NULL, NULL);
    if (!VAR25)
    {
        fprintf(VAR31, "", FUN4(VAR7), FUN4(VAR30));
        VAR26 = -1;
        goto VAR29;
    }
    FUN5(VAR23, VAR2, VAR3, 0, VAR5, VAR13, VAR16);
    FUN5(VAR24, VAR13, VAR16, 0, VAR9, VAR14, VAR17);
    FUN5(VAR25, VAR14, VAR17, 0, VAR11, VAR15, VAR3);
    VAR19 = FUN6(VAR2[0], VAR15[0], VAR3[0], VAR3[0], VAR4, VAR5);
    VAR20 = FUN6(VAR2[1], VAR15[1], VAR3[1], VAR3[1], (VAR4 + 1) >> 1, (VAR5 + 1) >> 1);
    VAR21 = FUN6(VAR2[2], VAR15[2], VAR3[2], VAR3[2], (VAR4 + 1) >> 1, (VAR5 + 1) >> 1);
    if (VAR6 == VAR32 || VAR7 == VAR32)
        VAR20 = VAR21 = 0;
    VAR19 /= VAR4 * VAR5;
    VAR20 /= VAR4 * VAR5 / 4;
    VAR21 /= VAR4 * VAR5 / 4;
    FUN7("", FUN4(VAR6), VAR8, VAR9, FUN4(VAR7), VAR10, VAR11, VAR12, VAR19, VAR20, VAR21);
    FUN8(VAR33);
VAR29:
    FUN9(VAR23);
    FUN9(VAR24);
    FUN9(VAR25);
    for (VAR18 = 0; VAR18 < 3; VAR18++)
    {
        free(VAR13[VAR18]);
        free(VAR14[VAR18]);
        free(VAR15[VAR18]);
    }
    return VAR26;
}