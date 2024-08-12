static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9;
    VAStatus VAR10;
    int VAR11, VAR12;
    char VAR13[VAR14];
    size_t VAR15;
    FUN2(VAR2, VAR16, "" VAR17 "" VAR17 ""
                                "",
           VAR4->VAR18, VAR4->VAR19, VAR20[VAR4->VAR21]);
    if (VAR4->VAR22 == 0)
    {
        FUN2(VAR2, VAR16, "");
    }
    else
    {
        FUN2(VAR2, VAR16, "");
        for (VAR12 = 0; VAR12 < VAR4->VAR22; VAR12++)
        {
            FUN2(VAR2, VAR16, "" VAR17 "" VAR17, VAR4->VAR23[VAR12]->VAR18, VAR4->VAR23[VAR12]->VAR19);
        }
        FUN2(VAR2, VAR16, "");
    }
    FUN3(VAR4->VAR24 && !VAR4->VAR25);
    for (VAR12 = 0; VAR12 < VAR4->VAR22; VAR12++)
    {
        FUN3(VAR4->VAR23[VAR12]);
        if (VAR6->VAR26 == VAR27)
            FUN3(VAR4->VAR23[VAR12]->VAR28);
        else
            FUN3(VAR4->VAR23[VAR12]->VAR25);
    }
    FUN2(VAR2, VAR16, "", VAR4->VAR29);
    VAR4->VAR30 = FUN4();
    if (!VAR4->VAR30)
    {
        VAR11 = FUN5(VAR31);
        goto VAR32;
    }
    VAR11 = FUN6(VAR6->VAR33, VAR4->VAR30, 0);
    if (VAR11 < 0)
    {
        VAR11 = FUN5(VAR31);
        goto VAR32;
    }
    VAR4->VAR34 = (VAR35)(VAR36)VAR4->VAR30->VAR13[3];
    FUN2(VAR2, VAR16, "", VAR4->VAR34);
    VAR4->VAR37 = FUN7(VAR6->VAR38);
    if (!VAR4->VAR37)
    {
        VAR11 = FUN5(VAR31);
        goto VAR32;
    }
    VAR4->VAR39 = (VAR40)(VAR36)VAR4->VAR37->VAR13;
    FUN2(VAR2, VAR16, "", VAR4->VAR39);
    if (VAR6->VAR41->VAR42 > 0)
    {
        VAR4->VAR43 = FUN8(VAR6->VAR41->VAR42);
        if (!VAR4->VAR43)
            goto VAR32;
        memcpy(VAR4->VAR43, VAR6->VAR43, VAR6->VAR41->VAR42);
    }
    else
    {
        FUN3(!VAR6->VAR43);
    }
    VAR4->VAR44 = 0;
    if (VAR4->VAR19 == 0)
    {
        for (VAR12 = 0; VAR12 < VAR6->VAR45; VAR12++)
        {
            VAR11 = FUN9(VAR2, VAR4, VAR46, (char *)VAR6->VAR47[VAR12], VAR6->VAR48[VAR12]);
            if (VAR11 < 0)
                goto VAR32;
        }
    }
    if (VAR4->VAR21 == VAR49 && VAR6->VAR41->VAR50)
    {
        VAR11 = FUN9(VAR2, VAR4, VAR51, VAR6->VAR52, VAR6->VAR41->VAR53);
        if (VAR11 < 0)
            goto VAR32;
    }
    if (VAR6->VAR41->VAR54)
    {
        VAR11 = VAR6->VAR41->FUN10(VAR2, VAR4);
        if (VAR11 < 0)
        {
            FUN2(VAR2, VAR55, ""
                                        "",
                   VAR11);
            goto VAR32;
        }
        VAR11 = FUN9(VAR2, VAR4, VAR56, VAR4->VAR43, VAR6->VAR41->VAR42);
        if (VAR11 < 0)
            goto VAR32;
    }
    if (VAR4->VAR21 == VAR49)
    {
        if (VAR6->VAR57 & VAR58 && VAR6->VAR41->VAR59)
        {
            VAR15 = 8 * sizeof(VAR13);
            VAR11 = VAR6->VAR41->FUN11(VAR2, VAR13, &VAR15);
            if (VAR11 < 0)
            {
                FUN2(VAR2, VAR55, ""
                                            "",
                       VAR11);
                goto VAR32;
            }
            VAR11 = FUN12(VAR2, VAR4, VAR6->VAR41->VAR60, VAR13, VAR15);
            if (VAR11 < 0)
                goto VAR32;
        }
    }
    if (VAR6->VAR57 & VAR61 && VAR6->VAR41->VAR62)
    {
        VAR15 = 8 * sizeof(VAR13);
        VAR11 = VAR6->VAR41->FUN13(VAR2, VAR4, VAR13, &VAR15);
        if (VAR11 < 0)
        {
            FUN2(VAR2, VAR55, ""
                                        "",
                   VAR11);
            goto VAR32;
        }
        VAR11 = FUN12(VAR2, VAR4, VAR6->VAR41->VAR63, VAR13, VAR15);
        if (VAR11 < 0)
            goto VAR32;
    }
    if (VAR6->VAR41->VAR64)
    {
        for (VAR12 = 0;; VAR12++)
        {
            size_t VAR65 = sizeof(VAR13);
            int VAR21;
            VAR11 = VAR6->VAR41->FUN14(VAR2, VAR4, VAR12, &VAR21, VAR13, &VAR65);
            if (VAR11 == VAR66)
                break;
            if (VAR11 < 0)
            {
                FUN2(VAR2, VAR55, ""
                                            "",
                       VAR12, VAR11);
                goto VAR32;
            }
            VAR11 = FUN9(VAR2, VAR4, VAR21, VAR13, VAR65);
            if (VAR11 < 0)
                goto VAR32;
        }
    }
    if (VAR6->VAR57 & VAR67 && VAR6->VAR41->VAR68)
    {
        for (VAR12 = 0;; VAR12++)
        {
            int VAR21;
            VAR15 = 8 * sizeof(VAR13);
            VAR11 = VAR6->VAR41->FUN15(VAR2, VAR4, VAR12, &VAR21, VAR13, &VAR15);
            if (VAR11 == VAR66)
                break;
            if (VAR11 < 0)
            {
                FUN2(VAR2, VAR55, ""
                                            "",
                       VAR12, VAR11);
                goto VAR32;
            }
            VAR11 = FUN12(VAR2, VAR4, VAR21, VAR13, VAR15);
            if (VAR11 < 0)
                goto VAR32;
        }
    }
    FUN3(VAR4->VAR69 <= VAR70);
    for (VAR12 = 0; VAR12 < VAR4->VAR69; VAR12++)
    {
        VAR9 = FUN16(sizeof(*VAR9));
        if (!VAR9)
        {
            VAR11 = FUN5(VAR31);
            goto VAR32;
        }
        VAR4->VAR71[VAR12] = VAR9;
        if (VAR6->VAR41->VAR72 > 0)
        {
            VAR9->VAR73 = FUN16(VAR6->VAR41->VAR72);
            if (!VAR9->VAR73)
            {
                VAR11 = FUN5(VAR31);
                goto VAR32;
            }
        }
        if (VAR6->VAR41->VAR74)
        {
            VAR11 = VAR6->VAR41->FUN17(VAR2, VAR4, VAR9);
            if (VAR11 < 0)
            {
                FUN2(VAR2, VAR55, ""
                                            "",
                       VAR11);
                goto VAR32;
            }
        }
        if (VAR6->VAR57 & VAR75 && VAR6->VAR41->VAR76)
        {
            VAR15 = 8 * sizeof(VAR13);
            VAR11 = VAR6->VAR41->FUN18(VAR2, VAR4, VAR9, VAR13, &VAR15);
            if (VAR11 < 0)
            {
                FUN2(VAR2, VAR55, ""
                                            "",
                       VAR11);
                goto VAR32;
            }
            VAR11 = FUN12(VAR2, VAR4, VAR6->VAR41->VAR77, VAR13, VAR15);
            if (VAR11 < 0)
                goto VAR32;
        }
        if (VAR6->VAR41->VAR74)
        {
            VAR11 = FUN9(VAR2, VAR4, VAR78, VAR9->VAR73, VAR6->VAR41->VAR72);
            if (VAR11 < 0)
                goto VAR32;
        }
    }
    VAR10 = FUN19(VAR6->VAR79->VAR80, VAR6->VAR81, VAR4->VAR29);
    if (VAR10 != VAR82)
    {
        FUN2(VAR2, VAR55, ""
                                    "",
               VAR10, FUN20(VAR10));
        VAR11 = FUN5(VAR83);
        goto VAR84;
    }
    VAR10 = FUN21(VAR6->VAR79->VAR80, VAR6->VAR81, VAR4->VAR85, VAR4->VAR44);
    if (VAR10 != VAR82)
    {
        FUN2(VAR2, VAR55, ""
                                    "",
               VAR10, FUN20(VAR10));
        VAR11 = FUN5(VAR83);
        goto VAR84;
    }
    VAR10 = FUN22(VAR6->VAR79->VAR80, VAR6->VAR81);
    if (VAR10 != VAR82)
    {
        FUN2(VAR2, VAR55, ""
                                    "",
               VAR10, FUN20(VAR10));
        VAR11 = FUN5(VAR83);
        if (VAR6->VAR79->VAR86 & VAR87)
            goto VAR32;
        else
            goto VAR88;
    }
    if (VAR6->VAR79->VAR86 & VAR87)
    {
        for (VAR12 = 0; VAR12 < VAR4->VAR44; VAR12++)
        {
            VAR10 = FUN23(VAR6->VAR79->VAR80, VAR4->VAR85[VAR12]);
            if (VAR10 != VAR82)
            {
                FUN2(VAR2, VAR55, ""
                                            "",
                       VAR4->VAR85[VAR12], VAR10, FUN20(VAR10));
            }
        }
    }
    VAR4->VAR25 = 1;
    if (VAR6->VAR26 == VAR27)
        return FUN24(VAR2, VAR4);
    else
        return 0;
VAR84:
    FUN22(VAR6->VAR79->VAR80, VAR6->VAR81);
VAR32:
    for (VAR12 = 0; VAR12 < VAR4->VAR44; VAR12++)
        FUN23(VAR6->VAR79->VAR80, VAR4->VAR85[VAR12]);
VAR88:
    FUN25(&VAR4->VAR43);
    FUN26(&VAR4->VAR30);
    return VAR11;
}