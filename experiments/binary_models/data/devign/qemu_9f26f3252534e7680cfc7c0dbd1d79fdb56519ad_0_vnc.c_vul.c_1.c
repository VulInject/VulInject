static int FUN1(VAR1 *VAR2, bool VAR3, VAR4 ***VAR5, VAR6 *VAR7, VAR4 ***VAR8, VAR6 *VAR9, VAR10 **VAR11)
{
    VAR4 *VAR12 = NULL;
    VAR4 *VAR13 = NULL;
    QemuOptsIter VAR14;
    const char *VAR15;
    int VAR16 = FUN2(VAR2, "", 0);
    bool VAR17 = FUN3(VAR2, "");
    bool VAR18 = FUN3(VAR2, "");
    bool VAR19 = FUN4(VAR2, "", false);
    bool VAR20 = FUN4(VAR2, "", false);
    size_t VAR21;
    int VAR22 = -1;
    int VAR23 = -1;
    *VAR5 = NULL;
    *VAR7 = 0;
    *VAR8 = NULL;
    *VAR9 = 0;
    VAR15 = FUN3(VAR2, "");
    if (VAR15 == NULL || FUN5(VAR15, ""))
    {
        VAR23 = 0;
        goto VAR24;
    }
    if (FUN3(VAR2, "") && !FUN6(VAR25))
    {
        FUN7(VAR11, "");
        goto VAR24;
    }
    FUN8(&VAR14, VAR2, "");
    while ((VAR15 = FUN9(&VAR14)) != NULL)
    {
        int VAR26;
        VAR26 = FUN10(VAR15, false, VAR3, 0, VAR16, VAR17, VAR18, VAR19, VAR20, &VAR12, VAR11);
        if (VAR26 < 0)
        {
            goto VAR24;
        }
        if (VAR22 == -1)
        {
            VAR22 = VAR26;
        }
        *VAR5 = FUN11(VAR4 *, *VAR5, *VAR7 + 1);
        (*VAR5)[(*VAR7)++] = VAR12;
    }
    if (*VAR7 > 1)
    {
        VAR22 = -1;
    }
    FUN8(&VAR14, VAR2, "");
    while ((VAR15 = FUN9(&VAR14)) != NULL)
    {
        if (FUN10(VAR15, true, VAR3, VAR22, VAR16, VAR17, VAR18, VAR19, VAR20, &VAR13, VAR11) < 0)
        {
            goto VAR24;
        }
        if (*VAR7 == 1 && (*VAR5)[0]->VAR27 == VAR28 && VAR13->VAR27 == VAR28 && FUN5(VAR13->VAR29.VAR30.VAR31, "") && !FUN5((*VAR5)[0]->VAR29.VAR30.VAR31, ""))
        {
            FUN12(VAR13->VAR29.VAR30.VAR31);
            VAR13->VAR29.VAR30.VAR31 = FUN13((*VAR5)[0]->VAR29.VAR30.VAR31);
        }
        *VAR8 = FUN11(VAR4 *, *VAR8, *VAR9 + 1);
        (*VAR8)[(*VAR9)++] = VAR13;
    }
    VAR23 = 0;
VAR24:
    if (VAR23 < 0)
    {
        for (VAR21 = 0; VAR21 < *VAR7; VAR21++)
        {
            FUN14((*VAR5)[VAR21]);
        }
        FUN12(*VAR5);
        for (VAR21 = 0; VAR21 < *VAR9; VAR21++)
        {
            FUN14((*VAR8)[VAR21]);
        }
        FUN12(*VAR8);
        *VAR5 = *VAR8 = NULL;
        *VAR7 = *VAR9 = 0;
    }
    return VAR23;
}