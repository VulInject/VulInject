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
static const uint32_t VAR14[] = {0xffffffff, 1, 2, 3, 4, 5, 6, 7, 8, 10, 12, 16, 32, 64, 128, 256};
static const uint32_t VAR15[] = {32768, 65536, 2, 3, 4, 5, 6, 7, 8, 10, 12, 16, 32, 64, 128, 256};
if (VAR16 >= 8)
{
    VAR4->VAR17 = VAR4->VAR9 + 2;
    FUN5(VAR18);
}
else
{
    VAR4->VAR17 = VAR4->VAR9 + 3;
    VAR12 = FUN4(VAR2, VAR4->VAR9 + 2);
}
switch (VAR16)
{
case 0:
    switch (VAR19)
    {
    case 0:
        switch (VAR20)
        {
        case 0:
            if ((VAR21 & 0xc) == 0x8)
            {
                FUN5(VAR22);
            }
            switch (VAR21)
            {
            case 0:
                switch (VAR23)
                {
                case 0:
                    FUN6(VAR4, VAR24);
                    break;
                case 1:
                    FUN7();
                    break;
                case 2:
                    switch (VAR25)
                    {
                    case 0:
                    case 2:
                        FUN8(VAR4, VAR26);
                        FUN9(VAR4, VAR27[VAR26]);
                        break;
                    case 1:
                        FUN5(VAR28);
                        {
                            TCGv_i32 VAR29 = FUN10(VAR4->VAR9);
                            FUN11(VAR4);
                            FUN12(VAR29, VAR30, VAR29);
                            FUN9(VAR4, VAR29);
                            FUN13(VAR29);
                        }
                        break;
                    case 3:
                        FUN7();
                        break;
                    }
                    break;
                case 3:
                    FUN14(VAR4, VAR26, VAR25 << 2);
                    switch (VAR25)
                    {
                    case 0:
                    {
                        TCGv_i32 VAR29 = FUN15();
                        FUN16(VAR29, VAR27[VAR26]);
                        FUN17(VAR27[0], VAR4->VAR17);
                        FUN9(VAR4, VAR29);
                        FUN13(VAR29);
                    }
                    break;
                    case 1:
                    case 2:
                    case 3:
                        FUN5(VAR28);
                        {
                            TCGv_i32 VAR29 = FUN15();
                            FUN16(VAR29, VAR27[VAR26]);
                            FUN18(VAR4, VAR25, VAR29);
                            FUN13(VAR29);
                        }
                        break;
                    }
                    break;
                }
                break;
            case 1:
                FUN5(VAR28);
                FUN14(VAR4, VAR31, VAR32);
                {
                    TCGv_i32 VAR9 = FUN10(VAR4->VAR9);
                    FUN11(VAR4);
                    FUN19(VAR30, VAR9);
                    FUN16(VAR27[VAR31], VAR27[VAR32]);
                    FUN13(VAR9);
                }
                break;
            case 2:
                switch (VAR31)
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
                    FUN5(VAR33);
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
                switch (VAR31)
                {
                case 0:
                    FUN5(VAR33);
                    switch (VAR32)
                    {
                    case 0:
                        FUN20(VAR4);
                        FUN21(VAR34[VAR35], VAR34[VAR35], ~VAR36);
                        FUN22(VAR30);
                        FUN9(VAR4, VAR34[VAR37]);
                        break;
                    case 1:
                        FUN7();
                        break;
                    case 2:
                        FUN20(VAR4);
                        FUN9(VAR4, VAR34[VAR4->VAR38->VAR39 ? VAR40 : VAR37]);
                        break;
                    case 4:
                    case 5:
                        FUN5(VAR28);
                        FUN20(VAR4);
                        {
                            TCGv_i32 VAR29 = FUN10(1);
                            FUN21(VAR34[VAR35], VAR34[VAR35], ~VAR36);
                            FUN23(VAR29, VAR29, VAR34[VAR41]);
                            if (VAR32 == 4)
                            {
                                FUN24(VAR34[VAR42], VAR34[VAR42], VAR29);
                            }
                            else
                            {
                                FUN25(VAR34[VAR42], VAR34[VAR42], VAR29);
                            }
                            FUN26(VAR30);
                            FUN22(VAR30);
                            FUN9(VAR4, VAR34[VAR37]);
                            FUN13(VAR29);
                        }
                        break;
                    default:
                        FUN7();
                        break;
                    }
                    break;
                case 1:
                    FUN5(VAR43);
                    if (VAR32 >= 2 && VAR32 <= VAR4->VAR38->VAR44)
                    {
                        FUN20(VAR4);
                        FUN16(VAR34[VAR35], VAR34[VAR45 + VAR32 - 2]);
                        FUN22(VAR30);
                        FUN9(VAR4, VAR34[VAR37 + VAR32 - 1]);
                    }
                    else
                    {
                        FUN3("", VAR32);
                        FUN6(VAR4, VAR24);
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
                FUN5(VAR46);
                if (VAR4->VAR47)
                {
                    FUN28(VAR4, VAR48);
                }
                break;
            case 5:
                FUN5(VAR33);
                switch (VAR32)
                {
                case 0:
                    FUN6(VAR4, VAR49);
                    break;
                case 1:
                    if (VAR50)
                    {
                        FUN20(VAR4);
                        FUN29(VAR30);
                    }
                    else
                    {
                        FUN3("");
                        FUN6(VAR4, VAR24);
                    }
                    break;
                default:
                    FUN7();
                    break;
                }
                break;
            case 6:
                FUN5(VAR51);
                FUN20(VAR4);
                FUN8(VAR4, VAR31);
                FUN16(VAR27[VAR31], VAR34[VAR35]);
                FUN21(VAR34[VAR35], VAR34[VAR35], ~VAR52);
                FUN30(VAR34[VAR35], VAR34[VAR35], VAR32);
                FUN22(VAR30);
                FUN31(VAR4, 0);
                break;
            case 7:
                FUN5(VAR51);
                FUN20(VAR4);
                FUN32(VAR4, VAR32);
                break;
            case 8:
            case 9:
            case 10:
            case 11:
                FUN5(VAR22);
                {
                    const unsigned VAR53 = (VAR21 & 2) ? 8 : 4;
                    TCGv_i32 VAR54 = FUN10(((1 << VAR53) - 1) << VAR32);
                    TCGv_i32 VAR29 = FUN15();
                    FUN33(VAR29, VAR34[VAR55], VAR54);
                    if (VAR21 & 1)
                    {
                        FUN34(VAR29, VAR29, 1 << VAR32);
                    }
                    else
                    {
                        FUN35(VAR29, VAR29, VAR54);
                    }
                    FUN36(VAR29, VAR29, VAR32 + VAR53);
                    FUN37(VAR34[VAR55], VAR34[VAR55], VAR29, VAR31, 1);
                    FUN13(VAR54);
                    FUN13(VAR29);
                }
                break;
            default:
                FUN7();
                break;
            }
            break;
        case 1:
            FUN38(VAR4, VAR21, VAR32, VAR31);
            FUN33(VAR27[VAR21], VAR27[VAR32], VAR27[VAR31]);
            break;
        case 2:
            FUN38(VAR4, VAR21, VAR32, VAR31);
            FUN25(VAR27[VAR21], VAR27[VAR32], VAR27[VAR31]);
            break;
        case 3:
            FUN38(VAR4, VAR21, VAR32, VAR31);
            FUN39(VAR27[VAR21], VAR27[VAR32], VAR27[VAR31]);
            break;
        case 4:
            switch (VAR21)
            {
            case 0:
                FUN8(VAR4, VAR32);
                FUN40(VAR4, VAR27[VAR32]);
                break;
            case 1:
                FUN8(VAR4, VAR32);
                FUN41(VAR4, VAR27[VAR32]);
                break;
            case 2:
                FUN8(VAR4, VAR32);
                {
                    TCGv_i32 VAR29 = FUN15();
                    FUN42(VAR29, VAR27[VAR32], 3);
                    FUN40(VAR4, VAR29);
                    FUN13(VAR29);
                }
                break;
            case 3:
                FUN8(VAR4, VAR32);
                {
                    TCGv_i32 VAR29 = FUN15();
                    FUN42(VAR29, VAR27[VAR32], 3);
                    FUN41(VAR4, VAR29);
                    FUN13(VAR29);
                }
                break;
            case 4:
            {
                TCGv_i32 VAR29 = FUN10(VAR32 | ((VAR31 & 1) << 4));
                FUN40(VAR4, VAR29);
                FUN13(VAR29);
            }
            break;
            case 6:
                FUN27();
                break;
            case 7:
                FUN27();
                break;
            case 8:
                FUN5(VAR28);
                FUN20(VAR4);
                {
                    TCGv_i32 VAR29 = FUN10(VAR31 | ((VAR31 & 8) ? 0xfffffff0 : 0));
                    FUN43(VAR30, VAR29);
                    FUN13(VAR29);
                    FUN44(VAR4);
                }
                break;
            case 14:
                FUN5(VAR56);
                FUN14(VAR4, VAR32, VAR31);
                FUN45(VAR27[VAR31], VAR27[VAR32]);
                break;
            case 15:
                FUN5(VAR56);
                FUN14(VAR4, VAR32, VAR31);
                FUN46(VAR27[VAR31], VAR27[VAR32]);
                break;
            default:
                FUN7();
                break;
            }
            break;
        case 5:
            FUN47(FUN48(VAR57) | FUN48(VAR58) | FUN48(VAR59));
            FUN20(VAR4);
            FUN14(VAR4, VAR32, VAR31);
            {
                TCGv_i32 VAR60 = FUN10((VAR21 & 8) != 0);
                switch (VAR21 & 7)
                {
                case 3:
                    FUN49(VAR27[VAR31], VAR30, VAR27[VAR32], VAR60);
                    break;
                case 4:
                    FUN50(VAR30, VAR27[VAR32], VAR60);
                    FUN31(VAR4, -1);
                    break;
                case 5:
                    FUN17(VAR61, VAR4->VAR9);
                    FUN51(VAR27[VAR31], VAR30, VAR27[VAR32], VAR60);
                    break;
                case 6:
                    FUN52(VAR30, VAR27[VAR31], VAR27[VAR32], VAR60);
                    FUN31(VAR4, -1);
                    break;
                case 7:
                    FUN53(VAR27[VAR31], VAR30, VAR27[VAR32], VAR60);
                    break;
                default:
                    FUN13(VAR60);
                    FUN7();
                    break;
                }
                FUN13(VAR60);
            }
            break;
        case 6:
            FUN14(VAR4, VAR21, VAR31);
            switch (VAR32)
            {
            case 0:
                FUN54(VAR27[VAR21], VAR27[VAR31]);
                break;
            case 1:
            {
                int VAR62 = FUN55();
                FUN16(VAR27[VAR21], VAR27[VAR31]);
                FUN56(VAR63, VAR27[VAR21], 0, VAR62);
                FUN54(VAR27[VAR21], VAR27[VAR31]);
                FUN57(VAR62);
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
            FUN38(VAR4, VAR21, VAR32, VAR31);
            FUN35(VAR27[VAR21], VAR27[VAR32], VAR27[VAR31]);
            break;
        case 9:
        case 10:
        case 11:
            FUN38(VAR4, VAR21, VAR32, VAR31);
            {
                TCGv_i32 VAR29 = FUN15();
                FUN42(VAR29, VAR27[VAR32], VAR20 - 8);
                FUN35(VAR27[VAR21], VAR29, VAR27[VAR31]);
                FUN13(VAR29);
            }
            break;
        case 12:
            FUN38(VAR4, VAR21, VAR32, VAR31);
            FUN58(VAR27[VAR21], VAR27[VAR32], VAR27[VAR31]);
            break;
        case 13:
        case 14:
        case 15:
            FUN38(VAR4, VAR21, VAR32, VAR31);
            {
                TCGv_i32 VAR29 = FUN15();
                FUN42(VAR29, VAR27[VAR32], VAR20 - 12);
                FUN58(VAR27[VAR21], VAR29, VAR27[VAR31]);
                FUN13(VAR29);
            }
            break;
        }
        break;
    case 1:
        switch (VAR20)
        {
        case 0:
        case 1:
            FUN14(VAR4, VAR21, VAR32);
            FUN42(VAR27[VAR21], VAR27[VAR32], 32 - (VAR31 | ((VAR20 & 1) << 4)));
            break;
        case 2:
        case 3:
            FUN14(VAR4, VAR21, VAR31);
            FUN59(VAR27[VAR21], VAR27[VAR31], VAR32 | ((VAR20 & 1) << 4));
            break;
        case 4:
            FUN14(VAR4, VAR21, VAR31);
            FUN36(VAR27[VAR21], VAR27[VAR31], VAR32);
            break;
        case 6:
        {
            TCGv_i32 VAR29 = FUN15();
            if (VAR64 >= 64)
            {
                FUN20(VAR4);
            }
            FUN8(VAR4, VAR31);
            FUN16(VAR29, VAR27[VAR31]);
            FUN60(VAR4, VAR27[VAR31], VAR64);
            FUN61(VAR4, VAR64, VAR29);
            FUN13(VAR29);
            if (!VAR65[VAR64])
            {
                FUN27();
            }
        }
        break;
            TCGv_i64 VAR29 = FUN62();
            FUN63(VAR29, VAR66);
            VAR67##VAR68##FUN64(VAR69, VAR69, VAR29);
            FUN65(VAR27[VAR21], VAR69);
            FUN66(VAR69);
            FUN66(VAR29);
        }
        while (0)
        case 8:
            FUN38(VAR4, VAR21, VAR32, VAR31);
        {
            TCGv_i64 VAR69 = FUN62();
            FUN67(VAR69, VAR27[VAR31], VAR27[VAR32]);
            FUN68(VAR70);
        }
        break;
    case 9:
        FUN14(VAR4, VAR21, VAR31);
        if (VAR4->VAR71)
        {
            FUN69(VAR27[VAR21], VAR27[VAR31], VAR34[VAR72]);
        }
        else
        {
            TCGv_i64 VAR69 = FUN62();
            FUN63(VAR69, VAR27[VAR31]);
            FUN68(VAR70);
        }
        break;
    case 10:
        FUN14(VAR4, VAR21, VAR32);
        if (VAR4->VAR73)
        {
            FUN23(VAR27[VAR21], VAR27[VAR32], VAR4->VAR74);
        }
        else
        {
            TCGv_i64 VAR69 = FUN62();
            TCGv_i32 VAR75 = FUN10(32);
            FUN58(VAR75, VAR75, VAR34[VAR72]);
            FUN21(VAR75, VAR75, 0x3f);
            FUN63(VAR69, VAR27[VAR32]);
            FUN70(VAR76, VAR75);
            FUN13(VAR75);
        }
        break;
    case 11:
        FUN14(VAR4, VAR21, VAR31);
        if (VAR4->VAR71)
        {
            FUN71(VAR27[VAR21], VAR27[VAR31], VAR34[VAR72]);
        }
        else
        {
            TCGv_i64 VAR69 = FUN62();
            FUN72(VAR69, VAR27[VAR31]);
            FUN68(VAR77);
        }
        break;
    case 12:
        FUN5(VAR78);
        FUN38(VAR4, VAR21, VAR32, VAR31);
        {
            TCGv_i32 VAR79 = FUN15();
            TCGv_i32 VAR80 = FUN15();
            FUN73(VAR79, VAR27[VAR32]);
            FUN73(VAR80, VAR27[VAR31]);
            FUN74(VAR27[VAR21], VAR79, VAR80);
            FUN13(VAR80);
            FUN13(VAR79);
        }
        break;
    case 13:
        FUN5(VAR78);
        FUN38(VAR4, VAR21, VAR32, VAR31);
        {
            TCGv_i32 VAR79 = FUN15();
            TCGv_i32 VAR80 = FUN15();
            FUN75(VAR79, VAR27[VAR32]);
            FUN75(VAR80, VAR27[VAR31]);
            FUN74(VAR27[VAR21], VAR79, VAR80);
            FUN13(VAR80);
            FUN13(VAR79);
        }
        break;
    default:
        FUN7();
        break;
    }
    break;
case 2:
    if (VAR20 >= 8)
    {
        FUN38(VAR4, VAR21, VAR32, VAR31);
    }
    if (VAR20 >= 12)
    {
        FUN5(VAR81);
        int VAR62 = FUN55();
        FUN56(VAR82, VAR27[VAR31], 0, VAR62);
        FUN6(VAR4, VAR83);
        FUN57(VAR62);
    }
    switch (VAR20)
    {
        do
        {
            FUN5(VAR22);
            TCGv_i32 VAR84 = FUN15();
            TCGv_i32 VAR85 = FUN15();
            FUN36(VAR84, VAR34[VAR55], VAR75);
            FUN36(VAR85, VAR34[VAR55], VAR86);
            VAR67##VAR87##FUN76(VAR84, VAR84, VAR85);
            FUN37(VAR34[VAR55], VAR34[VAR55], VAR84, VAR88, 1);
            FUN13(VAR84);
            FUN13(VAR85);
        } while (0) case 0 : FUN77(and, VAR21, VAR32, VAR31);
        break;
    case 1:
        FUN77(VAR89, VAR21, VAR32, VAR31);
        break;
    case 2:
        FUN77(or, VAR21, VAR32, VAR31);
        break;
    case 3:
        FUN77(VAR90, VAR21, VAR32, VAR31);
        break;
    case 4:
        FUN77(xor, VAR21, VAR32, VAR31);
        break;
    case 8:
        FUN5(VAR91);
        FUN74(VAR27[VAR21], VAR27[VAR32], VAR27[VAR31]);
        break;
    case 10:
    case 11:
        FUN5(VAR92);
        {
            TCGv_i64 VAR88 = FUN62();
            TCGv_i64 VAR75 = FUN62();
            TCGv_i64 VAR86 = FUN62();
            if (VAR20 == 10)
            {
                FUN63(VAR75, VAR27[VAR32]);
                FUN63(VAR86, VAR27[VAR31]);
            }
            else
            {
                FUN72(VAR75, VAR27[VAR32]);
                FUN72(VAR86, VAR27[VAR31]);
            }
            FUN78(VAR88, VAR75, VAR86);
            FUN79(VAR88, VAR88, 32);
            FUN65(VAR27[VAR21], VAR88);
            FUN66(VAR88);
            FUN66(VAR75);
            FUN66(VAR86);
        }
        break;
    case 12:
        FUN80(VAR27[VAR21], VAR27[VAR32], VAR27[VAR31]);
        break;
    case 13:
    case 15:
    {
        int VAR93 = FUN55();
        int VAR94 = FUN55();
        FUN56(VAR82, VAR27[VAR32], 0x80000000, VAR93);
        FUN56(VAR82, VAR27[VAR31], 0xffffffff, VAR93);
        FUN17(VAR27[VAR21], VAR20 == 13 ? 0x80000000 : 0);
        FUN81(VAR94);
        FUN57(VAR93);
        if (VAR20 == 13)
        {
            FUN82(VAR27[VAR21], VAR27[VAR32], VAR27[VAR31]);
        }
        else
        {
            FUN83(VAR27[VAR21], VAR27[VAR32], VAR27[VAR31]);
        }
        FUN57(VAR94);
    }
    break;
    case 14:
        FUN84(VAR27[VAR21], VAR27[VAR32], VAR27[VAR31]);
        break;
    default:
        FUN7();
        break;
    }
    break;
case 3:
    switch (VAR20)
    {
    case 0:
        if (VAR64 >= 64)
        {
            FUN20(VAR4);
        }
        FUN8(VAR4, VAR31);
        FUN60(VAR4, VAR27[VAR31], VAR64);
        if (!VAR65[VAR64])
        {
            FUN27();
        }
        break;
    case 1:
        if (VAR64 >= 64)
        {
            FUN20(VAR4);
        }
        FUN8(VAR4, VAR31);
        FUN61(VAR4, VAR64, VAR27[VAR31]);
        if (!VAR65[VAR64])
        {
            FUN27();
        }
        break;
    case 2:
        FUN5(VAR95);
        FUN14(VAR4, VAR21, VAR32);
        {
            int VAR53 = 24 - VAR31;
            if (VAR53 == 24)
            {
                FUN85(VAR27[VAR21], VAR27[VAR32]);
            }
            else if (VAR53 == 16)
            {
                FUN75(VAR27[VAR21], VAR27[VAR32]);
            }
            else
            {
                TCGv_i32 VAR29 = FUN15();
                FUN42(VAR29, VAR27[VAR32], VAR53);
                FUN59(VAR27[VAR21], VAR29, VAR53);
                FUN13(VAR29);
            }
        }
        break;
    case 3:
        FUN5(VAR96);
        FUN14(VAR4, VAR21, VAR32);
        {
            TCGv_i32 VAR84 = FUN15();
            TCGv_i32 VAR85 = FUN15();
            int VAR62 = FUN55();
            FUN59(VAR84, VAR27[VAR32], 24 - VAR31);
            FUN39(VAR85, VAR84, VAR27[VAR32]);
            FUN21(VAR85, VAR85, 0xffffffff << (VAR31 + 7));
            FUN16(VAR27[VAR21], VAR27[VAR32]);
            FUN56(VAR97, VAR85, 0, VAR62);
            FUN59(VAR84, VAR27[VAR32], 31);
            FUN86(VAR27[VAR21], VAR84, 0xffffffff >> (25 - VAR31));
            FUN57(VAR62);
            FUN13(VAR84);
            FUN13(VAR85);
        }
        break;
    case 4:
    case 5:
    case 6:
    case 7:
        FUN5(VAR98);
        FUN38(VAR4, VAR21, VAR32, VAR31);
        {
            static const TCGCond VAR99[] = {VAR100, VAR63, VAR101, VAR102};
            int VAR62 = FUN55();
            if (VAR21 != VAR31)
            {
                FUN16(VAR27[VAR21], VAR27[VAR32]);
                FUN87(VAR99[VAR20 - 4], VAR27[VAR32], VAR27[VAR31], VAR62);
                FUN16(VAR27[VAR21], VAR27[VAR31]);
            }
            else
            {
                FUN87(VAR99[VAR20 - 4], VAR27[VAR31], VAR27[VAR32], VAR62);
                FUN16(VAR27[VAR21], VAR27[VAR32]);
            }
            FUN57(VAR62);
        }
        break;
    case 8:
    case 9:
    case 10:
    case 11:
        FUN38(VAR4, VAR21, VAR32, VAR31);
        {
            static const TCGCond VAR99[] = {VAR82, VAR97, VAR63, VAR103};
            int VAR62 = FUN55();
            FUN56(VAR99[VAR20 - 8], VAR27[VAR31], 0, VAR62);
            FUN16(VAR27[VAR21], VAR27[VAR32]);
            FUN57(VAR62);
        }
        break;
    case 12:
    case 13:
        FUN5(VAR22);
        FUN14(VAR4, VAR21, VAR32);
        {
            int VAR62 = FUN55();
            TCGv_i32 VAR29 = FUN15();
            FUN21(VAR29, VAR34[VAR55], 1 << VAR31);
            FUN56(VAR20 & 1 ? VAR97 : VAR82, VAR29, 0, VAR62);
            FUN16(VAR27[VAR21], VAR27[VAR32]);
            FUN57(VAR62);
            FUN13(VAR29);
        }
        break;
    case 14:
        FUN8(VAR4, VAR21);
        {
            int VAR104 = (VAR32 << 4) + VAR31;
            if (VAR105[VAR104])
            {
                FUN16(VAR27[VAR21], VAR106[VAR104]);
            }
            else
            {
                FUN3("", VAR104);
                FUN27();
            }
        }
        break;
    case 15:
        FUN8(VAR4, VAR31);
        if (VAR105[VAR64])
        {
            FUN88(VAR64, VAR27[VAR31]);
        }
        else
        {
            FUN3("", VAR64);
            FUN27();
        }
        break;
    }
    break;
case 4:
case 5:
    FUN14(VAR4, VAR21, VAR31);
    {
        int VAR107 = VAR32 | ((VAR19 & 1) << 4);
        int VAR108 = (1 << (VAR20 + 1)) - 1;
        TCGv_i32 VAR29 = FUN15();
        FUN36(VAR29, VAR27[VAR31], VAR107);
        FUN21(VAR27[VAR21], VAR29, VAR108);
        FUN13(VAR29);
    }
    break;
case 6:
    FUN7();
    break;
case 7:
    FUN7();
    break;
case 8:
    switch (VAR20)
    {
    case 0:
    case 1:
    case 4:
    case 5:
        FUN5(VAR109);
        FUN14(VAR4, VAR32, VAR31);
        FUN89(VAR4, 0);
        {
            TCGv_i32 VAR110 = FUN15();
            FUN35(VAR110, VAR27[VAR32], VAR27[VAR31]);
            FUN90(VAR4, 2, VAR110, false);
            if (VAR20 & 0x4)
            {
                FUN91(VAR111[VAR21], VAR110, VAR4->VAR112);
            }
            else
            {
                FUN92(VAR111[VAR21], VAR110, VAR4->VAR112);
            }
            if (VAR20 & 0x1)
            {
                FUN16(VAR27[VAR32], VAR110);
            }
            FUN13(VAR110);
        }
        break;
    default:
        FUN7();
        break;
    }
    break;
case 9:
    FUN14(VAR4, VAR32, VAR31);
    switch (VAR20)
    {
    case 0:
        FUN5(VAR28);
        FUN20(VAR4);
        {
            TCGv_i32 VAR110 = FUN15();
            FUN34(VAR110, VAR27[VAR32], (0xffffffc0 | (VAR21 << 2)));
            FUN92(VAR27[VAR31], VAR110, VAR4->VAR113);
            FUN13(VAR110);
        }
        break;
    case 4:
        FUN5(VAR28);
        FUN20(VAR4);
        {
            TCGv_i32 VAR110 = FUN15();
            FUN34(VAR110, VAR27[VAR32], (0xffffffc0 | (VAR21 << 2)));
            FUN91(VAR27[VAR31], VAR110, VAR4->VAR113);
            FUN13(VAR110);
        }
        break;
    default:
        FUN7();
        break;
    }
    break;
case 10:
    FUN5(VAR109);
    switch (VAR20)
    {
    case 0:
        FUN89(VAR4, 0);
        FUN93(VAR111[VAR21], VAR30, VAR111[VAR32], VAR111[VAR31]);
        break;
    case 1:
        FUN89(VAR4, 0);
        FUN94(VAR111[VAR21], VAR30, VAR111[VAR32], VAR111[VAR31]);
        break;
    case 2:
        FUN89(VAR4, 0);
        FUN95(VAR111[VAR21], VAR30, VAR111[VAR32], VAR111[VAR31]);
        break;
    case 4:
        FUN89(VAR4, 0);
        FUN96(VAR111[VAR21], VAR30, VAR111[VAR21], VAR111[VAR32], VAR111[VAR31]);
        break;
    case 5:
        FUN89(VAR4, 0);
        FUN97(VAR111[VAR21], VAR30, VAR111[VAR21], VAR111[VAR32], VAR111[VAR31]);
        break;
    case 8:
    case 9:
    case 10:
    case 11:
    case 14:
        FUN8(VAR4, VAR21);
        FUN89(VAR4, 0);
        {
            static const unsigned VAR114[] = {
                VAR115,
                VAR116,
                VAR117,
                VAR118,
                [6] = VAR116,
            };
            TCGv_i32 VAR119 = FUN10(VAR114[VAR20 & 7]);
            TCGv_i32 VAR120 = FUN10(VAR31);
            if (VAR20 == 14)
            {
                FUN98(VAR27[VAR21], VAR111[VAR32], VAR119, VAR120);
            }
            else
            {
                FUN99(VAR27[VAR21], VAR111[VAR32], VAR119, VAR120);
            }
            FUN13(VAR119);
            FUN13(VAR120);
        }
        break;
    case 12:
    case 13:
        FUN8(VAR4, VAR32);
        FUN89(VAR4, 0);
        {
            TCGv_i32 VAR120 = FUN10(-VAR31);
            if (VAR20 == 13)
            {
                FUN100(VAR111[VAR21], VAR30, VAR27[VAR32], VAR120);
            }
            else
            {
                FUN101(VAR111[VAR21], VAR30, VAR27[VAR32], VAR120);
            }
            FUN13(VAR120);
        }
        break;
    case 15:
        switch (VAR31)
        {
        case 0:
            FUN89(VAR4, 0);
            FUN16(VAR111[VAR21], VAR111[VAR32]);
            break;
        case 1:
            FUN89(VAR4, 0);
            FUN102(VAR111[VAR21], VAR111[VAR32]);
            break;
        case 4:
            FUN8(VAR4, VAR21);
            FUN89(VAR4, 0);
            FUN16(VAR27[VAR21], VAR111[VAR32]);
            break;
        case 5:
            FUN8(VAR4, VAR32);
            FUN89(VAR4, 0);
            FUN16(VAR111[VAR21], VAR27[VAR32]);
            break;
        case 6:
            FUN89(VAR4, 0);
            FUN103(VAR111[VAR21], VAR111[VAR32]);
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
    FUN5(VAR109);
    do
    {
        TCGv_i32 VAR121 = FUN10(1 << VAR122);
        FUN89(VAR4, 0);
        VAR123##FUN104(VAR30, VAR121, VAR111[VAR124], VAR111[VAR125]);
        FUN13(VAR121);
    } while (0) switch (VAR20)
    {
    case 1:
        FUN105(VAR126, VAR21, VAR32, VAR31);
        break;
    case 2:
        FUN105(VAR127, VAR21, VAR32, VAR31);
        break;
    case 3:
        FUN105(VAR128, VAR21, VAR32, VAR31);
        break;
    case 4:
        FUN105(VAR129, VAR21, VAR32, VAR31);
        break;
    case 5:
        FUN105(VAR130, VAR21, VAR32, VAR31);
        break;
    case 6:
        FUN105(VAR131, VAR21, VAR32, VAR31);
        break;
    case 7:
        FUN105(VAR132, VAR21, VAR32, VAR31);
        break;
    case 8:
    case 9:
    case 10:
    case 11:
        FUN8(VAR4, VAR31);
        FUN89(VAR4, 0);
        {
            static const TCGCond VAR99[] = {VAR82, VAR97, VAR63, VAR103};
            int VAR62 = FUN55();
            FUN56(VAR99[VAR20 - 8], VAR27[VAR31], 0, VAR62);
            FUN16(VAR111[VAR21], VAR111[VAR32]);
            FUN57(VAR62);
        }
        break;
    case 12:
    case 13:
        FUN5(VAR22);
        FUN89(VAR4, 0);
        {
            int VAR62 = FUN55();
            TCGv_i32 VAR29 = FUN15();
            FUN21(VAR29, VAR34[VAR55], 1 << VAR31);
            FUN56(VAR20 & 1 ? VAR97 : VAR82, VAR29, 0, VAR62);
            FUN16(VAR111[VAR21], VAR111[VAR32]);
            FUN57(VAR62);
            FUN13(VAR29);
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
FUN8(VAR4, VAR31);
{
    TCGv_i32 VAR29 = FUN10(((VAR4->VAR133->VAR134 & VAR135) ? 0 : ((VAR4->VAR9 + 3) & ~3)) + (0xfffc0000 | (VAR136 << 2)));
    if (VAR4->VAR133->VAR134 & VAR135)
    {
        FUN35(VAR29, VAR29, VAR4->VAR137);
    }
    FUN92(VAR27[VAR31], VAR29, VAR4->VAR112);
    FUN13(VAR29);
}
break;
case 2:
TCGv_i32 VAR110 = FUN15();
FUN14(VAR4, VAR138, VAR139);
FUN34(VAR110, VAR27[VAR138], VAR140 << VAR53);
if (VAR53)
{
    FUN90(VAR4, VAR53, VAR110, false);
}
VAR141##FUN106(VAR27[VAR139], VAR110, VAR4->VAR112);
FUN13(VAR110);
}
while (0)
    switch (VAR142)
    {
    case 0:
        FUN107(VAR143, 0);
        break;
    case 1:
        FUN107(VAR144, 1);
        break;
    case 2:
        FUN107(VAR145, 2);
        break;
    case 4:
        FUN107(VAR146, 0);
        break;
    case 5:
        FUN107(VAR147, 1);
        break;
    case 6:
        FUN107(VAR148, 2);
        break;
    case 7:
        if (VAR139 < 8)
        {
            FUN5(VAR149);
        }
        switch (VAR139)
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
            switch (VAR19)
            {
            case 0:
                FUN5(VAR150);
                break;
            case 2:
                FUN5(VAR150);
                break;
            case 3:
                FUN5(VAR150);
                break;
            case 4:
                FUN5(VAR149);
                break;
            case 5:
                FUN5(VAR149);
                break;
            default:
                FUN7();
                break;
            }
            break;
        case 12:
            FUN5(VAR151);
            break;
        case 13:
            switch (VAR19)
            {
            case 0:
                FUN5(VAR152);
                break;
            case 2:
                FUN5(VAR152);
                break;
            case 3:
                FUN5(VAR152);
                break;
            default:
                FUN7();
                break;
            }
            break;
        case 14:
            FUN5(VAR151);
            break;
        case 15:
            FUN5(VAR151);
            break;
        default:
            FUN7();
            break;
        }
        break;
    case 9:
        FUN107(VAR153, 1);
        break;
    case 10:
        FUN8(VAR4, VAR139);
        FUN17(VAR27[VAR139], VAR140 | (VAR138 << 8) | ((VAR138 & 0x8) ? 0xfffff000 : 0));
        break;
        TCGv_i32 VAR110 = FUN108();
        FUN14(VAR4, VAR138, VAR139);
        FUN34(VAR110, VAR27[VAR138], VAR140 << 2);
        FUN90(VAR4, 2, VAR110, true);
        VAR141##FUN106(VAR27[VAR139], VAR110, VAR4->VAR112);
        FUN13(VAR110);
    }
while (0)
case 11:
    FUN5(VAR154);
FUN109(VAR145);
break;
case 12:
FUN14(VAR4, VAR138, VAR139);
FUN34(VAR27[VAR139], VAR27[VAR138], VAR155);
break;
case 13:
FUN14(VAR4, VAR138, VAR139);
FUN34(VAR27[VAR139], VAR27[VAR138], VAR155 << 8);
break;
case 14:
FUN5(VAR156);
FUN14(VAR4, VAR138, VAR139);
{
    int VAR62 = FUN55();
    TCGv_i32 VAR29 = FUN108();
    TCGv_i32 VAR110 = FUN108();
    TCGv_i32 VAR157;
    FUN16(VAR29, VAR27[VAR139]);
    FUN34(VAR110, VAR27[VAR138], VAR140 << 2);
    FUN90(VAR4, 2, VAR110, true);
    FUN11(VAR4);
    VAR157 = FUN10(VAR4->VAR9);
    FUN110(VAR30, VAR157, VAR110);
    FUN92(VAR27[VAR139], VAR110, VAR4->VAR112);
    FUN87(VAR82, VAR27[VAR139], VAR34[VAR158], VAR62);
    FUN91(VAR29, VAR110, VAR4->VAR112);
    FUN57(VAR62);
    FUN13(VAR157);
    FUN13(VAR110);
    FUN13(VAR29);
}
break;
case 15:
FUN5(VAR154);
FUN109(VAR148);
break;
default:
FUN7();
break;
}
break;
case 3:
switch (VAR142)
{
case 0:
case 4:
case 8:
case 12:
    FUN5(VAR109);
    FUN8(VAR4, VAR138);
    FUN89(VAR4, 0);
    {
        TCGv_i32 VAR110 = FUN15();
        FUN34(VAR110, VAR27[VAR138], VAR140 << 2);
        FUN90(VAR4, 2, VAR110, false);
        if (VAR142 & 0x4)
        {
            FUN91(VAR111[VAR139], VAR110, VAR4->VAR112);
        }
        else
        {
            FUN92(VAR111[VAR139], VAR110, VAR4->VAR112);
        }
        if (VAR142 & 0x8)
        {
            FUN16(VAR27[VAR138], VAR110);
        }
        FUN13(VAR110);
    }
    break;
default:
    FUN7();
    break;
}
break;
case 4:
FUN5(VAR159);
{
    enum
    {
        VAR160 = 0x0,
        VAR161 = 0x4,
        VAR162 = 0x8,
        VAR163 = 0xc,
        VAR164 = 0xf,
    } VAR165 = VAR19 & 0xc;
    bool VAR166 = (VAR20 & 0x3) == 2;
    bool VAR167 = (VAR20 & 0xc) == 0;
    uint32_t VAR168 = 0;
    if (VAR20 > 9)
    {
        FUN7();
    }
    switch (VAR20 & 2)
    {
    case 0:
        VAR166 = true;
        VAR168 = (VAR20 & 1) ? -4 : 4;
        if (VAR20 >= 8)
        {
            if (VAR19 == 0)
            {
                VAR165 = VAR164;
            }
            else
            {
                FUN7();
            }
        }
        else if (VAR165 != VAR162)
        {
            FUN7();
        }
        break;
    case 2:
        if (VAR165 == VAR160 && VAR20 != 7)
        {
            FUN7();
        }
        break;
    }
    if (VAR165 != VAR164)
    {
        if (!VAR166)
        {
            FUN8(VAR4, VAR32);
        }
        if (!VAR167)
        {
            FUN8(VAR4, VAR31);
        }
    }
    {
        TCGv_i32 VAR169 = FUN15();
        TCGv_i32 VAR170 = FUN15();
        if (VAR168)
        {
            FUN8(VAR4, VAR32);
            FUN34(VAR169, VAR27[VAR32], VAR168);
            FUN90(VAR4, 2, VAR169, false);
            FUN92(VAR170, VAR169, VAR4->VAR112);
        }
        if (VAR165 != VAR164)
        {
            TCGv_i32 VAR171 = FUN111(VAR166 ? VAR34[VAR172 + VAR173] : VAR27[VAR32], VAR19 & 1, VAR165 == VAR160);
            TCGv_i32 VAR174 = FUN111(VAR167 ? VAR34[VAR172 + 2 + VAR175] : VAR27[VAR31], VAR19 & 2, VAR165 == VAR160);
            if (VAR165 == VAR161 || VAR165 == VAR160)
            {
                FUN74(VAR34[VAR176], VAR171, VAR174);
                if (VAR165 == VAR160)
                {
                    FUN17(VAR34[VAR177], 0);
                }
                else
                {
                    FUN59(VAR34[VAR177], VAR34[VAR176], 31);
                }
            }
            else
            {
                TCGv_i32 VAR178 = FUN15();
                TCGv_i64 VAR179 = FUN62();
                TCGv_i64 VAR29 = FUN62();
                FUN74(VAR178, VAR171, VAR174);
                FUN72(VAR179, VAR178);
                FUN67(VAR29, VAR34[VAR176], VAR34[VAR177]);
                if (VAR165 == VAR162)
                {
                    FUN112(VAR29, VAR29, VAR179);
                }
                else
                {
                    FUN113(VAR29, VAR29, VAR179);
                }
                FUN65(VAR34[VAR176], VAR29);
                FUN79(VAR29, VAR29, 32);
                FUN65(VAR34[VAR177], VAR29);
                FUN85(VAR34[VAR177], VAR34[VAR177]);
                FUN13(VAR178);
                FUN66(VAR179);
                FUN66(VAR29);
            }
            FUN13(VAR171);
            FUN13(VAR174);
        }
        if (VAR168)
        {
            FUN16(VAR27[VAR32], VAR169);
            FUN16(VAR34[VAR172 + VAR180], VAR170);
        }
        FUN13(VAR169);
        FUN13(VAR170);
    }
}
break;
case 5:
switch (VAR181)
{
case 0:
    FUN17(VAR27[0], VAR4->VAR17);
    FUN114(VAR4, (VAR4->VAR9 & ~3) + (VAR182 << 2) + 4, 0);
    break;
case 1:
case 2:
case 3:
    FUN5(VAR28);
    FUN8(VAR4, VAR181 << 2);
    FUN115(VAR4, VAR181, (VAR4->VAR9 & ~3) + (VAR182 << 2) + 4, 0);
    break;
}
break;
case 6:
switch (VAR181)
{
case 0:
    FUN114(VAR4, VAR4->VAR9 + 4 + VAR182, 0);
    break;
case 1:
    FUN8(VAR4, VAR183);
    {
        static const TCGCond VAR99[] = {
            VAR97,
            VAR82,
            VAR103,
            VAR63,
        };
        FUN116(VAR4, VAR99[VAR184 & 3], VAR27[VAR183], 0, 4 + VAR185);
    }
    break;
case 2:
    FUN8(VAR4, VAR186);
    {
        static const TCGCond VAR99[] = {
            VAR97,
            VAR82,
            VAR103,
            VAR63,
        };
        FUN116(VAR4, VAR99[VAR187 & 3], VAR27[VAR186], VAR14[VAR188], 4 + VAR189);
    }
    break;
case 3:
    switch (VAR187)
    {
    case 0:
        FUN5(VAR28);
        {
            TCGv_i32 VAR9 = FUN10(VAR4->VAR9);
            TCGv_i32 VAR75 = FUN10(VAR183);
            TCGv_i32 VAR190 = FUN10(VAR191);
            FUN11(VAR4);
            FUN117(VAR30, VAR9, VAR75, VAR190);
            FUN13(VAR190);
            FUN13(VAR75);
            FUN13(VAR9);
            FUN44(VAR4);
        }
        break;
    case 1:
        switch (VAR188)
        {
        case 0:
        case 1:
            FUN5(VAR22);
            {
                TCGv_i32 VAR29 = FUN15();
                FUN21(VAR29, VAR34[VAR55], 1 << VAR138);
                FUN116(VAR4, VAR188 == 1 ? VAR82 : VAR97, VAR29, 0, 4 + VAR155);
                FUN13(VAR29);
            }
            break;
        case 8:
        case 9:
        case 10:
            FUN5(VAR192);
            FUN8(VAR4, VAR138);
            {
                uint32_t VAR193 = VAR4->VAR9 + VAR140 + 4;
                TCGv_i32 VAR29 = FUN10(VAR193);
                FUN118(VAR34[VAR194], VAR27[VAR138], 1);
                FUN17(VAR34[VAR195], VAR4->VAR17);
                FUN119(VAR30, VAR29);
                FUN13(VAR29);
                if (VAR188 > 8)
                {
                    int VAR62 = FUN55();
                    FUN56(VAR188 == 9 ? VAR82 : VAR196, VAR27[VAR138], 0, VAR62);
                    FUN114(VAR4, VAR193, 1);
                    FUN57(VAR62);
                }
                FUN114(VAR4, VAR4->VAR17, 0);
            }
            break;
        default:
            FUN7();
            break;
        }
        break;
    case 2:
    case 3:
        FUN8(VAR4, VAR186);
        FUN116(VAR4, VAR187 == 2 ? VAR197 : VAR102, VAR27[VAR186], VAR15[VAR188], 4 + VAR189);
        break;
    }
    break;
}
break;
case 7:
{
    TCGCond VAR198 = (VAR142 & 8) ? VAR82 : VAR97;
    switch (VAR142 & 7)
    {
    case 0:
        FUN14(VAR4, VAR138, VAR139);
        {
            TCGv_i32 VAR29 = FUN15();
            FUN33(VAR29, VAR27[VAR138], VAR27[VAR139]);
            FUN116(VAR4, VAR198, VAR29, 0, 4 + VAR155);
            FUN13(VAR29);
        }
        break;
    case 1:
    case 2:
    case 3:
        FUN14(VAR4, VAR138, VAR139);
        {
            static const TCGCond VAR99[] = {
                [1] = VAR97,
                [2] = VAR103,
                [3] = VAR197,
                [9] = VAR82,
                [10] = VAR63,
                [11] = VAR102,
            };
            FUN120(VAR4, VAR99[VAR142], VAR27[VAR138], VAR27[VAR139], 4 + VAR155);
        }
        break;
    case 4:
        FUN14(VAR4, VAR138, VAR139);
        {
            TCGv_i32 VAR29 = FUN15();
            FUN33(VAR29, VAR27[VAR138], VAR27[VAR139]);
            FUN120(VAR4, VAR198, VAR29, VAR27[VAR139], 4 + VAR155);
            FUN13(VAR29);
        }
        break;
    case 5:
        FUN14(VAR4, VAR138, VAR139);
        {
            TCGv_i32 VAR121 = FUN10(0x80000000);
            TCGv_i32 VAR121 = FUN10(0x00000001);
            TCGv_i32 VAR29 = FUN15();
            FUN21(VAR29, VAR27[VAR139], 0x1f);
            FUN69(VAR121, VAR121, VAR29);
            FUN23(VAR121, VAR121, VAR29);
            FUN33(VAR29, VAR27[VAR138], VAR121);
            FUN116(VAR4, VAR198, VAR29, 0, 4 + VAR155);
            FUN13(VAR29);
            FUN13(VAR121);
        }
        break;
    case 6:
    case 7:
        FUN8(VAR4, VAR138);
        {
            TCGv_i32 VAR29 = FUN15();
            FUN21(VAR29, VAR27[VAR138], 0x80000000 >> (((VAR142 & 1) << 4) | VAR139)); 0x00000001 << ( ( ( VAR142 & 1 ) << 4 ) | VAR139 ) ) ;
            FUN116(VAR4, VAR198, VAR29, 0, 4 + VAR155);
            FUN13(VAR29);
        }
        break;
    }
}
break;
TCGv_i32 VAR110 = FUN15();
FUN14(VAR4, VAR199, VAR200);
FUN34(VAR110, VAR27[VAR199], VAR201 << 2);
FUN90(VAR4, 2, VAR110, false);
VAR141##FUN106(VAR27[VAR200], VAR110, VAR4->VAR112);
FUN13(VAR110);
}
while (0)
case 8:
    FUN121(VAR145);
break;
case 9:
FUN121(VAR148);
break;
case 10:
FUN38(VAR4, VAR201, VAR199, VAR200);
FUN35(VAR27[VAR201], VAR27[VAR199], VAR27[VAR200]);
break;
case 11:
FUN14(VAR4, VAR201, VAR199);
FUN34(VAR27[VAR201], VAR27[VAR199], VAR200 ? VAR200 : -1);
break;
case 12:
FUN8(VAR4, VAR199);
if (VAR200 < 8)
{
    FUN17(VAR27[VAR199], VAR201 | (VAR200 << 4) | ((VAR200 & 6) == 6 ? 0xffffff80 : 0));
}
else
{
    TCGCond VAR198 = (VAR200 & 4) ? VAR82 : VAR97;
    FUN116(VAR4, VAR198, VAR27[VAR199], 0, 4 + (VAR201 | ((VAR200 & 3) << 4)));
}
break;
case 13:
switch (VAR201)
{
case 0:
    FUN14(VAR4, VAR199, VAR200);
    FUN16(VAR27[VAR200], VAR27[VAR199]);
    break;
case 15:
    switch (VAR200)
    {
    case 0:
        FUN9(VAR4, VAR27[0]);
        break;
    case 1:
        FUN5(VAR28);
        {
            TCGv_i32 VAR29 = FUN10(VAR4->VAR9);
            FUN11(VAR4);
            FUN12(VAR29, VAR30, VAR29);
            FUN9(VAR4, VAR29);
            FUN13(VAR29);
        }
        break;
    case 2:
        FUN5(VAR46);
        if (VAR4->VAR47)
        {
            FUN28(VAR4, VAR202);
        }
        break;
    case 3:
        break;
    case 6:
        FUN6(VAR4, VAR24);
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
if (VAR4->VAR203 == VAR204)
{
    FUN122(VAR4, 0);
}
VAR4->VAR9 = VAR4->VAR17;
return;
VAR8 : FUN3("", VAR4->VAR9);
FUN6(VAR4, VAR24);
}