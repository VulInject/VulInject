static int FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    int VAR5 = 0, VAR6;
    VAR7 *VAR8;
    VAR3 *VAR9 = NULL;
    VAR10 *VAR11 = NULL;
    VAR12 *VAR13 = VAR2->VAR14;
    const VAR15 *VAR16;
    VAR17 *VAR18;
    if (VAR4)
        FUN2(&VAR9, *VAR4, 0);
    if ((VAR5 = FUN3(VAR2, &VAR9)) < 0)
        goto VAR19;
    if (VAR2->VAR20 && VAR2->VAR14->VAR21 && *(const VAR22 **)VAR2->VAR20 == VAR2->VAR14->VAR21 && (VAR5 = FUN4(VAR2->VAR20, &VAR9, VAR23)) < 0)
        goto VAR19;
    FF_DISABLE_DEPRECATION_WARNINGS if (VAR2->VAR24 && VAR2->VAR25[0]->VAR26->VAR27 & VAR28)
    {
        if (!(VAR2->VAR27 & VAR29))
        {
            FUN5(VAR2, VAR30, ""
                                      ""
                                      ""
                                      "");
            VAR2->VAR27 |= VAR29;
            FUN5(VAR2, VAR30, ""
                                      ""
                                      "");
        }
    }
    FF_ENABLE_DEPRECATION_WARNINGS if (VAR2->VAR24 == 0 && !(VAR13->VAR27 & VAR31))
    {
        FUN5(VAR2, VAR32, "");
        VAR5 = FUN6(VAR33);
        goto VAR19;
    }
    for (VAR6 = 0; VAR6 < VAR2->VAR24; VAR6++)
    {
        VAR8 = VAR2->VAR25[VAR6];
        VAR11 = VAR8->VAR34;
        FF_DISABLE_DEPRECATION_WARNINGS if (!VAR8->VAR35.VAR36 && VAR8->VAR26->VAR35.VAR36)
        {
            FUN5(VAR2, VAR30, ""
                                      ""
                                      "");
            FUN7(VAR8, 64, VAR8->VAR26->VAR35.VAR36, VAR8->VAR26->VAR35.VAR37);
        }
        FF_ENABLE_DEPRECATION_WARNINGS FF_DISABLE_DEPRECATION_WARNINGS if (VAR8->VAR34->VAR38 == VAR39 && VAR8->VAR26->VAR38 != VAR39)
        {
            FUN5(VAR2, VAR30, ""
                                      ""
                                      "");
            VAR5 = FUN8(VAR8->VAR34, VAR8->VAR26);
            if (VAR5 < 0)
                goto VAR19;
        }
        FF_ENABLE_DEPRECATION_WARNINGS if (!VAR8->VAR35.VAR36)
        {
            if (VAR11->VAR38 == VAR40 && VAR11->VAR41)
                FUN7(VAR8, 64, 1, VAR11->VAR41);
            else
                FUN7(VAR8, 33, 1, 90000);
        }
        switch (VAR11->VAR38)
        {
        case VAR40:
            if (VAR11->VAR41 <= 0)
            {
                FUN5(VAR2, VAR32, "");
                VAR5 = FUN6(VAR33);
                goto VAR19;
            }
            if (!VAR11->VAR42)
                VAR11->VAR42 = VAR11->VAR43 * FUN9(VAR11->VAR44) >> 3;
            break;
        case VAR45:
            if ((VAR11->VAR46 <= 0 || VAR11->VAR47 <= 0) && !(VAR13->VAR27 & VAR48))
            {
                FUN5(VAR2, VAR32, "");
                VAR5 = FUN6(VAR33);
                goto VAR19;
            }
            if (FUN10(VAR8->VAR49, VAR11->VAR49) && FUN11(FUN12(VAR8->VAR49) - FUN12(VAR11->VAR49)) > 0.004 * FUN12(VAR8->VAR49))
            {
                if (VAR8->VAR49.VAR36 != 0 && VAR8->VAR49.VAR37 != 0 && VAR11->VAR49.VAR36 != 0 && VAR11->VAR49.VAR37 != 0)
                {
                    FUN5(VAR2, VAR32, ""
                                            "",
                           VAR8->VAR49.VAR36, VAR8->VAR49.VAR37, VAR11->VAR49.VAR36, VAR11->VAR49.VAR37);
                    VAR5 = FUN6(VAR33);
                    goto VAR19;
                }
            }
            break;
        }
        VAR16 = FUN13(VAR11->VAR44);
        if (VAR16 && VAR16->VAR50 & VAR51)
            VAR8->VAR52->VAR53 = 1;
        if (VAR13->VAR54)
        {
            if (VAR11->VAR54 && VAR11->VAR44 == VAR55 && (FUN14(VAR13->VAR54, VAR11->VAR44) == 0 || FUN14(VAR13->VAR54, VAR11->VAR44) == FUN15('', '', '', '')) && !FUN16(VAR2, VAR8))
            {
                VAR11->VAR54 = 0;
            }
            if (VAR11->VAR54)
            {
                if (!FUN16(VAR2, VAR8))
                {
                    char VAR56[32], VAR57[32];
                    FUN17(VAR56, sizeof(VAR56), VAR11->VAR54);
                    FUN17(VAR57, sizeof(VAR57), FUN14(VAR2->VAR14->VAR54, VAR11->VAR44));
                    FUN5(VAR2, VAR32, "", VAR56, VAR11->VAR54, VAR11->VAR44, VAR57);
                    VAR5 = VAR58;
                    goto VAR19;
                }
            }
            else
                VAR11->VAR54 = FUN14(VAR13->VAR54, VAR11->VAR44);
        }
        if (VAR11->VAR38 != VAR59)
            VAR2->VAR52->VAR60++;
    }
    if (!VAR2->VAR20 && VAR13->VAR61 > 0)
    {
        VAR2->VAR20 = FUN18(VAR13->VAR61);
        if (!VAR2->VAR20)
        {
            VAR5 = FUN6(VAR62);
            goto VAR19;
        }
        if (VAR13->VAR21)
        {
            *(const VAR22 **)VAR2->VAR20 = VAR13->VAR21;
            FUN19(VAR2->VAR20);
            if ((VAR5 = FUN4(VAR2->VAR20, &VAR9, VAR23)) < 0)
                goto VAR19;
        }
    }
    if (!(VAR2->VAR27 & VAR29))
    {
        FUN20(&VAR2->VAR63, "", VAR64, 0);
    }
    else
    {
        FUN20(&VAR2->VAR63, "", NULL, 0);
    }
    for (VAR18 = NULL; VAR18 = FUN21(VAR2->VAR63, "", VAR18, VAR65);)
    {
        FUN20(&VAR2->VAR63, VAR18->VAR66, NULL, 0);
    }
    if (VAR4)
    {
        FUN22(VAR4);
        *VAR4 = VAR9;
    }
    if (VAR2->VAR14->VAR67)
    {
        if ((VAR5 = VAR2->VAR14->FUN23(VAR2)) < 0)
        {
            if (VAR2->VAR14->VAR68)
                VAR2->VAR14->FUN24(VAR2);
            return VAR5;
        }
        return VAR5 == 0;
    }
    return 0;
VAR19:
    FUN22(&VAR9);
    return VAR5;
}