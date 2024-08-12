static int FUN1(VAR1 *VAR2, const char *VAR3, int VAR4)
{
    char VAR5[10], VAR6[VAR7], VAR8[VAR7];
    const char *VAR9 = NULL, *VAR10 = NULL;
    char *VAR11 = NULL;
    int VAR12;
    VAR13 *VAR14 = VAR2->VAR15;
    FUN2(VAR2, "");
    VAR14->VAR16 = VAR17;
    VAR14->VAR18 = -1;
    VAR14->VAR19 = 0;
    FUN3(VAR5, sizeof(VAR5), VAR8, sizeof(VAR8), VAR14->VAR20, sizeof(VAR14->VAR20), &VAR14->VAR21, VAR6, sizeof(VAR6), VAR3);
    VAR9 = FUN4(VAR8, "", &VAR11);
    VAR10 = FUN4(VAR11, "", &VAR11);
    if (!VAR9)
    {
        VAR9 = "";
        VAR10 = FUN5(VAR14->VAR22, "");
    }
    VAR14->VAR23 = FUN6(VAR9);
    VAR14->VAR24 = FUN6(VAR10);
    if (!VAR14->VAR23 || (VAR10 && !VAR14->VAR24))
    {
        VAR12 = FUN7(VAR25);
        goto VAR26;
    }
    if (VAR14->VAR21 < 0 || VAR14->VAR21 > 65535)
        VAR14->VAR21 = 21;
    if ((VAR12 = FUN8(VAR2)) < 0)
        goto VAR26;
    if ((VAR12 = FUN9(VAR14)) < 0)
        goto VAR26;
    FUN10(VAR14->VAR6, VAR6, sizeof(VAR14->VAR6));
    if (FUN11(VAR14, 0) < 0)
    {
        VAR2->VAR27 = 1;
    }
    else
    {
        if (FUN12(VAR14) < 0 && VAR4 & VAR28)
            VAR2->VAR27 = 1;
        if (VAR14->VAR29 != 1 && VAR4 & VAR30)
            VAR2->VAR27 = 1;
    }
    return 0;
VAR26:
    FUN13(VAR2, VAR31, "");
    FUN14(VAR2);
    return VAR12;
}