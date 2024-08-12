static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    unsigned int VAR5, VAR6, VAR7, VAR8, VAR9, VAR10, VAR11, VAR12, VAR13, VAR14, VAR15;
    VAR6 = FUN2(VAR4->VAR16);
    VAR4->VAR16 += 4;
    VAR5 = VAR6 >> 28;
    if (VAR5 == 0xf)
    {
        if ((VAR6 & 0x0d70f000) == 0x0550f000)
            return;
        else if ((VAR6 & 0x0e000000) == 0x0a000000)
        {
            int32_t VAR17;
            VAR7 = (VAR18)VAR4->VAR16;
            FUN3(VAR7);
            FUN4(VAR4, 14);
            VAR17 = (((VAR19)VAR6) << 8) >> 8;
            VAR7 += (VAR17 << 2) | ((VAR6 >> 23) & 2) | 1;
            VAR7 += 4;
            FUN3(VAR7);
            FUN5(VAR4);
            return;
        }
        else if ((VAR6 & 0x0fe00000) == 0x0c400000)
        {
        }
        else if ((VAR6 & 0x0f000010) == 0x0e000010)
        {
        }
        else if ((VAR6 & 0x0ff10010) == 0x01000000)
        {
        }
        else if ((VAR6 & 0x0ffffdff) == 0x01010000)
        {
            if (VAR6 & (1 << 9))
            {
                goto VAR20;
            }
            return;
        }
        goto VAR20;
    }
    if (VAR5 != 0xe)
    {
        VAR4->VAR21 = FUN6();
        VAR22[VAR5 ^ 1](VAR4->VAR21);
        VAR4->VAR23 = 1;
    }
    if ((VAR6 & 0x0f900000) == 0x03000000)
    {
        if ((VAR6 & 0x0fb0f000) != 0x0320f000)
            goto VAR20;
        VAR7 = VAR6 & 0xff;
        VAR10 = ((VAR6 >> 8) & 0xf) * 2;
        if (VAR10)
            VAR7 = (VAR7 >> VAR10) | (VAR7 << (32 - VAR10));
        FUN3(VAR7);
        VAR9 = ((VAR6 & (1 << 22)) != 0);
        if (FUN7(VAR4, FUN8(VAR4, (VAR6 >> 16) & 0xf, VAR9), VAR9))
            goto VAR20;
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
                FUN9(VAR4, VAR11);
                VAR9 = ((VAR8 & 2) != 0);
                if (FUN7(VAR4, FUN8(VAR4, (VAR6 >> 16) & 0xf, VAR9), VAR9))
                    goto VAR20;
            }
            else
            {
                VAR14 = (VAR6 >> 12) & 0xf;
                if (VAR8 & 2)
                {
                    if (FUN10(VAR4))
                        goto VAR20;
                    FUN11();
                }
                else
                {
                    FUN12();
                }
                FUN4(VAR4, VAR14);
            }
            break;
        case 0x1:
            if (VAR8 == 1)
            {
                FUN9(VAR4, VAR11);
                FUN5(VAR4);
            }
            else if (VAR8 == 3)
            {
                VAR14 = (VAR6 >> 12) & 0xf;
                FUN9(VAR4, VAR11);
                FUN13();
                FUN4(VAR4, VAR14);
            }
            else
            {
                goto VAR20;
            }
            break;
        case 0x2:
            if (VAR8 == 1)
            {
                FUN14(5J);
                FUN9(VAR4, VAR11);
                FUN5(VAR4);
            }
            else
            {
                goto VAR20;
            }
            break;
        case 0x3:
            if (VAR8 != 1)
                goto VAR20;
            VAR7 = (VAR18)VAR4->VAR16;
            FUN3(VAR7);
            FUN4(VAR4, 14);
            FUN9(VAR4, VAR11);
            FUN5(VAR4);
            break;
        case 0x5:
            VAR14 = (VAR6 >> 12) & 0xf;
            VAR13 = (VAR6 >> 16) & 0xf;
            FUN9(VAR4, VAR11);
            FUN15(VAR4, VAR13);
            if (VAR8 & 2)
                FUN16();
            if (VAR8 & 1)
                FUN17();
            else
                FUN18();
            FUN4(VAR4, VAR14);
            break;
        case 7:
            FUN3((long)VAR4->VAR16 - 4);
            VAR24[0][15]();
            FUN19();
            VAR4->VAR25 = VAR26;
            break;
        case 0x8:
        case 0xa:
        case 0xc:
        case 0xe:
            VAR12 = (VAR6 >> 8) & 0xf;
            VAR13 = (VAR6 >> 12) & 0xf;
            VAR14 = (VAR6 >> 16) & 0xf;
            if (VAR8 == 1)
            {
                FUN9(VAR4, VAR11);
                FUN15(VAR4, VAR12);
                if (VAR15 & 4)
                    FUN20(16);
                else
                    FUN21();
                FUN22();
                if ((VAR15 & 2) == 0)
                {
                    FUN15(VAR4, VAR13);
                    FUN23();
                }
                FUN4(VAR4, VAR14);
            }
            else
            {
                FUN9(VAR4, VAR11);
                FUN15(VAR4, VAR12);
                FUN24(VAR15 & 2, VAR15 & 4);
                if (VAR8 == 2)
                {
                    FUN25();
                    FUN26(VAR13, VAR14);
                    FUN4(VAR4, VAR13);
                    FUN27(VAR4, VAR14);
                }
                else
                {
                    if (VAR8 == 0)
                    {
                        FUN15(VAR4, VAR13);
                        FUN23();
                    }
                    FUN4(VAR4, VAR14);
                }
            }
            break;
        default:
            goto VAR20;
        }
    }
    else if (((VAR6 & 0x0e000000) == 0 && (VAR6 & 0x00000090) != 0x90) || ((VAR6 & 0x0e000000) == (1 << 25)))
    {
        int VAR27, VAR28, VAR29;
        VAR8 = (VAR6 >> 21) & 0xf;
        VAR27 = (VAR6 >> 20) & 1;
        VAR28 = VAR30[VAR8] & VAR27;
        if (VAR6 & (1 << 25))
        {
            VAR7 = VAR6 & 0xff;
            VAR10 = ((VAR6 >> 8) & 0xf) * 2;
            if (VAR10)
                VAR7 = (VAR7 >> VAR10) | (VAR7 << (32 - VAR10));
            FUN28(VAR7);
            if (VAR28 && VAR10)
                FUN29();
        }
        else
        {
            VAR11 = (VAR6)&0xf;
            FUN15(VAR4, VAR11);
            VAR29 = (VAR6 >> 5) & 3;
            if (!(VAR6 & (1 << 4)))
            {
                VAR10 = (VAR6 >> 7) & 0x1f;
                if (VAR10 != 0)
                {
                    if (VAR28)
                    {
                        VAR31[VAR29](VAR10);
                    }
                    else
                    {
                        VAR32[VAR29](VAR10);
                    }
                }
                else if (VAR29 != 0)
                {
                    if (VAR28)
                    {
                        VAR33[VAR29]();
                    }
                    else
                    {
                        VAR34[VAR29]();
                    }
                }
            }
            else
            {
                VAR12 = (VAR6 >> 8) & 0xf;
                FUN9(VAR4, VAR12);
                if (VAR28)
                {
                    VAR35[VAR29]();
                }
                else
                {
                    VAR36[VAR29]();
                }
            }
        }
        if (VAR8 != 0x0f && VAR8 != 0x0d)
        {
            VAR13 = (VAR6 >> 16) & 0xf;
            FUN9(VAR4, VAR13);
        }
        VAR14 = (VAR6 >> 12) & 0xf;
        switch (VAR8)
        {
        case 0x00:
            FUN30();
            FUN4(VAR4, VAR14);
            if (VAR28)
                FUN31();
            break;
        case 0x01:
            FUN32();
            FUN4(VAR4, VAR14);
            if (VAR28)
                FUN31();
            break;
        case 0x02:
            if (VAR27 && VAR14 == 15)
            {
                if (FUN10(VAR4))
                    goto VAR20;
                FUN33();
                FUN34(VAR4);
            }
            else
            {
                if (VAR27)
                    FUN33();
                else
                    FUN35();
                FUN4(VAR4, VAR14);
            }
            break;
        case 0x03:
            if (VAR27)
                FUN36();
            else
                FUN37();
            FUN4(VAR4, VAR14);
            break;
        case 0x04:
            if (VAR27)
                FUN38();
            else
                FUN39();
            FUN4(VAR4, VAR14);
            break;
        case 0x05:
            if (VAR27)
                FUN40();
            else
                FUN41();
            FUN4(VAR4, VAR14);
            break;
        case 0x06:
            if (VAR27)
                FUN42();
            else
                FUN43();
            FUN4(VAR4, VAR14);
            break;
        case 0x07:
            if (VAR27)
                FUN44();
            else
                FUN45();
            FUN4(VAR4, VAR14);
            break;
        case 0x08:
            if (VAR27)
            {
                FUN30();
                FUN31();
            }
            break;
        case 0x09:
            if (VAR27)
            {
                FUN32();
                FUN31();
            }
            break;
        case 0x0a:
            if (VAR27)
            {
                FUN33();
            }
            break;
        case 0x0b:
            if (VAR27)
            {
                FUN38();
            }
            break;
        case 0x0c:
            FUN46();
            FUN4(VAR4, VAR14);
            if (VAR28)
                FUN31();
            break;
        case 0x0d:
            if (VAR28 && VAR14 == 15)
            {
                if (FUN10(VAR4))
                    goto VAR20;
                FUN47();
                FUN34(VAR4);
            }
            else
            {
                FUN27(VAR4, VAR14);
                if (VAR28)
                    FUN48();
            }
            break;
        case 0x0e:
            FUN49();
            FUN4(VAR4, VAR14);
            if (VAR28)
                FUN31();
            break;
        default:
        case 0x0f:
            FUN50();
            FUN27(VAR4, VAR14);
            if (VAR28)
                FUN48();
            break;
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
                    if (((VAR6 >> 22) & 3) == 0)
                    {
                        FUN9(VAR4, VAR12);
                        FUN15(VAR4, VAR11);
                        FUN51();
                        if (VAR6 & (1 << 21))
                        {
                            FUN15(VAR4, VAR13);
                            FUN39();
                        }
                        if (VAR6 & (1 << 20))
                            FUN31();
                        FUN4(VAR4, VAR14);
                    }
                    else
                    {
                        FUN9(VAR4, VAR12);
                        FUN15(VAR4, VAR11);
                        if (VAR6 & (1 << 22))
                            FUN52();
                        else
                            FUN53();
                        if (VAR6 & (1 << 21))
                            FUN26(VAR13, VAR14);
                        if (!(VAR6 & (1 << 23)))
                        {
                            FUN14(6);
                            FUN54(VAR13);
                            FUN54(VAR14);
                        }
                        if (VAR6 & (1 << 20))
                            FUN55();
                        FUN4(VAR4, VAR13);
                        FUN27(VAR4, VAR14);
                    }
                }
                else
                {
                    VAR13 = (VAR6 >> 16) & 0xf;
                    VAR14 = (VAR6 >> 12) & 0xf;
                    if (VAR6 & (1 << 23))
                    {
                        goto VAR20;
                    }
                    else
                    {
                        VAR11 = (VAR6)&0xf;
                        FUN9(VAR4, VAR11);
                        FUN15(VAR4, VAR13);
                        if (VAR6 & (1 << 22))
                        {
                            FUN56(VAR37, VAR4);
                        }
                        else
                        {
                            FUN56(VAR38, VAR4);
                        }
                        FUN4(VAR4, VAR14);
                    }
                }
            }
            else
            {
                int VAR39;
                VAR13 = (VAR6 >> 16) & 0xf;
                VAR14 = (VAR6 >> 12) & 0xf;
                FUN15(VAR4, VAR13);
                if (VAR6 & (1 << 24))
                    FUN57(VAR4, VAR6, 0);
                VAR39 = 0;
                if (VAR6 & (1 << 20))
                {
                    switch (VAR15)
                    {
                    case 1:
                        FUN56(VAR40, VAR4);
                        break;
                    case 2:
                        FUN56(VAR41, VAR4);
                        break;
                    default:
                    case 3:
                        FUN56(VAR42, VAR4);
                        break;
                    }
                    FUN4(VAR4, VAR14);
                }
                else if (VAR15 & 2)
                {
                    if (VAR15 & 1)
                    {
                        FUN9(VAR4, VAR14);
                        FUN56(VAR43, VAR4);
                        FUN58(4);
                        FUN9(VAR4, VAR14 + 1);
                        FUN56(VAR43, VAR4);
                    }
                    else
                    {
                        FUN56(VAR44, VAR4);
                        FUN4(VAR4, VAR14);
                        FUN58(4);
                        FUN56(VAR44, VAR4);
                        FUN4(VAR4, VAR14 + 1);
                    }
                    VAR39 = -4;
                }
                else
                {
                    FUN9(VAR4, VAR14);
                    FUN56(VAR45, VAR4);
                }
                if (!(VAR6 & (1 << 24)))
                {
                    FUN57(VAR4, VAR6, VAR39);
                    FUN27(VAR4, VAR13);
                }
                else if (VAR6 & (1 << 21))
                {
                    if (VAR39)
                        FUN58(VAR39);
                    FUN27(VAR4, VAR13);
                }
            }
            break;
        case 0x4:
        case 0x5:
        case 0x6:
        case 0x7:
            VAR15 = (0xf << 20) | (0xf << 4);
            if (VAR8 == 0x7 && ((VAR6 & VAR15) == VAR15))
            {
                goto VAR20;
            }
            VAR13 = (VAR6 >> 16) & 0xf;
            VAR14 = (VAR6 >> 12) & 0xf;
            FUN15(VAR4, VAR13);
            VAR9 = (FUN10(VAR4) || (VAR6 & 0x01200000) == 0x00200000);
            if (VAR6 & (1 << 24))
                FUN59(VAR4, VAR6);
            if (VAR6 & (1 << 20))
            {
                if (VAR6 & (1 << 22))
                    FUN60();
                else
                    FUN61();
                if (VAR6 & (1 << 22))
                {
                    if (VAR9)
                        FUN62();
                    else
                        FUN63();
                }
                else
                {
                    if (VAR9)
                        FUN64();
                    else
                        FUN65();
                }
                if (VAR14 == 15)
                    FUN5(VAR4);
                else
                    FUN4(VAR4, VAR14);
            }
            else
            {
                FUN9(VAR4, VAR14);
                if (VAR6 & (1 << 22))
                    FUN66();
                else
                    FUN67();
                if (VAR6 & (1 << 22))
                {
                    if (VAR9)
                        FUN68();
                    else
                        FUN69();
                }
                else
                {
                    if (VAR9)
                        FUN70();
                    else
                        FUN71();
                }
            }
            if (!(VAR6 & (1 << 24)))
            {
                FUN59(VAR4, VAR6);
                FUN27(VAR4, VAR13);
            }
            else if (VAR6 & (1 << 21))
                FUN27(VAR4, VAR13);
            {
            }
            break;
        case 0x08:
        case 0x09:
        {
            int VAR46, VAR47, VAR48, VAR49;
            VAR48 = 0;
            if (VAR6 & (1 << 22))
            {
                if (FUN10(VAR4))
                    goto VAR20;
                if ((VAR6 & (1 << 15)) == 0)
                    VAR48 = 1;
            }
            VAR13 = (VAR6 >> 16) & 0xf;
            FUN15(VAR4, VAR13);
            VAR49 = 0;
            VAR47 = 0;
            for (VAR9 = 0; VAR9 < 16; VAR9++)
            {
                if (VAR6 & (1 << VAR9))
                    VAR47++;
            }
            if (VAR6 & (1 << 23))
            {
                if (VAR6 & (1 << 24))
                {
                    FUN58(4);
                }
                else
                {
                }
            }
            else
            {
                if (VAR6 & (1 << 24))
                {
                    FUN58(-(VAR47 * 4));
                }
                else
                {
                    if (VAR47 != 1)
                        FUN58(-((VAR47 - 1) * 4));
                }
            }
            VAR46 = 0;
            for (VAR9 = 0; VAR9 < 16; VAR9++)
            {
                if (VAR6 & (1 << VAR9))
                {
                    if (VAR6 & (1 << 20))
                    {
                        FUN56(VAR44, VAR4);
                        if (VAR9 == 15)
                        {
                            FUN5(VAR4);
                        }
                        else if (VAR48)
                        {
                            FUN72(VAR9);
                        }
                        else if (VAR9 == VAR13)
                        {
                            FUN73();
                            VAR49 = 1;
                        }
                        else
                        {
                            FUN4(VAR4, VAR9);
                        }
                    }
                    else
                    {
                        if (VAR9 == 15)
                        {
                            VAR7 = (long)VAR4->VAR16 + 8;
                            VAR50[0](VAR7);
                        }
                        else if (VAR48)
                        {
                            FUN74(VAR9);
                        }
                        else
                        {
                            FUN9(VAR4, VAR9);
                        }
                        FUN56(VAR43, VAR4);
                    }
                    VAR46++;
                    if (VAR46 != VAR47)
                        FUN58(4);
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
                        FUN58(4);
                    }
                }
                else
                {
                    if (VAR6 & (1 << 24))
                    {
                        if (VAR47 != 1)
                            FUN58(-((VAR47 - 1) * 4));
                    }
                    else
                    {
                        FUN58(-(VAR47 * 4));
                    }
                }
                FUN27(VAR4, VAR13);
            }
            if (VAR49)
            {
                FUN75();
                FUN4(VAR4, VAR13);
            }
            if ((VAR6 & (1 << 22)) && !VAR48)
            {
                FUN11();
                FUN76(0xffffffff);
                VAR4->VAR25 = VAR51;
            }
        }
        break;
        case 0xa:
        case 0xb:
        {
            int32_t VAR17;
            VAR7 = (VAR19)VAR4->VAR16;
            if (VAR6 & (1 << 24))
            {
                FUN3(VAR7);
                VAR24[0][14]();
            }
            VAR17 = (((VAR19)VAR6 << 8) >> 8);
            VAR7 += (VAR17 << 2) + 4;
            FUN77(VAR4, VAR7);
        }
        break;
        case 0xc:
        case 0xd:
        case 0xe:
            VAR8 = (VAR6 >> 8) & 0xf;
            switch (VAR8)
            {
            case 10:
            case 11:
                if (FUN78(VAR2, VAR4, VAR6))
                    goto VAR20;
                break;
            case 15:
                if (FUN79(VAR4, VAR6))
                    goto VAR20;
                break;
            default:
                goto VAR20;
            }
            break;
        case 0xf:
            FUN3((long)VAR4->VAR16);
            VAR24[0][15]();
            FUN80();
            VAR4->VAR25 = VAR26;
            break;
        default:
        VAR20:
            FUN3((long)VAR4->VAR16 - 4);
            VAR24[0][15]();
            FUN81();
            VAR4->VAR25 = VAR26;
            break;
        }
    }