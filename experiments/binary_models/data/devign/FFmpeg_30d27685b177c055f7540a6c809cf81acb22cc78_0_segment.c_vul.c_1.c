static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR1 *VAR6 = NULL;
    int VAR7, VAR8;
    VAR4->VAR9 = 0;
    if (!VAR4->VAR10)
        VAR4->VAR11 = 0;
    if (VAR4->VAR12 && VAR4->VAR13)
    {
        FUN2(VAR2, VAR14, "");
        return FUN3(VAR15);
    }
    if ((VAR4->VAR16 & VAR17) && VAR4->VAR13)
    {
        FUN2(VAR2, VAR14, ""
                                "");
        return FUN3(VAR15);
    }
    if (VAR4->VAR13)
    {
        if ((VAR7 = FUN4(VAR2, &VAR4->VAR18, &VAR4->VAR19, VAR4->VAR13)) < 0)
            return VAR7;
    }
    else
    {
        if (!VAR4->VAR12)
            VAR4->VAR12 = FUN5("");
        if ((VAR7 = FUN6(&VAR4->VAR20, VAR4->VAR12, 1)) < 0)
        {
            FUN2(VAR2, VAR14, "", VAR4->VAR12);
            return VAR7;
        }
    }
    if (VAR4->VAR21)
    {
        if ((VAR7 = FUN6(&VAR4->VAR22, VAR4->VAR21, 1)) < 0)
        {
            FUN2(VAR2, VAR14, "", VAR4->VAR21);
            return VAR7;
        }
    }
    if (VAR4->VAR23)
    {
        if (VAR4->VAR24 == VAR25)
        {
            if (FUN7(VAR4->VAR23, ""))
                VAR4->VAR24 = VAR26;
            else if (FUN7(VAR4->VAR23, ""))
                VAR4->VAR24 = VAR27;
            else if (FUN7(VAR4->VAR23, ""))
                VAR4->VAR24 = VAR28;
            else
                VAR4->VAR24 = VAR29;
        }
        if ((VAR7 = FUN8(VAR2)) < 0)
            goto VAR30;
    }
    if (VAR4->VAR24 == VAR27)
        FUN2(VAR2, VAR31, "");
    for (VAR8 = 0; VAR8 < VAR2->VAR32; VAR8++)
        VAR4->VAR33 += (VAR2->VAR34[VAR8]->VAR35->VAR36 == VAR37);
    if (VAR4->VAR33 > 1)
        FUN2(VAR2, VAR31, ""
                                  "");
    VAR4->VAR38 = FUN9(VAR4->VAR39, VAR2->VAR40, NULL);
    if (!VAR4->VAR38)
    {
        VAR7 = VAR41;
        goto VAR30;
    }
    if (VAR4->VAR38->VAR42 & VAR43)
    {
        FUN2(VAR2, VAR14, "", VAR6->VAR38->VAR44);
        VAR7 = FUN3(VAR15);
        goto VAR30;
    }
    if ((VAR7 = FUN10(VAR2)) < 0)
        goto VAR30;
    VAR6 = VAR4->VAR45;
    if (FUN11(VAR6->VAR40, sizeof(VAR6->VAR40), VAR2->VAR40, VAR4->VAR46++) < 0)
    {
        VAR7 = FUN3(VAR15);
        goto VAR30;
    }
    VAR4->VAR9++;
    if (VAR4->VAR10)
    {
        if ((VAR7 = FUN12(&VAR6->VAR47, VAR6->VAR40, VAR48, &VAR2->VAR49, NULL)) < 0)
            goto VAR30;
    }
    else
    {
        if ((VAR7 = FUN13(&VAR6->VAR47)) < 0)
            goto VAR30;
    }
    if ((VAR7 = FUN14(VAR6, NULL)) < 0)
    {
        FUN15(VAR6->VAR47);
        goto VAR30;
    }
    if (VAR6->VAR50 > 0 && VAR2->VAR50 < 0)
        VAR2->VAR50 = 1;
    if (!VAR4->VAR10)
    {
        FUN16(VAR6->VAR47);
        if ((VAR7 = FUN12(&VAR6->VAR47, VAR6->VAR40, VAR48, &VAR2->VAR49, NULL)) < 0)
            goto VAR30;
    }
VAR30:
    if (VAR7)
    {
        if (VAR4->VAR23)
            FUN17(VAR2);
        if (VAR4->VAR45)
            FUN18(VAR4->VAR45);
    }
    return VAR7;
}