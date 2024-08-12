static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    if (!FUN2(VAR4, VAR5))
    {
        FUN3("", VAR6, VAR7);
        goto VAR8;
    }
}
while (0)
    FUN3("", VAR4->VAR9, VAR10, VAR11, VAR12, VAR6, VAR7);
goto VAR8;
}
while (0)
    (((VAR13 & 0x20000) ? 0xfffc0000 : 0) | VAR13) uint8_t VAR10 = FUN4(VAR2, VAR4->VAR9);
uint8_t VAR11 = FUN4(VAR2, VAR4->VAR9 + 1);
uint8_t VAR12 = 0;
unsigned VAR14 = FUN5(VAR15);
static const uint32_t VAR16[] = {0xffffffff, 1, 2, 3, 4, 5, 6, 7, 8, 10, 12, 16, 32, 64, 128, 256};
static const uint32_t VAR17[] = {32768, 65536, 2, 3, 4, 5, 6, 7, 8, 10, 12, 16, 32, 64, 128, 256};
switch (VAR14)
{
case 2:
    FUN6(VAR18);
    break;
case 3:
    VAR12 = FUN4(VAR2, VAR4->VAR9 + 2);
    break;
default:
    FUN7();
}
VAR4->VAR19 = VAR4->VAR9 + VAR14;
switch (VAR15)
{
case 0:
    switch (VAR20)
    {
    case 0:
        switch (VAR21)
        {
        case 0:
            if ((VAR22 & 0xc) == 0x8)
            {
                FUN6(VAR23);
            }
            switch (VAR22)
            {
            case 0:
                switch (VAR24)
                {
                case 0:
                    FUN8(VAR4, VAR25);
                    break;
                case 1:
                    FUN7();
                    break;
                case 2:
                    switch (VAR26)
                    {
                    case 0:
                    case 2:
                        if (FUN9(VAR4, VAR27))
                        {
                            FUN10(VAR4, VAR28[VAR27]);
                        }
                        break;
                    case 1:
                        FUN6(VAR29);
                        {
                            TCGv_i32 VAR30 = FUN11(VAR4->VAR9);
                            FUN12(VAR4);
                            FUN13(VAR30, VAR31, VAR30);
                            FUN10(VAR4, VAR30);
                            FUN14(VAR30);
                        }
                        break;
                    case 3:
                        FUN7();
                        break;
                    }
                    break;
                case 3:
                    if (!FUN15(VAR4, VAR27, VAR26 << 2))
                    {
                        break;
                    }
                    switch (VAR26)
                    {
                    case 0:
                    {
                        TCGv_i32 VAR30 = FUN16();
                        FUN17(VAR30, VAR28[VAR27]);
                        FUN18(VAR28[0], VAR4->VAR19);
                        FUN10(VAR4, VAR30);
                        FUN14(VAR30);
                    }
                    break;
                    case 1:
                    case 2:
                    case 3:
                        FUN6(VAR29);
                        {
                            TCGv_i32 VAR30 = FUN16();
                            FUN17(VAR30, VAR28[VAR27]);
                            FUN19(VAR4, VAR26, VAR30);
                            FUN14(VAR30);
                        }
                        break;
                    }
                    break;
                }
                break;
            case 1:
                FUN6(VAR29);
                if (FUN15(VAR4, VAR32, VAR33))
                {
                    TCGv_i32 VAR9 = FUN11(VAR4->VAR9);
                    FUN12(VAR4);
                    FUN20(VAR31, VAR9);
                    FUN17(VAR28[VAR32], VAR28[VAR33]);
                    FUN14(VAR9);
                }
                break;
            case 2:
                switch (VAR32)
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
                    FUN6(VAR34);
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
                switch (VAR32)
                {
                case 0:
                    FUN6(VAR34);
                    switch (VAR33)
                    {
                    case 0:
                        if (FUN21(VAR4))
                        {
                            FUN22(VAR35[VAR36], VAR35[VAR36], ~VAR37);
                            FUN23(VAR31);
                            FUN10(VAR4, VAR35[VAR38]);
                        }
                        break;
                    case 1:
                        FUN7();
                        break;
                    case 2:
                        if (FUN21(VAR4))
                        {
                            FUN10(VAR4, VAR35[VAR4->VAR39->VAR40 ? VAR41 : VAR38]);
                        }
                        break;
                    case 4:
                    case 5:
                        FUN6(VAR29);
                        if (FUN21(VAR4))
                        {
                            TCGv_i32 VAR30 = FUN11(1);
                            FUN22(VAR35[VAR36], VAR35[VAR36], ~VAR37);
                            FUN24(VAR30, VAR30, VAR35[VAR42]);
                            if (VAR33 == 4)
                            {
                                FUN25(VAR35[VAR43], VAR35[VAR43], VAR30);
                            }
                            else
                            {
                                FUN26(VAR35[VAR43], VAR35[VAR43], VAR30);
                            }
                            FUN27(VAR31);
                            FUN23(VAR31);
                            FUN10(VAR4, VAR35[VAR38]);
                            FUN14(VAR30);
                        }
                        break;
                    default:
                        FUN7();
                        break;
                    }
                    break;
                case 1:
                    FUN6(VAR44);
                    if (VAR33 >= 2 && VAR33 <= VAR4->VAR39->VAR45)
                    {
                        if (FUN21(VAR4))
                        {
                            FUN17(VAR35[VAR36], VAR35[VAR46 + VAR33 - 2]);
                            FUN23(VAR31);
                            FUN10(VAR4, VAR35[VAR38 + VAR33 - 1]);
                        }
                    }
                    else
                    {
                        FUN3("", VAR33);
                        FUN8(VAR4, VAR25);
                    }
                    break;
                case 2:
                    FUN28();
                    break;
                default:
                    FUN7();
                    break;
                }
                break;
            case 4:
                FUN6(VAR47);
                if (VAR4->VAR48)
                {
                    FUN29(VAR4, VAR49);
                }
                break;
            case 5:
                FUN6(VAR34);
                switch (VAR33)
                {
                case 0:
                    FUN8(VAR4, VAR50);
                    break;
                case 1:
                    if (VAR51)
                    {
                        if (FUN21(VAR4))
                        {
                            FUN30(VAR31);
                        }
                    }
                    else
                    {
                        FUN3("");
                        FUN8(VAR4, VAR25);
                    }
                    break;
                default:
                    FUN7();
                    break;
                }
                break;
            case 6:
                FUN6(VAR52);
                if (FUN21(VAR4) && FUN9(VAR4, VAR32))
                {
                    FUN17(VAR28[VAR32], VAR35[VAR36]);
                    FUN22(VAR35[VAR36], VAR35[VAR36], ~VAR53);
                    FUN31(VAR35[VAR36], VAR35[VAR36], VAR33);
                    FUN23(VAR31);
                    FUN32(VAR4, 0);
                }
                break;
            case 7:
                FUN6(VAR52);
                if (FUN21(VAR4))
                {
                    FUN33(VAR4, VAR33);
                }
                break;
            case 8:
            case 9:
            case 10:
            case 11:
                FUN6(VAR23);
                {
                    const unsigned VAR54 = (VAR22 & 2) ? 8 : 4;
                    TCGv_i32 VAR55 = FUN11(((1 << VAR54) - 1) << VAR33);
                    TCGv_i32 VAR30 = FUN16();
                    FUN34(VAR30, VAR35[VAR56], VAR55);
                    if (VAR22 & 1)
                    {
                        FUN35(VAR30, VAR30, 1 << VAR33);
                    }
                    else
                    {
                        FUN36(VAR30, VAR30, VAR55);
                    }
                    FUN37(VAR30, VAR30, VAR33 + VAR54);
                    FUN38(VAR35[VAR56], VAR35[VAR56], VAR30, VAR32, 1);
                    FUN14(VAR55);
                    FUN14(VAR30);
                }
                break;
            default:
                FUN7();
                break;
            }
            break;
        case 1:
            if (FUN39(VAR4, VAR22, VAR33, VAR32))
            {
                FUN34(VAR28[VAR22], VAR28[VAR33], VAR28[VAR32]);
            }
            break;
        case 2:
            if (FUN39(VAR4, VAR22, VAR33, VAR32))
            {
                FUN26(VAR28[VAR22], VAR28[VAR33], VAR28[VAR32]);
            }
            break;
        case 3:
            if (FUN39(VAR4, VAR22, VAR33, VAR32))
            {
                FUN40(VAR28[VAR22], VAR28[VAR33], VAR28[VAR32]);
            }
            break;
        case 4:
            switch (VAR22)
            {
            case 0:
                if (FUN9(VAR4, VAR33))
                {
                    FUN41(VAR4, VAR28[VAR33]);
                }
                break;
            case 1:
                if (FUN9(VAR4, VAR33))
                {
                    FUN42(VAR4, VAR28[VAR33]);
                }
                break;
            case 2:
                if (FUN9(VAR4, VAR33))
                {
                    TCGv_i32 VAR30 = FUN16();
                    FUN43(VAR30, VAR28[VAR33], 3);
                    FUN41(VAR4, VAR30);
                    FUN14(VAR30);
                }
                break;
            case 3:
                if (FUN9(VAR4, VAR33))
                {
                    TCGv_i32 VAR30 = FUN16();
                    FUN43(VAR30, VAR28[VAR33], 3);
                    FUN42(VAR4, VAR30);
                    FUN14(VAR30);
                }
                break;
            case 4:
            {
                TCGv_i32 VAR30 = FUN11(VAR33 | ((VAR32 & 1) << 4));
                FUN41(VAR4, VAR30);
                FUN14(VAR30);
            }
            break;
            case 6:
                FUN28();
                break;
            case 7:
                FUN28();
                break;
            case 8:
                FUN6(VAR29);
                if (FUN21(VAR4))
                {
                    TCGv_i32 VAR30 = FUN11(VAR32 | ((VAR32 & 8) ? 0xfffffff0 : 0));
                    FUN44(VAR31, VAR30);
                    FUN14(VAR30);
                    FUN32(VAR4, -1);
                }
                break;
            case 14:
                FUN6(VAR57);
                if (FUN15(VAR4, VAR33, VAR32))
                {
                    FUN45(VAR28[VAR32], VAR28[VAR33]);
                }
                break;
            case 15:
                FUN6(VAR57);
                if (FUN15(VAR4, VAR33, VAR32))
                {
                    FUN46(VAR28[VAR32], VAR28[VAR33]);
                }
                break;
            default:
                FUN7();
                break;
            }
            break;
        case 5:
            FUN47(FUN48(VAR58) | FUN48(VAR59) | FUN48(VAR60));
            if (FUN21(VAR4) && FUN15(VAR4, VAR33, VAR32))
            {
                TCGv_i32 VAR61 = FUN11((VAR22 & 8) != 0);
                switch (VAR22 & 7)
                {
                case 3:
                    FUN49(VAR28[VAR32], VAR31, VAR28[VAR33], VAR61);
                    break;
                case 4:
                    FUN50(VAR31, VAR28[VAR33], VAR61);
                    FUN32(VAR4, -1);
                    break;
                case 5:
                    FUN18(VAR62, VAR4->VAR9);
                    FUN51(VAR28[VAR32], VAR31, VAR28[VAR33], VAR61);
                    break;
                case 6:
                    FUN52(VAR31, VAR28[VAR32], VAR28[VAR33], VAR61);
                    FUN32(VAR4, -1);
                    break;
                case 7:
                    FUN53(VAR28[VAR32], VAR31, VAR28[VAR33], VAR61);
                    break;
                default:
                    FUN14(VAR61);
                    FUN7();
                    break;
                }
                FUN14(VAR61);
            }
            break;
        case 6:
            if (!FUN15(VAR4, VAR22, VAR32))
            {
                break;
            }
            switch (VAR33)
            {
            case 0:
                FUN54(VAR28[VAR22], VAR28[VAR32]);
                break;
            case 1:
            {
                TCGv_i32 VAR63 = FUN11(0);
                TCGv_i32 VAR64 = FUN16();
                FUN54(VAR64, VAR28[VAR32]);
                FUN55(VAR65, VAR28[VAR22], VAR28[VAR32], VAR63, VAR28[VAR32], VAR64);
                FUN14(VAR64);
                FUN14(VAR63);
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
            if (FUN39(VAR4, VAR22, VAR33, VAR32))
            {
                FUN36(VAR28[VAR22], VAR28[VAR33], VAR28[VAR32]);
            }
            break;
        case 9:
        case 10:
        case 11:
            if (FUN39(VAR4, VAR22, VAR33, VAR32))
            {
                TCGv_i32 VAR30 = FUN16();
                FUN43(VAR30, VAR28[VAR33], VAR21 - 8);
                FUN36(VAR28[VAR22], VAR30, VAR28[VAR32]);
                FUN14(VAR30);
            }
            break;
        case 12:
            if (FUN39(VAR4, VAR22, VAR33, VAR32))
            {
                FUN56(VAR28[VAR22], VAR28[VAR33], VAR28[VAR32]);
            }
            break;
        case 13:
        case 14:
        case 15:
            if (FUN39(VAR4, VAR22, VAR33, VAR32))
            {
                TCGv_i32 VAR30 = FUN16();
                FUN43(VAR30, VAR28[VAR33], VAR21 - 12);
                FUN56(VAR28[VAR22], VAR30, VAR28[VAR32]);
                FUN14(VAR30);
            }
            break;
        }
        break;
    case 1:
        switch (VAR21)
        {
        case 0:
        case 1:
            if (FUN15(VAR4, VAR22, VAR33))
            {
                FUN43(VAR28[VAR22], VAR28[VAR33], 32 - (VAR32 | ((VAR21 & 1) << 4)));
            }
            break;
        case 2:
        case 3:
            if (FUN15(VAR4, VAR22, VAR32))
            {
                FUN57(VAR28[VAR22], VAR28[VAR32], VAR33 | ((VAR21 & 1) << 4));
            }
            break;
        case 4:
            if (FUN15(VAR4, VAR22, VAR32))
            {
                FUN37(VAR28[VAR22], VAR28[VAR32], VAR33);
            }
            break;
        case 6:
            if (FUN58(VAR4, VAR66, VAR67) && (VAR66 < 64 || FUN21(VAR4)) && FUN9(VAR4, VAR32))
            {
                TCGv_i32 VAR30 = FUN16();
                FUN17(VAR30, VAR28[VAR32]);
                FUN59(VAR4, VAR28[VAR32], VAR66);
                FUN60(VAR4, VAR66, VAR30);
                FUN14(VAR30);
            }
            break;
            TCGv_i64 VAR30 = FUN61();
            FUN62(VAR30, VAR68);
            VAR69##VAR70##FUN63(VAR71, VAR71, VAR30);
            FUN64(VAR28[VAR22], VAR71);
            FUN65(VAR71);
            FUN65(VAR30);
        }
        while (0)
        case 8:
            if (FUN39(VAR4, VAR22, VAR33, VAR32))
            {
                TCGv_i64 VAR71 = FUN61();
                FUN66(VAR71, VAR28[VAR32], VAR28[VAR33]);
                FUN67(VAR72);
            }
        break;
    case 9:
        if (!FUN15(VAR4, VAR22, VAR32))
        {
            break;
        }
        if (VAR4->VAR73)
        {
            FUN68(VAR28[VAR22], VAR28[VAR32], VAR35[VAR74]);
        }
        else
        {
            TCGv_i64 VAR71 = FUN61();
            FUN62(VAR71, VAR28[VAR32]);
            FUN67(VAR72);
        }
        break;
    case 10:
        if (!FUN15(VAR4, VAR22, VAR33))
        {
            break;
        }
        if (VAR4->VAR75)
        {
            FUN24(VAR28[VAR22], VAR28[VAR33], VAR4->VAR76);
        }
        else
        {
            TCGv_i64 VAR71 = FUN61();
            TCGv_i32 VAR77 = FUN11(32);
            FUN56(VAR77, VAR77, VAR35[VAR74]);
            FUN22(VAR77, VAR77, 0x3f);
            FUN62(VAR71, VAR28[VAR33]);
            FUN69(VAR78, VAR77);
            FUN14(VAR77);
        }
        break;
    case 11:
        if (!FUN15(VAR4, VAR22, VAR32))
        {
            break;
        }
        if (VAR4->VAR73)
        {
            FUN70(VAR28[VAR22], VAR28[VAR32], VAR35[VAR74]);
        }
        else
        {
            TCGv_i64 VAR71 = FUN61();
            FUN71(VAR71, VAR28[VAR32]);
            FUN67(VAR79);
        }
        break;
    case 12:
        FUN6(VAR80);
        if (FUN39(VAR4, VAR22, VAR33, VAR32))
        {
            TCGv_i32 VAR81 = FUN16();
            TCGv_i32 VAR82 = FUN16();
            FUN72(VAR81, VAR28[VAR33]);
            FUN72(VAR82, VAR28[VAR32]);
            FUN73(VAR28[VAR22], VAR81, VAR82);
            FUN14(VAR82);
            FUN14(VAR81);
        }
        break;
    case 13:
        FUN6(VAR80);
        if (FUN39(VAR4, VAR22, VAR33, VAR32))
        {
            TCGv_i32 VAR81 = FUN16();
            TCGv_i32 VAR82 = FUN16();
            FUN74(VAR81, VAR28[VAR33]);
            FUN74(VAR82, VAR28[VAR32]);
            FUN73(VAR28[VAR22], VAR81, VAR82);
            FUN14(VAR82);
            FUN14(VAR81);
        }
        break;
    default:
        FUN7();
        break;
    }
    break;
case 2:
    if (VAR21 >= 8 && !FUN39(VAR4, VAR22, VAR33, VAR32))
    {
        break;
    }
    if (VAR21 >= 12)
    {
        FUN6(VAR83);
        VAR84 *VAR85 = FUN75();
        FUN76(VAR86, VAR28[VAR32], 0, VAR85);
        FUN8(VAR4, VAR87);
        FUN77(VAR85);
    }
    switch (VAR21)
    {
        do
        {
            FUN6(VAR23);
            TCGv_i32 VAR88 = FUN16();
            TCGv_i32 VAR89 = FUN16();
            FUN37(VAR88, VAR35[VAR56], VAR77);
            FUN37(VAR89, VAR35[VAR56], VAR90);
            VAR69##VAR91##FUN78(VAR88, VAR88, VAR89);
            FUN38(VAR35[VAR56], VAR35[VAR56], VAR88, VAR92, 1);
            FUN14(VAR88);
            FUN14(VAR89);
        } while (0) case 0 : FUN79(and, VAR22, VAR33, VAR32);
        break;
    case 1:
        FUN79(VAR93, VAR22, VAR33, VAR32);
        break;
    case 2:
        FUN79(or, VAR22, VAR33, VAR32);
        break;
    case 3:
        FUN79(VAR94, VAR22, VAR33, VAR32);
        break;
    case 4:
        FUN79(xor, VAR22, VAR33, VAR32);
        break;
    case 8:
        FUN6(VAR95);
        FUN73(VAR28[VAR22], VAR28[VAR33], VAR28[VAR32]);
        break;
    case 10:
    case 11:
        FUN6(VAR96);
        {
            TCGv VAR97 = FUN80();
            if (VAR21 == 10)
            {
                FUN81(VAR97, VAR28[VAR22], VAR28[VAR33], VAR28[VAR32]);
            }
            else
            {
                FUN82(VAR97, VAR28[VAR22], VAR28[VAR33], VAR28[VAR32]);
            }
            FUN14(VAR97);
        }
        break;
    case 12:
        FUN83(VAR28[VAR22], VAR28[VAR33], VAR28[VAR32]);
        break;
    case 13:
    case 15:
    {
        VAR84 *VAR98 = FUN75();
        VAR84 *VAR99 = FUN75();
        FUN76(VAR86, VAR28[VAR33], 0x80000000, VAR98);
        FUN76(VAR86, VAR28[VAR32], 0xffffffff, VAR98);
        FUN18(VAR28[VAR22], VAR21 == 13 ? 0x80000000 : 0);
        FUN84(VAR99);
        FUN77(VAR98);
        if (VAR21 == 13)
        {
            FUN85(VAR28[VAR22], VAR28[VAR33], VAR28[VAR32]);
        }
        else
        {
            FUN86(VAR28[VAR22], VAR28[VAR33], VAR28[VAR32]);
        }
        FUN77(VAR99);
    }
    break;
    case 14:
        FUN87(VAR28[VAR22], VAR28[VAR33], VAR28[VAR32]);
        break;
    default:
        FUN7();
        break;
    }
    break;
case 3:
    switch (VAR21)
    {
    case 0:
        if (FUN58(VAR4, VAR66, VAR100) && (VAR66 < 64 || FUN21(VAR4)) && FUN9(VAR4, VAR32))
        {
            FUN59(VAR4, VAR28[VAR32], VAR66);
        }
        break;
    case 1:
        if (FUN58(VAR4, VAR66, VAR101) && (VAR66 < 64 || FUN21(VAR4)) && FUN9(VAR4, VAR32))
        {
            FUN60(VAR4, VAR66, VAR28[VAR32]);
        }
        break;
    case 2:
        FUN6(VAR102);
        if (FUN15(VAR4, VAR22, VAR33))
        {
            int VAR54 = 24 - VAR32;
            if (VAR54 == 24)
            {
                FUN88(VAR28[VAR22], VAR28[VAR33]);
            }
            else if (VAR54 == 16)
            {
                FUN74(VAR28[VAR22], VAR28[VAR33]);
            }
            else
            {
                TCGv_i32 VAR30 = FUN16();
                FUN43(VAR30, VAR28[VAR33], VAR54);
                FUN57(VAR28[VAR22], VAR30, VAR54);
                FUN14(VAR30);
            }
        }
        break;
    case 3:
        FUN6(VAR103);
        if (FUN15(VAR4, VAR22, VAR33))
        {
            TCGv_i32 VAR88 = FUN16();
            TCGv_i32 VAR89 = FUN16();
            TCGv_i32 VAR63 = FUN11(0);
            FUN57(VAR88, VAR28[VAR33], 24 - VAR32);
            FUN40(VAR89, VAR88, VAR28[VAR33]);
            FUN22(VAR89, VAR89, 0xffffffff << (VAR32 + 7));
            FUN57(VAR88, VAR28[VAR33], 31);
            FUN89(VAR88, VAR88, 0xffffffff >> (25 - VAR32));
            FUN55(VAR104, VAR28[VAR22], VAR89, VAR63, VAR28[VAR33], VAR88);
            FUN14(VAR88);
            FUN14(VAR89);
            FUN14(VAR63);
        }
        break;
    case 4:
    case 5:
    case 6:
    case 7:
        FUN6(VAR105);
        if (FUN39(VAR4, VAR22, VAR33, VAR32))
        {
            static const TCGCond VAR106[] = {VAR107, VAR65, VAR108, VAR109};
            FUN55(VAR106[VAR21 - 4], VAR28[VAR22], VAR28[VAR33], VAR28[VAR32], VAR28[VAR33], VAR28[VAR32]);
        }
        break;
    case 8:
    case 9:
    case 10:
    case 11:
        if (FUN39(VAR4, VAR22, VAR33, VAR32))
        {
            static const TCGCond VAR106[] = {
                VAR104,
                VAR86,
                VAR110,
                VAR65,
            };
            TCGv_i32 VAR63 = FUN11(0);
            FUN55(VAR106[VAR21 - 8], VAR28[VAR22], VAR28[VAR32], VAR63, VAR28[VAR33], VAR28[VAR22]);
            FUN14(VAR63);
        }
        break;
    case 12:
    case 13:
        FUN6(VAR23);
        if (FUN15(VAR4, VAR22, VAR33))
        {
            TCGv_i32 VAR63 = FUN11(0);
            TCGv_i32 VAR30 = FUN16();
            FUN22(VAR30, VAR35[VAR56], 1 << VAR32);
            FUN55(VAR21 & 1 ? VAR86 : VAR104, VAR28[VAR22], VAR30, VAR63, VAR28[VAR33], VAR28[VAR22]);
            FUN14(VAR30);
            FUN14(VAR63);
        }
        break;
    case 14:
        if (FUN9(VAR4, VAR22))
        {
            int VAR111 = (VAR33 << 4) + VAR32;
            if (VAR112[VAR111].VAR113)
            {
                FUN17(VAR28[VAR22], VAR114[VAR111]);
            }
            else
            {
                FUN3("", VAR111);
                FUN28();
            }
        }
        break;
    case 15:
        if (FUN9(VAR4, VAR32))
        {
            if (VAR112[VAR66].VAR113)
            {
                FUN90(VAR66, VAR28[VAR32]);
            }
            else
            {
                FUN3("", VAR66);
                FUN28();
            }
        }
        break;
    }
    break;
case 4:
case 5:
    if (FUN15(VAR4, VAR22, VAR32))
    {
        int VAR115 = VAR33 | ((VAR20 & 1) << 4);
        int VAR116 = (1 << (VAR21 + 1)) - 1;
        TCGv_i32 VAR30 = FUN16();
        FUN37(VAR30, VAR28[VAR32], VAR115);
        FUN22(VAR28[VAR22], VAR30, VAR116);
        FUN14(VAR30);
    }
    break;
case 6:
    FUN7();
    break;
case 7:
    FUN7();
    break;
case 8:
    switch (VAR21)
    {
    case 0:
    case 1:
    case 4:
    case 5:
        FUN6(VAR117);
        if (FUN15(VAR4, VAR33, VAR32) && FUN91(VAR4, 0))
        {
            TCGv_i32 VAR118 = FUN16();
            FUN36(VAR118, VAR28[VAR33], VAR28[VAR32]);
            FUN92(VAR4, 2, VAR118, false);
            if (VAR21 & 0x4)
            {
                FUN93(VAR119[VAR22], VAR118, VAR4->VAR120);
            }
            else
            {
                FUN94(VAR119[VAR22], VAR118, VAR4->VAR120);
            }
            if (VAR21 & 0x1)
            {
                FUN17(VAR28[VAR33], VAR118);
            }
            FUN14(VAR118);
        }
        break;
    default:
        FUN7();
        break;
    }
    break;
case 9:
    if (!FUN15(VAR4, VAR33, VAR32))
    {
        break;
    }
    switch (VAR21)
    {
    case 0:
        FUN6(VAR29);
        if (FUN21(VAR4))
        {
            TCGv_i32 VAR118 = FUN16();
            FUN35(VAR118, VAR28[VAR33], (0xffffffc0 | (VAR22 << 2)));
            FUN94(VAR28[VAR32], VAR118, VAR4->VAR121);
            FUN14(VAR118);
        }
        break;
    case 4:
        FUN6(VAR29);
        if (FUN21(VAR4))
        {
            TCGv_i32 VAR118 = FUN16();
            FUN35(VAR118, VAR28[VAR33], (0xffffffc0 | (VAR22 << 2)));
            FUN93(VAR28[VAR32], VAR118, VAR4->VAR121);
            FUN14(VAR118);
        }
        break;
    default:
        FUN7();
        break;
    }
    break;
case 10:
    FUN6(VAR117);
    switch (VAR21)
    {
    case 0:
        if (FUN91(VAR4, 0))
        {
            FUN95(VAR119[VAR22], VAR31, VAR119[VAR33], VAR119[VAR32]);
        }
        break;
    case 1:
        if (FUN91(VAR4, 0))
        {
            FUN96(VAR119[VAR22], VAR31, VAR119[VAR33], VAR119[VAR32]);
        }
        break;
    case 2:
        if (FUN91(VAR4, 0))
        {
            FUN97(VAR119[VAR22], VAR31, VAR119[VAR33], VAR119[VAR32]);
        }
        break;
    case 4:
        if (FUN91(VAR4, 0))
        {
            FUN98(VAR119[VAR22], VAR31, VAR119[VAR22], VAR119[VAR33], VAR119[VAR32]);
        }
        break;
    case 5:
        if (FUN91(VAR4, 0))
        {
            FUN99(VAR119[VAR22], VAR31, VAR119[VAR22], VAR119[VAR33], VAR119[VAR32]);
        }
        break;
    case 8:
    case 9:
    case 10:
    case 11:
    case 14:
        if (FUN9(VAR4, VAR22) && FUN91(VAR4, 0))
        {
            static const unsigned VAR122[] = {
                VAR123,
                VAR124,
                VAR125,
                VAR126,
                [6] = VAR124,
            };
            TCGv_i32 VAR127 = FUN11(VAR122[VAR21 & 7]);
            TCGv_i32 VAR128 = FUN11(VAR32);
            if (VAR21 == 14)
            {
                FUN100(VAR28[VAR22], VAR119[VAR33], VAR127, VAR128);
            }
            else
            {
                FUN101(VAR28[VAR22], VAR119[VAR33], VAR127, VAR128);
            }
            FUN14(VAR127);
            FUN14(VAR128);
        }
        break;
    case 12:
    case 13:
        if (FUN9(VAR4, VAR33) && FUN91(VAR4, 0))
        {
            TCGv_i32 VAR128 = FUN11(-VAR32);
            if (VAR21 == 13)
            {
                FUN102(VAR119[VAR22], VAR31, VAR28[VAR33], VAR128);
            }
            else
            {
                FUN103(VAR119[VAR22], VAR31, VAR28[VAR33], VAR128);
            }
            FUN14(VAR128);
        }
        break;
    case 15:
        switch (VAR32)
        {
        case 0:
            if (FUN91(VAR4, 0))
            {
                FUN17(VAR119[VAR22], VAR119[VAR33]);
            }
            break;
        case 1:
            if (FUN91(VAR4, 0))
            {
                FUN104(VAR119[VAR22], VAR119[VAR33]);
            }
            break;
        case 4:
            if (FUN9(VAR4, VAR22) && FUN91(VAR4, 0))
            {
                FUN17(VAR28[VAR22], VAR119[VAR33]);
            }
            break;
        case 5:
            if (FUN9(VAR4, VAR33) && FUN91(VAR4, 0))
            {
                FUN17(VAR119[VAR22], VAR28[VAR33]);
            }
            break;
        case 6:
            if (FUN91(VAR4, 0))
            {
                FUN105(VAR119[VAR22], VAR119[VAR33]);
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
    break;
case 11:
    FUN6(VAR117);
    do
    {
        if (FUN91(VAR4, 0))
        {
            TCGv_i32 VAR129 = FUN11(1 << VAR130);
            VAR131##FUN106(VAR31, VAR129, VAR119[VAR132], VAR119[VAR133]);
            FUN14(VAR129);
        }
    } while (0) switch (VAR21)
    {
    case 1:
        FUN107(VAR134, VAR22, VAR33, VAR32);
        break;
    case 2:
        FUN107(VAR135, VAR22, VAR33, VAR32);
        break;
    case 3:
        FUN107(VAR136, VAR22, VAR33, VAR32);
        break;
    case 4:
        FUN107(VAR137, VAR22, VAR33, VAR32);
        break;
    case 5:
        FUN107(VAR138, VAR22, VAR33, VAR32);
        break;
    case 6:
        FUN107(VAR139, VAR22, VAR33, VAR32);
        break;
    case 7:
        FUN107(VAR140, VAR22, VAR33, VAR32);
        break;
    case 8:
    case 9:
    case 10:
    case 11:
        if (FUN9(VAR4, VAR32) && FUN91(VAR4, 0))
        {
            static const TCGCond VAR106[] = {
                VAR104,
                VAR86,
                VAR110,
                VAR65,
            };
            TCGv_i32 VAR63 = FUN11(0);
            FUN55(VAR106[VAR21 - 8], VAR119[VAR22], VAR28[VAR32], VAR63, VAR119[VAR33], VAR119[VAR22]);
            FUN14(VAR63);
        }
        break;
    case 12:
    case 13:
        FUN6(VAR23);
        if (FUN91(VAR4, 0))
        {
            TCGv_i32 VAR63 = FUN11(0);
            TCGv_i32 VAR30 = FUN16();
            FUN22(VAR30, VAR35[VAR56], 1 << VAR32);
            FUN55(VAR21 & 1 ? VAR86 : VAR104, VAR119[VAR22], VAR30, VAR63, VAR119[VAR33], VAR119[VAR22]);
            FUN14(VAR30);
            FUN14(VAR63);
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
break;
case 1:
if (FUN9(VAR4, VAR32))
{
    TCGv_i32 VAR30 = FUN11(((VAR4->VAR141->VAR142 & VAR143) ? 0 : ((VAR4->VAR9 + 3) & ~3)) + (0xfffc0000 | (VAR144 << 2)));
    if (VAR4->VAR141->VAR142 & VAR143)
    {
        FUN36(VAR30, VAR30, VAR4->VAR145);
    }
    FUN94(VAR28[VAR32], VAR30, VAR4->VAR120);
    FUN14(VAR30);
}
break;
case 2:
if (FUN15(VAR4, VAR146, VAR147))
{
    TCGv_i32 VAR118 = FUN16();
    FUN35(VAR118, VAR28[VAR146], VAR148 << VAR54);
    if (VAR54)
    {
        FUN92(VAR4, VAR54, VAR118, false);
    }
    VAR149##FUN108(VAR28[VAR147], VAR118, VAR4->VAR120);
    FUN14(VAR118);
}
}
while (0)
    switch (VAR150)
    {
    case 0:
        FUN109(VAR151, 0);
        break;
    case 1:
        FUN109(VAR152, 1);
        break;
    case 2:
        FUN109(VAR153, 2);
        break;
    case 4:
        FUN109(VAR154, 0);
        break;
    case 5:
        FUN109(VAR155, 1);
        break;
    case 6:
        FUN109(VAR156, 2);
        break;
        if (FUN9(VAR4, VAR157##VAR158##VAR159))
        {
            TCGv_i32 VAR118 = FUN16();
            TCGv_i32 VAR160 = FUN16();
            FUN35(VAR118, VAR28[VAR157##VAR158##VAR159], VAR157##VAR158##VAR161##VAR158 << VAR54);
            FUN110(VAR160, VAR118, VAR4->VAR120);
            FUN14(VAR118);
            FUN14(VAR160);
        }
    }
while (0)
case 7:
    if (VAR147 < 8)
    {
        FUN6(VAR162);
    }
switch (VAR147)
{
case 0:
    FUN9(VAR4, VAR146);
    break;
case 1:
    FUN9(VAR4, VAR146);
    break;
case 2:
    FUN9(VAR4, VAR146);
    break;
case 3:
    FUN9(VAR4, VAR146);
    break;
case 4:
    FUN111();
    break;
case 5:
    FUN111();
    break;
case 6:
    if (FUN21(VAR4))
    {
        FUN111();
    }
    break;
case 7:
    if (FUN21(VAR4))
    {
        FUN9(VAR4, VAR146);
    }
    break;
case 8:
    switch (VAR20)
    {
    case 0:
        FUN6(VAR163);
        if (FUN21(VAR4))
        {
            FUN112();
        }
        break;
    case 2:
        FUN6(VAR163);
        if (FUN21(VAR4))
        {
            FUN112();
        }
        break;
    case 3:
        FUN6(VAR163);
        if (FUN21(VAR4))
        {
            FUN9(VAR4, VAR164);
        }
        break;
    case 4:
        FUN6(VAR162);
        if (FUN21(VAR4))
        {
            FUN9(VAR4, VAR164);
        }
        break;
    case 5:
        FUN6(VAR162);
        if (FUN21(VAR4))
        {
            FUN9(VAR4, VAR164);
        }
        break;
    default:
        FUN7();
        break;
    }
    break;
    if (FUN9(VAR4, VAR157##VAR158##VAR159))
    {
        TCGv_i32 VAR118 = FUN16();
        FUN18(VAR62, VAR4->VAR9);
        FUN35(VAR118, VAR28[VAR157##VAR158##VAR159], VAR157##VAR158##VAR161##VAR158 << VAR54);
        FUN113(VAR31, VAR118);
        FUN14(VAR118);
    }
}
while (0)
case 12:
    FUN6(VAR165);
FUN9(VAR4, VAR146);
break;
case 13:
switch (VAR20)
{
case 0:
    FUN6(VAR166);
    if (FUN21(VAR4))
    {
        FUN114();
    }
    break;
case 2:
    FUN6(VAR166);
    if (FUN21(VAR4))
    {
        FUN114();
    }
    break;
case 3:
    FUN6(VAR166);
    if (FUN21(VAR4))
    {
        FUN9(VAR4, VAR164);
    }
    break;
default:
    FUN7();
    break;
}
break;
case 14:
FUN6(VAR165);
FUN115();
break;
case 15:
FUN6(VAR165);
if (FUN21(VAR4))
{
    FUN9(VAR4, VAR146);
}
break;
default:
FUN7();
break;
}
break;
case 9:
FUN109(VAR167, 1);
break;
case 10:
if (FUN9(VAR4, VAR147))
{
    FUN18(VAR28[VAR147], VAR148 | (VAR146 << 8) | ((VAR146 & 0x8) ? 0xfffff000 : 0));
}
break;
if (FUN15(VAR4, VAR146, VAR147))
{
    TCGv_i32 VAR118 = FUN116();
    FUN35(VAR118, VAR28[VAR146], VAR148 << 2);
    FUN92(VAR4, 2, VAR118, true);
    VAR149##FUN108(VAR28[VAR147], VAR118, VAR4->VAR120);
    FUN14(VAR118);
}
}
while (0)
case 11:
    FUN6(VAR168);
FUN117(VAR153);
break;
case 12:
if (FUN15(VAR4, VAR146, VAR147))
{
    FUN35(VAR28[VAR147], VAR28[VAR146], VAR169);
}
break;
case 13:
if (FUN15(VAR4, VAR146, VAR147))
{
    FUN35(VAR28[VAR147], VAR28[VAR146], VAR169 << 8);
}
break;
case 14:
FUN6(VAR170);
if (FUN15(VAR4, VAR146, VAR147))
{
    VAR84 *VAR85 = FUN75();
    TCGv_i32 VAR30 = FUN116();
    TCGv_i32 VAR118 = FUN116();
    TCGv_i32 VAR171;
    FUN17(VAR30, VAR28[VAR147]);
    FUN35(VAR118, VAR28[VAR146], VAR148 << 2);
    FUN92(VAR4, 2, VAR118, true);
    FUN12(VAR4);
    VAR171 = FUN11(VAR4->VAR9);
    FUN118(VAR31, VAR171, VAR118);
    FUN94(VAR28[VAR147], VAR118, VAR4->VAR120);
    FUN119(VAR86, VAR28[VAR147], VAR35[VAR172], VAR85);
    FUN93(VAR30, VAR118, VAR4->VAR120);
    FUN77(VAR85);
    FUN14(VAR171);
    FUN14(VAR118);
    FUN14(VAR30);
}
break;
case 15:
FUN6(VAR168);
FUN117(VAR156);
break;
default:
FUN7();
break;
}
break;
case 3:
switch (VAR150)
{
case 0:
case 4:
case 8:
case 12:
    FUN6(VAR117);
    if (FUN9(VAR4, VAR146) && FUN91(VAR4, 0))
    {
        TCGv_i32 VAR118 = FUN16();
        FUN35(VAR118, VAR28[VAR146], VAR148 << 2);
        FUN92(VAR4, 2, VAR118, false);
        if (VAR150 & 0x4)
        {
            FUN93(VAR119[VAR147], VAR118, VAR4->VAR120);
        }
        else
        {
            FUN94(VAR119[VAR147], VAR118, VAR4->VAR120);
        }
        if (VAR150 & 0x8)
        {
            FUN17(VAR28[VAR146], VAR118);
        }
        FUN14(VAR118);
    }
    break;
default:
    FUN7();
    break;
}
break;
case 4:
FUN6(VAR173);
{
    enum
    {
        VAR174 = 0x0,
        VAR175 = 0x4,
        VAR176 = 0x8,
        VAR177 = 0xc,
        VAR178 = 0xf,
    } VAR179 = VAR20 & 0xc;
    bool VAR180 = (VAR21 & 0x3) == 2;
    bool VAR181 = (VAR21 & 0xc) == 0;
    uint32_t VAR182 = 0;
    if (VAR21 > 9)
    {
        FUN7();
    }
    switch (VAR21 & 2)
    {
    case 0:
        VAR180 = true;
        VAR182 = (VAR21 & 1) ? -4 : 4;
        if (VAR21 >= 8)
        {
            if (VAR20 == 0)
            {
                VAR179 = VAR178;
            }
            else
            {
                FUN7();
            }
        }
        else if (VAR179 != VAR176)
        {
            FUN7();
        }
        break;
    case 2:
        if (VAR179 == VAR174 && VAR21 != 7)
        {
            FUN7();
        }
        break;
    }
    if (VAR179 != VAR178)
    {
        if (!VAR180 && !FUN9(VAR4, VAR33))
        {
            break;
        }
        if (!VAR181 && !FUN9(VAR4, VAR32))
        {
            break;
        }
    }
    if (VAR182 && !FUN9(VAR4, VAR33))
    {
        break;
    }
    {
        TCGv_i32 VAR183 = FUN16();
        TCGv_i32 VAR184 = FUN16();
        if (VAR182)
        {
            FUN35(VAR183, VAR28[VAR33], VAR182);
            FUN92(VAR4, 2, VAR183, false);
            FUN94(VAR184, VAR183, VAR4->VAR120);
        }
        if (VAR179 != VAR178)
        {
            TCGv_i32 VAR185 = FUN120(VAR180 ? VAR35[VAR186 + VAR187] : VAR28[VAR33], VAR20 & 1, VAR179 == VAR174);
            TCGv_i32 VAR188 = FUN120(VAR181 ? VAR35[VAR186 + 2 + VAR189] : VAR28[VAR32], VAR20 & 2, VAR179 == VAR174);
            if (VAR179 == VAR175 || VAR179 == VAR174)
            {
                FUN73(VAR35[VAR190], VAR185, VAR188);
                if (VAR179 == VAR174)
                {
                    FUN18(VAR35[VAR191], 0);
                }
                else
                {
                    FUN57(VAR35[VAR191], VAR35[VAR190], 31);
                }
            }
            else
            {
                TCGv_i32 VAR97 = FUN16();
                TCGv_i32 VAR192 = FUN16();
                FUN73(VAR97, VAR185, VAR188);
                FUN57(VAR192, VAR97, 31);
                if (VAR179 == VAR176)
                {
                    FUN121(VAR35[VAR190], VAR35[VAR191], VAR35[VAR190], VAR35[VAR191], VAR97, VAR192);
                }
                else
                {
                    FUN122(VAR35[VAR190], VAR35[VAR191], VAR35[VAR190], VAR35[VAR191], VAR97, VAR192);
                }
                FUN88(VAR35[VAR191], VAR35[VAR191]);
                FUN123(VAR97);
                FUN123(VAR192);
            }
            FUN14(VAR185);
            FUN14(VAR188);
        }
        if (VAR182)
        {
            FUN17(VAR28[VAR33], VAR183);
            FUN17(VAR35[VAR186 + VAR193], VAR184);
        }
        FUN14(VAR183);
        FUN14(VAR184);
    }
}
break;
case 5:
switch (VAR194)
{
case 0:
    FUN18(VAR28[0], VAR4->VAR19);
    FUN124(VAR4, (VAR4->VAR9 & ~3) + (VAR195 << 2) + 4, 0);
    break;
case 1:
case 2:
case 3:
    FUN6(VAR29);
    if (FUN9(VAR4, VAR194 << 2))
    {
        FUN125(VAR4, VAR194, (VAR4->VAR9 & ~3) + (VAR195 << 2) + 4, 0);
    }
    break;
}
break;
case 6:
switch (VAR194)
{
case 0:
    FUN124(VAR4, VAR4->VAR9 + 4 + VAR195, 0);
    break;
case 1:
    if (FUN9(VAR4, VAR196))
    {
        static const TCGCond VAR106[] = {
            VAR104,
            VAR86,
            VAR110,
            VAR65,
        };
        FUN126(VAR4, VAR106[VAR197 & 3], VAR28[VAR196], 0, 4 + VAR198);
    }
    break;
case 2:
    if (FUN9(VAR4, VAR199))
    {
        static const TCGCond VAR106[] = {
            VAR104,
            VAR86,
            VAR110,
            VAR65,
        };
        FUN126(VAR4, VAR106[VAR200 & 3], VAR28[VAR199], VAR16[VAR201], 4 + VAR202);
    }
    break;
case 3:
    switch (VAR200)
    {
    case 0:
        FUN6(VAR29);
        {
            TCGv_i32 VAR9 = FUN11(VAR4->VAR9);
            TCGv_i32 VAR77 = FUN11(VAR196);
            TCGv_i32 VAR203 = FUN11(VAR204);
            FUN12(VAR4);
            FUN127(VAR31, VAR9, VAR77, VAR203);
            FUN14(VAR203);
            FUN14(VAR77);
            FUN14(VAR9);
            FUN32(VAR4, -1);
        }
        break;
    case 1:
        switch (VAR201)
        {
        case 0:
        case 1:
            FUN6(VAR23);
            {
                TCGv_i32 VAR30 = FUN16();
                FUN22(VAR30, VAR35[VAR56], 1 << VAR146);
                FUN126(VAR4, VAR201 == 1 ? VAR86 : VAR104, VAR30, 0, 4 + VAR169);
                FUN14(VAR30);
            }
            break;
        case 8:
        case 9:
        case 10:
            FUN6(VAR205);
            if (FUN9(VAR4, VAR146))
            {
                uint32_t VAR206 = VAR4->VAR9 + VAR148 + 4;
                TCGv_i32 VAR30 = FUN11(VAR206);
                FUN128(VAR35[VAR207], VAR28[VAR146], 1);
                FUN18(VAR35[VAR208], VAR4->VAR19);
                FUN129(VAR31, VAR30);
                FUN14(VAR30);
                if (VAR201 > 8)
                {
                    VAR84 *VAR85 = FUN75();
                    FUN76(VAR201 == 9 ? VAR86 : VAR209, VAR28[VAR146], 0, VAR85);
                    FUN124(VAR4, VAR206, 1);
                    FUN77(VAR85);
                }
                FUN124(VAR4, VAR4->VAR19, 0);
            }
            break;
        default:
            FUN7();
            break;
        }
        break;
    case 2:
    case 3:
        if (FUN9(VAR4, VAR199))
        {
            FUN126(VAR4, VAR200 == 2 ? VAR210 : VAR109, VAR28[VAR199], VAR17[VAR201], 4 + VAR202);
        }
        break;
    }
    break;
}
break;
case 7:
{
    TCGCond VAR211 = (VAR150 & 8) ? VAR86 : VAR104;
    switch (VAR150 & 7)
    {
    case 0:
        if (FUN15(VAR4, VAR146, VAR147))
        {
            TCGv_i32 VAR30 = FUN16();
            FUN34(VAR30, VAR28[VAR146], VAR28[VAR147]);
            FUN126(VAR4, VAR211, VAR30, 0, 4 + VAR169);
            FUN14(VAR30);
        }
        break;
    case 1:
    case 2:
    case 3:
        if (FUN15(VAR4, VAR146, VAR147))
        {
            static const TCGCond VAR106[] = {
                [1] = VAR104,
                [2] = VAR110,
                [3] = VAR210,
                [9] = VAR86,
                [10] = VAR65,
                [11] = VAR109,
            };
            FUN130(VAR4, VAR106[VAR150], VAR28[VAR146], VAR28[VAR147], 4 + VAR169);
        }
        break;
    case 4:
        if (FUN15(VAR4, VAR146, VAR147))
        {
            TCGv_i32 VAR30 = FUN16();
            FUN34(VAR30, VAR28[VAR146], VAR28[VAR147]);
            FUN130(VAR4, VAR211, VAR30, VAR28[VAR147], 4 + VAR169);
            FUN14(VAR30);
        }
        break;
    case 5:
        if (FUN15(VAR4, VAR146, VAR147))
        {
            TCGv_i32 VAR129 = FUN11(0x80000000);
            TCGv_i32 VAR129 = FUN11(0x00000001);
            TCGv_i32 VAR30 = FUN16();
            FUN22(VAR30, VAR28[VAR147], 0x1f);
            FUN68(VAR129, VAR129, VAR30);
            FUN24(VAR129, VAR129, VAR30);
            FUN34(VAR30, VAR28[VAR146], VAR129);
            FUN126(VAR4, VAR211, VAR30, 0, 4 + VAR169);
            FUN14(VAR30);
            FUN14(VAR129);
        }
        break;
    case 6:
    case 7:
        if (FUN9(VAR4, VAR146))
        {
            TCGv_i32 VAR30 = FUN16();
            FUN22(VAR30, VAR28[VAR146], 0x80000000 >> (((VAR150 & 1) << 4) | VAR147)); 0x00000001 << ( ( ( VAR150 & 1 ) << 4 ) | VAR147 ) ) ;
            FUN126(VAR4, VAR211, VAR30, 0, 4 + VAR169);
            FUN14(VAR30);
        }
        break;
    }
}
break;
if (FUN15(VAR4, VAR212, VAR213))
{
    TCGv_i32 VAR118 = FUN16();
    FUN35(VAR118, VAR28[VAR212], VAR214 << 2);
    FUN92(VAR4, 2, VAR118, false);
    VAR149##FUN108(VAR28[VAR213], VAR118, VAR4->VAR120);
    FUN14(VAR118);
}
}
while (0)
case 8:
    FUN131(VAR153);
break;
case 9:
FUN131(VAR156);
break;
case 10:
if (FUN39(VAR4, VAR214, VAR212, VAR213))
{
    FUN36(VAR28[VAR214], VAR28[VAR212], VAR28[VAR213]);
}
break;
case 11:
if (FUN15(VAR4, VAR214, VAR212))
{
    FUN35(VAR28[VAR214], VAR28[VAR212], VAR213 ? VAR213 : -1);
}
break;
case 12:
if (!FUN9(VAR4, VAR212))
{
    break;
}
if (VAR213 < 8)
{
    FUN18(VAR28[VAR212], VAR214 | (VAR213 << 4) | ((VAR213 & 6) == 6 ? 0xffffff80 : 0));
}
else
{
    TCGCond VAR211 = (VAR213 & 4) ? VAR86 : VAR104;
    FUN126(VAR4, VAR211, VAR28[VAR212], 0, 4 + (VAR214 | ((VAR213 & 3) << 4)));
}
break;
case 13:
switch (VAR214)
{
case 0:
    if (FUN15(VAR4, VAR212, VAR213))
    {
        FUN17(VAR28[VAR213], VAR28[VAR212]);
    }
    break;
case 15:
    switch (VAR213)
    {
    case 0:
        FUN10(VAR4, VAR28[0]);
        break;
    case 1:
        FUN6(VAR29);
        {
            TCGv_i32 VAR30 = FUN11(VAR4->VAR9);
            FUN12(VAR4);
            FUN13(VAR30, VAR31, VAR30);
            FUN10(VAR4, VAR30);
            FUN14(VAR30);
        }
        break;
    case 2:
        FUN6(VAR47);
        if (VAR4->VAR48)
        {
            FUN29(VAR4, VAR215);
        }
        break;
    case 3:
        break;
    case 6:
        FUN8(VAR4, VAR25);
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
if (VAR4->VAR216 == VAR217)
{
    FUN132(VAR4, 0);
}
VAR4->VAR9 = VAR4->VAR19;
return;
VAR8 : FUN3("", VAR4->VAR9);
FUN8(VAR4, VAR25);
}