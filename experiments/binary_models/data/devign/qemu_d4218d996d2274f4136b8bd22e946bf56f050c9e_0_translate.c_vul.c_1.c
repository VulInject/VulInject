static void FUN1(VAR1 *VAR2)
{
    unsigned int VAR3, VAR4, VAR5, VAR6, VAR7;
    VAR3 = FUN2(VAR2->VAR8);
    VAR4 = FUN3(VAR3, 0, 1);
    VAR7 = FUN3(VAR3, 2, 6);
    switch (VAR4)
    {
    case 0:
    {
        unsigned int VAR9 = FUN3(VAR3, 7, 9);
        int32_t VAR10;
        switch (VAR9)
        {
        case 0x1:
        {
            int VAR11;
            VAR10 = FUN4(VAR3, 0, 18);
            VAR10 = FUN5(VAR10, 18);
            VAR10 <<= 2;
            VAR11 = FUN4(VAR3, 20, 21);
            if (VAR11 == 0)
                FUN6(VAR2, VAR10, VAR3, 0);
            else if (VAR11 == 2)
                FUN6(VAR2, VAR10, VAR3, 1);
            else
                goto VAR12;
        }
        case 0x3:
        {
            VAR10 = FUN4(VAR3, 0, 13) | (FUN4(VAR3, 20, 21) << 14);
            VAR10 = FUN5(VAR10, 16);
            VAR10 <<= 2;
            VAR5 = FUN3(VAR3, 13, 17);
            FUN7(VAR5);
            FUN8(VAR2, VAR10, VAR3);
            goto VAR12;
        }
        case 0x5:
        {
            int VAR11 = FUN4(VAR3, 20, 21);
            if (FUN9(VAR2))
                goto VAR12;
            VAR10 = FUN4(VAR3, 0, 18);
            VAR10 = FUN5(VAR10, 19);
            VAR10 <<= 2;
            FUN10(VAR2, VAR10, VAR3, VAR11);
            goto VAR12;
        }
        case 0x2:
        {
            VAR10 = FUN3(VAR3, 10, 31);
            VAR10 = FUN5(VAR10, 22);
            VAR10 <<= 2;
            FUN6(VAR2, VAR10, VAR3, 0);
            goto VAR12;
        }
        case 0x6:
        {
            if (FUN9(VAR2))
                goto VAR12;
            VAR10 = FUN3(VAR3, 10, 31);
            VAR10 = FUN5(VAR10, 22);
            VAR10 <<= 2;
            FUN10(VAR2, VAR10, VAR3, 0);
            goto VAR12;
        }
        case 0x4:
            if (VAR7)
            {
                uint32_t VAR13 = FUN3(VAR3, 10, 31);
                FUN11(VAR13 << 10);
                FUN12(VAR7);
            }
            break;
        case 0x0:
        default:
        }
        break;
    }
    break;
    case 1:
    {
        target_long VAR10 = FUN13(VAR3, 2, 31) << 2;
        if (VAR2->VAR8 == (VAR14)VAR2->VAR8)
        {
            FUN14(VAR2->VAR8);
        }
        else
        {
            FUN15(VAR2->VAR8 >> 32, VAR2->VAR8);
        }
        FUN14(VAR2->VAR8);
        FUN12(15);
        VAR10 += VAR2->VAR8;
        FUN16(VAR2);
        VAR2->VAR15 = VAR10;
    }
        goto VAR12;
    case 2:
    {
        unsigned int VAR9 = FUN3(VAR3, 7, 12);
        if (VAR9 == 0x3a)
        {
            int VAR16;
            VAR5 = FUN3(VAR3, 13, 17);
            FUN7(VAR5);
            if (VAR17)
            {
                VAR6 = FUN3(VAR3, 25, 31);
                if (VAR6 != 0)
                {
                    FUN17(VAR6);
                    FUN18();
                }
            }
            else
            {
                VAR6 = FUN3(VAR3, 27, 31);
                if (VAR6 != 0)
                {
                    FUN19(VAR6);
                    FUN18();
                }
            }
            VAR16 = FUN3(VAR3, 3, 6);
            if (VAR16 == 0x8)
            {
                FUN20(VAR2);
                FUN21();
            }
            else if (VAR16 != 0)
            {
                int VAR11 = FUN4(VAR3, 11, 12);
                FUN22(VAR2);
                FUN20(VAR2);
                if (VAR11 == 0)
                    VAR18[0][VAR16]();
                else if (VAR11 == 2)
                    VAR18[1][VAR16]();
                else
                    FUN22(VAR2);
                FUN20(VAR2);
                VAR18[0][VAR16]();
                FUN23();
            }
            FUN24();
            FUN25();
            FUN26();
            VAR2->VAR19 = 1;
            goto VAR12;
        }
        else if (VAR9 == 0x28)
        {
            VAR5 = FUN3(VAR3, 13, 17);
            switch (VAR5)
            {
            case 0:
            case 0x01 ... 0x0e:
            case 0x0f:
            case 0x10 ... 0x1f:
                FUN27(FUN28(VAR20, VAR21));
                FUN12(VAR7);
                break;
            case 0x2:
                FUN29();
                FUN12(VAR7);
                break;
            case 0x3:
                FUN30(FUN28(VAR20, VAR22));
                FUN12(VAR7);
                break;
            case 0x4:
                FUN31();
                FUN12(VAR7);
                break;
            case 0x5:
                if (VAR2->VAR8 == (VAR14)VAR2->VAR8)
                {
                    FUN14(VAR2->VAR8);
                }
                else
                {
                    FUN15(VAR2->VAR8 >> 32, VAR2->VAR8);
                }
                FUN12(VAR7);
                break;
            case 0x6:
                FUN30(FUN28(VAR20, VAR23));
                FUN12(VAR7);
                break;
            case 0xf:
                break;
            case 0x13:
                if (FUN9(VAR2))
                    goto VAR12;
                FUN27(FUN28(VAR20, VAR24));
                FUN12(VAR7);
                break;
            case 0x17:
                FUN27(FUN28(VAR20, VAR25));
                FUN12(VAR7);
                break;
            case 0x18:
                FUN31();
                FUN12(VAR7);
                break;
            case 0x19:
                FUN27(FUN28(VAR20, VAR26));
                FUN12(VAR7);
                break;
            case 0x10:
            case 0x11:
            case 0x12:
            case 0x14:
            case 0x15:
            case 0x16:
            default:
            }
        }
        else if (VAR9 == 0x29)
        {
            if (!FUN32(VAR2))
                goto VAR27;
            FUN33();
            FUN12(VAR7);
            break;
        }
        else if (VAR9 == 0x2a)
        {
            if (!FUN32(VAR2))
                goto VAR27;
            VAR5 = FUN3(VAR3, 13, 17);
            switch (VAR5)
            {
            case 0:
                FUN34();
                break;
            case 1:
                FUN35();
                break;
            case 2:
                FUN36();
                break;
            case 3:
                FUN37();
                break;
            case 4:
                FUN31();
                break;
            case 5:
                FUN27(FUN28(VAR20, VAR28));
                break;
            case 6:
                FUN38();
                break;
            case 7:
                FUN30(FUN28(VAR20, VAR29));
                break;
            case 8:
                FUN30(FUN28(VAR20, VAR30));
                break;
            case 9:
                FUN39();
                break;
            case 10:
                FUN30(FUN28(VAR20, VAR31));
                break;
            case 11:
                FUN30(FUN28(VAR20, VAR32));
                break;
            case 12:
                FUN30(FUN28(VAR20, VAR33));
                break;
            case 13:
                FUN30(FUN28(VAR20, VAR34));
                break;
            case 14:
                FUN30(FUN28(VAR20, VAR35));
                break;
            case 31:
                FUN27(FUN28(VAR20, VAR36));
                break;
            case 15:
            default:
            }
            FUN30(FUN28(VAR20, VAR37));
            FUN12(VAR7);
            break;
        }
        else if (VAR9 == 0x2b)
        {
            FUN40();
            if (!FUN32(VAR2))
                goto VAR27;
            FUN27(FUN28(VAR20, VAR28));
            FUN12(VAR7);
            break;
        }
        else if (VAR9 == 0x34)
        {
            if (FUN9(VAR2))
                goto VAR12;
            VAR5 = FUN3(VAR3, 13, 17);
            VAR6 = FUN3(VAR3, 27, 31);
            VAR9 = FUN3(VAR3, 18, 26);
            switch (VAR9)
            {
            case 0x1:
                FUN41(VAR6);
                FUN42(VAR7);
                break;
            case 0x5:
                FUN43(VAR6);
                FUN44();
                FUN42(VAR7);
                break;
            case 0x9:
                FUN43(VAR6);
                FUN45();
                FUN42(VAR7);
                break;
            case 0x29:
                FUN43(VAR6);
                FUN46();
                FUN42(VAR7);
                break;
            case 0x2a:
                FUN47(FUN48(VAR6));
                FUN49();
                FUN50(FUN48(VAR7));
                break;
            case 0x2b:
                goto VAR38;
            case 0x41:
                FUN41(VAR5);
                FUN43(VAR6);
                FUN51();
                FUN42(VAR7);
                break;
            case 0x42:
                FUN52(FUN48(VAR5));
                FUN47(FUN48(VAR6));
                FUN53();
                FUN50(FUN48(VAR7));
                break;
            case 0x43:
                goto VAR38;
            case 0x45:
                FUN41(VAR5);
                FUN43(VAR6);
                FUN54();
                FUN42(VAR7);
                break;
            case 0x46:
                FUN52(FUN48(VAR5));
                FUN47(FUN48(VAR6));
                FUN55();
                FUN50(FUN48(VAR7));
                break;
            case 0x47:
                goto VAR38;
            case 0x49:
                FUN41(VAR5);
                FUN43(VAR6);
                FUN56();
                FUN42(VAR7);
                break;
            case 0x4a:
                FUN52(FUN48(VAR5));
                FUN47(FUN48(VAR6));
                FUN57();
                FUN50(VAR7);
                break;
            case 0x4b:
                goto VAR38;
            case 0x4d:
                FUN41(VAR5);
                FUN43(VAR6);
                FUN58();
                FUN42(VAR7);
                break;
            case 0x4e:
                FUN52(FUN48(VAR5));
                FUN47(FUN48(VAR6));
                FUN59();
                FUN50(FUN48(VAR7));
                break;
            case 0x4f:
                goto VAR38;
            case 0x69:
                FUN41(VAR5);
                FUN43(VAR6);
                FUN60();
                FUN50(FUN48(VAR7));
                break;
            case 0x6e:
                goto VAR38;
            case 0xc4:
                FUN43(VAR6);
                FUN61();
                FUN42(VAR7);
                break;
            case 0xc6:
                FUN47(FUN48(VAR6));
                FUN62();
                FUN42(VAR7);
                break;
            case 0xc7:
                goto VAR38;
            case 0xc8:
                FUN43(VAR6);
                FUN63();
                FUN50(FUN48(VAR7));
                break;
            case 0xc9:
                FUN43(VAR6);
                FUN64();
                FUN50(FUN48(VAR7));
                break;
            case 0xcb:
                goto VAR38;
            case 0xcc:
                goto VAR38;
            case 0xcd:
                goto VAR38;
            case 0xce:
                goto VAR38;
            case 0xd1:
                FUN43(VAR6);
                FUN65();
                FUN42(VAR7);
                break;
            case 0xd2:
                FUN47(VAR6);
                FUN66();
                FUN42(VAR7);
                break;
            case 0xd3:
                goto VAR38;
            case 0x2:
                FUN52(FUN48(VAR6));
                FUN50(FUN48(VAR7));
                break;
            case 0x6:
                FUN47(FUN48(VAR6));
                FUN67();
                FUN50(FUN48(VAR7));
                break;
            case 0xa:
                FUN47(FUN48(VAR6));
                FUN68();
                FUN50(FUN48(VAR7));
                break;
            case 0x81:
                FUN43(VAR6);
                FUN69();
                FUN50(FUN48(VAR7));
                break;
            case 0x82:
                FUN47(FUN48(VAR6));
                FUN70();
                FUN50(FUN48(VAR7));
                break;
            case 0x84:
                FUN47(FUN48(VAR6));
                FUN71();
                FUN42(VAR7);
                break;
            case 0x88:
                FUN47(FUN48(VAR6));
                FUN72();
                FUN50(FUN48(VAR7));
                break;
            case 0x3:
            case 0x7:
            case 0xb:
            case 0x83:
            case 0x8c:
                goto VAR38;
            default:
            }
        }
        else if (VAR9 == 0x35)
        {
            int VAR16;
            if (FUN9(VAR2))
                goto VAR12;
            VAR5 = FUN3(VAR3, 13, 17);
            VAR6 = FUN3(VAR3, 27, 31);
            VAR9 = FUN3(VAR3, 18, 26);
            if ((VAR9 & 0x11f) == 0x005)
            {
                VAR16 = FUN4(VAR3, 14, 17);
                FUN41(VAR7);
                FUN43(VAR6);
                VAR5 = FUN3(VAR3, 13, 17);
                FUN7(VAR5);
                FUN22(VAR2);
                FUN73(VAR16);
                FUN74();
                FUN42(VAR7);
                break;
            }
            else if ((VAR9 & 0x11f) == 0x006)
            {
                VAR16 = FUN4(VAR3, 14, 17);
                FUN52(VAR7);
                FUN47(VAR6);
                FUN22(VAR2);
                VAR5 = FUN3(VAR3, 13, 17);
                FUN7(VAR5);
                FUN73(VAR16);
                FUN74();
                FUN50(VAR7);
                break;
            }
            else if ((VAR9 & 0x11f) == 0x007)
            {
                goto VAR38;
            }
            switch (VAR9)
            {
            case 0x001:
                VAR16 = FUN4(VAR3, 14, 17);
                FUN41(VAR7);
                FUN43(VAR6);
                FUN22(VAR2);
                VAR39[0][VAR16]();
                FUN74();
                FUN42(VAR7);
                break;
            case 0x002:
                VAR16 = FUN4(VAR3, 14, 17);
                FUN52(VAR7);
                FUN47(VAR6);
                FUN22(VAR2);
                VAR39[0][VAR16]();
                FUN75();
                FUN50(VAR7);
                break;
            case 0x003:
                goto VAR38;
            case 0x041:
                VAR16 = FUN4(VAR3, 14, 17);
                FUN41(VAR7);
                FUN43(VAR6);
                FUN22(VAR2);
                VAR39[1][VAR16]();
                FUN74();
                FUN42(VAR7);
                break;
            case 0x042:
                VAR16 = FUN4(VAR3, 14, 17);
                FUN52(VAR7);
                FUN47(VAR6);
                FUN22(VAR2);
                VAR39[1][VAR16]();
                FUN75();
                FUN50(VAR7);
                break;
            case 0x043:
                goto VAR38;
            case 0x081:
                VAR16 = FUN4(VAR3, 14, 17);
                FUN41(VAR7);
                FUN43(VAR6);
                FUN22(VAR2);
                VAR39[2][VAR16]();
                FUN74();
                FUN42(VAR7);
                break;
            case 0x082:
                VAR16 = FUN4(VAR3, 14, 17);
                FUN52(VAR7);
                FUN47(VAR6);
                FUN22(VAR2);
                VAR39[2][VAR16]();
                FUN75();
                FUN50(VAR7);
                break;
            case 0x083:
                goto VAR38;
            case 0x0c1:
                VAR16 = FUN4(VAR3, 14, 17);
                FUN41(VAR7);
                FUN43(VAR6);
                FUN22(VAR2);
                VAR39[3][VAR16]();
                FUN74();
                FUN42(VAR7);
                break;
            case 0x0c2:
                VAR16 = FUN4(VAR3, 14, 17);
                FUN52(VAR7);
                FUN47(VAR6);
                FUN22(VAR2);
                VAR39[3][VAR16]();
                FUN75();
                FUN50(VAR7);
                break;
            case 0x0c3:
                goto VAR38;
            case 0x101:
                VAR16 = FUN4(VAR3, 14, 17);
                FUN41(VAR7);
                FUN43(VAR6);
                FUN22(VAR2);
                VAR18[0][VAR16]();
                FUN74();
                FUN42(VAR7);
                break;
            case 0x102:
                VAR16 = FUN4(VAR3, 14, 17);
                FUN52(VAR7);
                FUN47(VAR6);
                FUN22(VAR2);
                VAR18[0][VAR16]();
                FUN75();
                FUN50(VAR7);
                break;
            case 0x103:
                goto VAR38;
            case 0x181:
                VAR16 = FUN4(VAR3, 14, 17);
                FUN41(VAR7);
                FUN43(VAR6);
                FUN22(VAR2);
                VAR18[1][VAR16]();
                FUN74();
                FUN42(VAR7);
                break;
            case 0x182:
                VAR16 = FUN4(VAR3, 14, 17);
                FUN52(VAR7);
                FUN47(VAR6);
                FUN22(VAR2);
                VAR18[1][VAR16]();
                FUN75();
                FUN50(VAR7);
                break;
            case 0x183:
                goto VAR38;
            case 0x51:
                FUN41(VAR5);
                FUN43(VAR6);
                VAR40[VAR7 & 3]();
                FUN76();
                break;
            case 0x52:
                FUN52(FUN48(VAR5));
                FUN47(FUN48(VAR6));
                VAR41[VAR7 & 3]();
                FUN77();
                break;
            case 0x53:
                goto VAR38;
            case 0x55:
                FUN41(VAR5);
                FUN43(VAR6);
                VAR40[VAR7 & 3]();
                FUN76();
                break;
            case 0x56:
                FUN52(FUN48(VAR5));
                FUN47(FUN48(VAR6));
                VAR41[VAR7 & 3]();
                FUN77();
                break;
            case 0x57:
                goto VAR38;
            default:
            }
        }
        else if (VAR9 == 0x2)
        {
            VAR5 = FUN3(VAR3, 13, 17);
            if (VAR5 == 0)
            {
                if (VAR17)
                {
                    VAR6 = FUN13(VAR3, 19, 31);
                    FUN17(VAR6);
                }
                else
                {
                    VAR6 = FUN3(VAR3, 27, 31);
                    FUN19(VAR6);
                }
                FUN78(VAR7);
            }
            else
            {
                FUN7(VAR5);
                if (VAR17)
                {
                    VAR6 = FUN13(VAR3, 19, 31);
                    if (VAR6 != 0)
                    {
                        FUN17(VAR6);
                        FUN79();
                    }
                }
                else
                {
                    VAR6 = FUN3(VAR3, 27, 31);
                    if (VAR6 != 0)
                    {
                        FUN19(VAR6);
                        FUN79();
                    }
                }
                FUN12(VAR7);
            }
        }
        else if (VAR9 == 0x25)
        {
            VAR5 = FUN3(VAR3, 13, 17);
            FUN7(VAR5);
            if (VAR17)
            {
                VAR6 = FUN13(VAR3, 20, 31);
                FUN17(VAR6);
            }
            else
            {
                VAR6 = FUN3(VAR3, 27, 31);
                FUN19(VAR6);
            }
            FUN80();
            FUN12(VAR7);
        }
        else if (VAR9 == 0x26)
        {
            VAR5 = FUN3(VAR3, 13, 17);
            FUN7(VAR5);
            if (VAR17)
            {
                VAR6 = FUN13(VAR3, 20, 31);
                FUN17(VAR6);
            }
            else
            {
                VAR6 = FUN3(VAR3, 27, 31);
                FUN19(VAR6);
            }
            if (VAR3 & (1 << 12))
                FUN81();
            else
                FUN82();
            FUN12(VAR7);
        }
        else if (VAR9 == 0x27)
        {
            VAR5 = FUN3(VAR3, 13, 17);
            FUN7(VAR5);
            if (VAR17)
            {
                VAR6 = FUN13(VAR3, 20, 31);
                FUN17(VAR6);
            }
            else
            {
                VAR6 = FUN3(VAR3, 27, 31);
                FUN19(VAR6);
            }
            if (VAR3 & (1 << 12))
                FUN83();
            else
                FUN84();
            FUN12(VAR7);
        }
        else if (VAR9 < 0x36)
        {
            VAR5 = FUN3(VAR3, 13, 17);
            FUN7(VAR5);
            if (VAR17)
            {
                VAR6 = FUN13(VAR3, 19, 31);
                FUN17(VAR6);
            }
            else
            {
                VAR6 = FUN3(VAR3, 27, 31);
                FUN19(VAR6);
            }
            if (VAR9 < 0x20)
            {
                switch (VAR9 & ~0x10)
                {
                case 0x0:
                    if (VAR9 & 0x10)
                        FUN85();
                    else
                        FUN18();
                    break;
                case 0x1:
                    FUN86();
                    if (VAR9 & 0x10)
                        FUN87();
                    break;
                case 0x2:
                    FUN79();
                    if (VAR9 & 0x10)
                        FUN87();
                    break;
                case 0x3:
                    FUN88();
                    if (VAR9 & 0x10)
                        FUN87();
                    break;
                case 0x4:
                    if (VAR9 & 0x10)
                        FUN89();
                    else
                        FUN90();
                    break;
                case 0x5:
                    FUN91();
                    if (VAR9 & 0x10)
                        FUN87();
                    break;
                case 0x6:
                    FUN92();
                    if (VAR9 & 0x10)
                        FUN87();
                    break;
                case 0x7:
                    FUN93();
                    if (VAR9 & 0x10)
                        FUN87();
                    break;
                case 0x8:
                    if (VAR9 & 0x10)
                        FUN94();
                    else
                        FUN95();
                    break;
                case 0x9:
                    FUN96();
                    break;
                case 0xa:
                    FUN97();
                    if (VAR9 & 0x10)
                        FUN87();
                    break;
                case 0xb:
                    FUN98();
                    if (VAR9 & 0x10)
                        FUN87();
                    break;
                case 0xc:
                    if (VAR9 & 0x10)
                        FUN99();
                    else
                        FUN100();
                    break;
                case 0xd:
                    FUN101();
                    break;
                case 0xe:
                    FUN102();
                    if (VAR9 & 0x10)
                        FUN103();
                    break;
                case 0xf:
                    FUN104();
                    if (VAR9 & 0x10)
                        FUN103();
                    break;
                default:
                }
                FUN12(VAR7);
            }
            else
            {
                switch (VAR9)
                {
                case 0x20:
                    FUN105();
                    FUN12(VAR7);
                    break;
                case 0x21:
                    FUN106();
                    FUN12(VAR7);
                    break;
                case 0x22:
                    FUN107();
                    FUN12(VAR7);
                    break;
                case 0x23:
                    FUN108();
                    FUN12(VAR7);
                    break;
                case 0x24:
                    FUN109();
                    FUN12(VAR7);
                    break;
                case 0x25:
                    FUN80();
                    FUN12(VAR7);
                    break;
                case 0x26:
                    FUN82();
                    FUN12(VAR7);
                    break;
                case 0x27:
                    FUN84();
                    FUN12(VAR7);
                    break;
                case 0x30:
                {
                    switch (VAR7)
                    {
                    case 0:
                        FUN88();
                        FUN110(FUN28(VAR20, VAR21));
                        break;
                    case 0x01 ... 0x0f:
                    case 0x10 ... 0x1f:
                        break;
                    case 0x2:
                        FUN111();
                        break;
                    case 0x3:
                        FUN112(FUN28(VAR20, VAR22));
                        break;
                    case 0x6:
                        FUN112(FUN28(VAR20, VAR23));
                        break;
                    case 0xf:
                        if (FUN32(VAR2))
                            FUN113();
                        break;
                    case 0x13:
                        if (FUN9(VAR2))
                            goto VAR12;
                        FUN110(FUN28(VAR20, VAR24));
                        break;
                    case 0x17:
                        if (!FUN32(VAR2))
                            FUN110(FUN28(VAR20, VAR25));
                        break;
                    case 0x18:
                        if (!FUN32(VAR2))
                            FUN110(FUN28(VAR20, VAR26));
                        break;
                    case 0x19:
                        if (!FUN32(VAR2))
                            FUN110(FUN28(VAR20, VAR26));
                        break;
                    case 0x10:
                    case 0x11:
                    case 0x12:
                    case 0x14:
                    case 0x15:
                    case 0x16:
                    default:
                    }
                }
                break;
                case 0x31:
                {
                    if (!FUN32(VAR2))
                        goto VAR27;
                    switch (VAR7)
                    {
                    case 0:
                        FUN114();
                        break;
                    case 1:
                        FUN115();
                        break;
                    default:
                    }
                    FUN88();
                    FUN116();
                    FUN20(VAR2);
                    FUN24();
                    FUN25();
                    FUN26();
                    VAR2->VAR19 = 1;
                }
                break;
                case 0x32:
                {
                    if (!FUN32(VAR2))
                        goto VAR27;
                    FUN88();
                    switch (VAR7)
                    {
                    case 0:
                        FUN117();
                        break;
                    case 1:
                        FUN118();
                        break;
                    case 2:
                        FUN119();
                        break;
                    case 3:
                        FUN120();
                        break;
                    case 4:
                        FUN121();
                        break;
                    case 5:
                        FUN110(FUN28(VAR20, VAR28));
                        break;
                    case 6:
                        FUN122();
                        FUN20(VAR2);
                        FUN24();
                        FUN25();
                        FUN26();
                        VAR2->VAR19 = 1;
                        break;
                    case 7:
                        FUN112(FUN28(VAR20, VAR29));
                        break;
                    case 8:
                        FUN112(FUN28(VAR20, VAR30));
                        break;
                    case 9:
                        FUN123();
                        break;
                    case 10:
                        FUN112(FUN28(VAR20, VAR31));
                        break;
                    case 11:
                        FUN112(FUN28(VAR20, VAR32));
                        break;
                    case 12:
                        FUN112(FUN28(VAR20, VAR33));
                        break;
                    case 13:
                        FUN112(FUN28(VAR20, VAR34));
                        break;
                    case 14:
                        FUN112(FUN28(VAR20, VAR35));
                        break;
                    default:
                    }
                    FUN124();
                }
                break;
                case 0x33:
                {
                    if (!FUN32(VAR2))
                        goto VAR27;
                    FUN88();
                    FUN110(FUN28(VAR20, VAR28));
                }
                break;
                case 0x2c:
                {
                    int VAR11 = FUN4(VAR3, 11, 12);
                    int VAR16 = FUN4(VAR3, 14, 17);
                    if (VAR17)
                    {
                        VAR6 = FUN125(VAR3, 0, 10);
                        FUN17(VAR6);
                    }
                    else
                    {
                        VAR6 = FUN4(VAR3, 0, 4);
                        FUN19(VAR6);
                    }
                    FUN7(VAR7);
                    FUN22(VAR2);
                    if (VAR3 & (1 << 18))
                    {
                        if (VAR11 == 0)
                            VAR18[0][VAR16]();
                        else if (VAR11 == 2)
                            VAR18[1][VAR16]();
                        else
                    }
                    else
                    {
                        VAR39[VAR11][VAR16]();
                    }
                    FUN126();
                    FUN12(VAR7);
                    break;
                }
                case 0x2d:
                    FUN127();
                    FUN12(VAR7);
                    break;
                case 0x2e:
                {
                    if (VAR17)
                    {
                        VAR6 = FUN125(VAR3, 0, 12);
                        FUN17(VAR6);
                    }
                    else
                    {
                        VAR6 = FUN4(VAR3, 0, 4);
                        FUN19(VAR6);
                    }
                    FUN128();
                    FUN12(VAR7);
                }
                case 0x2f:
                {
                    int VAR16 = FUN4(VAR3, 10, 12);
                    VAR5 = FUN3(VAR3, 13, 17);
                    FUN22(VAR2);
                    FUN7(VAR5);
                    FUN73(VAR16);
                    if (VAR17)
                    {
                        VAR6 = FUN125(VAR3, 0, 10);
                        FUN17(VAR6);
                    }
                    else
                    {
                        VAR6 = FUN4(VAR3, 0, 4);
                        FUN19(VAR6);
                    }
                    FUN7(VAR7);
                    FUN126();
                    FUN12(VAR7);
                    break;
                }
                case 0x36:
                {
                    int VAR42 = FUN4(VAR3, 5, 13);
                    VAR5 = FUN3(VAR3, 13, 17);
                    VAR6 = FUN3(VAR3, 27, 31);
                    switch (VAR42)
                    {
                    case 0x018:
                        if (FUN9(VAR2))
                            goto VAR12;
                        FUN7(VAR5);
                        FUN19(VAR6);
                        FUN129();
                        FUN12(VAR7);
                        break;
                    case 0x01a:
                        if (FUN9(VAR2))
                            goto VAR12;
                        break;
                    case 0x048:
                        if (FUN9(VAR2))
                            goto VAR12;
                        FUN52(VAR5);
                        FUN47(VAR6);
                        FUN130();
                        FUN50(VAR7);
                        break;
                    default:
                    }
                    break;
                }
                default:
                }
            }
        }
        else if (VAR9 == 0x36 || VAR9 == 0x37)
        {
            goto VAR43;
        }
        else if (VAR9 == 0x39)
        {
            VAR5 = FUN3(VAR3, 13, 17);
            FUN7(VAR5);
            if (VAR17)
            {
                VAR6 = FUN13(VAR3, 19, 31);
                if (VAR6)
                {
                    FUN17(VAR6);
                    FUN18();
                }
            }
            else
            {
                VAR6 = FUN3(VAR3, 27, 31);
                if (VAR6)
                {
                    FUN19(VAR6);
                    FUN18();
                }
            }
            FUN131();
            FUN16(VAR2);
            FUN132();
            VAR2->VAR15 = VAR44;
            goto VAR12;
        }
        else
        {
            VAR5 = FUN3(VAR3, 13, 17);
            FUN7(VAR5);
            if (VAR17)
            {
                VAR6 = FUN13(VAR3, 19, 31);
                if (VAR6)
                {
                    FUN17(VAR6);
                    FUN18();
                }
            }
            else
            {
                VAR6 = FUN3(VAR3, 27, 31);
                if (VAR6)
                {
                    FUN19(VAR6);
                    FUN18();
                }
            }
            switch (VAR9)
            {
            case 0x38:
            {
                if (VAR7 != 0)
                {
                    if (VAR2->VAR8 == (VAR14)VAR2->VAR8)
                    {
                        FUN133(VAR2->VAR8);
                    }
                    else
                    {
                        FUN134(VAR2->VAR8 >> 32, VAR2->VAR8);
                    }
                    FUN133(VAR2->VAR8);
                    FUN78(VAR7);
                }
                FUN16(VAR2);
                FUN132();
                VAR2->VAR15 = VAR44;
            }
                goto VAR12;
            case 0x39:
            {
                if (!FUN32(VAR2))
                    goto VAR27;
                FUN16(VAR2);
                FUN132();
                VAR2->VAR15 = VAR44;
                FUN135();
            }
                goto VAR12;
            case 0x3b:
                FUN136();
                break;
            case 0x3c:
                FUN20(VAR2);
                FUN137();
                FUN12(VAR7);
                break;
            case 0x3d:
                FUN20(VAR2);
                FUN131();
                FUN12(VAR7);
                break;
            case 0x3e:
            {
                switch (VAR7)
                {
                case 0:
                    if (!FUN32(VAR2))
                        goto VAR27;
                    VAR2->VAR15 = VAR44;
                    VAR2->VAR8 = VAR44;
                    FUN138();
                    goto VAR12;
                case 1:
                    if (!FUN32(VAR2))
                        goto VAR27;
                    VAR2->VAR15 = VAR44;
                    VAR2->VAR8 = VAR44;
                    FUN139();
                    goto VAR12;
                default:
                }
            }
            break;
            default:
            }
        }
        break;
    }
    break;
    case 3:
    {
        unsigned int VAR9 = FUN3(VAR3, 7, 12);
        VAR5 = FUN3(VAR3, 13, 17);
        FUN7(VAR5);
        if (VAR17)
        {
            VAR6 = FUN13(VAR3, 19, 31);
            if (VAR6 != 0)
            {
                FUN17(VAR6);
                FUN18();
            }
        }
        else
        {
            VAR6 = FUN3(VAR3, 27, 31);
            if (VAR6 != 0)
            {
                FUN19(VAR6);
                FUN18();
            }
        }
        if (VAR9 < 4 || (VAR9 > 7 && VAR9 < 0x14 && VAR9 != 0x0e) || (VAR9 > 0x17 && VAR9 < 0x1d) || (VAR9 > 0x2c && VAR9 < 0x33) || VAR9 == 0x1f)
        {
            switch (VAR9)
            {
            case 0x0:
                FUN140(VAR45);
                break;
            case 0x1:
                FUN140(VAR46);
                break;
            case 0x2:
                FUN140(VAR47);
                break;
            case 0x3:
                FUN140(VAR48);
                FUN12(VAR7 + 1);
                break;
            case 0x9:
                FUN140(VAR49);
                break;
            case 0xa:
                FUN140(VAR50);
                break;
            case 0xd:
                FUN140(VAR51);
                break;
            case 0x0f:
                FUN19(VAR7);
                FUN140(VAR52);
                break;
            case 0x10:
                if (VAR17)
                    if (!FUN32(VAR2))
                        goto VAR27;
                FUN141(VAR3, 1, 4, 0);
                break;
            case 0x11:
                if (VAR17)
                    if (!FUN32(VAR2))
                        goto VAR27;
                FUN142(VAR3, 1, 1, 0);
                break;
            case 0x12:
                if (VAR17)
                    if (!FUN32(VAR2))
                        goto VAR27;
                FUN143(VAR3, 1, 2, 0);
                break;
            case 0x13:
                if (VAR17)
                    if (!FUN32(VAR2))
                        goto VAR27;
                FUN144(VAR3, 1, 8, 0);
                FUN12(VAR7 + 1);
                break;
            case 0x19:
                if (VAR17)
                    if (!FUN32(VAR2))
                        goto VAR27;
                FUN145(VAR3, 1, 1, 1);
                break;
            case 0x1a:
                if (VAR17)
                    if (!FUN32(VAR2))
                        goto VAR27;
                FUN146(VAR3, 1, 2, 1);
                break;
            case 0x1d:
                if (VAR17)
                    if (!FUN32(VAR2))
                        goto VAR27;
                FUN147(VAR3, 1, 1, 0);
                break;
            case 0x1f:
                if (VAR17)
                    if (!FUN32(VAR2))
                        goto VAR27;
                FUN19(VAR7);
                FUN148(VAR3, 1, 4, 0);
                break;
            case 0x30:
            case 0x31:
            case 0x33:
            case 0x34:
            case 0x35:
            case 0x36:
            case 0x37:
                goto VAR43;
                break;
                (void)&VAR53;
                (void)&VAR54;
                (void)&VAR55;
                (void)&VAR56;
                (void)&VAR57;
                (void)&VAR58;
            case 0x08:
                FUN140(VAR59);
                break;
            case 0x0b:
                FUN140(VAR60);
                break;
            case 0x18:
                FUN149(VAR3, 1, 4, 1);
                break;
            case 0x1b:
                FUN150(VAR3, 1, 8, 0);
                break;
            case 0x2d:
                goto VAR61;
            case 0x30:
                FUN151(VAR3, 1, 8, 0);
                break;
            case 0x33:
                FUN152(VAR3, 1, 8, 0);
                break;
            case 0x3d:
                goto VAR61;
            case 0x32:
                goto VAR38;
            default:
            }
            FUN78(VAR7);
        VAR61:;
        }
        else if (VAR9 >= 0x20 && VAR9 < 0x24)
        {
            if (FUN9(VAR2))
                goto VAR12;
            switch (VAR9)
            {
            case 0x20:
                FUN140(VAR62);
                FUN42(VAR7);
                break;
            case 0x21:
                FUN140(VAR62);
                FUN153();
                break;
            case 0x22:
                goto VAR38;
            case 0x23:
                FUN140(VAR63);
                FUN50(FUN48(VAR7));
                break;
            default:
            }
        }
        else if (VAR9 < 8 || (VAR9 >= 0x14 && VAR9 < 0x18) || VAR9 == 0xe || VAR9 == 0x1e)
        {
            FUN19(VAR7);
            switch (VAR9)
            {
            case 0x4:
                FUN140(VAR64);
                break;
            case 0x5:
                FUN140(VAR65);
                break;
            case 0x6:
                FUN140(VAR66);
                break;
            case 0x7:
                FUN22(VAR2);
                FUN154(VAR7 + 1);
                FUN140(VAR67);
                break;
            case 0x14:
                if (VAR17)
                    if (!FUN32(VAR2))
                        goto VAR27;
                FUN155(VAR3, 0, 4, 0);
                break;
            case 0x15:
                if (VAR17)
                    if (!FUN32(VAR2))
                        goto VAR27;
                FUN156(VAR3, 0, 1, 0);
                break;
            case 0x16:
                if (VAR17)
                    if (!FUN32(VAR2))
                        goto VAR27;
                FUN157(VAR3, 0, 2, 0);
                break;
            case 0x17:
                if (VAR17)
                    if (!FUN32(VAR2))
                        goto VAR27;
                FUN22(VAR2);
                FUN154(VAR7 + 1);
                FUN158(VAR3, 0, 8, 0);
                break;
            case 0x0e:
                FUN140(VAR68);
                break;
            case 0x1e:
                FUN159(VAR3, 0, 8, 0);
                break;
            default:
            }
        }
        else if (VAR9 > 0x23 && VAR9 < 0x28)
        {
            if (FUN9(VAR2))
                goto VAR12;
            switch (VAR9)
            {
            case 0x24:
                FUN41(VAR7);
                FUN140(VAR69);
                break;
            case 0x25:
                FUN160();
                FUN140(VAR69);
                break;
            case 0x26:
                goto VAR38;
            case 0x27:
                FUN52(FUN48(VAR7));
                FUN140(VAR70);
                break;
            default:
            }
        }
        else if (VAR9 > 0x33 && VAR9 < 0x3f)
        {
            switch (VAR9)
            {
            case 0x34:
                FUN161(VAR3, 0, 0, 0);
                break;
            case 0x37:
                FUN162(VAR3, 0, 0, 0);
                break;
            case 0x3c:
                FUN163(VAR3, 0, 4, 0);
                break;
            case 0x3e:
                FUN164(VAR3, 0, 8, 0);
                break;
            case 0x36:
                goto VAR38;
            default:
            }
        }
        else
    }
    break;
    }
    if (VAR2->VAR15 == VAR44)
    {
        VAR2->VAR8 = VAR44;
        FUN24();
    }
    else if (VAR2->VAR15 == VAR71)
    {
        FUN165(VAR2, (long)VAR2->VAR72, VAR2->VAR73[0], VAR2->VAR73[1]);
        VAR2->VAR19 = 1;
    }
    else
    {
        VAR2->VAR8 = VAR2->VAR15;
        VAR2->VAR15 = VAR2->VAR15 + 4;
    }
VAR12:
    return;
VAR74:
    FUN20(VAR2);
    FUN166(VAR75);
    VAR2->VAR19 = 1;
    return;
VAR27:
    FUN20(VAR2);
    FUN166(VAR76);
    VAR2->VAR19 = 1;
    return;
VAR38:
    FUN20(VAR2);
    FUN167(VAR77);
    VAR2->VAR19 = 1;
    return;
VAR43:
    FUN20(VAR2);
    FUN166(VAR78);
    VAR2->VAR19 = 1;
    return;