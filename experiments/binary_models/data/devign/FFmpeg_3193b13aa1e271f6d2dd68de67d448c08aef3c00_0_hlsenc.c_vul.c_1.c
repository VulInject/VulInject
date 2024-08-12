static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    int VAR6, VAR7;
    char *VAR8;
    const char *VAR9 = "";
    int VAR10 = strlen(VAR2->VAR11) + strlen(VAR9);
    VAR4->VAR12 = 0;
    VAR4->VAR13 = VAR4->VAR14 * 1000000;
    VAR4->VAR15 = VAR16;
    for (VAR7 = 0; VAR7 < VAR2->VAR17; VAR7++)
        VAR4->VAR18 += VAR2->VAR19[VAR7]->VAR20->VAR21 == VAR22;
    if (VAR4->VAR18 > 1)
        FUN2(VAR2, VAR23, ""
                                  "");
    VAR4->VAR24 = FUN3("", NULL, NULL);
    if (!VAR4->VAR24)
    {
        VAR6 = VAR25;
        goto VAR26;
    }
    VAR4->VAR27 = FUN4(VAR10);
    if (!VAR4->VAR27)
    {
        VAR6 = FUN5(VAR28);
        goto VAR26;
    }
    strcpy(VAR4->VAR27, VAR2->VAR11);
    VAR8 = strrchr(VAR4->VAR27, '');
    if (VAR8)
        *VAR8 = '';
    FUN6(VAR4->VAR27, "", VAR10);
    if ((VAR6 = FUN7(VAR2)) < 0)
        goto VAR26;
    if ((VAR6 = FUN8(VAR2)) < 0)
        goto VAR26;
    if ((VAR6 = FUN9(VAR4->VAR29, NULL)) < 0)
        return VAR6;
VAR26:
    if (VAR6)
    {
        FUN10(VAR4->VAR27);
        if (VAR4->VAR29)
            FUN11(VAR4->VAR29);
    }
    return VAR6;
}