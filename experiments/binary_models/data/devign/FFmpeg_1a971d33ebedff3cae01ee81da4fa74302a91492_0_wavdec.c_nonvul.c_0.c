static int FUN1(VAR1 *VAR2)
{
    int64_t VAR3, FUN2(VAR4);
    int64_t VAR5 = 0;
    int VAR6 = 0;
    uint32_t VAR7;
    VAR8 *VAR9 = VAR2->VAR9;
    VAR10 *VAR11 = NULL;
    VAR12 *VAR13 = VAR2->VAR14;
    int VAR15, VAR16 = 0;
    int64_t VAR17, VAR18 = -1;
    VAR13->VAR19 = FUN3(VAR2->VAR9) & 1;
    VAR13->VAR20 = -1;
    VAR7 = FUN4(VAR9);
    switch (VAR7)
    {
    case FUN5('', '', '', ''):
        break;
    case FUN5('', '', '', ''):
        VAR13->VAR21 = 1;
        break;
    case FUN5('', '', '', ''):
        VAR6 = 1;
        break;
    default:
        FUN6(VAR2, VAR22, "", VAR7 & 0xFF, (VAR7 >> 8) & 0xFF, (VAR7 >> 16) & 0xFF, (VAR7 >> 24) & 0xFF);
        return VAR23;
    }
    FUN4(VAR9);
    if (FUN4(VAR9) != FUN5('', '', '', ''))
    {
        FUN6(VAR2, VAR22, "");
        return VAR23;
    }
    if (VAR6)
    {
        if (FUN4(VAR9) != FUN5('', '', '', ''))
            return VAR23;
        VAR3 = FUN4(VAR9);
        if (VAR3 < 24)
            return VAR23;
        FUN7(VAR9);
        VAR4 = FUN7(VAR9);
        VAR5 = FUN7(VAR9);
        if (VAR4 < 0 || VAR5 < 0)
        {
            FUN6(VAR2, VAR22, ""
                                    "" VAR24 "" VAR24 "",
                   VAR4, VAR5);
            return VAR23;
        }
        FUN8(VAR9, VAR3 - 24);
    }
    for (;;)
    {
        VAR10 *VAR25;
        VAR3 = FUN9(VAR9, &VAR7, VAR13->VAR21);
        VAR17 = FUN3(VAR9) + VAR3;
        if (FUN10(VAR9))
            break;
        switch (VAR7)
        {
        case FUN5('', '', '', ''):
            if (!VAR16 && (VAR15 = FUN11(VAR2, VAR3, &VAR11)) < 0)
            {
                return VAR15;
            }
            else if (VAR16)
                FUN6(VAR2, VAR26, "");
            VAR16 = 1;
            break;
        case FUN5('', '', '', ''):
            if (!VAR16)
            {
                FUN6(VAR2, VAR22, "");
                return VAR23;
            }
            if (VAR6)
            {
                VAR17 = VAR13->VAR27 = FUN3(VAR9) + VAR4;
            }
            else
            {
                VAR4 = VAR3;
                VAR17 = VAR13->VAR27 = VAR3 ? VAR17 : VAR28;
            }
            VAR18 = FUN3(VAR9);
            if (!VAR9->VAR29 || (!VAR6 && !VAR3))
                goto VAR30;
            break;
        case FUN5('', '', '', ''):
            if (!VAR5)
                VAR5 = (!VAR13->VAR21 ? FUN4(VAR9) : FUN12(VAR9));
            break;
        case FUN5('', '', '', ''):
            if ((VAR15 = FUN13(VAR2, VAR3)) < 0)
                return VAR15;
            break;
        case FUN5('', '', '', ''):
            if (!VAR16)
            {
                FUN6(VAR2, VAR22, "");
                return VAR23;
            }
            if (VAR3 != FUN5('', '', '', ''))
            {
                FUN6(VAR2, VAR22, "");
                goto VAR30;
            }
            FUN6(VAR2, VAR31, "");
            VAR13->VAR32 = 0;
            VAR25 = FUN14(VAR2, NULL);
            if (!VAR25)
                return FUN15(VAR33);
            FUN16(VAR9);
            VAR25->VAR34 = 1;
            VAR25->VAR35->VAR36 = VAR37;
            VAR25->VAR35->VAR38 = VAR39;
            VAR25->VAR35->VAR40 = FUN17(VAR9);
            VAR25->VAR35->VAR41 = FUN17(VAR9);
            if (FUN18(VAR25->VAR35, 4))
            {
                FUN6(VAR2, VAR22, "");
                return FUN15(VAR33);
            }
            VAR3 = FUN17(VAR9);
            VAR13->VAR20 = FUN3(VAR9) + (VAR3 - 5) * 3;
            FUN17(VAR9);
            VAR13->VAR42 = FUN17(VAR9);
            FUN19(VAR25, 32, 1, FUN17(VAR9));
            VAR25->VAR43 = FUN17(VAR9);
            FUN17(VAR9);
            FUN17(VAR9);
            VAR13->VAR44 = FUN17(VAR9);
            if (VAR13->VAR44 > 65536)
            {
                FUN6(VAR2, VAR22, "");
                return VAR23;
            }
            FUN20(VAR25->VAR35->VAR45, VAR13->VAR44);
            VAR13->VAR46 = 0;
            goto VAR30;
        case FUN5('', '', '', ''):
            if (VAR3 < 4)
            {
                FUN6(VAR2, VAR22, "");
                return VAR23;
            }
            switch (FUN4(VAR9))
            {
            case FUN5('', '', '', ''):
                FUN21(VAR2, VAR3 - 4);
            }
            break;
        }
        if ((FUN22(VAR9) > 0 && VAR17 >= FUN22(VAR9)) || FUN23(VAR13, VAR9, VAR17, VAR47) < 0)
        {
            break;
        }
    }
VAR30:
    if (VAR18 < 0)
    {
        FUN6(VAR2, VAR22, "");
        return VAR23;
    }
    FUN24(VAR9, VAR18, VAR47);
    if (VAR4 > 0 && VAR5 && VAR11->VAR35->VAR48 && VAR4 / VAR5 / VAR11->VAR35->VAR48 > 8)
    {
        FUN6(VAR2, VAR26, "" VAR24 "", VAR5);
        VAR5 = 0;
    }
    if (!VAR5 || FUN25(VAR11->VAR35->VAR38) > 0)
        if (VAR11->VAR35->VAR48 && VAR4 && FUN26(VAR11->VAR35->VAR38) && VAR13->VAR27 <= FUN22(VAR9))
            VAR5 = (VAR4 << 3) / (VAR11->VAR35->VAR48 * (VAR49)FUN26(VAR11->VAR35->VAR38));
    if (VAR5)
        VAR11->VAR43 = VAR5;
    FUN27(VAR2, NULL, VAR50);
    FUN27(VAR2, NULL, VAR51);
    return 0;
}