int FUN1(VAR1 **VAR2, const char *VAR3, VAR4 *VAR5, VAR6 **VAR7)
{
    VAR1 *VAR8 = *VAR2;
    int VAR9 = 0;
    VAR6 *VAR10 = NULL;
    VAR11 *VAR12 = NULL;
    if (!VAR8 && !(VAR8 = FUN2()))
        return FUN3(VAR13);
    if (!VAR8->VAR14)
    {
        FUN4(NULL, VAR15, "");
        return FUN3(VAR16);
    }
    if (VAR5)
        VAR8->VAR17 = VAR5;
    if (VAR7)
        FUN5(&VAR10, *VAR7, 0);
    if ((VAR9 = FUN6(VAR8, &VAR10)) < 0)
        goto VAR18;
    if ((VAR9 = FUN7(VAR8, VAR3, &VAR10)) < 0)
        goto VAR18;
    VAR8->VAR19 = VAR9;
    FUN8(VAR8->VAR20, VAR8->VAR21);
    if (VAR8->VAR17->VAR22 & VAR23)
    {
        if (!FUN9(VAR3))
        {
            VAR9 = FUN3(VAR16);
            goto VAR18;
        }
    }
    VAR8->VAR24 = VAR8->VAR25 = VAR26;
    FUN10(VAR8->VAR3, VAR3 ? VAR3 : "", sizeof(VAR8->VAR3));
    if (VAR8->VAR17->VAR27 > 0)
    {
        if (!(VAR8->VAR28 = FUN11(VAR8->VAR17->VAR27)))
        {
            VAR9 = FUN3(VAR13);
            goto VAR18;
        }
        if (VAR8->VAR17->VAR29)
        {
            *(const VAR30 **)VAR8->VAR28 = VAR8->VAR17->VAR29;
            FUN12(VAR8->VAR28);
            if ((VAR9 = FUN6(VAR8->VAR28, &VAR10)) < 0)
                goto VAR18;
        }
    }
    if (VAR8->VAR20)
        FUN13(VAR8, VAR31, &VAR12, 0);
    if (!(VAR8->VAR22 & VAR32) && VAR8->VAR17->VAR33)
        if ((VAR9 = VAR8->VAR17->FUN14(VAR8)) < 0)
            goto VAR18;
    if (VAR12)
    {
        if (!strcmp(VAR8->VAR17->VAR34, "") || !strcmp(VAR8->VAR17->VAR34, "") || !strcmp(VAR8->VAR17->VAR34, ""))
        {
            if ((VAR9 = FUN15(VAR8, &VAR12)) < 0)
                goto VAR18;
        }
        else
            FUN4(VAR8, VAR35, "");
    }
    FUN16(&VAR12);
    if ((VAR9 = FUN17(VAR8)) < 0)
        goto VAR18;
    if (!(VAR8->VAR22 & VAR32) && VAR8->VAR20 && !VAR8->VAR36)
        VAR8->VAR36 = FUN18(VAR8->VAR20);
    VAR8->VAR37 = VAR38;
    if (VAR7)
    {
        FUN19(VAR7);
        *VAR7 = VAR10;
    }
    *VAR2 = VAR8;
    return 0;
VAR18:
    FUN16(&VAR12);
    FUN19(&VAR10);
    if (VAR8->VAR20 && !(VAR8->VAR22 & VAR39))
        FUN20(VAR8->VAR20);
    FUN21(VAR8);
    *VAR2 = NULL;
    return VAR9;
}