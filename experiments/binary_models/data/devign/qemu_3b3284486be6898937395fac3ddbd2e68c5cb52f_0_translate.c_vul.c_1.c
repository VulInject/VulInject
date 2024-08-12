static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    unsigned int VAR5, VAR6, VAR7, VAR8, VAR9, VAR10, VAR11, VAR12, VAR13, VAR14, VAR15;
    TCGv VAR16;
    TCGv VAR17;
    TCGv VAR18;
    TCGv VAR19;
    TCGv_i64 VAR20;
    VAR6 = FUN2(VAR2, VAR4->VAR21, VAR4->VAR22);
    VAR4->VAR21 += 4;
    if (FUN3(VAR2))
        goto VAR23;
    VAR5 = VAR6 >> 28;
    if (VAR5 == 0xf)
    {
        FUN4(5);
        if (((VAR6 >> 25) & 7) == 1)
        {
            if (!FUN5(VAR2, VAR24))
                goto VAR23;
            if (FUN6(VAR2, VAR4, VAR6))
                goto VAR23;
        }
        if ((VAR6 & 0x0f100000) == 0x04000000)
        {
            if (!FUN5(VAR2, VAR24))
                goto VAR23;
            if (FUN7(VAR2, VAR4, VAR6))
                goto VAR23;
        }
        if (((VAR6 & 0x0f30f000) == 0x0510f000) || ((VAR6 & 0x0f30f010) == 0x0710f000))
        {
            if ((VAR6 & (1 << 22)) == 0)
            {
                if (!FUN5(VAR2, VAR25))
                {
                    goto VAR23;
                }
            }
            FUN4(5TE);
        }
        if (((VAR6 & 0x0f70f000) == 0x0450f000) || ((VAR6 & 0x0f70f010) == 0x0650f000))
        {
            FUN4(7);
            return;
        }
        if (((VAR6 & 0x0f700000) == 0x04100000) || ((VAR6 & 0x0f700010) == 0x06100000))
        {
            if (!FUN5(VAR2, VAR25))
            {
                goto VAR23;
            }
            return;
        }
        if ((VAR6 & 0x0ffffdff) == 0x01010000)
        {
            FUN4(6);
            if (((VAR6 >> 9) & 1) != VAR4->VAR22)
            {
                goto VAR23;
            }
        }
        else if ((VAR6 & 0x0fffff00) == 0x057ff000)
        {
            switch ((VAR6 >> 4) & 0xf)
            {
            case 1:
                FUN4(6K);
                FUN8(VAR4);
            case 4:
            case 5:
            case 6:
                FUN4(7);
            default:
                goto VAR23;
            }
        }
        else if ((VAR6 & 0x0e5fffe0) == 0x084d0500)
        {
            if (FUN9(VAR4))
            {
                goto VAR23;
            }
            FUN4(6);
            FUN10(VAR4, (VAR6 & 0x1f), (VAR6 >> 23) & 3, VAR6 & (1 << 21));
        }
        else if ((VAR6 & 0x0e50ffe0) == 0x08100a00)
        {
            int32_t VAR26;
            if (FUN9(VAR4))
                goto VAR23;
            FUN4(6);
            VAR13 = (VAR6 >> 16) & 0xf;
            VAR19 = FUN11(VAR4, VAR13);
            VAR9 = (VAR6 >> 23) & 3;
            switch (VAR9)
            {
            case 0:
                VAR26 = -4;
                break;
            case 1:
                VAR26 = 0;
                break;
            case 2:
                VAR26 = -8;
                break;
            case 3:
                VAR26 = 4;
                break;
            default:
                FUN12();
            }
            if (VAR26)
                FUN13(VAR19, VAR19, VAR26);
            VAR16 = FUN14(VAR19, 0);
            FUN13(VAR19, VAR19, 4);
            VAR17 = FUN14(VAR19, 0);
            if (VAR6 & (1 << 21))
            {
                switch (VAR9)
                {
                case 0:
                    VAR26 = -8;
                    break;
                case 1:
                    VAR26 = 4;
                    break;
                case 2:
                    VAR26 = -4;
                    break;
                case 3:
                    VAR26 = 0;
                    break;
                default:
                    FUN12();
                }
                if (VAR26)
                    FUN13(VAR19, VAR19, VAR26);
                FUN15(VAR4, VAR13, VAR19);
            }
            else
            {
                FUN16(VAR19);
            }
            FUN17(VAR4, VAR16, VAR17);
        }
        else if ((VAR6 & 0x0e000000) == 0x0a000000)
        {
            int32_t VAR26;
            VAR7 = (VAR27)VAR4->VAR21;
            VAR16 = FUN18();
            FUN19(VAR16, VAR7);
            FUN15(VAR4, 14, VAR16);
            VAR26 = (((VAR28)VAR6) << 8) >> 8;
            VAR7 += (VAR26 << 2) | ((VAR6 >> 23) & 2) | 1;
            VAR7 += 4;
            FUN20(VAR4, VAR7);
        }
        else if ((VAR6 & 0x0e000f00) == 0x0c000100)
        {
            if (FUN5(VAR2, VAR29))
            {
                if (VAR2->VAR30.VAR31 & (1 << 1))
                    if (!FUN21(VAR2, VAR4, VAR6))
            }
        }
        else if ((VAR6 & 0x0fe00000) == 0x0c400000)
        {
            FUN4(5TE);
        }
        else if ((VAR6 & 0x0f000010) == 0x0e000010)
        {
        }
        else if ((VAR6 & 0x0ff10020) == 0x01000000)
        {
            uint32_t VAR32;
            uint32_t VAR7;
            if (FUN9(VAR4))
                VAR32 = VAR7 = 0;
            if (VAR6 & (1 << 19))
            {
                if (VAR6 & (1 << 8))
                    VAR32 |= VAR33;
                if (VAR6 & (1 << 7))
                    VAR32 |= VAR34;
                if (VAR6 & (1 << 6))
                    VAR32 |= VAR35;
                if (VAR6 & (1 << 18))
                    VAR7 |= VAR32;
            }
            if (VAR6 & (1 << 17))
            {
                VAR32 |= VAR36;
                VAR7 |= (VAR6 & 0x1f);
            }
            if (VAR32)
            {
                FUN22(VAR4, VAR32, 0, VAR7);
            }
        }
        goto VAR23;
    }
    if (VAR5 != 0xe)
    {
        VAR4->VAR37 = FUN23();
        FUN24(VAR5 ^ 1, VAR4->VAR37);
        VAR4->VAR38 = 1;
    }
    if ((VAR6 & 0x0f900000) == 0x03000000)
    {
        if ((VAR6 & (1 << 21)) == 0)
        {
            FUN4(6T2);
            VAR14 = (VAR6 >> 12) & 0xf;
            VAR7 = ((VAR6 >> 4) & 0xf000) | (VAR6 & 0xfff);
            if ((VAR6 & (1 << 22)) == 0)
            {
                VAR16 = FUN18();
                FUN19(VAR16, VAR7);
            }
            else
            {
                VAR16 = FUN11(VAR4, VAR14);
                FUN25(VAR16, VAR16);
                FUN26(VAR16, VAR16, VAR7 << 16);
            }
            FUN15(VAR4, VAR14, VAR16);
        }
        else
        {
            if (((VAR6 >> 12) & 0xf) != 0xf)
                goto VAR23;
            if (((VAR6 >> 16) & 0xf) == 0)
            {
                FUN27(VAR4, VAR6 & 0xff);
            }
            else
            {
                VAR7 = VAR6 & 0xff;
                VAR10 = ((VAR6 >> 8) & 0xf) * 2;
                if (VAR10)
                    VAR7 = (VAR7 >> VAR10) | (VAR7 << (32 - VAR10));
                VAR9 = ((VAR6 & (1 << 22)) != 0);
                if (FUN22(VAR4, FUN28(VAR2, VAR4, (VAR6 >> 16) & 0xf, VAR9), VAR9, VAR7))
                    goto VAR23;
            }
        }
    }
    else if ((VAR6 & 0x0f900000) == 0x01000000 && (VAR6 & 0x00000090) != 0x00000090)
    {
        VAR8 = (VAR6 >> 21) & 3;
        VAR15 = (VAR6 >> 4) & 0xf;
        VAR11 = VAR6 & 0xf;
        switch (VAR15)
        {
        case 0x0:
            if (VAR8 & 1)
            {
                VAR16 = FUN11(VAR4, VAR11);
                VAR9 = ((VAR8 & 2) != 0);
                if (FUN29(VAR4, FUN28(VAR2, VAR4, (VAR6 >> 16) & 0xf, VAR9), VAR9, VAR16))
                    goto VAR23;
            }
            else
            {
                VAR14 = (VAR6 >> 12) & 0xf;
                if (VAR8 & 2)
                {
                    if (FUN9(VAR4))
                        goto VAR23;
                    VAR16 = FUN30(VAR39);
                }
                else
                {
                    VAR16 = FUN18();
                    FUN31(VAR16, VAR40);
                }
                FUN15(VAR4, VAR14, VAR16);
            }
            break;
        case 0x1:
            if (VAR8 == 1)
            {
                FUN4(4T);
                VAR16 = FUN11(VAR4, VAR11);
                FUN32(VAR4, VAR16);
            }
            else if (VAR8 == 3)
            {
                FUN4(5);
                VAR14 = (VAR6 >> 12) & 0xf;
                VAR16 = FUN11(VAR4, VAR11);
                FUN33(VAR16, VAR16);
                FUN15(VAR4, VAR14, VAR16);
            }
            else
            {
                goto VAR23;
            }
            break;
        case 0x2:
            if (VAR8 == 1)
            {
                FUN4(5J);
                VAR16 = FUN11(VAR4, VAR11);
                FUN32(VAR4, VAR16);
            }
            else
            {
                goto VAR23;
            }
            break;
        case 0x3:
            if (VAR8 != 1)
                goto VAR23;
            FUN4(5);
            VAR16 = FUN11(VAR4, VAR11);
            VAR17 = FUN18();
            FUN19(VAR17, VAR4->VAR21);
            FUN15(VAR4, 14, VAR17);
            FUN32(VAR4, VAR16);
            break;
        case 0x5:
            FUN4(5TE);
            VAR14 = (VAR6 >> 12) & 0xf;
            VAR13 = (VAR6 >> 16) & 0xf;
            VAR16 = FUN11(VAR4, VAR11);
            VAR17 = FUN11(VAR4, VAR13);
            if (VAR8 & 2)
                FUN34(VAR17, VAR40, VAR17);
            if (VAR8 & 1)
                FUN35(VAR16, VAR40, VAR16, VAR17);
            else
                FUN36(VAR16, VAR40, VAR16, VAR17);
            FUN16(VAR17);
            FUN15(VAR4, VAR14, VAR16);
            break;
        case 7:
            if (VAR8 != 1)
            {
                goto VAR23;
            }
            FUN4(5);
            FUN37(VAR4, 4, VAR41);
            break;
        case 0x8:
        case 0xa:
        case 0xc:
        case 0xe:
            FUN4(5TE);
            VAR12 = (VAR6 >> 8) & 0xf;
            VAR13 = (VAR6 >> 12) & 0xf;
            VAR14 = (VAR6 >> 16) & 0xf;
            if (VAR8 == 1)
            {
                VAR16 = FUN11(VAR4, VAR11);
                VAR17 = FUN11(VAR4, VAR12);
                if (VAR15 & 4)
                    FUN38(VAR17, VAR17, 16);
                else
                    FUN39(VAR17);
                VAR20 = FUN40(VAR16, VAR17);
                FUN41(VAR20, VAR20, 16);
                VAR16 = FUN18();
                FUN42(VAR16, VAR20);
                FUN43(VAR20);
                if ((VAR15 & 2) == 0)
                {
                    VAR17 = FUN11(VAR4, VAR13);
                    FUN44(VAR16, VAR40, VAR16, VAR17);
                    FUN16(VAR17);
                }
                FUN15(VAR4, VAR14, VAR16);
            }
            else
            {
                VAR16 = FUN11(VAR4, VAR11);
                VAR17 = FUN11(VAR4, VAR12);
                FUN45(VAR16, VAR17, VAR15 & 2, VAR15 & 4);
                FUN16(VAR17);
                if (VAR8 == 2)
                {
                    VAR20 = FUN46();
                    FUN47(VAR20, VAR16);
                    FUN16(VAR16);
                    FUN48(VAR4, VAR20, VAR13, VAR14);
                    FUN49(VAR4, VAR13, VAR14, VAR20);
                    FUN43(VAR20);
                }
                else
                {
                    if (VAR8 == 0)
                    {
                        VAR17 = FUN11(VAR4, VAR13);
                        FUN44(VAR16, VAR40, VAR16, VAR17);
                        FUN16(VAR17);
                    }
                    FUN15(VAR4, VAR14, VAR16);
                }
            }
            break;
        default:
            goto VAR23;
        }
    }
    else if (((VAR6 & 0x0e000000) == 0 && (VAR6 & 0x00000090) != 0x90) || ((VAR6 & 0x0e000000) == (1 << 25)))
    {
        int VAR42, VAR43, VAR44;
        VAR8 = (VAR6 >> 21) & 0xf;
        VAR42 = (VAR6 >> 20) & 1;
        VAR43 = VAR45[VAR8] & VAR42;
        if (VAR6 & (1 << 25))
        {
            VAR7 = VAR6 & 0xff;
            VAR10 = ((VAR6 >> 8) & 0xf) * 2;
            if (VAR10)
            {
                VAR7 = (VAR7 >> VAR10) | (VAR7 << (32 - VAR10));
            }
            VAR17 = FUN18();
            FUN19(VAR17, VAR7);
            if (VAR43 && VAR10)
            {
                FUN50(VAR17);
            }
        }
        else
        {
            VAR11 = (VAR6)&0xf;
            VAR17 = FUN11(VAR4, VAR11);
            VAR44 = (VAR6 >> 5) & 3;
            if (!(VAR6 & (1 << 4)))
            {
                VAR10 = (VAR6 >> 7) & 0x1f;
                FUN51(VAR17, VAR44, VAR10, VAR43);
            }
            else
            {
                VAR12 = (VAR6 >> 8) & 0xf;
                VAR16 = FUN11(VAR4, VAR12);
                FUN52(VAR17, VAR44, VAR16, VAR43);
            }
        }
        if (VAR8 != 0x0f && VAR8 != 0x0d)
        {
            VAR13 = (VAR6 >> 16) & 0xf;
            VAR16 = FUN11(VAR4, VAR13);
        }
        else
        {
            FUN53(VAR16);
        }
        VAR14 = (VAR6 >> 12) & 0xf;
        switch (VAR8)
        {
        case 0x00:
            FUN54(VAR16, VAR16, VAR17);
            if (VAR43)
            {
                FUN55(VAR16);
            }
            FUN56(VAR2, VAR4, VAR14, VAR16);
            break;
        case 0x01:
            FUN57(VAR16, VAR16, VAR17);
            if (VAR43)
            {
                FUN55(VAR16);
            }
            FUN56(VAR2, VAR4, VAR14, VAR16);
            break;
        case 0x02:
            if (VAR42 && VAR14 == 15)
            {
                if (FUN9(VAR4))
                {
                    goto VAR23;
                }
                FUN58(VAR16, VAR16, VAR17);
                FUN59(VAR4, VAR16);
            }
            else
            {
                if (VAR42)
                {
                    FUN58(VAR16, VAR16, VAR17);
                }
                else
                {
                    FUN60(VAR16, VAR16, VAR17);
                }
                FUN56(VAR2, VAR4, VAR14, VAR16);
            }
            break;
        case 0x03:
            if (VAR42)
            {
                FUN58(VAR16, VAR17, VAR16);
            }
            else
            {
                FUN60(VAR16, VAR17, VAR16);
            }
            FUN56(VAR2, VAR4, VAR14, VAR16);
            break;
        case 0x04:
            if (VAR42)
            {
                FUN61(VAR16, VAR16, VAR17);
            }
            else
            {
                FUN62(VAR16, VAR16, VAR17);
            }
            FUN56(VAR2, VAR4, VAR14, VAR16);
            break;
        case 0x05:
            if (VAR42)
            {
                FUN63(VAR16, VAR16, VAR17);
            }
            else
            {
                FUN64(VAR16, VAR16, VAR17);
            }
            FUN56(VAR2, VAR4, VAR14, VAR16);
            break;
        case 0x06:
            if (VAR42)
            {
                FUN65(VAR16, VAR16, VAR17);
            }
            else
            {
                FUN66(VAR16, VAR16, VAR17);
            }
            FUN56(VAR2, VAR4, VAR14, VAR16);
            break;
        case 0x07:
            if (VAR42)
            {
                FUN65(VAR16, VAR17, VAR16);
            }
            else
            {
                FUN66(VAR16, VAR17, VAR16);
            }
            FUN56(VAR2, VAR4, VAR14, VAR16);
            break;
        case 0x08:
            if (VAR42)
            {
                FUN54(VAR16, VAR16, VAR17);
                FUN55(VAR16);
            }
            FUN16(VAR16);
            break;
        case 0x09:
            if (VAR42)
            {
                FUN57(VAR16, VAR16, VAR17);
                FUN55(VAR16);
            }
            FUN16(VAR16);
            break;
        case 0x0a:
            if (VAR42)
            {
                FUN58(VAR16, VAR16, VAR17);
            }
            FUN16(VAR16);
            break;
        case 0x0b:
            if (VAR42)
            {
                FUN61(VAR16, VAR16, VAR17);
            }
            FUN16(VAR16);
            break;
        case 0x0c:
            FUN67(VAR16, VAR16, VAR17);
            if (VAR43)
            {
                FUN55(VAR16);
            }
            FUN56(VAR2, VAR4, VAR14, VAR16);
            break;
        case 0x0d:
            if (VAR43 && VAR14 == 15)
            {
                if (FUN9(VAR4))
                {
                    goto VAR23;
                }
                FUN59(VAR4, VAR17);
            }
            else
            {
                if (VAR43)
                {
                    FUN55(VAR17);
                }
                FUN56(VAR2, VAR4, VAR14, VAR17);
            }
            break;
        case 0x0e:
            FUN68(VAR16, VAR16, VAR17);
            if (VAR43)
            {
                FUN55(VAR16);
            }
            FUN56(VAR2, VAR4, VAR14, VAR16);
            break;
        default:
        case 0x0f:
            FUN69(VAR17, VAR17);
            if (VAR43)
            {
                FUN55(VAR17);
            }
            FUN56(VAR2, VAR4, VAR14, VAR17);
            break;
        }
        if (VAR8 != 0x0f && VAR8 != 0x0d)
        {
            FUN16(VAR17);
        }
    }
    else
    {
        VAR8 = (VAR6 >> 24) & 0xf;
        switch (VAR8)
        {
        case 0x0:
        case 0x1:
            VAR15 = (VAR6 >> 5) & 3;
            if (VAR15 == 0)
            {
                if (VAR8 == 0x0)
                {
                    VAR14 = (VAR6 >> 16) & 0xf;
                    VAR13 = (VAR6 >> 12) & 0xf;
                    VAR12 = (VAR6 >> 8) & 0xf;
                    VAR11 = (VAR6)&0xf;
                    VAR8 = (VAR6 >> 20) & 0xf;
                    switch (VAR8)
                    {
                    case 0:
                    case 1:
                    case 2:
                    case 3:
                    case 6:
                        VAR16 = FUN11(VAR4, VAR12);
                        VAR17 = FUN11(VAR4, VAR11);
                        FUN70(VAR16, VAR16, VAR17);
                        FUN16(VAR17);
                        if (VAR6 & (1 << 22))
                        {
                            FUN4(6T2);
                            VAR17 = FUN11(VAR4, VAR13);
                            FUN60(VAR16, VAR17, VAR16);
                            FUN16(VAR17);
                        }
                        else if (VAR6 & (1 << 21))
                        {
                            VAR17 = FUN11(VAR4, VAR13);
                            FUN62(VAR16, VAR16, VAR17);
                            FUN16(VAR17);
                        }
                        if (VAR6 & (1 << 20))
                            FUN55(VAR16);
                        FUN15(VAR4, VAR14, VAR16);
                        break;
                    case 4:
                        FUN4(6);
                        VAR16 = FUN11(VAR4, VAR12);
                        VAR17 = FUN11(VAR4, VAR11);
                        VAR20 = FUN71(VAR16, VAR17);
                        FUN72(VAR4, VAR20, VAR13);
                        FUN72(VAR4, VAR20, VAR14);
                        FUN49(VAR4, VAR13, VAR14, VAR20);
                        FUN43(VAR20);
                        break;
                    case 8:
                    case 9:
                    case 10:
                    case 11:
                    case 12:
                    case 13:
                    case 14:
                    case 15:
                        VAR16 = FUN11(VAR4, VAR12);
                        VAR17 = FUN11(VAR4, VAR11);
                        if (VAR6 & (1 << 22))
                        {
                            FUN73(VAR16, VAR17, VAR16, VAR17);
                        }
                        else
                        {
                            FUN74(VAR16, VAR17, VAR16, VAR17);
                        }
                        if (VAR6 & (1 << 21))
                        {
                            TCGv VAR46 = FUN11(VAR4, VAR13);
                            TCGv VAR47 = FUN11(VAR4, VAR14);
                            FUN75(VAR16, VAR17, VAR16, VAR17, VAR46, VAR47);
                            FUN76(VAR46);
                            FUN76(VAR47);
                        }
                        if (VAR6 & (1 << 20))
                        {
                            FUN77(VAR16, VAR17);
                        }
                        FUN15(VAR4, VAR13, VAR16);
                        FUN15(VAR4, VAR14, VAR17);
                        break;
                    default:
                        goto VAR23;
                    }
                }
                else
                {
                    VAR13 = (VAR6 >> 16) & 0xf;
                    VAR14 = (VAR6 >> 12) & 0xf;
                    if (VAR6 & (1 << 23))
                    {
                        VAR8 = (VAR6 >> 21) & 0x3;
                        if (VAR8)
                            FUN4(6K);
                        else
                            FUN4(6);
                        VAR19 = FUN78();
                        FUN79(VAR4, VAR19, VAR13);
                        if (VAR6 & (1 << 20))
                        {
                            switch (VAR8)
                            {
                            case 0:
                                FUN80(VAR4, VAR14, 15, VAR19, 2);
                                break;
                            case 1:
                                FUN80(VAR4, VAR14, VAR14 + 1, VAR19, 3);
                                break;
                            case 2:
                                FUN80(VAR4, VAR14, 15, VAR19, 0);
                                break;
                            case 3:
                                FUN80(VAR4, VAR14, 15, VAR19, 1);
                                break;
                            default:
                                FUN12();
                            }
                        }
                        else
                        {
                            VAR11 = VAR6 & 0xf;
                            switch (VAR8)
                            {
                            case 0:
                                FUN81(VAR4, VAR14, VAR11, 15, VAR19, 2);
                                break;
                            case 1:
                                FUN81(VAR4, VAR14, VAR11, VAR11 + 1, VAR19, 3);
                                break;
                            case 2:
                                FUN81(VAR4, VAR14, VAR11, 15, VAR19, 0);
                                break;
                            case 3:
                                FUN81(VAR4, VAR14, VAR11, 15, VAR19, 1);
                                break;
                            default:
                                FUN12();
                            }
                        }
                        FUN76(VAR19);
                    }
                    else
                    {
                        VAR11 = (VAR6)&0xf;
                        VAR19 = FUN11(VAR4, VAR13);
                        VAR16 = FUN11(VAR4, VAR11);
                        if (VAR6 & (1 << 22))
                        {
                            VAR17 = FUN82(VAR19, FUN9(VAR4));
                            FUN83(VAR16, VAR19, FUN9(VAR4));
                        }
                        else
                        {
                            VAR17 = FUN14(VAR19, FUN9(VAR4));
                            FUN84(VAR16, VAR19, FUN9(VAR4));
                        }
                        FUN16(VAR19);
                        FUN15(VAR4, VAR14, VAR17);
                    }
                }
            }
            else
            {
                int VAR48;
                int VAR49;
                VAR13 = (VAR6 >> 16) & 0xf;
                VAR14 = (VAR6 >> 12) & 0xf;
                VAR19 = FUN11(VAR4, VAR13);
                if (VAR6 & (1 << 24))
                    FUN85(VAR4, VAR6, 0, VAR19);
                VAR48 = 0;
                if (VAR6 & (1 << 20))
                {
                    switch (VAR15)
                    {
                    case 1:
                        VAR16 = FUN86(VAR19, FUN9(VAR4));
                        break;
                    case 2:
                        VAR16 = FUN87(VAR19, FUN9(VAR4));
                        break;
                    default:
                    case 3:
                        VAR16 = FUN88(VAR19, FUN9(VAR4));
                        break;
                    }
                    VAR49 = 1;
                }
                else if (VAR15 & 2)
                {
                    FUN4(5TE);
                    if (VAR15 & 1)
                    {
                        VAR16 = FUN11(VAR4, VAR14);
                        FUN84(VAR16, VAR19, FUN9(VAR4));
                        FUN13(VAR19, VAR19, 4);
                        VAR16 = FUN11(VAR4, VAR14 + 1);
                        FUN84(VAR16, VAR19, FUN9(VAR4));
                        VAR49 = 0;
                    }
                    else
                    {
                        VAR16 = FUN14(VAR19, FUN9(VAR4));
                        FUN15(VAR4, VAR14, VAR16);
                        FUN13(VAR19, VAR19, 4);
                        VAR16 = FUN14(VAR19, FUN9(VAR4));
                        VAR14++;
                        VAR49 = 1;
                    }
                    VAR48 = -4;
                }
                else
                {
                    VAR16 = FUN11(VAR4, VAR14);
                    FUN89(VAR16, VAR19, FUN9(VAR4));
                    VAR49 = 0;
                }
                if (!(VAR6 & (1 << 24)))
                {
                    FUN85(VAR4, VAR6, VAR48, VAR19);
                    FUN15(VAR4, VAR13, VAR19);
                }
                else if (VAR6 & (1 << 21))
                {
                    if (VAR48)
                        FUN13(VAR19, VAR19, VAR48);
                    FUN15(VAR4, VAR13, VAR19);
                }
                else
                {
                    FUN16(VAR19);
                }
                if (VAR49)
                {
                    FUN15(VAR4, VAR14, VAR16);
                }
            }
            break;
        case 0x4:
        case 0x5:
            goto VAR50;
        case 0x6:
        case 0x7:
            if (VAR6 & (1 << 4))
            {
                FUN4(6);
                VAR11 = VAR6 & 0xf;
                VAR13 = (VAR6 >> 16) & 0xf;
                VAR14 = (VAR6 >> 12) & 0xf;
                VAR12 = (VAR6 >> 8) & 0xf;
                switch ((VAR6 >> 23) & 3)
                {
                case 0:
                    VAR8 = (VAR6 >> 20) & 7;
                    VAR16 = FUN11(VAR4, VAR13);
                    VAR17 = FUN11(VAR4, VAR11);
                    VAR15 = (VAR6 >> 5) & 7;
                    if ((VAR8 & 3) == 0 || VAR15 == 5 || VAR15 == 6)
                        goto VAR23;
                    FUN90(VAR8, VAR15, VAR16, VAR17);
                    FUN16(VAR17);
                    FUN15(VAR4, VAR14, VAR16);
                    break;
                case 1:
                    if ((VAR6 & 0x00700020) == 0)
                    {
                        VAR16 = FUN11(VAR4, VAR13);
                        VAR17 = FUN11(VAR4, VAR11);
                        VAR10 = (VAR6 >> 7) & 0x1f;
                        if (VAR6 & (1 << 6))
                        {
                            if (VAR10 == 0)
                                VAR10 = 31;
                            FUN38(VAR17, VAR17, VAR10);
                            FUN91(VAR16, VAR16, 0xffff0000);
                            FUN25(VAR17, VAR17);
                        }
                        else
                        {
                            if (VAR10)
                                FUN92(VAR17, VAR17, VAR10);
                            FUN25(VAR16, VAR16);
                            FUN91(VAR17, VAR17, 0xffff0000);
                        }
                        FUN67(VAR16, VAR16, VAR17);
                        FUN16(VAR17);
                        FUN15(VAR4, VAR14, VAR16);
                    }
                    else if ((VAR6 & 0x00200020) == 0x00200000)
                    {
                        VAR16 = FUN11(VAR4, VAR11);
                        VAR10 = (VAR6 >> 7) & 0x1f;
                        if (VAR6 & (1 << 6))
                        {
                            if (VAR10 == 0)
                                VAR10 = 31;
                            FUN38(VAR16, VAR16, VAR10);
                        }
                        else
                        {
                            FUN92(VAR16, VAR16, VAR10);
                        }
                        VAR15 = (VAR6 >> 16) & 0x1f;
                        VAR17 = FUN93(VAR15);
                        if (VAR6 & (1 << 22))
                            FUN94(VAR16, VAR40, VAR16, VAR17);
                        else
                            FUN95(VAR16, VAR40, VAR16, VAR17);
                        FUN16(VAR17);
                        FUN15(VAR4, VAR14, VAR16);
                    }
                    else if ((VAR6 & 0x00300fe0) == 0x00200f20)
                    {
                        VAR16 = FUN11(VAR4, VAR11);
                        VAR15 = (VAR6 >> 16) & 0x1f;
                        VAR17 = FUN93(VAR15);
                        if (VAR6 & (1 << 22))
                            FUN96(VAR16, VAR40, VAR16, VAR17);
                        else
                            FUN97(VAR16, VAR40, VAR16, VAR17);
                        FUN16(VAR17);
                        FUN15(VAR4, VAR14, VAR16);
                    }
                    else if ((VAR6 & 0x00700fe0) == 0x00000fa0)
                    {
                        VAR16 = FUN11(VAR4, VAR13);
                        VAR17 = FUN11(VAR4, VAR11);
                        VAR18 = FUN18();
                        FUN98(VAR18, VAR40, FUN99(VAR1, VAR51));
                        FUN100(VAR16, VAR18, VAR16, VAR17);
                        FUN16(VAR18);
                        FUN16(VAR17);
                        FUN15(VAR4, VAR14, VAR16);
                    }
                    else if ((VAR6 & 0x000003e0) == 0x00000060)
                    {
                        VAR16 = FUN11(VAR4, VAR11);
                        VAR10 = (VAR6 >> 10) & 3;
                        if (VAR10 != 0)
                            FUN101(VAR16, VAR16, VAR10 * 8);
                        VAR8 = (VAR6 >> 20) & 7;
                        switch (VAR8)
                        {
                        case 0:
                            FUN102(VAR16);
                            break;
                        case 2:
                            FUN103(VAR16);
                            break;
                        case 3:
                            FUN39(VAR16);
                            break;
                        case 4:
                            FUN104(VAR16);
                            break;
                        case 6:
                            FUN105(VAR16);
                            break;
                        case 7:
                            FUN106(VAR16);
                            break;
                        default:
                            goto VAR23;
                        }
                        if (VAR13 != 15)
                        {
                            VAR17 = FUN11(VAR4, VAR13);
                            if ((VAR8 & 3) == 0)
                            {
                                FUN107(VAR16, VAR17);
                            }
                            else
                            {
                                FUN62(VAR16, VAR16, VAR17);
                                FUN16(VAR17);
                            }
                        }
                        FUN15(VAR4, VAR14, VAR16);
                    }
                    else if ((VAR6 & 0x003f0f60) == 0x003f0f20)
                    {
                        VAR16 = FUN11(VAR4, VAR11);
                        if (VAR6 & (1 << 22))
                        {
                            if (VAR6 & (1 << 7))
                            {
                                FUN108(VAR16);
                            }
                            else
                            {
                                FUN4(6T2);
                                FUN109(VAR16, VAR16);
                            }
                        }
                        else
                        {
                            if (VAR6 & (1 << 7))
                                FUN110(VAR16);
                            else
                                FUN111(VAR16, VAR16);
                        }
                        FUN15(VAR4, VAR14, VAR16);
                    }
                    else
                    {
                        goto VAR23;
                    }
                    break;
                case 2:
                    switch ((VAR6 >> 20) & 0x7)
                    {
                    case 5:
                        if (((VAR6 >> 6) ^ (VAR6 >> 7)) & 1)
                        {
                            goto VAR23;
                        }
                        VAR16 = FUN11(VAR4, VAR11);
                        VAR17 = FUN11(VAR4, VAR12);
                        VAR20 = FUN40(VAR16, VAR17);
                        if (VAR14 != 15)
                        {
                            VAR16 = FUN11(VAR4, VAR14);
                            if (VAR6 & (1 << 6))
                            {
                                VAR20 = FUN112(VAR20, VAR16);
                            }
                            else
                            {
                                VAR20 = FUN113(VAR20, VAR16);
                            }
                        }
                        if (VAR6 & (1 << 5))
                        {
                            FUN114(VAR20, VAR20, 0x80000000u);
                        }
                        FUN41(VAR20, VAR20, 32);
                        VAR16 = FUN18();
                        FUN42(VAR16, VAR20);
                        FUN43(VAR20);
                        FUN15(VAR4, VAR13, VAR16);
                        break;
                    case 0:
                    case 4:
                        if (VAR6 & (1 << 7))
                        {
                            goto VAR23;
                        }
                        VAR16 = FUN11(VAR4, VAR11);
                        VAR17 = FUN11(VAR4, VAR12);
                        if (VAR6 & (1 << 5))
                            FUN115(VAR17);
                        FUN116(VAR16, VAR17);
                        if (VAR6 & (1 << 6))
                        {
                            FUN60(VAR16, VAR16, VAR17);
                        }
                        else
                        {
                            FUN44(VAR16, VAR40, VAR16, VAR17);
                        }
                        FUN16(VAR17);
                        if (VAR6 & (1 << 22))
                        {
                            VAR20 = FUN46();
                            FUN47(VAR20, VAR16);
                            FUN16(VAR16);
                            FUN48(VAR4, VAR20, VAR14, VAR13);
                            FUN49(VAR4, VAR14, VAR13, VAR20);
                            FUN43(VAR20);
                        }
                        else
                        {
                            if (VAR14 != 15)
                            {
                                VAR17 = FUN11(VAR4, VAR14);
                                FUN44(VAR16, VAR40, VAR16, VAR17);
                                FUN16(VAR17);
                            }
                            FUN15(VAR4, VAR13, VAR16);
                        }
                        break;
                    case 1:
                    case 3:
                        if (!FUN5(VAR2, VAR52))
                        {
                            goto VAR23;
                        }
                        if (((VAR6 >> 5) & 7) || (VAR14 != 15))
                        {
                            goto VAR23;
                        }
                        VAR16 = FUN11(VAR4, VAR11);
                        VAR17 = FUN11(VAR4, VAR12);
                        if (VAR6 & (1 << 21))
                        {
                            FUN117(VAR16, VAR16, VAR17);
                        }
                        else
                        {
                            FUN118(VAR16, VAR16, VAR17);
                        }
                        FUN16(VAR17);
                        FUN15(VAR4, VAR13, VAR16);
                        break;
                    default:
                        goto VAR23;
                    }
                    break;
                case 3:
                    VAR8 = ((VAR6 >> 17) & 0x38) | ((VAR6 >> 5) & 7);
                    switch (VAR8)
                    {
                    case 0:
                        FUN4(6);
                        VAR16 = FUN11(VAR4, VAR11);
                        VAR17 = FUN11(VAR4, VAR12);
                        FUN119(VAR16, VAR16, VAR17);
                        FUN16(VAR17);
                        if (VAR14 != 15)
                        {
                            VAR17 = FUN11(VAR4, VAR14);
                            FUN62(VAR16, VAR16, VAR17);
                            FUN16(VAR17);
                        }
                        FUN15(VAR4, VAR13, VAR16);
                        break;
                    case 0x20:
                    case 0x24:
                    case 0x28:
                    case 0x2c:
                        FUN4(6T2);
                        VAR10 = (VAR6 >> 7) & 0x1f;
                        VAR9 = (VAR6 >> 16) & 0x1f;
                        VAR9 = VAR9 + 1 - VAR10;
                        if (VAR11 == 15)
                        {
                            VAR16 = FUN18();
                            FUN19(VAR16, 0);
                        }
                        else
                        {
                            VAR16 = FUN11(VAR4, VAR11);
                        }
                        if (VAR9 != 32)
                        {
                            VAR17 = FUN11(VAR4, VAR14);
                            FUN120(VAR16, VAR17, VAR16, VAR10, VAR9);
                            FUN16(VAR17);
                        }
                        FUN15(VAR4, VAR14, VAR16);
                        break;
                    case 0x12:
                    case 0x16:
                    case 0x1a:
                    case 0x1e:
                    case 0x32:
                    case 0x36:
                    case 0x3a:
                    case 0x3e:
                        FUN4(6T2);
                        VAR16 = FUN11(VAR4, VAR11);
                        VAR10 = (VAR6 >> 7) & 0x1f;
                        VAR9 = ((VAR6 >> 16) & 0x1f) + 1;
                        if (VAR10 + VAR9 > 32)
                            goto VAR23;
                        if (VAR9 < 32)
                        {
                            if (VAR8 & 0x20)
                            {
                                FUN121(VAR16, VAR10, (1u << VAR9) - 1);
                            }
                            else
                            {
                                FUN122(VAR16, VAR10, VAR9);
                            }
                        }
                        FUN15(VAR4, VAR14, VAR16);
                        break;
                    default:
                        goto VAR23;
                    }
                    break;
                }
                break;
            }
        VAR50:
            VAR15 = (0xf << 20) | (0xf << 4);
            if (VAR8 == 0x7 && ((VAR6 & VAR15) == VAR15))
            {
                goto VAR23;
            }
            VAR13 = (VAR6 >> 16) & 0xf;
            VAR14 = (VAR6 >> 12) & 0xf;
            VAR17 = FUN11(VAR4, VAR13);
            VAR9 = (FUN9(VAR4) || (VAR6 & 0x01200000) == 0x00200000);
            if (VAR6 & (1 << 24))
                FUN123(VAR4, VAR6, VAR17);
            if (VAR6 & (1 << 20))
            {
                if (VAR6 & (1 << 22))
                {
                    VAR16 = FUN82(VAR17, VAR9);
                }
                else
                {
                    VAR16 = FUN14(VAR17, VAR9);
                }
            }
            else
            {
                VAR16 = FUN11(VAR4, VAR14);
                if (VAR6 & (1 << 22))
                    FUN83(VAR16, VAR17, VAR9);
                else
                    FUN84(VAR16, VAR17, VAR9);
            }
            if (!(VAR6 & (1 << 24)))
            {
                FUN123(VAR4, VAR6, VAR17);
                FUN15(VAR4, VAR13, VAR17);
            }
            else if (VAR6 & (1 << 21))
            {
                FUN15(VAR4, VAR13, VAR17);
            }
            else
            {
                FUN16(VAR17);
            }
            if (VAR6 & (1 << 20))
            {
                FUN124(VAR2, VAR4, VAR14, VAR16);
            }
            break;
        case 0x08:
        case 0x09:
        {
            int VAR53, VAR54, VAR55, VAR56;
            TCGv VAR57;
            VAR55 = 0;
            if (VAR6 & (1 << 22))
            {
                if (FUN9(VAR4))
                    goto VAR23;
                if ((VAR6 & (1 << 15)) == 0)
                    VAR55 = 1;
            }
            VAR13 = (VAR6 >> 16) & 0xf;
            VAR19 = FUN11(VAR4, VAR13);
            VAR56 = 0;
            FUN53(VAR57);
            VAR54 = 0;
            for (VAR9 = 0; VAR9 < 16; VAR9++)
            {
                if (VAR6 & (1 << VAR9))
                    VAR54++;
            }
            if (VAR6 & (1 << 23))
            {
                if (VAR6 & (1 << 24))
                {
                    FUN13(VAR19, VAR19, 4);
                }
                else
                {
                }
            }
            else
            {
                if (VAR6 & (1 << 24))
                {
                    FUN13(VAR19, VAR19, -(VAR54 * 4));
                }
                else
                {
                    if (VAR54 != 1)
                        FUN13(VAR19, VAR19, -((VAR54 - 1) * 4));
                }
            }
            VAR53 = 0;
            for (VAR9 = 0; VAR9 < 16; VAR9++)
            {
                if (VAR6 & (1 << VAR9))
                {
                    if (VAR6 & (1 << 20))
                    {
                        VAR16 = FUN14(VAR19, FUN9(VAR4));
                        if (VAR55)
                        {
                            VAR17 = FUN93(VAR9);
                            FUN125(VAR40, VAR17, VAR16);
                            FUN16(VAR17);
                            FUN16(VAR16);
                        }
                        else if (VAR9 == VAR13)
                        {
                            VAR57 = VAR16;
                            VAR56 = 1;
                        }
                        else
                        {
                            FUN124(VAR2, VAR4, VAR9, VAR16);
                        }
                    }
                    else
                    {
                        if (VAR9 == 15)
                        {
                            VAR7 = (long)VAR4->VAR21 + 4;
                            VAR16 = FUN18();
                            FUN19(VAR16, VAR7);
                        }
                        else if (VAR55)
                        {
                            VAR16 = FUN18();
                            VAR17 = FUN93(VAR9);
                            FUN126(VAR16, VAR40, VAR17);
                            FUN16(VAR17);
                        }
                        else
                        {
                            VAR16 = FUN11(VAR4, VAR9);
                        }
                        FUN84(VAR16, VAR19, FUN9(VAR4));
                    }
                    VAR53++;
                    if (VAR53 != VAR54)
                        FUN13(VAR19, VAR19, 4);
                }
            }
            if (VAR6 & (1 << 21))
            {
                if (VAR6 & (1 << 23))
                {
                    if (VAR6 & (1 << 24))
                    {
                    }
                    else
                    {
                        FUN13(VAR19, VAR19, 4);
                    }
                }
                else
                {
                    if (VAR6 & (1 << 24))
                    {
                        if (VAR54 != 1)
                            FUN13(VAR19, VAR19, -((VAR54 - 1) * 4));
                    }
                    else
                    {
                        FUN13(VAR19, VAR19, -(VAR54 * 4));
                    }
                }
                FUN15(VAR4, VAR13, VAR19);
            }
            else
            {
                FUN16(VAR19);
            }
            if (VAR56)
            {
                FUN15(VAR4, VAR13, VAR57);
            }
            if ((VAR6 & (1 << 22)) && !VAR55)
            {
                VAR16 = FUN30(VAR39);
                FUN127(VAR16, 0xffffffff);
                FUN16(VAR16);
                VAR4->VAR58 = VAR59;
            }
        }
        break;
        case 0xa:
        case 0xb:
        {
            int32_t VAR26;
            VAR7 = (VAR28)VAR4->VAR21;
            if (VAR6 & (1 << 24))
            {
                VAR16 = FUN18();
                FUN19(VAR16, VAR7);
                FUN15(VAR4, 14, VAR16);
            }
            VAR26 = (((VAR28)VAR6 << 8) >> 8);
            VAR7 += (VAR26 << 2) + 4;
            FUN128(VAR4, VAR7);
        }
        break;
        case 0xc:
        case 0xd:
        case 0xe:
            if (FUN129(VAR2, VAR4, VAR6))
                goto VAR23;
            break;
        case 0xf:
            FUN130(VAR4->VAR21);
            VAR4->VAR58 = VAR60;
            break;
        default:
        VAR23:
            FUN37(VAR4, 4, VAR61);
            break;
        }
    }