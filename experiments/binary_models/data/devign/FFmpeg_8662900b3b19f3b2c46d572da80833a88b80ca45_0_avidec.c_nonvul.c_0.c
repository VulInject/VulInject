static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = &VAR2->VAR9;
    uint32_t VAR10, VAR11, VAR12;
    int VAR13, VAR14, VAR15, VAR16;
    unsigned int VAR17, VAR18;
    int VAR19, VAR20;
    VAR21 *VAR22;
    VAR23 *VAR24 = NULL;
    char VAR25[4];
    VAR6->VAR14 = -1;
    if (FUN2(VAR6, VAR9) < 0)
        return -1;
    VAR14 = -1;
    VAR13 = -1;
    VAR15 = 0;
    for (;;)
    {
        if (FUN3(VAR9))
            goto VAR26;
        VAR10 = FUN4(VAR9);
        VAR17 = FUN4(VAR9);
        FUN5("", VAR10, VAR17);
        switch (VAR10)
        {
        case FUN6('', '', '', ''):
            VAR11 = FUN4(VAR9);
            FUN5("", VAR11, 0);
            if (VAR11 == FUN6('', '', '', ''))
            {
                VAR6->VAR27 = FUN7(VAR9) - 4;
                if (VAR17)
                    VAR6->VAR28 = VAR6->VAR27 + VAR17 + (VAR17 & 1);
                else
                    VAR6->VAR28 = FUN8(VAR9);
                FUN9("" VAR29 "", VAR6->VAR28);
                goto VAR30;
            }
            break;
        case FUN6('', '', '', ''):
            VAR6->VAR31 = 1;
            FUN10(VAR9, VAR17 + (VAR17 & 1));
            break;
        case FUN6('', '', '', ''):
            VAR15 = FUN4(VAR9);
            VAR16 = FUN4(VAR9) * 8;
            FUN4(VAR9);
            VAR6->VAR32 |= FUN4(VAR9) & VAR33;
            FUN10(VAR9, 2 * 4);
            VAR20 = FUN4(VAR9);
            for (VAR19 = 0; VAR19 < VAR20; VAR19++)
            {
                VAR23 *VAR24;
                VAR22 = FUN11(VAR2, VAR19);
                if (!VAR22)
                    goto VAR26;
                VAR24 = FUN12(sizeof(VAR23));
                if (!VAR24)
                    goto VAR26;
                VAR22->VAR7 = VAR24;
            }
            FUN10(VAR9, VAR17 - 7 * 4);
            break;
        case FUN6('', '', '', ''):
            VAR14++;
            VAR11 = FUN4(VAR9);
            VAR12 = FUN4(VAR9);
            FUN5("", VAR11, -1);
            if (VAR11 == FUN6('', '', '', '') || VAR11 == FUN6('', '', '', ''))
            {
                if (VAR2->VAR34 != 1)
                    goto VAR26;
                if (VAR12 != FUN6('', '', '', '') && VAR12 != FUN6('', '', '', '') && VAR12 != FUN6('', '', '', ''))
                    goto VAR26;
                VAR24 = VAR2->VAR35[0]->VAR7;
                FUN13(&VAR2->VAR35[0]->VAR36->VAR37);
                FUN13(&VAR2->VAR35[0]);
                VAR2->VAR34 = 0;
                if (VAR38)
                {
                    VAR6->VAR39 = FUN14(VAR2);
                    if (!VAR6->VAR39)
                        goto VAR26;
                }
                VAR2->VAR35[0]->VAR7 = VAR24;
                FUN10(VAR9, 3 * 4);
                VAR24->VAR40 = FUN4(VAR9);
                VAR24->VAR41 = FUN4(VAR9);
                VAR14 = VAR2->VAR34 - 1;
                FUN10(VAR9, VAR17 - 7 * 4);
                break;
            }
            if (VAR14 >= VAR2->VAR34)
            {
                FUN10(VAR9, VAR17 - 8);
                if (VAR11 == FUN6('', '', '', ''))
                    VAR14--;
                break;
            }
            VAR22 = VAR2->VAR35[VAR14];
            VAR24 = VAR22->VAR7;
            VAR22->VAR36->VAR42 = VAR12;
            FUN4(VAR9);
            FUN15(VAR9);
            FUN15(VAR9);
            FUN4(VAR9);
            VAR24->VAR40 = FUN4(VAR9);
            VAR24->VAR41 = FUN4(VAR9);
            if (VAR24->VAR40 && VAR24->VAR41)
            {
            }
            else if (VAR15)
            {
                VAR24->VAR41 = 1000000;
                VAR24->VAR40 = VAR15;
            }
            else
            {
                VAR24->VAR41 = 25;
                VAR24->VAR40 = 1;
            }
            FUN16(VAR22, 64, VAR24->VAR40, VAR24->VAR41);
            VAR24->VAR43 = FUN4(VAR9);
            VAR18 = FUN4(VAR9);
            VAR22->VAR44 = 0;
            VAR22->VAR45 = VAR18;
            FUN4(VAR9);
            FUN4(VAR9);
            VAR24->VAR46 = FUN4(VAR9);
            VAR24->VAR43 *= FUN17(1, VAR24->VAR46);
            switch (VAR11)
            {
            case FUN6('', '', '', ''):
                VAR13 = VAR47;
                VAR24->VAR46 = 0;
                break;
            case FUN6('', '', '', ''):
                VAR13 = VAR48;
                break;
            case FUN6('', '', '', ''):
                VAR13 = VAR49;
                break;
            case FUN6('', '', '', ''):
                VAR13 = VAR50;
                VAR14--;
                break;
            default:
                FUN18(VAR2, VAR51, "", VAR11);
                goto VAR26;
            }
            VAR24->VAR52 = VAR24->VAR43;
            FUN10(VAR9, VAR17 - 12 * 4);
            break;
        case FUN6('', '', '', ''):
            if (VAR14 >= VAR2->VAR34 || VAR6->VAR39)
            {
                FUN10(VAR9, VAR17);
            }
            else
            {
                VAR22 = VAR2->VAR35[VAR14];
                switch (VAR13)
                {
                case VAR47:
                    FUN4(VAR9);
                    VAR22->VAR36->VAR53 = FUN4(VAR9);
                    VAR22->VAR36->VAR54 = FUN4(VAR9);
                    FUN15(VAR9);
                    VAR22->VAR36->VAR55 = FUN15(VAR9);
                    VAR11 = FUN4(VAR9);
                    FUN4(VAR9);
                    FUN4(VAR9);
                    FUN4(VAR9);
                    FUN4(VAR9);
                    FUN4(VAR9);
                    if (VAR17 > 10 * 4 && VAR17 < (1 << 30))
                    {
                        VAR22->VAR36->VAR56 = VAR17 - 10 * 4;
                        VAR22->VAR36->VAR37 = FUN19(VAR22->VAR36->VAR56 + VAR57);
                        FUN20(VAR9, VAR22->VAR36->VAR37, VAR22->VAR36->VAR56);
                    }
                    if (VAR22->VAR36->VAR56 & 1)
                        FUN21(VAR9);
                    if (VAR22->VAR36->VAR56 && (VAR22->VAR36->VAR55 <= 8))
                    {
                        VAR22->VAR36->VAR58 = FUN12(sizeof(VAR59));
                        for (VAR19 = 0; VAR19 < FUN22(VAR22->VAR36->VAR56, VAR60) / 4; VAR19++)
                            VAR22->VAR36->VAR58->VAR61[VAR19] = FUN23(((VAR62 *)VAR22->VAR36->VAR37)[VAR19]);
                        memcpy(VAR22->VAR36->VAR58->VAR61, VAR22->VAR36->VAR37, FUN22(VAR22->VAR36->VAR56, VAR60));
                        VAR22->VAR36->VAR58->VAR63 = 1;
                    }
                    FUN5("", VAR11, 0);
                    VAR22->VAR36->VAR13 = VAR47;
                    VAR22->VAR36->VAR64 = VAR11;
                    VAR22->VAR36->VAR65 = FUN24(VAR66, VAR11);
                    VAR22->VAR67 = 2;
                    break;
                case VAR48:
                    FUN25(VAR9, VAR22->VAR36, VAR17);
                    if (VAR24->VAR46 && VAR22->VAR36->VAR68 && VAR24->VAR46 % VAR22->VAR36->VAR68)
                        FUN18(VAR2, VAR69, "");
                    if (VAR17 % 2)
                        FUN10(VAR9, 1);
                    VAR22->VAR67 = 1;
                    if (VAR22->VAR36->VAR65 == VAR70 && VAR22->VAR36->VAR56)
                        VAR22->VAR67 = 0;
                    if (VAR22->VAR36->VAR42 == FUN26(""))
                    {
                        VAR22->VAR36->VAR65 = VAR71;
                        VAR22->VAR36->VAR64 = 0;
                    }
                    break;
                default:
                    VAR22->VAR36->VAR13 = VAR49;
                    VAR22->VAR36->VAR65 = VAR72;
                    VAR22->VAR36->VAR64 = 0;
                    FUN10(VAR9, VAR17);
                    break;
                }
            }
            break;
        case FUN6('', '', '', ''):
            VAR19 = FUN7(VAR9);
            if (!FUN27(VAR9) && !(VAR2->VAR73 & VAR74))
            {
                FUN28(VAR2, 0);
            }
            FUN29(VAR9, VAR19 + VAR17, VAR75);
            break;
        case FUN6('', '', '', ''):
            FUN30(VAR9, VAR2->VAR76, sizeof(VAR2->VAR76), VAR17);
            break;
        case FUN6('', '', '', ''):
            FUN30(VAR9, VAR2->VAR77, sizeof(VAR2->VAR77), VAR17);
            break;
        case FUN6('', '', '', ''):
            FUN30(VAR9, VAR2->VAR78, sizeof(VAR2->VAR78), VAR17);
            break;
        case FUN6('', '', '', ''):
            FUN30(VAR9, VAR2->VAR79, sizeof(VAR2->VAR79), VAR17);
            break;
        case FUN6('', '', '', ''):
            FUN30(VAR9, VAR2->VAR80, sizeof(VAR2->VAR80), VAR17);
            break;
        case FUN6('', '', '', ''):
            FUN30(VAR9, VAR2->VAR81, sizeof(VAR2->VAR81), VAR17);
            break;
        case FUN6('', '', '', ''):
            FUN30(VAR9, VAR25, sizeof(VAR25), VAR17);
            sscanf(VAR25, "", &VAR2->VAR82);
            break;
        default:
            VAR17 += (VAR17 & 1);
            FUN10(VAR9, VAR17);
            break;
        }
    }
VAR30:
    if (VAR14 != VAR2->VAR34 - 1)
    {
    VAR26:
        for (VAR19 = 0; VAR19 < VAR2->VAR34; VAR19++)
        {
            FUN13(&VAR2->VAR35[VAR19]->VAR36->VAR37);
            FUN13(&VAR2->VAR35[VAR19]);
        }
        return -1;
    }
    if (!VAR6->VAR83 && !FUN27(VAR9))
        FUN31(VAR2);
    VAR6->VAR83 = 1;
    VAR6->VAR32 |= FUN32(VAR2);
    if (VAR6->VAR32)
        FUN33(VAR2);
    return 0;
}