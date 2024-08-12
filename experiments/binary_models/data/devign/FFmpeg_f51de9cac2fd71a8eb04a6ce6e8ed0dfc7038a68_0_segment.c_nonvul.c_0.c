static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR1 *VAR6 = NULL;
    VAR7 *VAR8 = NULL;
    int VAR9;
    VAR4->VAR10 = 0;
    if (!VAR4->VAR11)
        VAR4->VAR12 = 0;
    if (!!VAR4->VAR13 + !!VAR4->VAR14 + !!VAR4->VAR15 > 1)
    {
        FUN2(VAR2, VAR16, ""
                                "");
        return FUN3(VAR17);
    }
    if (VAR4->VAR14)
    {
        if ((VAR9 = FUN4(VAR2, &VAR4->VAR18, &VAR4->VAR19, VAR4->VAR14)) < 0)
            return VAR9;
    }
    else if (VAR4->VAR15)
    {
        if ((VAR9 = FUN5(VAR2, &VAR4->VAR20, &VAR4->VAR21, VAR4->VAR15)) < 0)
            return VAR9;
    }
    else
    {
        if (!VAR4->VAR13)
            VAR4->VAR13 = FUN6("");
        if ((VAR9 = FUN7(&VAR4->VAR22, VAR4->VAR13, 1)) < 0)
        {
            FUN2(VAR2, VAR16, "", VAR4->VAR13);
            return VAR9;
        }
    }
    if (VAR4->VAR23)
    {
        VAR9 = FUN8(&VAR4->VAR24, VAR4->VAR23, "", "", 0);
        if (VAR9 < 0)
        {
            FUN2(VAR2, VAR16, "", VAR4->VAR23);
            goto VAR25;
        }
    }
    if (VAR4->VAR26)
    {
        if (VAR4->VAR27 == VAR28)
        {
            if (FUN9(VAR4->VAR26, ""))
                VAR4->VAR27 = VAR29;
            else if (FUN9(VAR4->VAR26, ""))
                VAR4->VAR27 = VAR30;
            else if (FUN9(VAR4->VAR26, ""))
                VAR4->VAR27 = VAR31;
            else if (FUN9(VAR4->VAR26, ""))
                VAR4->VAR27 = VAR32;
            else
                VAR4->VAR27 = VAR33;
        }
        if ((VAR9 = FUN10(VAR2)) < 0)
            goto VAR25;
    }
    if (VAR4->VAR27 == VAR30)
        FUN2(VAR2, VAR34, "");
    if ((VAR9 = FUN11(VAR2)) < 0)
        goto VAR25;
    FUN2(VAR2, VAR35, "", VAR4->VAR36, FUN12(VAR2->VAR37[VAR4->VAR36]->VAR38->VAR39));
    VAR4->VAR40 = FUN13(VAR4->VAR41, VAR2->VAR42, NULL);
    if (!VAR4->VAR40)
    {
        VAR9 = VAR43;
        goto VAR25;
    }
    if (VAR4->VAR40->VAR44 & VAR45)
    {
        FUN2(VAR2, VAR16, "", VAR4->VAR40->VAR46);
        VAR9 = FUN3(VAR17);
        goto VAR25;
    }
    if ((VAR9 = FUN14(VAR2)) < 0)
        goto VAR25;
    VAR6 = VAR4->VAR47;
    if ((VAR9 = FUN15(VAR2)) < 0)
        goto VAR25;
    if (VAR4->VAR11)
    {
        if ((VAR9 = FUN16(&VAR6->VAR48, VAR6->VAR42, VAR49, &VAR2->VAR50, NULL)) < 0)
        {
            FUN2(VAR2, VAR16, "", VAR6->VAR42);
            goto VAR25;
        }
    }
    else
    {
        if ((VAR9 = FUN17(&VAR6->VAR48)) < 0)
            goto VAR25;
    }
    FUN18(&VAR8, VAR4->VAR24, 0);
    VAR9 = FUN19(VAR6, &VAR8);
    if (FUN20(VAR8))
    {
        FUN2(VAR2, VAR16, "", VAR4->VAR23);
        VAR9 = FUN3(VAR17);
        goto VAR25;
    }
    if (VAR9 < 0)
    {
        FUN21(VAR6->VAR48);
        goto VAR25;
    }
    VAR4->VAR51 = 0;
    if (VAR6->VAR52 > 0 && VAR2->VAR52 < 0)
        VAR2->VAR52 = 1;
    if (!VAR4->VAR11)
    {
        FUN22(VAR6->VAR48);
        if ((VAR9 = FUN16(&VAR6->VAR48, VAR6->VAR42, VAR49, &VAR2->VAR50, NULL)) < 0)
            goto VAR25;
    }
VAR25:
    FUN23(&VAR8);
    if (VAR9)
    {
        if (VAR4->VAR26)
            FUN21(VAR4->VAR53);
        if (VAR4->VAR47)
            FUN24(VAR4->VAR47);
    }
    return VAR9;
}