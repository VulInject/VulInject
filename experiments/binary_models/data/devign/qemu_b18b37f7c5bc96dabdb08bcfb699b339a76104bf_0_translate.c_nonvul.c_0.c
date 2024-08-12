static void FUN1(VAR1 *VAR2)
{
    if (!FUN2(VAR2, VAR3))
    {
        FUN3("", VAR4, VAR5);
        goto VAR6;
    }
}
while (0)
    FUN3("", VAR2->VAR7, VAR8, VAR9, VAR10, VAR4, VAR5);
goto VAR6;
}
while (0)
    (((VAR11 & 0x20000) ? 0xfffc0000 : 0) | VAR11) uint8_t VAR8 = FUN4(VAR2->VAR7);
uint8_t VAR9 = FUN4(VAR2->VAR7 + 1);
uint8_t VAR10 = 0;
static const uint32_t VAR12[] = {0xffffffff, 1, 2, 3, 4, 5, 6, 7, 8, 10, 12, 16, 32, 64, 128, 256};
static const uint32_t VAR13[] = {32768, 65536, 2, 3, 4, 5, 6, 7, 8, 10, 12, 16, 32, 64, 128, 256};
if (VAR14 >= 8)
{
    VAR2->VAR15 = VAR2->VAR7 + 2;
    FUN5(VAR16);
}
else
{
    VAR2->VAR15 = VAR2->VAR7 + 3;
    VAR10 = FUN4(VAR2->VAR7 + 2);
}
switch (VAR14)
{
case 0:
    switch (VAR17)
    {
    case 0:
        switch (VAR18)
        {
        case 0:
            if ((VAR19 & 0xc) == 0x8)
            {
                FUN5(VAR20);
            }
            switch (VAR19)
            {
            case 0:
                switch (VAR21)
                {
                case 0:
                    FUN6(VAR2, VAR22);
                    break;
                case 1:
                    FUN7();
                    break;
                case 2:
                    switch (VAR23)
                    {
                    case 0:
                    case 2:
                        FUN8(VAR2, VAR24);
                        FUN9(VAR2, VAR25[VAR24]);
                        break;
                    case 1:
                        FUN5(VAR26);
                        {
                            TCGv_i32 VAR27 = FUN10(VAR2->VAR7);
                            FUN11(VAR2);
                            FUN12(VAR27, VAR27);
                            FUN9(VAR2, VAR27);
                            FUN13(VAR27);
                        }
                        break;
                    case 3:
                        FUN7();
                        break;
                    }
                    break;
                case 3:
                    FUN14(VAR2, VAR24, VAR23 << 2);
                    switch (VAR23)
                    {
                    case 0:
                    {
                        TCGv_i32 VAR27 = FUN15();
                        FUN16(VAR27, VAR25[VAR24]);
                        FUN17(VAR25[0], VAR2->VAR15);
                        FUN9(VAR2, VAR27);
                        FUN13(VAR27);
                    }
                    break;
                    case 1:
                    case 2:
                    case 3:
                        FUN5(VAR26);
                        {
                            TCGv_i32 VAR27 = FUN15();
                            FUN16(VAR27, VAR25[VAR24]);
                            FUN18(VAR2, VAR23, VAR27);
                            FUN13(VAR27);
                        }
                        break;
                    }
                    break;
                }
                break;
            case 1:
                FUN5(VAR26);
                FUN14(VAR2, VAR28, VAR29);
                {
                    TCGv_i32 VAR7 = FUN10(VAR2->VAR7);
                    FUN11(VAR2);
                    FUN19(VAR7);
                    FUN16(VAR25[VAR28], VAR25[VAR29]);
                    FUN13(VAR7);
                }
                break;
            case 2:
                switch (VAR28)
                {
                case 0:
                    break;
                case 1:
                    break;
                case 2:
                    break;
                case 3:
                    break;
                case 8:
                    FUN5(VAR30);
                    break;
                case 12:
                    break;
                case 13:
                    break;
                case 15:
                    break;
                default:
                    FUN7();
                    break;
                }
                break;
            case 3:
                switch (VAR28)
                {
                case 0:
                    FUN5(VAR30);
                    switch (VAR29)
                    {
                    case 0:
                        FUN20(VAR2);
                        FUN21(VAR31[VAR32], VAR31[VAR32], ~VAR33);
                        FUN22(VAR34);
                        FUN9(VAR2, VAR31[VAR35]);
                        break;
                    case 1:
                        FUN7();
                        break;
                    case 2:
                        FUN20(VAR2);
                        FUN9(VAR2, VAR31[VAR2->VAR36->VAR37 ? VAR38 : VAR35]);
                        break;
                    case 4:
                    case 5:
                        FUN5(VAR26);
                        FUN20(VAR2);
                        {
                            TCGv_i32 VAR27 = FUN10(1);
                            FUN21(VAR31[VAR32], VAR31[VAR32], ~VAR33);
                            FUN23(VAR27, VAR27, VAR31[VAR39]);
                            if (VAR29 == 4)
                            {
                                FUN24(VAR31[VAR40], VAR31[VAR40], VAR27);
                            }
                            else
                            {
                                FUN25(VAR31[VAR40], VAR31[VAR40], VAR27);
                            }
                            FUN26();
                            FUN22(VAR34);
                            FUN9(VAR2, VAR31[VAR35]);
                            FUN13(VAR27);
                        }
                        break;
                    default:
                        FUN7();
                        break;
                    }
                    break;
                case 1:
                    FUN5(VAR41);
                    if (VAR29 >= 2 && VAR29 <= VAR2->VAR36->VAR42)
                    {
                        FUN20(VAR2);
                        FUN16(VAR31[VAR32], VAR31[VAR43 + VAR29 - 2]);
                        FUN22(VAR34);
                        FUN9(VAR2, VAR31[VAR35 + VAR29 - 1]);
                    }
                    else
                    {
                        FUN3("", VAR29);
                        FUN6(VAR2, VAR22);
                    }
                    break;
                case 2:
                    FUN27();
                    break;
                default:
                    FUN7();
                    break;
                }
                break;
            case 4:
                FUN5(VAR44);
                if (VAR2->VAR45)
                {
                    FUN28(VAR2, VAR46);
                }
                break;
            case 5:
                FUN5(VAR30);
                switch (VAR29)
                {
                case 0:
                    FUN6(VAR2, VAR47);
                    break;
                case 1:
                    if (VAR48)
                    {
                        FUN20(VAR2);
                        FUN29(VAR34);
                    }
                    else
                    {
                        FUN3("");
                        FUN6(VAR2, VAR22);
                    }
                    break;
                default:
                    FUN7();
                    break;
                }
                break;
            case 6:
                FUN5(VAR49);
                FUN20(VAR2);
                FUN8(VAR2, VAR28);
                FUN16(VAR25[VAR28], VAR31[VAR32]);
                FUN21(VAR31[VAR32], VAR31[VAR32], ~VAR50);
                FUN30(VAR31[VAR32], VAR31[VAR32], VAR29);
                FUN22(VAR34);
                FUN31(VAR2, 0);
                break;
            case 7:
                FUN5(VAR49);
                FUN20(VAR2);
                FUN32(VAR2, VAR29);
                break;
            case 8:
            case 9:
            case 10:
            case 11:
                FUN5(VAR20);
                {
                    const unsigned VAR51 = (VAR19 & 2) ? 8 : 4;
                    TCGv_i32 VAR52 = FUN10(((1 << VAR51) - 1) << VAR29);
                    TCGv_i32 VAR27 = FUN15();
                    FUN33(VAR27, VAR31[VAR53], VAR52);
                    if (VAR19 & 1)
                    {
                        FUN34(VAR27, VAR27, 1 << VAR29);
                    }
                    else
                    {
                        FUN35(VAR27, VAR27, VAR52);
                    }
                    FUN36(VAR27, VAR27, VAR29 + VAR51);
                    FUN37(VAR31[VAR53], VAR31[VAR53], VAR27, VAR28, 1);
                    FUN13(VAR52);
                    FUN13(VAR27);
                }
                break;
            default:
                FUN7();
                break;
            }
            break;
        case 1:
            FUN38(VAR2, VAR19, VAR29, VAR28);
            FUN33(VAR25[VAR19], VAR25[VAR29], VAR25[VAR28]);
            break;
        case 2:
            FUN38(VAR2, VAR19, VAR29, VAR28);
            FUN25(VAR25[VAR19], VAR25[VAR29], VAR25[VAR28]);
            break;
        case 3:
            FUN38(VAR2, VAR19, VAR29, VAR28);
            FUN39(VAR25[VAR19], VAR25[VAR29], VAR25[VAR28]);
            break;
        case 4:
            switch (VAR19)
            {
            case 0:
                FUN8(VAR2, VAR29);
                FUN40(VAR2, VAR25[VAR29]);
                break;
            case 1:
                FUN8(VAR2, VAR29);
                FUN41(VAR2, VAR25[VAR29]);
                break;
            case 2:
                FUN8(VAR2, VAR29);
                {
                    TCGv_i32 VAR27 = FUN15();
                    FUN42(VAR27, VAR25[VAR29], 3);
                    FUN40(VAR2, VAR27);
                    FUN13(VAR27);
                }
                break;
            case 3:
                FUN8(VAR2, VAR29);
                {
                    TCGv_i32 VAR27 = FUN15();
                    FUN42(VAR27, VAR25[VAR29], 3);
                    FUN41(VAR2, VAR27);
                    FUN13(VAR27);
                }
                break;
            case 4:
            {
                TCGv_i32 VAR27 = FUN10(VAR29 | ((VAR28 & 1) << 4));
                FUN40(VAR2, VAR27);
                FUN13(VAR27);
            }
            break;
            case 6:
                FUN27();
                break;
            case 7:
                FUN27();
                break;
            case 8:
                FUN5(VAR26);
                FUN20(VAR2);
                {
                    TCGv_i32 VAR27 = FUN10(VAR28 | ((VAR28 & 8) ? 0xfffffff0 : 0));
                    FUN43(VAR27);
                    FUN13(VAR27);
                    FUN44(VAR2);
                }
                break;
            case 14:
                FUN5(VAR54);
                FUN14(VAR2, VAR29, VAR28);
                FUN45(VAR25[VAR28], VAR25[VAR29]);
                break;
            case 15:
                FUN5(VAR54);
                FUN14(VAR2, VAR29, VAR28);
                FUN46(VAR25[VAR28], VAR25[VAR29]);
                break;
            default:
                FUN7();
                break;
            }
            break;
        case 5:
            FUN47(FUN48(VAR55) | FUN48(VAR56) | FUN48(VAR57));
            FUN20(VAR2);
            FUN14(VAR2, VAR29, VAR28);
            {
                TCGv_i32 VAR58 = FUN10((VAR19 & 8) != 0);
                switch (VAR19 & 7)
                {
                case 3:
                    FUN49(VAR25[VAR28], VAR25[VAR29], VAR58);
                    break;
                case 4:
                    FUN50(VAR25[VAR29], VAR58);
                    FUN31(VAR2, -1);
                    break;
                case 5:
                    FUN17(VAR59, VAR2->VAR7);
                    FUN51(VAR25[VAR28], VAR25[VAR29], VAR58);
                    break;
                case 6:
                    FUN52(VAR25[VAR28], VAR25[VAR29], VAR58);
                    FUN31(VAR2, -1);
                    break;
                case 7:
                    FUN53(VAR25[VAR28], VAR25[VAR29], VAR58);
                    break;
                default:
                    FUN13(VAR58);
                    FUN7();
                    break;
                }
                FUN13(VAR58);
            }
            break;
        case 6:
            FUN14(VAR2, VAR19, VAR28);
            switch (VAR29)
            {
            case 0:
                FUN54(VAR25[VAR19], VAR25[VAR28]);
                break;
            case 1:
            {
                int VAR60 = FUN55();
                FUN16(VAR25[VAR19], VAR25[VAR28]);
                FUN56(VAR61, VAR25[VAR19], 0, VAR60);
                FUN54(VAR25[VAR19], VAR25[VAR28]);
                FUN57(VAR60);
            }
            break;
            default:
                FUN7();
                break;
            }
            break;
        case 7:
            FUN7();
            break;
        case 8:
            FUN38(VAR2, VAR19, VAR29, VAR28);
            FUN35(VAR25[VAR19], VAR25[VAR29], VAR25[VAR28]);
            break;
        case 9:
        case 10:
        case 11:
            FUN38(VAR2, VAR19, VAR29, VAR28);
            {
                TCGv_i32 VAR27 = FUN15();
                FUN42(VAR27, VAR25[VAR29], VAR18 - 8);
                FUN35(VAR25[VAR19], VAR27, VAR25[VAR28]);
                FUN13(VAR27);
            }
            break;
        case 12:
            FUN38(VAR2, VAR19, VAR29, VAR28);
            FUN58(VAR25[VAR19], VAR25[VAR29], VAR25[VAR28]);
            break;
        case 13:
        case 14:
        case 15:
            FUN38(VAR2, VAR19, VAR29, VAR28);
            {
                TCGv_i32 VAR27 = FUN15();
                FUN42(VAR27, VAR25[VAR29], VAR18 - 12);
                FUN58(VAR25[VAR19], VAR27, VAR25[VAR28]);
                FUN13(VAR27);
            }
            break;
        }
        break;
    case 1:
        switch (VAR18)
        {
        case 0:
        case 1:
            FUN14(VAR2, VAR19, VAR29);
            FUN42(VAR25[VAR19], VAR25[VAR29], 32 - (VAR28 | ((VAR18 & 1) << 4)));
            break;
        case 2:
        case 3:
            FUN14(VAR2, VAR19, VAR28);
            FUN59(VAR25[VAR19], VAR25[VAR28], VAR29 | ((VAR18 & 1) << 4));
            break;
        case 4:
            FUN14(VAR2, VAR19, VAR28);
            FUN36(VAR25[VAR19], VAR25[VAR28], VAR29);
            break;
        case 6:
        {
            TCGv_i32 VAR27 = FUN15();
            if (VAR62 >= 64)
            {
                FUN20(VAR2);
            }
            FUN8(VAR2, VAR28);
            FUN16(VAR27, VAR25[VAR28]);
            FUN60(VAR2, VAR25[VAR28], VAR62);
            FUN61(VAR2, VAR62, VAR27);
            FUN13(VAR27);
            if (!VAR63[VAR62])
            {
                FUN27();
            }
        }
        break;
            TCGv_i64 VAR27 = FUN62();
            FUN63(VAR27, VAR64);
            VAR65##VAR66##FUN64(VAR67, VAR67, VAR27);
            FUN65(VAR25[VAR19], VAR67);
            FUN66(VAR67);
            FUN66(VAR27);
        }
        while (0)
        case 8:
            FUN38(VAR2, VAR19, VAR29, VAR28);
        {
            TCGv_i64 VAR67 = FUN62();
            FUN67(VAR67, VAR25[VAR28], VAR25[VAR29]);
            FUN68(VAR68);
        }
        break;
    case 9:
        FUN14(VAR2, VAR19, VAR28);
        if (VAR2->VAR69)
        {
            FUN69(VAR25[VAR19], VAR25[VAR28], VAR31[VAR70]);
        }
        else
        {
            TCGv_i64 VAR67 = FUN62();
            FUN63(VAR67, VAR25[VAR28]);
            FUN68(VAR68);
        }
        break;
    case 10:
        FUN14(VAR2, VAR19, VAR29);
        if (VAR2->VAR71)
        {
            FUN23(VAR25[VAR19], VAR25[VAR29], VAR2->VAR72);
        }
        else
        {
            TCGv_i64 VAR67 = FUN62();
            TCGv_i32 VAR73 = FUN10(32);
            FUN58(VAR73, VAR73, VAR31[VAR70]);
            FUN21(VAR73, VAR73, 0x3f);
            FUN63(VAR67, VAR25[VAR29]);
            FUN70(VAR74, VAR73);
            FUN13(VAR73);
        }
        break;
    case 11:
        FUN14(VAR2, VAR19, VAR28);
        if (VAR2->VAR69)
        {
            FUN71(VAR25[VAR19], VAR25[VAR28], VAR31[VAR70]);
        }
        else
        {
            TCGv_i64 VAR67 = FUN62();
            FUN72(VAR67, VAR25[VAR28]);
            FUN68(VAR75);
        }
        break;
    case 12:
        FUN5(VAR76);
        FUN38(VAR2, VAR19, VAR29, VAR28);
        {
            TCGv_i32 VAR77 = FUN15();
            TCGv_i32 VAR78 = FUN15();
            FUN73(VAR77, VAR25[VAR29]);
            FUN73(VAR78, VAR25[VAR28]);
            FUN74(VAR25[VAR19], VAR77, VAR78);
            FUN13(VAR78);
            FUN13(VAR77);
        }
        break;
    case 13:
        FUN5(VAR76);
        FUN38(VAR2, VAR19, VAR29, VAR28);
        {
            TCGv_i32 VAR77 = FUN15();
            TCGv_i32 VAR78 = FUN15();
            FUN75(VAR77, VAR25[VAR29]);
            FUN75(VAR78, VAR25[VAR28]);
            FUN74(VAR25[VAR19], VAR77, VAR78);
            FUN13(VAR78);
            FUN13(VAR77);
        }
        break;
    default:
        FUN7();
        break;
    }
    break;
case 2:
    if (VAR18 >= 8)
    {
        FUN38(VAR2, VAR19, VAR29, VAR28);
    }
    if (VAR18 >= 12)
    {
        FUN5(VAR79);
        int VAR60 = FUN55();
        FUN56(VAR80, VAR25[VAR28], 0, VAR60);
        FUN6(VAR2, VAR81);
        FUN57(VAR60);
    }
    switch (VAR18)
    {
        do
        {
            FUN5(VAR20);
            TCGv_i32 VAR82 = FUN15();
            TCGv_i32 VAR83 = FUN15();
            FUN36(VAR82, VAR31[VAR53], VAR73);
            FUN36(VAR83, VAR31[VAR53], VAR84);
            VAR65##VAR85##FUN76(VAR82, VAR82, VAR83);
            FUN37(VAR31[VAR53], VAR31[VAR53], VAR82, VAR86, 1);
            FUN13(VAR82);
            FUN13(VAR83);
        } while (0) case 0 : FUN77(and, VAR19, VAR29, VAR28);
        break;
    case 1:
        FUN77(VAR87, VAR19, VAR29, VAR28);
        break;
    case 2:
        FUN77(or, VAR19, VAR29, VAR28);
        break;
    case 3:
        FUN77(VAR88, VAR19, VAR29, VAR28);
        break;
    case 4:
        FUN77(xor, VAR19, VAR29, VAR28);
        break;
    case 8:
        FUN5(VAR89);
        FUN74(VAR25[VAR19], VAR25[VAR29], VAR25[VAR28]);
        break;
    case 10:
    case 11:
        FUN5(VAR90);
        {
            TCGv_i64 VAR86 = FUN62();
            TCGv_i64 VAR73 = FUN62();
            TCGv_i64 VAR84 = FUN62();
            if (VAR18 == 10)
            {
                FUN63(VAR73, VAR25[VAR29]);
                FUN63(VAR84, VAR25[VAR28]);
            }
            else
            {
                FUN72(VAR73, VAR25[VAR29]);
                FUN72(VAR84, VAR25[VAR28]);
            }
            FUN78(VAR86, VAR73, VAR84);
            FUN79(VAR86, VAR86, 32);
            FUN65(VAR25[VAR19], VAR86);
            FUN66(VAR86);
            FUN66(VAR73);
            FUN66(VAR84);
        }
        break;
    case 12:
        FUN80(VAR25[VAR19], VAR25[VAR29], VAR25[VAR28]);
        break;
    case 13:
    case 15:
    {
        int VAR91 = FUN55();
        int VAR92 = FUN55();
        FUN56(VAR80, VAR25[VAR29], 0x80000000, VAR91);
        FUN56(VAR80, VAR25[VAR28], 0xffffffff, VAR91);
        FUN17(VAR25[VAR19], VAR18 == 13 ? 0x80000000 : 0);
        FUN81(VAR92);
        FUN57(VAR91);
        if (VAR18 == 13)
        {
            FUN82(VAR25[VAR19], VAR25[VAR29], VAR25[VAR28]);
        }
        else
        {
            FUN83(VAR25[VAR19], VAR25[VAR29], VAR25[VAR28]);
        }
        FUN57(VAR92);
    }
    break;
    case 14:
        FUN84(VAR25[VAR19], VAR25[VAR29], VAR25[VAR28]);
        break;
    default:
        FUN7();
        break;
    }
    break;
case 3:
    switch (VAR18)
    {
    case 0:
        if (VAR62 >= 64)
        {
            FUN20(VAR2);
        }
        FUN8(VAR2, VAR28);
        FUN60(VAR2, VAR25[VAR28], VAR62);
        if (!VAR63[VAR62])
        {
            FUN27();
        }
        break;
    case 1:
        if (VAR62 >= 64)
        {
            FUN20(VAR2);
        }
        FUN8(VAR2, VAR28);
        FUN61(VAR2, VAR62, VAR25[VAR28]);
        if (!VAR63[VAR62])
        {
            FUN27();
        }
        break;
    case 2:
        FUN5(VAR93);
        FUN14(VAR2, VAR19, VAR29);
        {
            int VAR51 = 24 - VAR28;
            if (VAR51 == 24)
            {
                FUN85(VAR25[VAR19], VAR25[VAR29]);
            }
            else if (VAR51 == 16)
            {
                FUN75(VAR25[VAR19], VAR25[VAR29]);
            }
            else
            {
                TCGv_i32 VAR27 = FUN15();
                FUN42(VAR27, VAR25[VAR29], VAR51);
                FUN59(VAR25[VAR19], VAR27, VAR51);
                FUN13(VAR27);
            }
        }
        break;
    case 3:
        FUN5(VAR94);
        FUN14(VAR2, VAR19, VAR29);
        {
            TCGv_i32 VAR82 = FUN15();
            TCGv_i32 VAR83 = FUN15();
            int VAR60 = FUN55();
            FUN59(VAR82, VAR25[VAR29], 24 - VAR28);
            FUN39(VAR83, VAR82, VAR25[VAR29]);
            FUN21(VAR83, VAR83, 0xffffffff << (VAR28 + 7));
            FUN16(VAR25[VAR19], VAR25[VAR29]);
            FUN56(VAR95, VAR83, 0, VAR60);
            FUN59(VAR82, VAR25[VAR29], 31);
            FUN86(VAR25[VAR19], VAR82, 0xffffffff >> (25 - VAR28));
            FUN57(VAR60);
            FUN13(VAR82);
            FUN13(VAR83);
        }
        break;
    case 4:
    case 5:
    case 6:
    case 7:
        FUN5(VAR96);
        FUN38(VAR2, VAR19, VAR29, VAR28);
        {
            static const TCGCond VAR97[] = {VAR98, VAR61, VAR99, VAR100};
            int VAR60 = FUN55();
            if (VAR19 != VAR28)
            {
                FUN16(VAR25[VAR19], VAR25[VAR29]);
                FUN87(VAR97[VAR18 - 4], VAR25[VAR29], VAR25[VAR28], VAR60);
                FUN16(VAR25[VAR19], VAR25[VAR28]);
            }
            else
            {
                FUN87(VAR97[VAR18 - 4], VAR25[VAR28], VAR25[VAR29], VAR60);
                FUN16(VAR25[VAR19], VAR25[VAR29]);
            }
            FUN57(VAR60);
        }
        break;
    case 8:
    case 9:
    case 10:
    case 11:
        FUN38(VAR2, VAR19, VAR29, VAR28);
        {
            static const TCGCond VAR97[] = {VAR80, VAR95, VAR61, VAR101};
            int VAR60 = FUN55();
            FUN56(VAR97[VAR18 - 8], VAR25[VAR28], 0, VAR60);
            FUN16(VAR25[VAR19], VAR25[VAR29]);
            FUN57(VAR60);
        }
        break;
    case 12:
    case 13:
        FUN5(VAR20);
        FUN14(VAR2, VAR19, VAR29);
        {
            int VAR60 = FUN55();
            TCGv_i32 VAR27 = FUN15();
            FUN21(VAR27, VAR31[VAR53], 1 << VAR28);
            FUN56(VAR18 & 1 ? VAR95 : VAR80, VAR27, 0, VAR60);
            FUN16(VAR25[VAR19], VAR25[VAR29]);
            FUN57(VAR60);
            FUN13(VAR27);
        }
        break;
    case 14:
        FUN8(VAR2, VAR19);
        {
            int VAR102 = (VAR29 << 4) + VAR28;
            if (VAR103[VAR102])
            {
                FUN16(VAR25[VAR19], VAR104[VAR102]);
            }
            else
            {
                FUN3("", VAR102);
                FUN27();
            }
        }
        break;
    case 15:
        FUN8(VAR2, VAR28);
        {
            if (VAR103[VAR62])
            {
                FUN16(VAR104[VAR62], VAR25[VAR28]);
            }
            else
            {
                FUN3("", VAR62);
                FUN27();
            }
        }
        break;
    }
    break;
case 4:
case 5:
    FUN14(VAR2, VAR19, VAR28);
    {
        int VAR105 = VAR29 | (VAR17 << 4);
        int VAR106 = (1 << (VAR18 + 1)) - 1;
        TCGv_i32 VAR27 = FUN15();
        FUN36(VAR27, VAR25[VAR28], VAR105);
        FUN21(VAR25[VAR19], VAR27, VAR106);
        FUN13(VAR27);
    }
    break;
case 6:
    FUN7();
    break;
case 7:
    FUN7();
    break;
case 8:
    FUN5(VAR107);
    FUN27();
    break;
case 9:
    FUN14(VAR2, VAR29, VAR28);
    switch (VAR18)
    {
    case 0:
        FUN5(VAR26);
        FUN20(VAR2);
        {
            TCGv_i32 VAR108 = FUN15();
            FUN34(VAR108, VAR25[VAR29], (0xffffffc0 | (VAR19 << 2)));
            FUN88(VAR25[VAR28], VAR108, VAR2->VAR109);
            FUN13(VAR108);
        }
        break;
    case 4:
        FUN5(VAR26);
        FUN20(VAR2);
        {
            TCGv_i32 VAR108 = FUN15();
            FUN34(VAR108, VAR25[VAR29], (0xffffffc0 | (VAR19 << 2)));
            FUN89(VAR25[VAR28], VAR108, VAR2->VAR109);
            FUN13(VAR108);
        }
        break;
    default:
        FUN7();
        break;
    }
    break;
case 10:
    FUN5(VAR110);
    FUN27();
    break;
case 11:
    FUN5(VAR110);
    FUN27();
    break;
default:
    FUN7();
    break;
}
break;
case 1:
FUN8(VAR2, VAR28);
{
    TCGv_i32 VAR27 = FUN10(((VAR2->VAR111->VAR112 & VAR113) ? 0 : ((VAR2->VAR7 + 3) & ~3)) + (0xfffc0000 | (VAR114 << 2)));
    if (VAR2->VAR111->VAR112 & VAR113)
    {
        FUN35(VAR27, VAR27, VAR2->VAR115);
    }
    FUN88(VAR25[VAR28], VAR27, VAR2->VAR116);
    FUN13(VAR27);
}
break;
case 2:
TCGv_i32 VAR108 = FUN15();
FUN14(VAR2, VAR117, VAR118);
FUN34(VAR108, VAR25[VAR117], VAR119 << VAR51);
if (VAR51)
{
    FUN90(VAR2, VAR51, VAR108, false);
}
VAR120##FUN91(VAR25[VAR118], VAR108, VAR2->VAR116);
FUN13(VAR108);
}
while (0)
    switch (VAR121)
    {
    case 0:
        FUN92(VAR122, 0);
        break;
    case 1:
        FUN92(VAR123, 1);
        break;
    case 2:
        FUN92(VAR124, 2);
        break;
    case 4:
        FUN92(VAR125, 0);
        break;
    case 5:
        FUN92(VAR126, 1);
        break;
    case 6:
        FUN92(VAR127, 2);
        break;
    case 7:
        if (VAR118 < 8)
        {
            FUN5(VAR128);
        }
        switch (VAR118)
        {
        case 0:
            break;
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            break;
        case 7:
            break;
        case 8:
            switch (VAR17)
            {
            case 0:
                FUN5(VAR129);
                break;
            case 2:
                FUN5(VAR129);
                break;
            case 3:
                FUN5(VAR129);
                break;
            case 4:
                FUN5(VAR128);
                break;
            case 5:
                FUN5(VAR128);
                break;
            default:
                FUN7();
                break;
            }
            break;
        case 12:
            FUN5(VAR130);
            break;
        case 13:
            switch (VAR17)
            {
            case 0:
                FUN5(VAR131);
                break;
            case 2:
                FUN5(VAR131);
                break;
            case 3:
                FUN5(VAR131);
                break;
            default:
                FUN7();
                break;
            }
            break;
        case 14:
            FUN5(VAR130);
            break;
        case 15:
            FUN5(VAR130);
            break;
        default:
            FUN7();
            break;
        }
        break;
    case 9:
        FUN92(VAR132, 1);
        break;
    case 10:
        FUN8(VAR2, VAR118);
        FUN17(VAR25[VAR118], VAR119 | (VAR117 << 8) | ((VAR117 & 0x8) ? 0xfffff000 : 0));
        break;
        TCGv_i32 VAR108 = FUN93();
        FUN14(VAR2, VAR117, VAR118);
        FUN34(VAR108, VAR25[VAR117], VAR119 << 2);
        FUN90(VAR2, 2, VAR108, true);
        VAR120##FUN91(VAR25[VAR118], VAR108, VAR2->VAR116);
        FUN13(VAR108);
    }
while (0)
case 11:
    FUN5(VAR133);
FUN94(VAR124);
break;
case 12:
FUN14(VAR2, VAR117, VAR118);
FUN34(VAR25[VAR118], VAR25[VAR117], VAR134);
break;
case 13:
FUN14(VAR2, VAR117, VAR118);
FUN34(VAR25[VAR118], VAR25[VAR117], VAR134 << 8);
break;
case 14:
FUN5(VAR135);
FUN14(VAR2, VAR117, VAR118);
{
    int VAR60 = FUN55();
    TCGv_i32 VAR27 = FUN93();
    TCGv_i32 VAR108 = FUN93();
    FUN16(VAR27, VAR25[VAR118]);
    FUN34(VAR108, VAR25[VAR117], VAR119 << 2);
    FUN90(VAR2, 2, VAR108, true);
    FUN88(VAR25[VAR118], VAR108, VAR2->VAR116);
    FUN87(VAR80, VAR25[VAR118], VAR31[VAR136], VAR60);
    FUN89(VAR27, VAR108, VAR2->VAR116);
    FUN57(VAR60);
    FUN13(VAR108);
    FUN13(VAR27);
}
break;
case 15:
FUN5(VAR133);
FUN94(VAR127);
break;
default:
FUN7();
break;
}
break;
case 3:
FUN5(VAR107);
FUN27();
break;
case 4:
FUN5(VAR137);
{
    enum
    {
        VAR138 = 0x0,
        VAR139 = 0x4,
        VAR140 = 0x8,
        VAR141 = 0xc,
        VAR142 = 0xf,
    } VAR143 = VAR17 & 0xc;
    bool VAR144 = (VAR18 & 0x3) == 2;
    bool VAR145 = (VAR18 & 0xc) == 0;
    uint32_t VAR146 = 0;
    if (VAR18 > 9)
    {
        FUN7();
    }
    switch (VAR18 & 2)
    {
    case 0:
        VAR144 = true;
        VAR146 = (VAR18 & 1) ? -4 : 4;
        if (VAR18 >= 8)
        {
            if (VAR17 == 0)
            {
                VAR143 = VAR142;
            }
            else
            {
                FUN7();
            }
        }
        else if (VAR143 != VAR140)
        {
            FUN7();
        }
        break;
    case 2:
        if (VAR143 == VAR138 && VAR18 != 7)
        {
            FUN7();
        }
        break;
    }
    if (VAR143 != VAR142)
    {
        if (!VAR144)
        {
            FUN8(VAR2, VAR29);
        }
        if (!VAR145)
        {
            FUN8(VAR2, VAR28);
        }
    }
    {
        TCGv_i32 VAR147 = FUN15();
        TCGv_i32 VAR148 = FUN15();
        if (VAR146)
        {
            FUN8(VAR2, VAR29);
            FUN34(VAR147, VAR25[VAR29], VAR146);
            FUN90(VAR2, 2, VAR147, false);
            FUN88(VAR148, VAR147, VAR2->VAR116);
        }
        if (VAR143 != VAR142)
        {
            TCGv_i32 VAR149 = FUN95(VAR144 ? VAR31[VAR150 + VAR151] : VAR25[VAR29], VAR17 & 1, VAR143 == VAR138);
            TCGv_i32 VAR152 = FUN95(VAR145 ? VAR31[VAR150 + 2 + VAR153] : VAR25[VAR28], VAR17 & 2, VAR143 == VAR138);
            if (VAR143 == VAR139 || VAR143 == VAR138)
            {
                FUN74(VAR31[VAR154], VAR149, VAR152);
                if (VAR143 == VAR138)
                {
                    FUN17(VAR31[VAR155], 0);
                }
                else
                {
                    FUN59(VAR31[VAR155], VAR31[VAR154], 31);
                }
            }
            else
            {
                TCGv_i32 VAR156 = FUN15();
                TCGv_i64 VAR157 = FUN62();
                TCGv_i64 VAR27 = FUN62();
                FUN74(VAR156, VAR149, VAR152);
                FUN72(VAR157, VAR156);
                FUN67(VAR27, VAR31[VAR154], VAR31[VAR155]);
                if (VAR143 == VAR140)
                {
                    FUN96(VAR27, VAR27, VAR157);
                }
                else
                {
                    FUN97(VAR27, VAR27, VAR157);
                }
                FUN65(VAR31[VAR154], VAR27);
                FUN79(VAR27, VAR27, 32);
                FUN65(VAR31[VAR155], VAR27);
                FUN85(VAR31[VAR155], VAR31[VAR155]);
                FUN13(VAR156);
                FUN66(VAR157);
                FUN66(VAR27);
            }
            FUN13(VAR149);
            FUN13(VAR152);
        }
        if (VAR146)
        {
            FUN16(VAR25[VAR29], VAR147);
            FUN16(VAR31[VAR150 + VAR158], VAR148);
        }
        FUN13(VAR147);
        FUN13(VAR148);
    }
}
break;
case 5:
switch (VAR159)
{
case 0:
    FUN17(VAR25[0], VAR2->VAR15);
    FUN98(VAR2, (VAR2->VAR7 & ~3) + (VAR160 << 2) + 4, 0);
    break;
case 1:
case 2:
case 3:
    FUN5(VAR26);
    FUN8(VAR2, VAR159 << 2);
    FUN99(VAR2, VAR159, (VAR2->VAR7 & ~3) + (VAR160 << 2) + 4, 0);
    break;
}
break;
case 6:
switch (VAR159)
{
case 0:
    FUN98(VAR2, VAR2->VAR7 + 4 + VAR160, 0);
    break;
case 1:
    FUN8(VAR2, VAR161);
    {
        static const TCGCond VAR97[] = {
            VAR95,
            VAR80,
            VAR101,
            VAR61,
        };
        FUN100(VAR2, VAR97[VAR162 & 3], VAR25[VAR161], 0, 4 + VAR163);
    }
    break;
case 2:
    FUN8(VAR2, VAR164);
    {
        static const TCGCond VAR97[] = {
            VAR95,
            VAR80,
            VAR101,
            VAR61,
        };
        FUN100(VAR2, VAR97[VAR165 & 3], VAR25[VAR164], VAR12[VAR166], 4 + VAR167);
    }
    break;
case 3:
    switch (VAR165)
    {
    case 0:
        FUN5(VAR26);
        {
            TCGv_i32 VAR7 = FUN10(VAR2->VAR7);
            TCGv_i32 VAR73 = FUN10(VAR161);
            TCGv_i32 VAR168 = FUN10(VAR169);
            FUN11(VAR2);
            FUN101(VAR7, VAR73, VAR168);
            FUN13(VAR168);
            FUN13(VAR73);
            FUN13(VAR7);
            FUN44(VAR2);
        }
        break;
    case 1:
        switch (VAR166)
        {
        case 0:
        case 1:
            FUN5(VAR20);
            {
                TCGv_i32 VAR27 = FUN15();
                FUN21(VAR27, VAR31[VAR53], 1 << VAR117);
                FUN100(VAR2, VAR166 == 1 ? VAR80 : VAR95, VAR27, 0, 4 + VAR134);
                FUN13(VAR27);
            }
            break;
        case 8:
        case 9:
        case 10:
            FUN5(VAR170);
            FUN8(VAR2, VAR117);
            {
                uint32_t VAR171 = VAR2->VAR7 + VAR119 + 4;
                TCGv_i32 VAR27 = FUN10(VAR171);
                FUN102(VAR31[VAR172], VAR25[VAR117], 1);
                FUN17(VAR31[VAR173], VAR2->VAR15);
                FUN103(VAR27);
                FUN13(VAR27);
                if (VAR166 > 8)
                {
                    int VAR60 = FUN55();
                    FUN56(VAR166 == 9 ? VAR80 : VAR174, VAR25[VAR117], 0, VAR60);
                    FUN98(VAR2, VAR171, 1);
                    FUN57(VAR60);
                }
                FUN98(VAR2, VAR2->VAR15, 0);
            }
            break;
        default:
            FUN7();
            break;
        }
        break;
    case 2:
    case 3:
        FUN8(VAR2, VAR164);
        FUN100(VAR2, VAR165 == 2 ? VAR175 : VAR100, VAR25[VAR164], VAR13[VAR166], 4 + VAR167);
        break;
    }
    break;
}
break;
case 7:
{
    TCGCond VAR176 = (VAR121 & 8) ? VAR80 : VAR95;
    switch (VAR121 & 7)
    {
    case 0:
        FUN14(VAR2, VAR117, VAR118);
        {
            TCGv_i32 VAR27 = FUN15();
            FUN33(VAR27, VAR25[VAR117], VAR25[VAR118]);
            FUN100(VAR2, VAR176, VAR27, 0, 4 + VAR134);
            FUN13(VAR27);
        }
        break;
    case 1:
    case 2:
    case 3:
        FUN14(VAR2, VAR117, VAR118);
        {
            static const TCGCond VAR97[] = {
                [1] = VAR95,
                [2] = VAR101,
                [3] = VAR175,
                [9] = VAR80,
                [10] = VAR61,
                [11] = VAR100,
            };
            FUN104(VAR2, VAR97[VAR121], VAR25[VAR117], VAR25[VAR118], 4 + VAR134);
        }
        break;
    case 4:
        FUN14(VAR2, VAR117, VAR118);
        {
            TCGv_i32 VAR27 = FUN15();
            FUN33(VAR27, VAR25[VAR117], VAR25[VAR118]);
            FUN104(VAR2, VAR176, VAR27, VAR25[VAR118], 4 + VAR134);
            FUN13(VAR27);
        }
        break;
    case 5:
        FUN14(VAR2, VAR117, VAR118);
        {
            TCGv_i32 VAR177 = FUN10(1);
            TCGv_i32 VAR27 = FUN15();
            FUN21(VAR27, VAR25[VAR118], 0x1f);
            FUN23(VAR177, VAR177, VAR27);
            FUN33(VAR27, VAR25[VAR117], VAR177);
            FUN100(VAR2, VAR176, VAR27, 0, 4 + VAR134);
            FUN13(VAR27);
            FUN13(VAR177);
        }
        break;
    case 6:
    case 7:
        FUN8(VAR2, VAR117);
        {
            TCGv_i32 VAR27 = FUN15();
            FUN21(VAR27, VAR25[VAR117], 1 << (((VAR121 & 1) << 4) | VAR118));
            FUN100(VAR2, VAR176, VAR27, 0, 4 + VAR134);
            FUN13(VAR27);
        }
        break;
    }
}
break;
TCGv_i32 VAR108 = FUN15();
FUN14(VAR2, VAR178, VAR179);
FUN34(VAR108, VAR25[VAR178], VAR180 << 2);
FUN90(VAR2, 2, VAR108, false);
VAR120##FUN91(VAR25[VAR179], VAR108, VAR2->VAR116);
FUN13(VAR108);
}
while (0)
case 8:
    FUN105(VAR124);
break;
case 9:
FUN105(VAR127);
break;
case 10:
FUN38(VAR2, VAR180, VAR178, VAR179);
FUN35(VAR25[VAR180], VAR25[VAR178], VAR25[VAR179]);
break;
case 11:
FUN14(VAR2, VAR180, VAR178);
FUN34(VAR25[VAR180], VAR25[VAR178], VAR179 ? VAR179 : -1);
break;
case 12:
FUN8(VAR2, VAR178);
if (VAR179 < 8)
{
    FUN17(VAR25[VAR178], VAR180 | (VAR179 << 4) | ((VAR179 & 6) == 6 ? 0xffffff80 : 0));
}
else
{
    TCGCond VAR176 = (VAR179 & 4) ? VAR80 : VAR95;
    FUN100(VAR2, VAR176, VAR25[VAR178], 0, 4 + (VAR180 | ((VAR179 & 3) << 4)));
}
break;
case 13:
switch (VAR180)
{
case 0:
    FUN14(VAR2, VAR178, VAR179);
    FUN16(VAR25[VAR179], VAR25[VAR178]);
    break;
case 15:
    switch (VAR179)
    {
    case 0:
        FUN9(VAR2, VAR25[0]);
        break;
    case 1:
        FUN5(VAR26);
        {
            TCGv_i32 VAR27 = FUN10(VAR2->VAR7);
            FUN11(VAR2);
            FUN12(VAR27, VAR27);
            FUN9(VAR2, VAR27);
            FUN13(VAR27);
        }
        break;
    case 2:
        FUN5(VAR44);
        if (VAR2->VAR45)
        {
            FUN28(VAR2, VAR181);
        }
        break;
    case 3:
        break;
    case 6:
        FUN6(VAR2, VAR22);
        break;
    default:
        FUN7();
        break;
    }
    break;
default:
    FUN7();
    break;
}
break;
default:
FUN7();
break;
}
FUN106(VAR2, 0);
VAR2->VAR7 = VAR2->VAR15;
return;
VAR6 : FUN3("", VAR2->VAR7);
FUN6(VAR2, VAR22);
}