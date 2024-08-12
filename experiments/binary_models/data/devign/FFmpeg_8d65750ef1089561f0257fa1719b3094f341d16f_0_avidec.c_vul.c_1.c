static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = &VAR2->VAR9;
    uint32_t VAR10, VAR11, VAR12;
    int VAR13, VAR14, VAR15, VAR16, VAR17, VAR18;
    unsigned int VAR19, VAR20;
    int VAR21, VAR22;
    VAR23 *VAR24;
    VAR25 *VAR26;
    int VAR27 = 0;
    if (FUN2(VAR6, VAR9) < 0)
        return -1;
    VAR14 = -1;
    VAR13 = -1;
    VAR15 = 0;
    for (;;)
    {
        if (FUN3(VAR9))
            goto VAR28;
        VAR10 = FUN4(VAR9);
        VAR19 = FUN4(VAR9);
        FUN5("", VAR10, VAR19);
        switch (VAR10)
        {
        case FUN6('', '', '', ''):
            VAR11 = FUN4(VAR9);
            FUN5("", VAR11, 0);
            if (VAR11 == FUN6('', '', '', ''))
            {
                VAR6->VAR29 = FUN7(VAR9) - 4;
                if (VAR19)
                    VAR6->VAR30 = VAR6->VAR29 + VAR19;
                else
                    VAR6->VAR30 = FUN8(FUN9(VAR9));
                FUN10("", VAR6->VAR30);
                goto VAR31;
            }
            break;
        case FUN6('', '', '', ''):
            VAR6->VAR32 = 1;
            FUN11(VAR9, VAR19 + (VAR19 & 1));
            break;
        case FUN6('', '', '', ''):
            VAR15 = FUN4(VAR9);
            VAR16 = FUN4(VAR9) * 8;
            FUN11(VAR9, 4 * 4);
            VAR22 = FUN4(VAR9);
            for (VAR21 = 0; VAR21 < VAR22; VAR21++)
            {
                VAR25 *VAR26;
                VAR24 = FUN12(VAR2, VAR21);
                if (!VAR24)
                    goto VAR28;
                VAR26 = FUN13(sizeof(VAR25));
                if (!VAR26)
                    goto VAR28;
                VAR24->VAR7 = VAR26;
            }
            FUN11(VAR9, VAR19 - 7 * 4);
            break;
        case FUN6('', '', '', ''):
            VAR14++;
            VAR11 = FUN4(VAR9);
            VAR12 = FUN4(VAR9);
            FUN5("", VAR11, -1);
            switch (VAR11)
            {
            case FUN6('', '', '', ''):
            case FUN6('', '', '', ''):
                if (VAR2->VAR33 != 1)
                    goto VAR28;
                if (VAR12 != FUN6('', '', '', '') && VAR12 != FUN6('', '', '', '') && VAR12 != FUN6('', '', '', ''))
                    goto VAR28;
                VAR26 = VAR2->VAR34[0]->VAR7;
                FUN14(&VAR2->VAR34[0]->VAR35.VAR36);
                FUN14(&VAR2->VAR34[0]);
                VAR2->VAR33 = 0;
                VAR6->VAR37 = FUN15(VAR2);
                if (!VAR6->VAR37)
                    goto VAR28;
                VAR2->VAR34[0]->VAR7 = VAR26;
                FUN11(VAR9, 3 * 4);
                VAR26->VAR17 = FUN4(VAR9);
                VAR26->VAR18 = FUN4(VAR9);
                VAR14 = VAR2->VAR33 - 1;
                FUN11(VAR9, VAR19 - 7 * 4);
                break;
            case FUN6('', '', '', ''):
                VAR13 = VAR38;
                if (VAR14 >= VAR2->VAR33)
                {
                    FUN11(VAR9, VAR19 - 8);
                    break;
                }
                VAR24 = VAR2->VAR34[VAR14];
                VAR26 = VAR24->VAR7;
                VAR24->VAR35.VAR39 = VAR12;
                FUN4(VAR9);
                FUN16(VAR9);
                FUN16(VAR9);
                FUN4(VAR9);
                VAR17 = FUN4(VAR9);
                VAR18 = FUN4(VAR9);
                if (VAR17 && VAR18)
                {
                }
                else if (VAR15)
                {
                    VAR18 = 1000000;
                    VAR17 = VAR15;
                }
                else
                {
                    VAR18 = 25;
                    VAR17 = 1;
                }
                VAR26->VAR18 = VAR18;
                VAR26->VAR17 = VAR17;
                FUN17(VAR24, 64, VAR17, VAR18);
                VAR24->VAR35.VAR40 = VAR18;
                VAR24->VAR35.VAR41 = VAR17;
                FUN4(VAR9);
                VAR20 = FUN4(VAR9);
                VAR24->VAR42 = 0;
                VAR24->VAR43 = FUN18(VAR20, VAR24->VAR35.VAR41 * VAR44, VAR24->VAR35.VAR40);
                FUN11(VAR9, VAR19 - 9 * 4);
                break;
            case FUN6('', '', '', ''):
            {
                unsigned int VAR45;
                VAR13 = VAR46;
                if (VAR14 >= VAR2->VAR33)
                {
                    FUN11(VAR9, VAR19 - 8);
                    break;
                }
                VAR24 = VAR2->VAR34[VAR14];
                VAR26 = VAR24->VAR7;
                FUN4(VAR9);
                FUN16(VAR9);
                FUN16(VAR9);
                FUN4(VAR9);
                VAR26->VAR17 = FUN4(VAR9);
                VAR26->VAR18 = FUN4(VAR9);
                if (!VAR26->VAR18)
                    VAR26->VAR18 = 1;
                if (!VAR26->VAR17)
                    VAR26->VAR17 = 1;
                FUN17(VAR24, 64, VAR26->VAR17, VAR26->VAR18);
                VAR26->VAR47 = FUN4(VAR9);
                VAR45 = FUN4(VAR9);
                FUN4(VAR9);
                FUN4(VAR9);
                VAR26->VAR48 = FUN4(VAR9);
                VAR24->VAR42 = 0;
                if (VAR26->VAR18 != 0)
                    VAR24->VAR43 = (VAR49)VAR45 * VAR44 / VAR26->VAR18;
                FUN11(VAR9, VAR19 - 12 * 4);
            }
            break;
            case FUN6('', '', '', ''):
                VAR13 = VAR50;
                FUN11(VAR9, VAR19 - 8);
                break;
            case FUN6('', '', '', ''):
                VAR13 = VAR51;
                FUN11(VAR9, VAR19 - 8);
                VAR14--;
                break;
            default:
                FUN19(VAR2, VAR52, "", VAR11);
                goto VAR28;
            }
            break;
        case FUN6('', '', '', ''):
            if (VAR14 >= VAR2->VAR33 || VAR6->VAR37)
            {
                FUN11(VAR9, VAR19);
            }
            else
            {
                VAR24 = VAR2->VAR34[VAR14];
                switch (VAR13)
                {
                case VAR38:
                    FUN4(VAR9);
                    VAR24->VAR35.VAR53 = FUN4(VAR9);
                    VAR24->VAR35.VAR54 = FUN4(VAR9);
                    FUN16(VAR9);
                    VAR24->VAR35.VAR55 = FUN16(VAR9);
                    VAR11 = FUN4(VAR9);
                    FUN4(VAR9);
                    FUN4(VAR9);
                    FUN4(VAR9);
                    FUN4(VAR9);
                    FUN4(VAR9);
                    if (VAR19 > 10 * 4 && VAR19 < (1 << 30))
                    {
                        VAR24->VAR35.VAR56 = VAR19 - 10 * 4;
                        VAR24->VAR35.VAR36 = FUN20(VAR24->VAR35.VAR56 + VAR57);
                        FUN21(VAR9, VAR24->VAR35.VAR36, VAR24->VAR35.VAR56);
                    }
                    if (VAR24->VAR35.VAR56 & 1)
                        FUN22(VAR9);
                    if (VAR24->VAR35.VAR56 && (VAR24->VAR35.VAR55 <= 8))
                    {
                        VAR24->VAR35.VAR58 = FUN13(sizeof(VAR59));
                        for (VAR21 = 0; VAR21 < FUN23(VAR24->VAR35.VAR56, VAR60) / 4; VAR21++)
                            VAR24->VAR35.VAR58->VAR61[VAR21] = FUN24(((VAR62 *)VAR24->VAR35.VAR36)[VAR21]);
                        memcpy(VAR24->VAR35.VAR58->VAR61, VAR24->VAR35.VAR36, FUN23(VAR24->VAR35.VAR56, VAR60));
                        VAR24->VAR35.VAR58->VAR63 = 1;
                    }
                    FUN5("", VAR11, 0);
                    VAR24->VAR35.VAR13 = VAR38;
                    VAR24->VAR35.VAR64 = VAR11;
                    VAR24->VAR35.VAR65 = FUN25(VAR66, VAR11);
                    if (VAR24->VAR35.VAR65 == VAR67)
                        VAR27 = 1;
                    break;
                case VAR46:
                    FUN26(VAR9, &VAR24->VAR35, VAR19);
                    if (VAR19 % 2)
                        FUN11(VAR9, 1);
                    VAR24->VAR68 = 1;
                    if (VAR27)
                        VAR24->VAR35.VAR65 = VAR69;
                    break;
                default:
                    VAR24->VAR35.VAR13 = VAR50;
                    VAR24->VAR35.VAR65 = VAR70;
                    VAR24->VAR35.VAR64 = 0;
                    FUN11(VAR9, VAR19);
                    break;
                }
            }
            break;
        default:
            VAR19 += (VAR19 & 1);
            FUN11(VAR9, VAR19);
            break;
        }
    }
VAR31:
    if (VAR14 != VAR2->VAR33 - 1)
    {
    VAR28:
        for (VAR21 = 0; VAR21 < VAR2->VAR33; VAR21++)
        {
            FUN14(&VAR2->VAR34[VAR21]->VAR35.VAR36);
            FUN14(&VAR2->VAR34[VAR21]);
        }
        return -1;
    }
    assert(!VAR6->VAR71);
    FUN27(VAR2);
    VAR6->VAR71 = 1;
    return 0;
}