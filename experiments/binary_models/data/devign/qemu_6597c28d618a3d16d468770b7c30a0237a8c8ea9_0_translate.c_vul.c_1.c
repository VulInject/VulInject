static void FUN1(VAR1 *VAR2, uint32_t VAR3)
{
    uint32_t VAR4, VAR5;
    uint32_t VAR6, VAR7, VAR8;
    uint32_t VAR9, VAR10, VAR11, VAR12;
    int32_t VAR13, VAR14, VAR15;
    TCGMemOp VAR16;
    TCGv VAR17;
    VAR4 = FUN2(VAR3, 26, 6);
    VAR5 = FUN2(VAR3, 24, 2);
    VAR6 = FUN2(VAR3, 16, 5);
    VAR7 = FUN2(VAR3, 11, 5);
    VAR8 = FUN2(VAR3, 21, 5);
    VAR9 = FUN2(VAR3, 5, 6);
    VAR10 = FUN2(VAR3, 0, 5);
    VAR11 = FUN2(VAR3, 0, 16);
    VAR13 = (VAR18)VAR11;
    VAR15 = FUN3(VAR3, 0, 26);
    VAR12 = (FUN2(VAR3, 21, 5) << 11) | FUN2(VAR3, 0, 11);
    VAR14 = (VAR18)VAR12;
    switch (VAR4)
    {
    case 0x00:
        FUN4("", VAR15);
        FUN5(VAR2, VAR15, 0, VAR4);
        break;
    case 0x01:
        FUN4("", VAR15);
        FUN5(VAR2, VAR15, 0, VAR4);
        break;
    case 0x03:
        FUN4("", VAR15);
        FUN5(VAR2, VAR15, 0, VAR4);
        break;
    case 0x04:
        FUN4("", VAR15);
        FUN5(VAR2, VAR15, 0, VAR4);
        break;
    case 0x05:
        switch (VAR5)
        {
        case 0x01:
            FUN4("", VAR13);
            break;
        default:
            FUN6(VAR2);
            break;
        }
        break;
    case 0x11:
        FUN4("", VAR7);
        FUN5(VAR2, 0, VAR7, VAR4);
        break;
    case 0x12:
        FUN4("", VAR7);
        FUN5(VAR2, 0, VAR7, VAR4);
        break;
    case 0x13:
        FUN4("", VAR6, VAR13);
        VAR17 = FUN7(VAR13);
        FUN8(VAR2, VAR19[VAR6], VAR17);
        FUN9(VAR17);
        break;
    case 0x09:
        FUN4("");
        {
            return;
            if (VAR2->VAR20 == VAR21)
            {
                FUN6(VAR2);
                return;
            }
            FUN10(VAR22);
            VAR2->VAR23 = VAR24;
        }
        break;
    case 0x1b:
        FUN4("", VAR8, VAR6, VAR13);
        FUN11(VAR2, VAR19[VAR8], VAR19[VAR6], VAR13);
        break;
    case 0x1c:
        FUN4("");
        break;
    case 0x1d:
        FUN4("");
        break;
    case 0x1e:
        FUN4("");
        break;
    case 0x1f:
        FUN4("");
        break;
    case 0x3c:
        FUN4("", VAR8, VAR6, VAR7, VAR9, VAR10);
        break;
    case 0x3d:
        FUN4("");
        break;
    case 0x3e:
        FUN4("");
        break;
    case 0x3f:
        FUN4("");
        break;
    case 0x21:
        FUN4("", VAR8, VAR6, VAR13);
        VAR16 = VAR25;
        goto VAR26;
    case 0x22:
        FUN4("", VAR8, VAR6, VAR13);
        VAR16 = VAR27;
        goto VAR26;
    case 0x23:
        FUN4("", VAR8, VAR6, VAR13);
        VAR16 = VAR28;
        goto VAR26;
    case 0x24:
        FUN4("", VAR8, VAR6, VAR13);
        VAR16 = VAR29;
        goto VAR26;
    case 0x25:
        FUN4("", VAR8, VAR6, VAR13);
        VAR16 = VAR30;
        goto VAR26;
    case 0x26:
        FUN4("", VAR8, VAR6, VAR13);
        VAR16 = VAR31;
        goto VAR26;
    VAR26:
    {
        TCGv VAR17 = FUN12();
        FUN13(VAR17, VAR19[VAR6], VAR13);
        FUN14(VAR19[VAR8], VAR17, VAR2->VAR20, VAR16);
        FUN9(VAR17);
    }
    break;
    case 0x27:
        FUN4("", VAR8, VAR6, VAR13);
        VAR17 = FUN7(VAR13);
        FUN15(VAR2, VAR19[VAR8], VAR19[VAR6], VAR17);
        FUN9(VAR17);
        break;
    case 0x28:
        FUN4("", VAR8, VAR6, VAR13);
        VAR17 = FUN7(VAR13);
        FUN16(VAR2, VAR19[VAR8], VAR19[VAR6], VAR17);
        FUN9(VAR17);
        break;
    case 0x29:
        FUN4("", VAR8, VAR6, VAR11);
        FUN17(VAR19[VAR8], VAR19[VAR6], VAR11);
        break;
    case 0x2a:
        FUN4("", VAR8, VAR6, VAR11);
        FUN18(VAR19[VAR8], VAR19[VAR6], VAR11);
        break;
    case 0x2b:
        FUN4("", VAR8, VAR6, VAR13);
        FUN19(VAR19[VAR8], VAR19[VAR6], VAR13);
        break;
    case 0x2c:
        FUN4("", VAR8, VAR6, VAR13);
        VAR17 = FUN7(VAR13);
        FUN20(VAR2, VAR19[VAR8], VAR19[VAR6], VAR17);
        FUN9(VAR17);
        break;
    case 0x2d:
        FUN4("", VAR8, VAR6, VAR11);
        {
            return;
            TCGv_i32 VAR32 = FUN21(VAR11);
            if (VAR2->VAR20 == VAR21)
            {
                FUN6(VAR2);
                return;
            }
            FUN22(VAR19[VAR8], VAR22, VAR19[VAR8], VAR19[VAR6], VAR32);
            FUN23(VAR32);
        }
        break;
    case 0x30:
        FUN4("", VAR6, VAR7, VAR12);
        {
            return;
            TCGv_i32 VAR33 = FUN21(VAR12);
            if (VAR2->VAR20 == VAR21)
            {
                FUN6(VAR2);
                return;
            }
            FUN24(VAR22, VAR19[VAR6], VAR19[VAR7], VAR33);
            FUN23(VAR33);
        }
        break;
    case 0x33:
        FUN4("", VAR6, VAR7, VAR14);
        FUN25(VAR2, VAR19[VAR7], VAR19[VAR6], VAR14);
        break;
    case 0x35:
        FUN4("", VAR6, VAR7, VAR14);
        VAR16 = VAR25;
        goto VAR34;
    case 0x36:
        FUN4("", VAR6, VAR7, VAR14);
        VAR16 = VAR28;
        goto VAR34;
    case 0x37:
        FUN4("", VAR6, VAR7, VAR14);
        VAR16 = VAR30;
        goto VAR34;
    VAR34:
    {
        TCGv VAR17 = FUN12();
        FUN13(VAR17, VAR19[VAR6], VAR14);
        FUN26(VAR19[VAR7], VAR17, VAR2->VAR20, VAR16);
        FUN9(VAR17);
    }
    break;
    default:
        FUN6(VAR2);
        break;
    }
}