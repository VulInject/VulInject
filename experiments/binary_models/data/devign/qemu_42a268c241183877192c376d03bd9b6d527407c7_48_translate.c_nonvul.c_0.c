static void FUN1(VAR1 *VAR2, uint32_t VAR3)
{
    uint32_t VAR4, VAR5;
    uint32_t VAR6, VAR7, VAR8;
    uint32_t VAR9, VAR10;
    uint32_t VAR11, VAR12, VAR13, VAR14, VAR15;
    TCGMemOp VAR16;
    VAR4 = FUN2(VAR3, 26, 6);
    VAR5 = FUN2(VAR3, 24, 2);
    VAR6 = FUN2(VAR3, 16, 5);
    VAR7 = FUN2(VAR3, 11, 5);
    VAR8 = FUN2(VAR3, 21, 5);
    VAR9 = FUN2(VAR3, 5, 6);
    VAR10 = FUN2(VAR3, 0, 5);
    VAR11 = FUN2(VAR3, 0, 16);
    VAR12 = FUN2(VAR3, 21, 5);
    VAR13 = FUN2(VAR3, 0, 11);
    VAR14 = FUN2(VAR3, 0, 26);
    VAR15 = (VAR12 << 11) + VAR13;
    switch (VAR4)
    {
    case 0x00:
        FUN3("", VAR14);
        FUN4(VAR2, VAR14, 0, VAR4);
        break;
    case 0x01:
        FUN3("", VAR14);
        FUN4(VAR2, VAR14, 0, VAR4);
        break;
    case 0x03:
        FUN3("", VAR14);
        FUN4(VAR2, VAR14, 0, VAR4);
        break;
    case 0x04:
        FUN3("", VAR14);
        FUN4(VAR2, VAR14, 0, VAR4);
        break;
    case 0x05:
        switch (VAR5)
        {
        case 0x01:
            FUN3("", VAR11);
            break;
        default:
            FUN5(VAR2);
            break;
        }
        break;
    case 0x11:
        FUN3("", VAR7);
        FUN4(VAR2, 0, VAR7, VAR4);
        break;
    case 0x12:
        FUN3("", VAR7);
        FUN4(VAR2, 0, VAR7, VAR4);
        break;
    case 0x13:
        FUN3("", VAR12, VAR6, VAR13);
        {
            TCGv_i64 VAR17 = FUN6();
            TCGv_i64 VAR18 = FUN6();
            TCGv_i32 VAR19 = FUN7();
            TCGv VAR20 = FUN8(VAR15);
            FUN9(VAR19, VAR21[VAR6], VAR20);
            FUN10(VAR17, VAR19);
            FUN11(VAR18, VAR22, VAR23);
            FUN12(VAR18, VAR18, VAR17);
            FUN13(VAR22, VAR18);
            FUN14(VAR18, VAR18, 32);
            FUN13(VAR23, VAR18);
            FUN15(VAR19);
            FUN16(VAR20);
            FUN17(VAR17);
            FUN17(VAR18);
        }
        break;
    case 0x09:
        FUN3("");
        {
            return;
            if (VAR2->VAR24 == VAR25)
            {
                FUN5(VAR2);
                return;
            }
            FUN18(VAR26);
            VAR2->VAR27 = VAR28;
        }
        break;
    case 0x1c:
        FUN3("");
        break;
    case 0x1d:
        FUN3("");
        break;
    case 0x1e:
        FUN3("");
        break;
    case 0x1f:
        FUN3("");
        break;
    case 0x3c:
        FUN3("", VAR8, VAR6, VAR7, VAR9, VAR10);
        break;
    case 0x3d:
        FUN3("");
        break;
    case 0x3e:
        FUN3("");
        break;
    case 0x3f:
        FUN3("");
        break;
    case 0x21:
        FUN3("", VAR8, VAR6, VAR11);
        VAR16 = VAR29;
        goto VAR30;
    case 0x22:
        FUN3("", VAR8, VAR6, VAR11);
        VAR16 = VAR31;
        goto VAR30;
    case 0x23:
        FUN3("", VAR8, VAR6, VAR11);
        VAR16 = VAR32;
        goto VAR30;
    case 0x24:
        FUN3("", VAR8, VAR6, VAR11);
        VAR16 = VAR33;
        goto VAR30;
    case 0x25:
        FUN3("", VAR8, VAR6, VAR11);
        VAR16 = VAR34;
        goto VAR30;
    case 0x26:
        FUN3("", VAR8, VAR6, VAR11);
        VAR16 = VAR35;
        goto VAR30;
    VAR30:
    {
        TCGv VAR36 = FUN19();
        FUN20(VAR36, VAR21[VAR6], FUN21(VAR11, 16));
        FUN22(VAR21[VAR8], VAR36, VAR2->VAR24, VAR16);
        FUN16(VAR36);
    }
    break;
    case 0x27:
        FUN3("", VAR8, VAR6, VAR11);
        {
            if (VAR11 == 0)
            {
                FUN23(VAR21[VAR8], VAR21[VAR6]);
            }
            else
            {
                VAR37 *VAR38 = FUN24();
                TCGv_i64 VAR39 = FUN6();
                TCGv_i64 VAR40 = FUN25();
                TCGv_i32 VAR41 = FUN26();
                TCGv_i32 VAR42 = FUN26();
                FUN27(VAR39, VAR21[VAR6]);
                FUN28(VAR40, VAR39, FUN21(VAR11, 16));
                FUN13(VAR41, VAR40);
                FUN14(VAR40, VAR40, 32);
                FUN29(VAR40, VAR40, 0x3);
                FUN30(VAR43, VAR40, 0x0, VAR38);
                FUN30(VAR43, VAR40, 0x3, VAR38);
                FUN31(VAR44, VAR44, (VAR45 | VAR46));
                FUN32(VAR42, VAR44, VAR47);
                FUN33(VAR48, VAR42, VAR47, VAR38);
                FUN34(VAR2, VAR49);
                FUN35(VAR38);
                FUN36(VAR21[VAR8], VAR41);
                FUN17(VAR39);
                FUN17(VAR40);
                FUN15(VAR41);
                FUN15(VAR42);
            }
        }
        break;
    case 0x28:
        FUN3("", VAR8, VAR6, VAR11);
        {
            VAR37 *VAR38 = FUN24();
            TCGv_i64 VAR39 = FUN6();
            TCGv_i64 VAR40 = FUN25();
            TCGv_i64 VAR50 = FUN25();
            TCGv_i32 VAR41 = FUN26();
            TCGv_i32 VAR51 = FUN26();
            TCGv_i32 VAR42 = FUN26();
            FUN27(VAR39, VAR21[VAR6]);
            FUN32(VAR51, VAR44, VAR46);
            FUN37(VAR51, VAR51, 10);
            FUN27(VAR50, VAR51);
            FUN28(VAR40, VAR39, FUN21(VAR11, 16));
            FUN12(VAR40, VAR40, VAR50);
            FUN13(VAR41, VAR40);
            FUN14(VAR40, VAR40, 32);
            FUN29(VAR40, VAR40, 0x3);
            FUN30(VAR43, VAR40, 0x0, VAR38);
            FUN30(VAR43, VAR40, 0x3, VAR38);
            FUN31(VAR44, VAR44, (VAR45 | VAR46));
            FUN32(VAR42, VAR44, VAR47);
            FUN33(VAR48, VAR42, VAR47, VAR38);
            FUN34(VAR2, VAR49);
            FUN35(VAR38);
            FUN36(VAR21[VAR8], VAR41);
            FUN17(VAR39);
            FUN17(VAR40);
            FUN17(VAR50);
            FUN15(VAR41);
            FUN15(VAR51);
            FUN15(VAR42);
        }
        break;
    case 0x29:
        FUN3("", VAR8, VAR6, VAR11);
        FUN38(VAR21[VAR8], VAR21[VAR6], FUN39(VAR11, 16));
        break;
    case 0x2a:
        FUN3("", VAR8, VAR6, VAR11);
        FUN40(VAR21[VAR8], VAR21[VAR6], FUN39(VAR11, 16));
        break;
    case 0x2b:
        FUN3("", VAR8, VAR6, VAR11);
        FUN41(VAR21[VAR8], VAR21[VAR6], FUN21(VAR11, 16));
        break;
    case 0x2c:
        FUN3("", VAR8, VAR6, VAR11);
        if (VAR6 != 0 && VAR11 != 0)
        {
            TCGv_i32 VAR52 = FUN42(VAR11);
            FUN43(VAR21[VAR8], VAR26, VAR21[VAR6], VAR52);
            FUN15(VAR52);
        }
        else
        {
            FUN44(VAR21[VAR8], 0x0);
        }
        break;
    case 0x2d:
        FUN3("", VAR8, VAR6, VAR11);
        {
            return;
            TCGv_i32 VAR53 = FUN42(VAR11);
            if (VAR2->VAR24 == VAR25)
            {
                FUN5(VAR2);
                return;
            }
            FUN45(VAR21[VAR8], VAR26, VAR21[VAR8], VAR21[VAR6], VAR53);
            FUN15(VAR53);
        }
        break;
    case 0x30:
        FUN3("", VAR12, VAR6, VAR7, VAR13);
        {
            return;
            TCGv_i32 VAR52 = FUN42(VAR15);
            if (VAR2->VAR24 == VAR25)
            {
                FUN5(VAR2);
                return;
            }
            FUN46(VAR26, VAR21[VAR6], VAR21[VAR7], VAR52);
            FUN15(VAR52);
        }
        break;
    case 0x35:
        FUN3("", VAR12, VAR6, VAR7, VAR13);
        VAR16 = VAR29;
        goto VAR54;
    case 0x36:
        FUN3("", VAR12, VAR6, VAR7, VAR13);
        VAR16 = VAR32;
        goto VAR54;
    case 0x37:
        FUN3("", VAR12, VAR6, VAR7, VAR13);
        VAR16 = VAR34;
        goto VAR54;
    VAR54:
    {
        TCGv VAR36 = FUN19();
        FUN20(VAR36, VAR21[VAR6], FUN21(VAR15, 16));
        FUN47(VAR21[VAR7], VAR36, VAR2->VAR24, VAR16);
        FUN16(VAR36);
    }
    break;
    default:
        FUN5(VAR2);
        break;
    }
}