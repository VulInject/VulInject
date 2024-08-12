static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = &VAR2->VAR6;
    int VAR7;
    int VAR8 = 2;
    if (FUN2(FUN3(VAR9 | VAR10)))
    {
        FUN4(VAR4->VAR11);
    }
    VAR7 = VAR4->VAR7;
    if (VAR7 & (1 << 15))
    {
        if (VAR7 & (1 << 14))
        {
            int VAR12 = (VAR7 >> 10 & 0xf);
            do
            {
                VAR13 *VAR14 = FUN5();
                FUN6(VAR15, VAR16, VAR17, VAR14);
                FUN7(VAR6, VAR4, 1, VAR4->VAR11 + 2);
                FUN8(VAR14);
                FUN7(VAR6, VAR4, 0, FUN9(VAR7) + VAR4->VAR11 + 2);
                VAR4->VAR18 = VAR19;
            } while (0) switch (VAR12)
            {
            case 0x00:
                FUN10(VAR20);
                break;
            case 0x01:
                FUN10(VAR21);
                break;
            case 0x02:
                FUN10(VAR22);
                break;
            case 0x03:
                FUN10(VAR23);
                break;
            case 0x04:
                FUN10(VAR24);
                break;
            case 0x05:
                FUN10(VAR25);
                break;
            case 0x06:
                FUN10(VAR26);
                break;
            case 0x07:
                FUN10(VAR27);
                break;
            case 0x08:
                FUN10(VAR28);
                break;
            case 0x09:
                FUN10(VAR29);
                break;
            default:
            {
                TCGv VAR30 = FUN11();
                FUN12(VAR31, VAR4->VAR11);
                FUN12(VAR30, VAR32);
                FUN13(VAR33, VAR30);
                FUN14(VAR30);
            }
            break;
            }
        }
        else
        {
            int VAR12 = (VAR7 >> 12 & 0x3);
            switch (VAR12)
            {
            case 0x00:
            {
                int VAR34 = (VAR7 >> 8) & 0xf;
                unsigned int VAR35 = (VAR7 & 0xff);
                FUN15(FUN16(VAR34), FUN16(VAR34), VAR35);
            }
            break;
            case 0x01:
            {
                int VAR34 = (VAR7 >> 8) & 0xf;
                unsigned int VAR35 = (VAR7 & 0xff);
                FUN17(FUN16(VAR34), FUN16(VAR34), VAR35);
            }
            break;
            case 0x02:
            {
                int VAR34 = (VAR7 >> 8) & 0xf;
                unsigned VAR35 = (VAR7 & 0xff);
                FUN18(FUN16(VAR34), VAR33, FUN19(VAR5, VAR36[VAR35]));
            }
            break;
            case 0x03:
            {
                int VAR34 = (VAR7 >> 8) & 0xf;
                unsigned VAR35 = (VAR7 & 0xff);
                FUN20(FUN16(VAR34), VAR33, FUN19(VAR5, VAR36[VAR35]));
            }
            break;
            default:
            {
                TCGv VAR30 = FUN11();
                FUN12(VAR31, VAR4->VAR11);
                FUN12(VAR30, VAR32);
                FUN13(VAR33, VAR30);
                FUN14(VAR30);
            }
            break;
            }
        }
    }
    else
    {
        int VAR12 = VAR7 >> 8;
        switch (VAR12)
        {
        case 0x00:
            break;
        case 0x01:
        {
            int VAR37 = (VAR7 >> 4) & 0xf;
            int VAR38 = FUN21(VAR6, VAR4->VAR11 + 2);
            FUN12(FUN16(VAR37), VAR38);
            VAR8 = 6;
        }
        break;
        case 0x02:
        {
            int VAR39 = (VAR7 >> 4) & 0xf;
            int VAR40 = VAR7 & 0xf;
            FUN22(FUN16(VAR39), FUN16(VAR40));
        }
        break;
        case 0x03:
        {
            TCGv VAR41 = FUN11();
            TCGv VAR42 = FUN11();
            FUN12(VAR41, VAR4->VAR11 + 6);
            FUN17(VAR42, FUN16(1), 8);
            FUN22(FUN16(1), VAR42);
            FUN23(VAR41, FUN16(1), VAR4->VAR43);
            FUN17(VAR42, FUN16(1), 4);
            FUN22(FUN16(1), VAR42);
            FUN23(FUN16(0), FUN16(1), VAR4->VAR43);
            FUN22(FUN16(0), FUN16(1));
            FUN7(VAR6, VAR4, 0, FUN21(VAR6, VAR4->VAR11 + 2));
            FUN14(VAR41);
            FUN14(VAR42);
            VAR4->VAR18 = VAR19;
            VAR8 = 6;
        }
        break;
        case 0x04:
        {
            TCGv VAR41 = FUN11();
            FUN22(FUN16(1), FUN16(0));
            FUN24(FUN16(0), FUN16(1), VAR4->VAR43);
            FUN15(VAR41, FUN16(1), 4);
            FUN22(FUN16(1), VAR41);
            FUN24(VAR31, FUN16(1), VAR4->VAR43);
            FUN15(VAR41, FUN16(1), 8);
            FUN22(FUN16(1), VAR41);
            FUN14(VAR41);
            FUN25(0);
            VAR4->VAR18 = VAR19;
        }
        break;
        case 0x05:
        {
            int VAR34 = (VAR7 >> 4) & 0xf;
            int VAR44 = VAR7 & 0xf;
            FUN26(FUN16(VAR34), FUN16(VAR34), FUN16(VAR44));
        }
        break;
        case 0x06:
        {
            int VAR34 = (VAR7 >> 4) & 0xf;
            int VAR44 = VAR7 & 0xf;
            TCGv VAR41 = FUN11();
            FUN17(VAR41, FUN16(VAR34), 4);
            FUN22(FUN16(VAR34), VAR41);
            FUN23(FUN16(VAR44), FUN16(VAR34), VAR4->VAR43);
            FUN14(VAR41);
        }
        break;
        case 0x07:
        {
            int VAR34 = (VAR7 >> 4) & 0xf;
            int VAR44 = VAR7 & 0xf;
            TCGv VAR41 = FUN11();
            FUN24(FUN16(VAR44), FUN16(VAR34), VAR4->VAR43);
            FUN15(VAR41, FUN16(VAR34), 4);
            FUN22(FUN16(VAR34), VAR41);
            FUN14(VAR41);
        }
        break;
        case 0x08:
        {
            int VAR37 = (VAR7 >> 4) & 0xf;
            TCGv VAR45 = FUN11();
            FUN12(VAR45, FUN21(VAR6, VAR4->VAR11 + 2));
            FUN24(FUN16(VAR37), VAR45, VAR4->VAR43);
            FUN14(VAR45);
            VAR8 = 6;
        }
        break;
        case 0x09:
        {
            int VAR38 = (VAR7 >> 4) & 0xf;
            TCGv VAR45 = FUN11();
            FUN12(VAR45, FUN21(VAR6, VAR4->VAR11 + 2));
            FUN23(FUN16(VAR38), VAR45, VAR4->VAR43);
            FUN14(VAR45);
            VAR8 = 6;
        }
        break;
        case 0x0a:
        {
            int VAR40 = VAR7 & 0xf;
            int VAR39 = (VAR7 >> 4) & 0xf;
            FUN24(FUN16(VAR39), FUN16(VAR40), VAR4->VAR43);
        }
        break;
        case 0x0b:
        {
            int VAR39 = (VAR7 >> 4) & 0xf;
            int VAR38 = VAR7 & 0xf;
            FUN23(FUN16(VAR38), FUN16(VAR39), VAR4->VAR43);
        }
        break;
        case 0x0c:
        {
            int VAR34 = (VAR7 >> 4) & 0xf;
            int VAR44 = VAR7 & 0xf;
            TCGv VAR41 = FUN11();
            TCGv VAR42 = FUN11();
            FUN15(VAR41, FUN16(VAR44), FUN21(VAR6, VAR4->VAR11 + 2));
            FUN24(VAR42, VAR41, VAR4->VAR43);
            FUN22(FUN16(VAR34), VAR42);
            FUN14(VAR41);
            FUN14(VAR42);
            VAR8 = 6;
        }
        break;
        case 0x0d:
        {
            int VAR34 = (VAR7 >> 4) & 0xf;
            int VAR44 = VAR7 & 0xf;
            TCGv VAR41 = FUN11();
            TCGv VAR42 = FUN11();
            FUN15(VAR41, FUN16(VAR34), FUN21(VAR6, VAR4->VAR11 + 2));
            FUN23(FUN16(VAR44), VAR41, VAR4->VAR43);
            FUN14(VAR41);
            FUN14(VAR42);
            VAR8 = 6;
        }
        break;
        case 0x0e:
        {
            int VAR34 = (VAR7 >> 4) & 0xf;
            int VAR44 = VAR7 & 0xf;
            FUN22(VAR16, FUN16(VAR34));
            FUN22(VAR17, FUN16(VAR44));
        }
        break;
        case 0x19:
        {
            int VAR46 = (VAR7 >> 4) & 0xf;
            TCGv VAR41 = FUN11();
            TCGv VAR42 = FUN11();
            FUN12(VAR41, VAR4->VAR11 + 2);
            FUN17(VAR42, FUN16(1), 8);
            FUN22(FUN16(1), VAR42);
            FUN23(VAR41, FUN16(1), VAR4->VAR43);
            FUN17(VAR42, FUN16(1), 4);
            FUN22(FUN16(1), VAR42);
            FUN23(FUN16(0), FUN16(1), VAR4->VAR43);
            FUN22(FUN16(0), FUN16(1));
            FUN22(VAR31, FUN16(VAR46));
            FUN14(VAR41);
            FUN14(VAR42);
            FUN25(0);
            VAR4->VAR18 = VAR19;
        }
        break;
        case 0x1a:
        {
            FUN12(VAR31, FUN21(VAR6, VAR4->VAR11 + 2));
            FUN25(0);
            VAR4->VAR18 = VAR19;
            VAR8 = 6;
        }
        break;
        case 0x1b:
        {
            int VAR37 = (VAR7 >> 4) & 0xf;
            int VAR38 = FUN21(VAR6, VAR4->VAR11 + 2);
            FUN12(FUN16(VAR37), VAR38);
            VAR8 = 6;
        }
        break;
        case 0x1c:
        {
            int VAR40 = VAR7 & 0xf;
            int VAR39 = (VAR7 >> 4) & 0xf;
            FUN27(FUN16(VAR39), FUN16(VAR40), VAR4->VAR43);
        }
        break;
        case 0x1d:
        {
            int VAR37 = (VAR7 >> 4) & 0xf;
            TCGv VAR45 = FUN11();
            FUN12(VAR45, FUN21(VAR6, VAR4->VAR11 + 2));
            FUN27(FUN16(VAR37), VAR45, VAR4->VAR43);
            FUN14(VAR45);
            VAR8 = 6;
        }
        break;
        case 0x1e:
        {
            int VAR39 = (VAR7 >> 4) & 0xf;
            int VAR38 = VAR7 & 0xf;
            FUN28(FUN16(VAR38), FUN16(VAR39), VAR4->VAR43);
        }
        break;
        case 0x1f:
        {
            int VAR38 = (VAR7 >> 4) & 0xf;
            TCGv VAR45 = FUN11();
            FUN12(VAR45, FUN21(VAR6, VAR4->VAR11 + 2));
            FUN28(FUN16(VAR38), VAR45, VAR4->VAR43);
            FUN14(VAR45);
            VAR8 = 6;
        }
        break;
        case 0x20:
        {
            int VAR37 = (VAR7 >> 4) & 0xf;
            int VAR38 = FUN21(VAR6, VAR4->VAR11 + 2);
            FUN12(FUN16(VAR37), VAR38);
            VAR8 = 6;
        }
        break;
        case 0x21:
        {
            int VAR40 = VAR7 & 0xf;
            int VAR39 = (VAR7 >> 4) & 0xf;
            FUN29(FUN16(VAR39), FUN16(VAR40), VAR4->VAR43);
        }
        break;
        case 0x22:
        {
            int VAR37 = (VAR7 >> 4) & 0xf;
            TCGv VAR45 = FUN11();
            FUN12(VAR45, FUN21(VAR6, VAR4->VAR11 + 2));
            FUN29(FUN16(VAR37), VAR45, VAR4->VAR43);
            FUN14(VAR45);
            VAR8 = 6;
        }
        break;
        case 0x23:
        {
            int VAR39 = (VAR7 >> 4) & 0xf;
            int VAR38 = VAR7 & 0xf;
            FUN30(FUN16(VAR38), FUN16(VAR39), VAR4->VAR43);
        }
        break;
        case 0x24:
        {
            int VAR38 = (VAR7 >> 4) & 0xf;
            TCGv VAR45 = FUN11();
            FUN12(VAR45, FUN21(VAR6, VAR4->VAR11 + 2));
            FUN30(FUN16(VAR38), VAR45, VAR4->VAR43);
            FUN14(VAR45);
            VAR8 = 6;
        }
        break;
        case 0x25:
        {
            int VAR37 = (VAR7 >> 4) & 0xf;
            FUN22(VAR31, FUN16(VAR37));
            FUN25(0);
            VAR4->VAR18 = VAR19;
        }
        break;
        case 0x26:
        {
            int VAR34 = (VAR7 >> 4) & 0xf;
            int VAR44 = VAR7 & 0xf;
            FUN31(FUN16(VAR34), FUN16(VAR34), FUN16(VAR44));
        }
        break;
        case 0x27:
        {
            int VAR34 = (VAR7 >> 4) & 0xf;
            int VAR44 = VAR7 & 0xf;
            TCGv VAR47 = FUN11();
            FUN32(VAR47, FUN16(VAR44), 0x1f);
            FUN33(FUN16(VAR34), FUN16(VAR34), VAR47);
            FUN14(VAR47);
        }
        break;
        case 0x28:
        {
            int VAR34 = (VAR7 >> 4) & 0xf;
            int VAR44 = VAR7 & 0xf;
            TCGv VAR47 = FUN11();
            FUN32(VAR47, FUN16(VAR44), 0x1f);
            FUN34(FUN16(VAR34), FUN16(VAR34), VAR47);
            FUN14(VAR47);
        }
        break;
        case 0x29:
        {
            int VAR34 = (VAR7 >> 4) & 0xf;
            int VAR44 = VAR7 & 0xf;
            FUN35(FUN16(VAR34), FUN16(VAR34), FUN16(VAR44));
        }
        break;
        case 0x2a:
        {
            int VAR34 = (VAR7 >> 4) & 0xf;
            int VAR44 = VAR7 & 0xf;
            FUN36(FUN16(VAR34), FUN16(VAR44));
        }
        break;
        case 0x2b:
        {
            int VAR34 = (VAR7 >> 4) & 0xf;
            int VAR44 = VAR7 & 0xf;
            FUN37(FUN16(VAR34), FUN16(VAR34), FUN16(VAR44));
        }
        break;
        case 0x2c:
        {
            int VAR34 = (VAR7 >> 4) & 0xf;
            int VAR44 = VAR7 & 0xf;
            FUN38(FUN16(VAR34), FUN16(VAR44));
        }
        break;
        case 0x2d:
        {
            int VAR34 = (VAR7 >> 4) & 0xf;
            int VAR44 = VAR7 & 0xf;
            TCGv VAR47 = FUN11();
            FUN32(VAR47, FUN16(VAR44), 0x1f);
            FUN39(FUN16(VAR34), FUN16(VAR34), VAR47);
            FUN14(VAR47);
        }
        break;
        case 0x2e:
        {
            int VAR34 = (VAR7 >> 4) & 0xf;
            int VAR44 = VAR7 & 0xf;
            FUN40(FUN16(VAR34), FUN16(VAR34), FUN16(VAR44));
        }
        break;
        case 0x2f:
        {
            int VAR34 = (VAR7 >> 4) & 0xf;
            int VAR44 = VAR7 & 0xf;
            FUN41(FUN16(VAR34), FUN16(VAR34), FUN16(VAR44));
        }
        break;
        case 0x30:
        {
            int VAR38 = FUN21(VAR6, VAR4->VAR11 + 2);
            TCGv VAR30 = FUN11();
            FUN12(VAR30, VAR38);
            FUN20(VAR30, VAR33, FUN19(VAR5, VAR36[3]));
            FUN12(VAR31, VAR4->VAR11);
            FUN12(VAR30, VAR48);
            FUN13(VAR33, VAR30);
            FUN14(VAR30);
            VAR8 = 6;
        }
        break;
        case 0x31:
        {
            int VAR34 = (VAR7 >> 4) & 0xf;
            int VAR44 = VAR7 & 0xf;
            FUN12(VAR31, VAR4->VAR11);
            FUN42(FUN16(VAR34), VAR33, FUN16(VAR34), FUN16(VAR44));
        }
        break;
        case 0x32:
        {
            int VAR34 = (VAR7 >> 4) & 0xf;
            int VAR44 = VAR7 & 0xf;
            FUN12(VAR31, VAR4->VAR11);
            FUN43(FUN16(VAR34), VAR33, FUN16(VAR34), FUN16(VAR44));
        }
        break;
        case 0x33:
        {
            int VAR34 = (VAR7 >> 4) & 0xf;
            int VAR44 = VAR7 & 0xf;
            FUN44(FUN16(VAR34), FUN16(VAR34), FUN16(VAR44));
        }
        break;
        case 0x34:
        {
            int VAR34 = (VAR7 >> 4) & 0xf;
            int VAR44 = VAR7 & 0xf;
            FUN45(FUN16(VAR34), FUN16(VAR34), FUN16(VAR44));
        }
        break;
        case 0x35:
        {
            TCGv VAR30 = FUN11();
            FUN12(VAR31, VAR4->VAR11);
            FUN12(VAR30, VAR49);
            FUN13(VAR33, VAR30);
            FUN14(VAR30);
        }
        break;
        case 0x36:
        {
            int VAR34 = (VAR7 >> 4) & 0xf;
            int VAR44 = VAR7 & 0xf;
            TCGv VAR41 = FUN11();
            TCGv VAR42 = FUN11();
            FUN15(VAR41, FUN16(VAR44), FUN21(VAR6, VAR4->VAR11 + 2));
            FUN27(VAR42, VAR41, VAR4->VAR43);
            FUN22(FUN16(VAR34), VAR42);
            FUN14(VAR41);
            FUN14(VAR42);
            VAR8 = 6;
        }
        break;
        case 0x37:
        {
            int VAR34 = (VAR7 >> 4) & 0xf;
            int VAR44 = VAR7 & 0xf;
            TCGv VAR41 = FUN11();
            TCGv VAR42 = FUN11();
            FUN15(VAR41, FUN16(VAR34), FUN21(VAR6, VAR4->VAR11 + 2));
            FUN28(FUN16(VAR44), VAR41, VAR4->VAR43);
            FUN14(VAR41);
            FUN14(VAR42);
            VAR8 = 6;
        }
        break;
        case 0x38:
        {
            int VAR34 = (VAR7 >> 4) & 0xf;
            int VAR44 = VAR7 & 0xf;
            TCGv VAR41 = FUN11();
            TCGv VAR42 = FUN11();
            FUN15(VAR41, FUN16(VAR44), FUN21(VAR6, VAR4->VAR11 + 2));
            FUN29(VAR42, VAR41, VAR4->VAR43);
            FUN22(FUN16(VAR34), VAR42);
            FUN14(VAR41);
            FUN14(VAR42);
            VAR8 = 6;
        }
        break;
        case 0x39:
        {
            int VAR34 = (VAR7 >> 4) & 0xf;
            int VAR44 = VAR7 & 0xf;
            TCGv VAR41 = FUN11();
            TCGv VAR42 = FUN11();
            FUN15(VAR41, FUN16(VAR34), FUN21(VAR6, VAR4->VAR11 + 2));
            FUN30(FUN16(VAR44), VAR41, VAR4->VAR43);
            FUN14(VAR41);
            FUN14(VAR42);
            VAR8 = 6;
        }
        break;
        default:
        {
            TCGv VAR30 = FUN11();
            FUN12(VAR31, VAR4->VAR11);
            FUN12(VAR30, VAR32);
            FUN13(VAR33, VAR30);
            FUN14(VAR30);
        }
        break;
        }
    }
    return VAR8;
}