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
        FF_ENABLE_DEPRECATION_WARNINGS VAR5 = FUN9(VAR8->VAR40->VAR41, VAR8->VAR34);
        if (VAR5 < 0)
            goto VAR19;
        if (!VAR8->VAR35.VAR36)
        {
            if (VAR11->VAR38 == VAR42 && VAR11->VAR43)
                FUN7(VAR8, 64, 1, VAR11->VAR43);
            else
                FUN7(VAR8, 33, 1, 90000);
        }
        switch (VAR11->VAR38)
        {
        case VAR42:
            if (VAR11->VAR43 <= 0)
            {
                FUN5(VAR2, VAR32, "");
                VAR5 = FUN6(VAR33);
                goto VAR19;
            }
            if (!VAR11->VAR44)
                VAR11->VAR44 = VAR11->VAR45 * FUN10(VAR11->VAR46) >> 3;
            break;
        case VAR47:
            if ((VAR11->VAR48 <= 0 || VAR11->VAR49 <= 0) && !(VAR13->VAR27 & VAR50))
            {
                FUN5(VAR2, VAR32, "");
                VAR5 = FUN6(VAR33);
                goto VAR19;
            }
            if (FUN11(VAR8->VAR51, VAR11->VAR51) && FUN12(FUN13(VAR8->VAR51) - FUN13(VAR11->VAR51)) > 0.004 * FUN13(VAR8->VAR51))
            {
                if (VAR8->VAR51.VAR36 != 0 && VAR8->VAR51.VAR37 != 0 && VAR11->VAR51.VAR36 != 0 && VAR11->VAR51.VAR37 != 0)
                {
                    FUN5(VAR2, VAR32, ""
                                            "",
                           VAR8->VAR51.VAR36, VAR8->VAR51.VAR37, VAR11->VAR51.VAR36, VAR11->VAR51.VAR37);
                    VAR5 = FUN6(VAR33);
                    goto VAR19;
                }
            }
            break;
        }
        VAR16 = FUN14(VAR11->VAR46);
        if (VAR16 && VAR16->VAR52 & VAR53)
            VAR8->VAR40->VAR54 = 1;
        if (VAR13->VAR55)
        {
            if (VAR11->VAR55 && VAR11->VAR46 == VAR56 && (FUN15(VAR13->VAR55, VAR11->VAR46) == 0 || FUN15(VAR13->VAR55, VAR11->VAR46) == FUN16('', '', '', '')) && !FUN17(VAR2, VAR8))
            {
                VAR11->VAR55 = 0;
            }
            if (VAR11->VAR55)
            {
                if (!FUN17(VAR2, VAR8))
                {
                    char VAR57[32], VAR58[32];
                    FUN18(VAR57, sizeof(VAR57), VAR11->VAR55);
                    FUN18(VAR58, sizeof(VAR58), FUN15(VAR2->VAR14->VAR55, VAR11->VAR46));
                    FUN5(VAR2, VAR32, "", VAR57, VAR11->VAR55, VAR11->VAR46, VAR58);
                    VAR5 = VAR59;
                    goto VAR19;
                }
            }
            else
                VAR11->VAR55 = FUN15(VAR13->VAR55, VAR11->VAR46);
        }
        if (VAR11->VAR38 != VAR60)
            VAR2->VAR40->VAR61++;
    }
    if (!VAR2->VAR20 && VAR13->VAR62 > 0)
    {
        VAR2->VAR20 = FUN19(VAR13->VAR62);
        if (!VAR2->VAR20)
        {
            VAR5 = FUN6(VAR63);
            goto VAR19;
        }
        if (VAR13->VAR21)
        {
            *(const VAR22 **)VAR2->VAR20 = VAR13->VAR21;
            FUN20(VAR2->VAR20);
            if ((VAR5 = FUN4(VAR2->VAR20, &VAR9, VAR23)) < 0)
                goto VAR19;
        }
    }
    if (!(VAR2->VAR27 & VAR29))
    {
        FUN21(&VAR2->VAR64, "", VAR65, 0);
    }
    else
    {
        FUN21(&VAR2->VAR64, "", NULL, 0);
    }
    for (VAR18 = NULL; VAR18 = FUN22(VAR2->VAR64, "", VAR18, VAR66);)
    {
        FUN21(&VAR2->VAR64, VAR18->VAR67, NULL, 0);
    }
    if (VAR4)
    {
        FUN23(VAR4);
        *VAR4 = VAR9;
    }
    if (VAR2->VAR14->VAR68 && (VAR5 = VAR2->VAR14->FUN24(VAR2)) < 0)
    {
        VAR2->VAR14->FUN25(VAR2);
        goto VAR19;
    }
    return 0;
VAR19:
    FUN23(&VAR9);
    return VAR5;
}