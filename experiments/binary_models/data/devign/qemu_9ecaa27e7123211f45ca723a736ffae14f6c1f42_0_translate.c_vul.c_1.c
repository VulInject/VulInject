static void FUN1(VAR1 *VAR2, uint32_t VAR3)
{
    uint32_t VAR4, VAR5, VAR6;
    uint32_t VAR7, VAR8, VAR9;
    VAR4 = FUN2(VAR3, 0, 4);
    VAR5 = FUN2(VAR3, 8, 2);
    VAR6 = FUN2(VAR3, 6, 2);
    VAR7 = FUN2(VAR3, 16, 5);
    VAR8 = FUN2(VAR3, 11, 5);
    VAR9 = FUN2(VAR3, 21, 5);
    switch (VAR4)
    {
    case 0x0000:
        switch (VAR5)
        {
        case 0x00:
            FUN3("", VAR9, VAR7, VAR8);
            {
                VAR10 *VAR11 = FUN4();
                TCGv_i64 VAR12 = FUN5();
                TCGv_i64 VAR13 = FUN5();
                TCGv_i64 VAR14 = FUN6();
                TCGv_i32 VAR15 = FUN7();
                TCGv_i32 VAR16 = FUN7();
                FUN8(VAR12, VAR17[VAR7]);
                FUN8(VAR13, VAR17[VAR8]);
                FUN9(VAR14, VAR12, VAR13);
                FUN10(VAR15, VAR14);
                FUN11(VAR14, VAR14, 31);
                FUN12(VAR14, VAR14, 0x3);
                FUN13(VAR18, VAR14, 0x0, VAR11);
                FUN13(VAR18, VAR14, 0x3, VAR11);
                FUN14(VAR19, VAR19, (VAR20 | VAR21));
                FUN15(VAR16, VAR19, VAR22);
                FUN16(VAR23, VAR16, VAR22, VAR11);
                FUN17(VAR2, VAR24);
                FUN18(VAR11);
                FUN19(VAR17[VAR9], VAR15);
                FUN20(VAR12);
                FUN20(VAR13);
                FUN20(VAR14);
                FUN21(VAR15);
                FUN21(VAR16);
            }
            break;
        default:
            FUN22(VAR2);
            break;
        }
        break;
    case 0x0001:
        switch (VAR5)
        {
        case 0x00:
            FUN3("", VAR9, VAR7, VAR8);
            {
                VAR10 *VAR11 = FUN4();
                TCGv_i64 VAR12 = FUN5();
                TCGv_i64 VAR13 = FUN5();
                TCGv_i64 VAR25 = FUN6();
                TCGv_i64 VAR14 = FUN6();
                TCGv_i32 VAR15 = FUN7();
                TCGv_i32 VAR26 = FUN7();
                TCGv_i32 VAR16 = FUN7();
                FUN8(VAR12, VAR17[VAR7]);
                FUN8(VAR13, VAR17[VAR8]);
                FUN15(VAR26, VAR19, VAR21);
                FUN8(VAR25, VAR26);
                FUN11(VAR25, VAR25, 10);
                FUN9(VAR14, VAR12, VAR13);
                FUN9(VAR14, VAR14, VAR25);
                FUN10(VAR15, VAR14);
                FUN11(VAR14, VAR14, 32);
                FUN12(VAR14, VAR14, 0x3);
                FUN13(VAR18, VAR14, 0x0, VAR11);
                FUN13(VAR18, VAR14, 0x3, VAR11);
                FUN14(VAR19, VAR19, (VAR20 | VAR21));
                FUN15(VAR16, VAR19, VAR22);
                FUN16(VAR23, VAR16, VAR22, VAR11);
                FUN17(VAR2, VAR24);
                FUN18(VAR11);
                FUN19(VAR17[VAR9], VAR15);
                FUN20(VAR12);
                FUN20(VAR13);
                FUN20(VAR25);
                FUN20(VAR14);
                FUN21(VAR15);
                FUN21(VAR26);
                FUN21(VAR16);
            }
            break;
        default:
            FUN22(VAR2);
            break;
        }
        break;
    case 0x0002:
        switch (VAR5)
        {
        case 0x00:
            FUN3("", VAR9, VAR7, VAR8);
            {
                VAR10 *VAR11 = FUN4();
                TCGv_i64 VAR12 = FUN5();
                TCGv_i64 VAR13 = FUN5();
                TCGv_i64 VAR14 = FUN6();
                TCGv_i32 VAR15 = FUN7();
                TCGv_i32 VAR16 = FUN7();
                FUN8(VAR12, VAR17[VAR7]);
                FUN8(VAR13, VAR17[VAR8]);
                FUN23(VAR14, VAR12, VAR13);
                FUN10(VAR15, VAR14);
                FUN11(VAR14, VAR14, 31);
                FUN12(VAR14, VAR14, 0x3);
                FUN13(VAR18, VAR14, 0x0, VAR11);
                FUN13(VAR18, VAR14, 0x3, VAR11);
                FUN14(VAR19, VAR19, (VAR20 | VAR21));
                FUN15(VAR16, VAR19, VAR22);
                FUN16(VAR23, VAR16, VAR22, VAR11);
                FUN17(VAR2, VAR24);
                FUN18(VAR11);
                FUN19(VAR17[VAR9], VAR15);
                FUN20(VAR12);
                FUN20(VAR13);
                FUN20(VAR14);
                FUN21(VAR15);
                FUN21(VAR16);
            }
            break;
        default:
            FUN22(VAR2);
            break;
        }
        break;
    case 0x0003:
        switch (VAR5)
        {
        case 0x00:
            FUN3("", VAR9, VAR7, VAR8);
            FUN24(VAR17[VAR9], VAR17[VAR7], VAR17[VAR8]);
            break;
        default:
            FUN22(VAR2);
            break;
        }
        break;
    case 0x0004:
        switch (VAR5)
        {
        case 0x00:
            FUN3("", VAR9, VAR7, VAR8);
            FUN25(VAR17[VAR9], VAR17[VAR7], VAR17[VAR8]);
            break;
        default:
            FUN22(VAR2);
            break;
        }
        break;
    case 0x0005:
        switch (VAR5)
        {
        case 0x00:
            FUN3("", VAR9, VAR7, VAR8);
            FUN26(VAR17[VAR9], VAR17[VAR7], VAR17[VAR8]);
            break;
        default:
            FUN22(VAR2);
            break;
        }
        break;
    case 0x0006:
        switch (VAR5)
        {
        case 0x03:
            FUN3("", VAR9, VAR7, VAR8);
            if (VAR7 != 0 && VAR8 != 0)
            {
                FUN27(VAR17[VAR9], VAR27, VAR17[VAR7], VAR17[VAR8]);
            }
            else
            {
                FUN28(VAR17[VAR9], 0x0);
            }
            break;
        default:
            FUN22(VAR2);
            break;
        }
        break;
    case 0x0009:
        switch (VAR5)
        {
        case 0x03:
            FUN3("", VAR9, VAR7, VAR8);
            {
                VAR10 *VAR28 = FUN4();
                VAR10 *VAR29 = FUN4();
                VAR10 *VAR30 = FUN4();
                VAR10 *VAR31 = FUN4();
                TCGv_i32 VAR16 = FUN7();
                if (VAR8 == 0)
                {
                    FUN29(VAR19, VAR19, (VAR20 | VAR21));
                    FUN30(VAR16, VAR19, VAR22);
                    FUN31(VAR23, VAR16, VAR22, VAR28);
                    FUN17(VAR2, VAR24);
                    FUN18(VAR28);
                }
                else
                {
                    FUN31(VAR18, VAR17[VAR8], 0x00000000, VAR29);
                    FUN31(VAR23, VAR17[VAR7], 0x80000000, VAR30);
                    FUN31(VAR23, VAR17[VAR8], 0xffffffff, VAR30);
                    FUN18(VAR29);
                    FUN29(VAR19, VAR19, (VAR20 | VAR21));
                    FUN30(VAR16, VAR19, VAR22);
                    FUN31(VAR23, VAR16, VAR22, VAR31);
                    FUN17(VAR2, VAR24);
                    FUN18(VAR30);
                    FUN32(VAR17[VAR9], VAR17[VAR7], VAR17[VAR8]);
                    FUN18(VAR31);
                }
                FUN21(VAR16);
            }
            break;
        default:
            FUN22(VAR2);
            break;
        }
        break;
    case 0x000a:
        switch (VAR5)
        {
        case 0x03:
            FUN3("", VAR9, VAR7, VAR8);
            {
                VAR10 *VAR28 = FUN4();
                VAR10 *VAR29 = FUN4();
                VAR10 *VAR30 = FUN4();
                TCGv_i32 VAR16 = FUN7();
                if (VAR8 == 0)
                {
                    FUN29(VAR19, VAR19, (VAR20 | VAR21));
                    FUN30(VAR16, VAR19, VAR22);
                    FUN31(VAR23, VAR16, VAR22, VAR28);
                    FUN17(VAR2, VAR24);
                    FUN18(VAR28);
                }
                else
                {
                    FUN31(VAR23, VAR17[VAR8], 0x00000000, VAR29);
                    FUN29(VAR19, VAR19, (VAR20 | VAR21));
                    FUN30(VAR16, VAR19, VAR22);
                    FUN31(VAR23, VAR16, VAR22, VAR30);
                    FUN17(VAR2, VAR24);
                    FUN18(VAR29);
                    FUN33(VAR17[VAR9], VAR17[VAR7], VAR17[VAR8]);
                    FUN18(VAR30);
                }
                FUN21(VAR16);
            }
            break;
        default:
            FUN22(VAR2);
            break;
        }
        break;
    case 0x000b:
        switch (VAR5)
        {
        case 0x03:
            FUN3("", VAR9, VAR7, VAR8);
            if (VAR8 != 0 && VAR7 != 0)
            {
                TCGv_i64 VAR32 = FUN6();
                TCGv_i64 VAR33 = FUN6();
                TCGv_i64 VAR34 = FUN6();
                TCGv_i64 VAR35 = FUN5();
                TCGv_i32 VAR16 = FUN7();
                VAR10 *VAR11 = FUN4();
                FUN8(VAR33, VAR17[VAR7]);
                FUN8(VAR34, VAR17[VAR8]);
                FUN34(VAR32, VAR33, VAR34);
                FUN20(VAR33);
                FUN20(VAR34);
                FUN11(VAR35, VAR32, VAR36);
                FUN13(VAR18, VAR35, 0x00000000, VAR11);
                FUN29(VAR19, VAR19, (VAR20 | VAR21));
                FUN30(VAR16, VAR19, VAR22);
                FUN31(VAR23, VAR16, VAR22, VAR11);
                FUN17(VAR2, VAR24);
                FUN18(VAR11);
                FUN20(VAR35);
                FUN35(VAR17[VAR9], VAR32);
                FUN20(VAR32);
                FUN21(VAR16);
            }
            else
            {
                FUN28(VAR17[VAR9], 0);
            }
            break;
        default:
            FUN22(VAR2);
            break;
        }
        break;
    case 0x000e:
        switch (VAR5)
        {
        case 0x00:
            FUN3("", VAR9, VAR7, VAR8);
            {
                VAR10 *VAR11 = FUN4();
                TCGv VAR15 = FUN36();
                TCGv VAR37 = FUN37();
                FUN30(VAR37, VAR19, VAR38);
                FUN38(VAR15, VAR17[VAR8]);
                FUN31(VAR23, VAR37, VAR38, VAR11);
                FUN38(VAR15, VAR17[VAR7]);
                FUN18(VAR11);
                FUN38(VAR17[VAR9], VAR15);
                FUN39(VAR37);
                FUN39(VAR15);
            }
            break;
        default:
            FUN22(VAR2);
            break;
        }
        break;
    case 0x000f:
        switch (VAR5)
        {
        case 0x00:
            FUN3("", VAR9, VAR7, VAR8);
            FUN40(VAR17[VAR9], VAR17[VAR7], -1);
            FUN41(VAR17[VAR9], VAR17[VAR9], 1);
            break;
        case 0x01:
            FUN3("", VAR9, VAR7, VAR8);
            FUN42(VAR17[VAR9], VAR17[VAR7], VAR36);
            FUN43(VAR17[VAR9], VAR36, VAR17[VAR9]);
            break;
        default:
            FUN22(VAR2);
            break;
        }
        break;
    case 0x0008:
        switch (VAR5)
        {
        case 0x00:
            switch (VAR6)
            {
            case 0x00:
                FUN3("", VAR9, VAR7, VAR8);
                FUN44(VAR17[VAR9], VAR17[VAR7], VAR17[VAR8]);
                break;
            case 0x01:
                FUN3("", VAR9, VAR7, VAR8);
                FUN45(VAR17[VAR9], VAR17[VAR7], VAR17[VAR8]);
                break;
            case 0x02:
                FUN3("", VAR9, VAR7, VAR8);
                FUN46(VAR17[VAR9], VAR17[VAR7], VAR17[VAR8]);
                break;
            case 0x03:
                FUN3("", VAR9, VAR7, VAR8);
                FUN47(VAR17[VAR9], VAR17[VAR7], VAR17[VAR8]);
                break;
            default:
                FUN22(VAR2);
                break;
            }
            break;
        default:
            FUN22(VAR2);
            break;
        }
        break;
    case 0x000c:
        switch (VAR5)
        {
        case 0x00:
            switch (VAR6)
            {
            case 0x00:
                FUN3("", VAR9, VAR7);
                FUN48(VAR17[VAR9], VAR17[VAR7]);
                break;
            case 0x01:
                FUN3("", VAR9, VAR7);
                FUN49(VAR17[VAR9], VAR17[VAR7]);
                break;
            case 0x02:
                FUN3("", VAR9, VAR7);
                FUN50(VAR17[VAR9], VAR17[VAR7]);
                break;
            case 0x03:
                FUN3("", VAR9, VAR7);
                FUN51(VAR17[VAR9], VAR17[VAR7]);
                break;
            default:
                FUN22(VAR2);
                break;
            }
            break;
        default:
            FUN22(VAR2);
            break;
        }
        break;
    case 0x000d:
        switch (VAR5)
        {
        case 0x00:
            switch (VAR6)
            {
            case 0x00:
                FUN3("", VAR9, VAR7);
                FUN52(VAR17[VAR9], VAR17[VAR7]);
                break;
            case 0x01:
                FUN3("", VAR9, VAR7);
                FUN53(VAR17[VAR9], VAR17[VAR7]);
                break;
            default:
                FUN22(VAR2);
                break;
            }
            break;
        default:
            FUN22(VAR2);
            break;
        }
        break;
    default:
        FUN22(VAR2);
        break;
    }
}