static int FUN1(VAR1 *VAR2, VAR3 *VAR4, uint32_t VAR5)
{
    uint32_t VAR6, VAR7, VAR8, VAR9, VAR10, VAR11, VAR12, VAR13, VAR14, VAR15;
    int VAR16, VAR17;
    TCGv VAR18;
    TCGv VAR19;
    TCGv VAR20;
    if (!FUN2(VAR2, VAR21))
        return 1;
    if (!FUN3(VAR2))
    {
        if ((VAR5 & 0x0fe00fff) != 0x0ee00a10)
            return 1;
        VAR7 = (VAR5 >> 16) & 0xf;
        if (VAR7 != VAR22 && VAR7 != VAR23 && VAR7 != VAR24 && VAR7 != VAR25)
            return 1;
    }
    VAR16 = ((VAR5 & 0xf00) == 0xb00);
    switch ((VAR5 >> 24) & 0xf)
    {
    case 0xe:
        if (VAR5 & (1 << 4))
        {
            VAR6 = (VAR5 >> 12) & 0xf;
            if (VAR16)
            {
                int VAR26;
                int VAR27;
                FUN4(VAR7, VAR5);
                if (VAR5 & 0xf)
                    return 1;
                if (VAR5 & 0x00c00060 && !FUN2(VAR2, VAR28))
                    return 1;
                VAR27 = (VAR5 >> 21) & 1;
                if (VAR5 & (1 << 22))
                {
                    VAR26 = 0;
                    VAR12 = ((VAR5 >> 5) & 3) * 8;
                }
                else if (VAR5 & (1 << 5))
                {
                    VAR26 = 1;
                    VAR12 = (VAR5 & (1 << 6)) ? 16 : 0;
                }
                else
                {
                    VAR26 = 2;
                    VAR12 = 0;
                }
                if (VAR5 & VAR29)
                {
                    VAR19 = FUN5(VAR7, VAR27);
                    switch (VAR26)
                    {
                    case 0:
                        if (VAR12)
                            FUN6(VAR19, VAR19, VAR12);
                        if (VAR5 & (1 << 23))
                            FUN7(VAR19);
                        else
                            FUN8(VAR19);
                        break;
                    case 1:
                        if (VAR5 & (1 << 23))
                        {
                            if (VAR12)
                            {
                                FUN6(VAR19, VAR19, 16);
                            }
                            else
                            {
                                FUN9(VAR19);
                            }
                        }
                        else
                        {
                            if (VAR12)
                            {
                                FUN10(VAR19, VAR19, 16);
                            }
                            else
                            {
                                FUN11(VAR19);
                            }
                        }
                        break;
                    case 2:
                        break;
                    }
                    FUN12(VAR4, VAR6, VAR19);
                }
                else
                {
                    VAR19 = FUN13(VAR4, VAR6);
                    if (VAR5 & (1 << 23))
                    {
                        if (VAR26 == 0)
                        {
                            FUN14(VAR19, 0);
                        }
                        else if (VAR26 == 1)
                        {
                            FUN15(VAR19);
                        }
                        for (VAR11 = 0; VAR11 <= VAR27 * 2; VAR11++)
                        {
                            VAR20 = FUN16();
                            FUN17(VAR20, VAR19);
                            FUN18(VAR7, VAR11, VAR20);
                        }
                        FUN18(VAR7, VAR11, VAR19);
                    }
                    else
                    {
                        switch (VAR26)
                        {
                        case 0:
                            VAR20 = FUN5(VAR7, VAR27);
                            FUN19(VAR19, VAR20, VAR19, VAR12, 0xff);
                            FUN20(VAR20);
                            break;
                        case 1:
                            VAR20 = FUN5(VAR7, VAR27);
                            FUN19(VAR19, VAR20, VAR19, VAR12, 0xffff);
                            FUN20(VAR20);
                            break;
                        case 2:
                            break;
                        }
                        FUN18(VAR7, VAR27, VAR19);
                    }
                }
            }
            else
            {
                if ((VAR5 & 0x6f) != 0x00)
                    return 1;
                VAR7 = FUN21(VAR5);
                if (VAR5 & VAR29)
                {
                    if (VAR5 & (1 << 21))
                    {
                        VAR7 >>= 1;
                        switch (VAR7)
                        {
                        case VAR22:
                            if (FUN22(VAR4) && FUN2(VAR2, VAR30))
                                return 1;
                            VAR19 = FUN23(VAR31.VAR32[VAR7]);
                            break;
                        case VAR23:
                            if (FUN22(VAR4))
                                return 1;
                            VAR19 = FUN23(VAR31.VAR32[VAR7]);
                            break;
                        case VAR33:
                        case VAR34:
                            if (FUN22(VAR4) || FUN2(VAR2, VAR30))
                                return 1;
                            VAR19 = FUN23(VAR31.VAR32[VAR7]);
                            break;
                        case VAR35:
                            if (VAR6 == 15)
                            {
                                VAR19 = FUN23(VAR31.VAR32[VAR35]);
                                FUN24(VAR19, VAR19, 0xf0000000);
                            }
                            else
                            {
                                VAR19 = FUN16();
                                FUN25(VAR19, VAR36);
                            }
                            break;
                        case VAR25:
                        case VAR24:
                            if (FUN22(VAR4) || !FUN2(VAR2, VAR30))
                                return 1;
                            VAR19 = FUN23(VAR31.VAR32[VAR7]);
                            break;
                        default:
                            return 1;
                        }
                    }
                    else
                    {
                        FUN26(0, VAR7);
                        VAR19 = FUN27();
                    }
                    if (VAR6 == 15)
                    {
                        FUN28(VAR19);
                        FUN20(VAR19);
                    }
                    else
                    {
                        FUN12(VAR4, VAR6, VAR19);
                    }
                }
                else
                {
                    VAR19 = FUN13(VAR4, VAR6);
                    if (VAR5 & (1 << 21))
                    {
                        VAR7 >>= 1;
                        switch (VAR7)
                        {
                        case VAR22:
                        case VAR25:
                        case VAR24:
                            break;
                        case VAR35:
                            FUN29(VAR36, VAR19);
                            FUN20(VAR19);
                            FUN30(VAR4);
                            break;
                        case VAR23:
                            if (FUN22(VAR4))
                                return 1;
                            FUN31(VAR19, VAR31.VAR32[VAR7]);
                            FUN30(VAR4);
                            break;
                        case VAR33:
                        case VAR34:
                            FUN31(VAR19, VAR31.VAR32[VAR7]);
                            break;
                        default:
                            return 1;
                        }
                    }
                    else
                    {
                        FUN32(VAR19);
                        FUN33(0, VAR7);
                    }
                }
            }
        }
        else
        {
            VAR9 = ((VAR5 >> 20) & 8) | ((VAR5 >> 19) & 6) | ((VAR5 >> 6) & 1);
            if (VAR16)
            {
                if (VAR9 == 15)
                {
                    VAR7 = ((VAR5 >> 15) & 0x1e) | ((VAR5 >> 7) & 1);
                }
                else
                {
                    FUN4(VAR7, VAR5);
                }
                if (VAR9 == 15 && (VAR7 == 15 || VAR7 > 17))
                {
                    VAR6 = FUN34(VAR5);
                }
                else
                {
                    FUN35(VAR6, VAR5);
                }
                if (VAR9 == 15 && (VAR7 == 16 || VAR7 == 17))
                {
                    VAR8 = ((VAR5 << 1) & 0x1e) | ((VAR5 >> 5) & 1);
                }
                else
                {
                    FUN36(VAR8, VAR5);
                }
            }
            else
            {
                VAR7 = FUN21(VAR5);
                if (VAR9 == 15 && VAR7 == 15)
                {
                    FUN35(VAR6, VAR5);
                }
                else
                {
                    VAR6 = FUN34(VAR5);
                }
                VAR8 = FUN37(VAR5);
            }
            VAR17 = VAR2->VAR31.VAR37;
            if (VAR9 == 15 && VAR7 > 3)
                VAR17 = 0;
            VAR14 = 0;
            VAR13 = 0;
            VAR15 = 0;
            if (VAR17 > 0)
            {
                if (VAR16)
                    VAR15 = 0xc;
                else
                    VAR15 = 0x18;
                if ((VAR6 & VAR15) == 0)
                {
                    VAR17 = 0;
                }
                else
                {
                    if (VAR16)
                        VAR13 = (VAR2->VAR31.VAR38 >> 1) + 1;
                    else
                        VAR13 = VAR2->VAR31.VAR38 + 1;
                    if ((VAR8 & VAR15) == 0)
                    {
                        VAR14 = 0;
                    }
                    else
                    {
                        VAR14 = VAR13;
                    }
                }
            }
            if (VAR9 == 15)
            {
                switch (VAR7)
                {
                case 16:
                case 17:
                    FUN26(0, VAR8);
                    break;
                case 8:
                case 9:
                    FUN26(VAR16, VAR6);
                    FUN38(VAR16, VAR8);
                    break;
                case 10:
                case 11:
                    FUN26(VAR16, VAR6);
                    FUN39(VAR16);
                    break;
                case 20:
                case 21:
                case 22:
                case 23:
                case 28:
                case 29:
                case 30:
                case 31:
                    FUN26(VAR16, VAR6);
                    break;
                default:
                    FUN26(VAR16, VAR8);
                    break;
                }
            }
            else
            {
                FUN26(VAR16, VAR7);
                FUN38(VAR16, VAR8);
            }
            for (;;)
            {
                switch (VAR9)
                {
                case 0:
                    FUN40(VAR16);
                    FUN38(VAR16, VAR6);
                    FUN41(VAR16);
                    break;
                case 1:
                    FUN40(VAR16);
                    FUN42(VAR16);
                    FUN38(VAR16, VAR6);
                    FUN41(VAR16);
                    break;
                case 2:
                    FUN40(VAR16);
                    FUN38(VAR16, VAR6);
                    FUN43(VAR16);
                    break;
                case 3:
                    FUN40(VAR16);
                    FUN42(VAR16);
                    FUN38(VAR16, VAR6);
                    FUN43(VAR16);
                    break;
                case 4:
                    FUN40(VAR16);
                    break;
                case 5:
                    FUN40(VAR16);
                    FUN42(VAR16);
                    break;
                case 6:
                    FUN41(VAR16);
                    break;
                case 7:
                    FUN43(VAR16);
                    break;
                case 8:
                    FUN44(VAR16);
                    break;
                case 14:
                    if (!FUN2(VAR2, VAR30))
                        return 1;
                    VAR11 = (VAR5 << 12) & 0x80000000;
                    VAR10 = ((VAR5 >> 12) & 0x70) | (VAR5 & 0xf);
                    if (VAR16)
                    {
                        if (VAR10 & 0x40)
                            VAR10 |= 0x3f80;
                        else
                            VAR10 |= 0x4000;
                        VAR11 |= VAR10 << 16;
                        FUN45(VAR39, ((VAR40)VAR11) << 32);
                    }
                    else
                    {
                        if (VAR10 & 0x40)
                            VAR10 |= 0x780;
                        else
                            VAR10 |= 0x800;
                        VAR11 |= VAR10 << 19;
                        FUN46(VAR41, VAR11);
                    }
                    break;
                case 15:
                    switch (VAR7)
                    {
                    case 0:
                        break;
                    case 1:
                        FUN47(VAR16);
                        break;
                    case 2:
                        FUN42(VAR16);
                        break;
                    case 3:
                        FUN48(VAR16);
                        break;
                    case 8:
                        FUN49(VAR16);
                        break;
                    case 9:
                        FUN50(VAR16);
                        break;
                    case 10:
                        FUN49(VAR16);
                        break;
                    case 11:
                        FUN39(VAR16);
                        FUN50(VAR16);
                        break;
                    case 15:
                        if (VAR16)
                            FUN51(VAR41, VAR39, VAR36);
                        else
                            FUN52(VAR39, VAR41, VAR36);
                        break;
                    case 16:
                        FUN53(VAR16);
                        break;
                    case 17:
                        FUN54(VAR16);
                        break;
                    case 20:
                        if (!FUN2(VAR2, VAR30))
                            return 1;
                        FUN55(VAR16, 16 - VAR8);
                        break;
                    case 21:
                        if (!FUN2(VAR2, VAR30))
                            return 1;
                        FUN56(VAR16, 32 - VAR8);
                        break;
                    case 22:
                        if (!FUN2(VAR2, VAR30))
                            return 1;
                        FUN57(VAR16, 16 - VAR8);
                        break;
                    case 23:
                        if (!FUN2(VAR2, VAR30))
                            return 1;
                        FUN58(VAR16, 32 - VAR8);
                        break;
                    case 24:
                        FUN59(VAR16);
                        break;
                    case 25:
                        FUN60(VAR16);
                        break;
                    case 26:
                        FUN61(VAR16);
                        break;
                    case 27:
                        FUN62(VAR16);
                        break;
                    case 28:
                        if (!FUN2(VAR2, VAR30))
                            return 1;
                        FUN63(VAR16, 16 - VAR8);
                        break;
                    case 29:
                        if (!FUN2(VAR2, VAR30))
                            return 1;
                        FUN64(VAR16, 32 - VAR8);
                        break;
                    case 30:
                        if (!FUN2(VAR2, VAR30))
                            return 1;
                        FUN65(VAR16, 16 - VAR8);
                        break;
                    case 31:
                        if (!FUN2(VAR2, VAR30))
                            return 1;
                        FUN66(VAR16, 32 - VAR8);
                        break;
                    default:
                        FUN67("", VAR7);
                        return 1;
                    }
                    break;
                default:
                    FUN67("", VAR9);
                    return 1;
                }
                if (VAR9 == 15 && (VAR7 >= 8 && VAR7 <= 11))
                    ;
                else if (VAR9 == 15 && VAR7 > 17)
                    FUN33(0, VAR6);
                else if (VAR9 == 15 && VAR7 == 15)
                    FUN33(!VAR16, VAR6);
                else
                    FUN33(VAR16, VAR6);
                if (VAR17 == 0)
                    break;
                if (VAR9 == 15 && VAR14 == 0)
                {
                    while (VAR17--)
                    {
                        VAR6 = ((VAR6 + VAR13) & (VAR15 - 1)) | (VAR6 & VAR15);
                        FUN33(VAR16, VAR6);
                    }
                    break;
                }
                VAR17--;
                VAR6 = ((VAR6 + VAR13) & (VAR15 - 1)) | (VAR6 & VAR15);
                if (VAR9 == 15)
                {
                    VAR8 = ((VAR8 + VAR14) & (VAR15 - 1)) | (VAR8 & VAR15);
                    FUN26(VAR16, VAR8);
                }
                else
                {
                    VAR7 = ((VAR7 + VAR13) & (VAR15 - 1)) | (VAR7 & VAR15);
                    FUN26(VAR16, VAR7);
                    if (VAR14)
                    {
                        VAR8 = ((VAR8 + VAR14) & (VAR15 - 1)) | (VAR8 & VAR15);
                        FUN38(VAR16, VAR8);
                    }
                }
            }
        }
        break;
    case 0xc:
    case 0xd:
        if (VAR16 && (VAR5 & 0x03e00000) == 0x00400000)
        {
            VAR7 = (VAR5 >> 16) & 0xf;
            VAR6 = (VAR5 >> 12) & 0xf;
            if (VAR16)
            {
                FUN36(VAR8, VAR5);
            }
            else
            {
                VAR8 = FUN37(VAR5);
            }
            if (VAR5 & VAR29)
            {
                if (VAR16)
                {
                    FUN26(0, VAR8 * 2);
                    VAR19 = FUN27();
                    FUN12(VAR4, VAR6, VAR19);
                    FUN26(0, VAR8 * 2 + 1);
                    VAR19 = FUN27();
                    FUN12(VAR4, VAR7, VAR19);
                }
                else
                {
                    FUN26(0, VAR8);
                    VAR19 = FUN27();
                    FUN12(VAR4, VAR7, VAR19);
                    FUN26(0, VAR8 + 1);
                    VAR19 = FUN27();
                    FUN12(VAR4, VAR6, VAR19);
                }
            }
            else
            {
                if (VAR16)
                {
                    VAR19 = FUN13(VAR4, VAR6);
                    FUN32(VAR19);
                    FUN33(0, VAR8 * 2);
                    VAR19 = FUN13(VAR4, VAR7);
                    FUN32(VAR19);
                    FUN33(0, VAR8 * 2 + 1);
                }
                else
                {
                    VAR19 = FUN13(VAR4, VAR7);
                    FUN32(VAR19);
                    FUN33(0, VAR8);
                    VAR19 = FUN13(VAR4, VAR6);
                    FUN32(VAR19);
                    FUN33(0, VAR8 + 1);
                }
            }
        }
        else
        {
            VAR7 = (VAR5 >> 16) & 0xf;
            if (VAR16)
                FUN35(VAR6, VAR5);
            else
                VAR6 = FUN34(VAR5);
            if (VAR4->VAR42 && VAR7 == 15)
            {
                VAR18 = FUN16();
                FUN46(VAR18, VAR4->VAR43 & ~2);
            }
            else
            {
                VAR18 = FUN13(VAR4, VAR7);
            }
            if ((VAR5 & 0x01200000) == 0x01000000)
            {
                VAR12 = (VAR5 & 0xff) << 2;
                if ((VAR5 & (1 << 23)) == 0)
                    VAR12 = -VAR12;
                FUN68(VAR18, VAR18, VAR12);
                if (VAR5 & (1 << 20))
                {
                    FUN69(VAR4, VAR16, VAR18);
                    FUN33(VAR16, VAR6);
                }
                else
                {
                    FUN26(VAR16, VAR6);
                    FUN70(VAR4, VAR16, VAR18);
                }
                FUN20(VAR18);
            }
            else
            {
                if (VAR16)
                    VAR11 = (VAR5 >> 1) & 0x7f;
                else
                    VAR11 = VAR5 & 0xff;
                if (VAR5 & (1 << 24))
                    FUN68(VAR18, VAR18, -((VAR5 & 0xff) << 2));
                if (VAR16)
                    VAR12 = 8;
                else
                    VAR12 = 4;
                for (VAR10 = 0; VAR10 < VAR11; VAR10++)
                {
                    if (VAR5 & VAR29)
                    {
                        FUN69(VAR4, VAR16, VAR18);
                        FUN33(VAR16, VAR6 + VAR10);
                    }
                    else
                    {
                        FUN26(VAR16, VAR6 + VAR10);
                        FUN70(VAR4, VAR16, VAR18);
                    }
                    FUN68(VAR18, VAR18, VAR12);
                }
                if (VAR5 & (1 << 21))
                {
                    if (VAR5 & (1 << 24))
                        VAR12 = -VAR12 * VAR11;
                    else if (VAR16 && (VAR5 & 1))
                        VAR12 = 4;
                    else
                        VAR12 = 0;
                    if (VAR12 != 0)
                        FUN68(VAR18, VAR18, VAR12);
                    FUN12(VAR4, VAR7, VAR18);
                }
                else
                {
                    FUN20(VAR18);
                }
            }
        }
        break;
    default:
        return 1;
    }
    return 0;