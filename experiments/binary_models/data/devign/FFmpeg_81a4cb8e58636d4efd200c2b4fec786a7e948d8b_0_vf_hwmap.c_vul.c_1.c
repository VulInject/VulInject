static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = VAR4->VAR8;
    VAR1 *VAR9 = VAR4->VAR10[0];
    VAR11 *VAR12;
    VAR13 *VAR14;
    const VAR15 *VAR16;
    int VAR17;
    FUN2(VAR4, VAR18, "", FUN3(VAR9->VAR19), FUN3(VAR2->VAR19));
    FUN4(&VAR7->VAR20);
    VAR14 = VAR4->VAR21;
    if (VAR9->VAR22)
    {
        VAR12 = (VAR11 *)VAR9->VAR22->VAR23;
        if (VAR7->VAR24)
        {
            enum AVHWDeviceType VAR25;
            VAR25 = FUN5(VAR7->VAR24);
            if (VAR25 == VAR26)
            {
                FUN2(VAR4, VAR27, "");
                goto VAR28;
            }
            VAR17 = FUN6(&VAR14, VAR25, VAR12->VAR29, 0);
            if (VAR17 < 0)
            {
                FUN2(VAR4, VAR27, ""
                                            "",
                       VAR17);
                goto VAR28;
            }
        }
        VAR16 = FUN7(VAR2->VAR19);
        if (!VAR16)
        {
            VAR17 = FUN8(VAR30);
            goto VAR28;
        }
        if (VAR9->VAR19 == VAR12->VAR19 && (VAR16->VAR31 & VAR32))
        {
            if (!VAR14)
            {
                FUN2(VAR4, VAR27, ""
                                            "");
                VAR17 = FUN8(VAR30);
                goto VAR28;
            }
            VAR17 = FUN9(&VAR7->VAR20, VAR2->VAR19, VAR14, VAR9->VAR22, 0);
            if (VAR17 < 0)
            {
                FUN2(VAR4, VAR27, ""
                                            "",
                       VAR17);
                goto VAR28;
            }
        }
        else if ((VAR2->VAR19 == VAR12->VAR19 && VAR9->VAR19 == VAR12->VAR33) || VAR9->VAR19 == VAR12->VAR19)
        {
            VAR7->VAR20 = FUN10(VAR9->VAR22);
            if (!VAR7->VAR20)
            {
                VAR17 = FUN8(VAR34);
                goto VAR28;
            }
        }
        else
        {
            FUN2(VAR4, VAR27, ""
                                        "",
                   FUN3(VAR9->VAR19), FUN3(VAR12->VAR19), FUN3(VAR2->VAR19));
            VAR17 = FUN8(VAR30);
            goto VAR28;
        }
    }
    else if (VAR4->VAR21)
    {
        if (!VAR14)
        {
            FUN2(VAR4, VAR27, ""
                                        ""
                                        "");
            VAR17 = FUN8(VAR30);
            goto VAR28;
        }
        VAR7->VAR35 = 1;
        VAR7->VAR20 = FUN11(VAR14);
        if (!VAR7->VAR20)
        {
            VAR17 = FUN8(VAR34);
            goto VAR28;
        }
        VAR12 = (VAR11 *)VAR7->VAR20->VAR23;
        VAR12->VAR19 = VAR2->VAR19;
        VAR12->VAR33 = VAR9->VAR19;
        VAR12->VAR36 = VAR9->VAR37;
        VAR12->VAR38 = VAR9->VAR39;
        VAR17 = FUN12(VAR7->VAR20);
        if (VAR17 < 0)
        {
            FUN2(VAR4, VAR27, ""
                                        "",
                   VAR17);
            goto VAR28;
        }
    }
    else
    {
        FUN2(VAR4, VAR27, ""
                                    "");
        return FUN8(VAR30);
    }
    VAR2->VAR22 = FUN10(VAR7->VAR20);
    if (!VAR2->VAR22)
    {
        VAR17 = FUN8(VAR34);
        goto VAR28;
    }
    VAR2->VAR37 = VAR9->VAR37;
    VAR2->VAR39 = VAR9->VAR39;
    return 0;
VAR28:
    FUN4(&VAR7->VAR20);
    return VAR17;
}