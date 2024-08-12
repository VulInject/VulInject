static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR4;
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9;
    int VAR10, VAR11 = 0;
    VAR6->VAR12 = VAR13;
    if (VAR2->VAR14 != NULL)
    {
        if (!strcmp("", VAR2->VAR14->VAR15))
            VAR6->VAR12 = VAR16;
        else if (!strcmp("", VAR2->VAR14->VAR15))
            VAR6->VAR12 = VAR16 | VAR17;
        else if (!strcmp("", VAR2->VAR14->VAR15))
            VAR6->VAR12 = VAR18;
        else if (!strcmp("", VAR2->VAR14->VAR15))
            VAR6->VAR12 = VAR19;
        else if (!strcmp("", VAR2->VAR14->VAR15))
            VAR6->VAR12 = VAR20;
        else if (!strcmp("", VAR2->VAR14->VAR15))
            VAR6->VAR12 = VAR21;
    }
    if (VAR6->VAR22 || VAR6->VAR23 || VAR6->VAR12 == VAR21 || VAR6->VAR24 & (VAR25 | VAR26 | VAR27))
        VAR6->VAR24 |= VAR28;
    if (VAR6->VAR24 & VAR29)
    {
        if ((VAR6->VAR24 & VAR28) || (VAR2->VAR24 & VAR30))
        {
            FUN2(VAR2, VAR31, ""
                                      "");
            VAR6->VAR24 &= ~VAR29;
        }
    }
    if (!VAR2->VAR4->VAR32 && (!(VAR6->VAR24 & VAR28) || VAR6->VAR33))
    {
        FUN2(VAR2, VAR34, "");
        return -1;
    }
    FUN3(VAR4, VAR2);
    if (VAR6->VAR12 == VAR19)
    {
        if (VAR2->VAR35 != 2)
        {
            FUN2(VAR2, VAR34, "");
            return -1;
        }
        FUN4(VAR4, VAR2);
    }
    VAR6->VAR35 = VAR2->VAR35;
    if (VAR6->VAR12 & (VAR13 | VAR18 | VAR20) && VAR2->VAR36)
        VAR6->VAR37 = VAR6->VAR35++;
    if (VAR6->VAR24 & VAR38)
    {
        VAR11 = VAR6->VAR35;
        for (VAR10 = 0; VAR10 < VAR2->VAR35; VAR10++)
        {
            VAR39 *VAR40 = VAR2->VAR41[VAR10];
            if (VAR40->VAR42->VAR43 == VAR44 || VAR40->VAR42->VAR43 == VAR45)
            {
                VAR6->VAR35++;
            }
        }
    }
    VAR6->VAR46 = FUN5((VAR6->VAR35 + 1) * sizeof(*VAR6->VAR46));
    if (!VAR6->VAR46)
        return FUN6(VAR47);
    for (VAR10 = 0; VAR10 < VAR2->VAR35; VAR10++)
    {
        VAR39 *VAR40 = VAR2->VAR41[VAR10];
        VAR48 *VAR49 = &VAR6->VAR46[VAR10];
        VAR8 *VAR50 = FUN7(VAR40->VAR51, "", NULL, 0);
        VAR49->VAR52 = VAR40->VAR42;
        VAR49->VAR53 = FUN8(VAR50 ? VAR50->VAR54 : "", VAR6->VAR12 != VAR18);
        if (VAR49->VAR53 < 0)
            VAR49->VAR53 = 0;
        VAR49->VAR12 = VAR6->VAR12;
        VAR49->VAR55 = FUN9(VAR2, VAR49);
        if (!VAR49->VAR55)
        {
            FUN2(VAR2, VAR34, ""
                                    "",
                   VAR10);
            goto VAR56;
        }
        VAR49->VAR11 = -1;
        VAR49->VAR57 = VAR58;
        if (VAR40->VAR42->VAR43 == VAR44)
        {
            if (VAR49->VAR55 == FUN10('', '', '', '') || VAR49->VAR55 == FUN10('', '', '', '') || VAR49->VAR55 == FUN10('', '', '', '') || VAR49->VAR55 == FUN10('', '', '', '') || VAR49->VAR55 == FUN10('', '', '', '') || VAR49->VAR55 == FUN10('', '', '', ''))
            {
                if (VAR40->VAR42->VAR59 != 720 || (VAR40->VAR42->VAR60 != 608 && VAR40->VAR42->VAR60 != 512))
                {
                    FUN2(VAR2, VAR34, "");
                    goto VAR56;
                }
                VAR49->VAR60 = VAR49->VAR55 >> 24 == '' ? 486 : 576;
            }
            VAR49->VAR61 = VAR40->VAR42->VAR62.VAR63;
            if (VAR49->VAR12 == VAR18 && VAR49->VAR61 > 100000)
                FUN2(VAR2, VAR31, ""
                                          ""
                                          "");
        }
        else if (VAR40->VAR42->VAR43 == VAR45)
        {
            VAR49->VAR61 = VAR40->VAR42->VAR64;
            if (FUN11(VAR40->VAR42->VAR65) || VAR40->VAR42->VAR65 == VAR66)
            {
                if (!VAR40->VAR42->VAR67)
                {
                    FUN2(VAR2, VAR34, "", VAR10);
                    goto VAR56;
                }
                VAR49->VAR68 = VAR40->VAR42->VAR67;
            }
            if (FUN11(VAR40->VAR42->VAR65) < 8)
            {
                VAR49->VAR69 = 1;
            }
            if (VAR49->VAR12 != VAR18 && VAR49->VAR52->VAR65 == VAR70 && VAR49->VAR61 < 16000)
            {
                FUN2(VAR2, VAR34, "", VAR10, VAR49->VAR52->VAR64);
                goto VAR56;
            }
        }
        else if (VAR40->VAR42->VAR43 == VAR71)
        {
            VAR49->VAR61 = VAR40->VAR42->VAR62.VAR63;
        }
        else if (VAR40->VAR42->VAR43 == VAR72)
        {
            VAR49->VAR61 = VAR40->VAR42->VAR62.VAR63;
        }
        if (!VAR49->VAR60)
            VAR49->VAR60 = VAR40->VAR42->VAR60;
        if (VAR6->VAR12 == VAR21)
            VAR49->VAR61 = 10000000;
        FUN12(VAR40, 64, 1, VAR49->VAR61);
        if (VAR40->VAR42->VAR73)
        {
            VAR49->VAR74 = VAR40->VAR42->VAR73;
            VAR49->VAR75 = FUN13(VAR49->VAR74);
            memcpy(VAR49->VAR75, VAR40->VAR42->VAR76, VAR49->VAR74);
        }
    }
    FUN14(VAR2);
    if (VAR6->VAR12 == VAR21)
    {
        if (!(VAR6->VAR24 & (VAR26 | VAR27)) && !VAR6->VAR22 && !VAR6->VAR23)
            VAR6->VAR22 = 5000000;
        VAR6->VAR24 |= VAR25 | VAR77;
    }
    if (!(VAR6->VAR24 & VAR28))
    {
        if (VAR6->VAR24 & VAR29)
            VAR6->VAR78 = FUN15(VAR4);
        FUN16(VAR4, VAR6);
    }
    if (VAR9 = FUN7(VAR2->VAR51, "", NULL, 0))
        VAR6->VAR79 = FUN17(VAR9->VAR54);
    if (VAR6->VAR79)
        VAR6->VAR79 += 0x7C25B080;
    if (VAR6->VAR37)
        if (FUN18(VAR2, VAR6->VAR37) < 0)
            goto VAR56;
    if (VAR6->VAR24 & VAR38)
    {
        for (VAR10 = 0; VAR10 < VAR2->VAR35; VAR10++)
        {
            VAR39 *VAR40 = VAR2->VAR41[VAR10];
            if (VAR40->VAR42->VAR43 == VAR44 || VAR40->VAR42->VAR43 == VAR45)
            {
                FUN19(VAR2, VAR11, VAR10);
                VAR11++;
            }
        }
    }
    FUN20(VAR4);
    if (VAR6->VAR24 & VAR80)
        FUN21(VAR4, VAR6);
    if (VAR6->VAR24 & VAR25)
    {
        FUN22(VAR4, VAR6, VAR2);
        VAR6->VAR81++;
    }
    return 0;
VAR56:
    FUN23(VAR2);
    return -1;
}