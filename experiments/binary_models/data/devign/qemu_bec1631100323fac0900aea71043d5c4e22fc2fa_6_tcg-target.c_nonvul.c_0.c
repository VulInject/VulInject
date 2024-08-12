static inline void FUN1(VAR1 *VAR2, TCGOpcode VAR3, const VAR4 *VAR5, const int *VAR6)
{
    TCGArg VAR7, VAR8, VAR9, VAR10, VAR11, VAR12;
    int VAR13;
    switch (VAR3)
    {
    case VAR14:
        FUN2(VAR2, VAR15, VAR16, VAR5[0]);
        FUN3(VAR2, VAR15, VAR17);
        break;
    case VAR18:
        if (VAR2->VAR19)
        {
            VAR2->VAR19[VAR5[0]] = FUN4(VAR2);
            FUN5(VAR2, VAR15);
        }
        else
        {
            intptr_t VAR20 = (VAR21)(VAR2->VAR22 + VAR5[0]);
            FUN2(VAR2, VAR15, VAR16, VAR20 & ~0xfff);
            FUN6(VAR2, VAR15, VAR23, VAR16, VAR20 & 0xfff);
        }
        VAR2->VAR24[VAR5[0]] = FUN4(VAR2);
        break;
    case VAR25:
        FUN7(VAR2, VAR15, FUN8(VAR5[0]));
        break;
    case VAR26:
        FUN9(VAR2, VAR15, VAR5[0], VAR5[1], VAR5[2]);
        break;
    case VAR27:
        FUN10(VAR2, VAR15, VAR5[0], VAR5[1], VAR5[2]);
        break;
    case VAR28:
        FUN11(VAR2, VAR15, VAR5[0], VAR5[1], VAR5[2]);
        break;
    case VAR29:
        FUN12(VAR2, VAR15, VAR5[0], VAR5[1], VAR5[2]);
        break;
    case VAR30:
        FUN13(VAR2, VAR15, VAR5[0], VAR5[1], VAR5[2]);
        break;
    case VAR31:
        FUN14(VAR2, VAR15, VAR5[0], VAR5[1], VAR5[2]);
        break;
    case VAR32:
        FUN15(VAR2, VAR15, VAR5[0], VAR5[1], VAR5[2]);
        break;
    case VAR33:
        FUN16(VAR2, VAR15, VAR5[0], VAR5[1], VAR5[2]);
        break;
    case VAR34:
        FUN17(VAR2, VAR15, VAR35, VAR36, 0, VAR5[1], VAR5[2], VAR6[2]);
        FUN18(VAR2, VAR37[VAR5[5]], VAR38, VAR39, VAR5[0], 0, VAR5[3], VAR6[3]);
        break;
    case VAR40:
        FUN17(VAR2, VAR15, VAR41, VAR42, VAR5[0], VAR5[1], VAR5[2], VAR6[2]);
        break;
    case VAR43:
        if (VAR6[1])
        {
            if (VAR6[2])
            {
                FUN2(VAR2, VAR15, VAR5[0], VAR5[1] - VAR5[2]);
            }
            else
            {
                FUN19(VAR2, VAR15, VAR44, VAR5[0], VAR5[2], VAR5[1], 1);
            }
        }
        else
        {
            FUN17(VAR2, VAR15, VAR42, VAR41, VAR5[0], VAR5[1], VAR5[2], VAR6[2]);
        }
        break;
    case VAR45:
        FUN18(VAR2, VAR15, VAR46, VAR47, VAR5[0], VAR5[1], VAR5[2], VAR6[2]);
        break;
    case VAR48:
        FUN18(VAR2, VAR15, VAR47, VAR46, VAR5[0], VAR5[1], VAR5[2], VAR6[2]);
        break;
    case VAR49:
        VAR13 = VAR50;
        goto VAR51;
    case VAR52:
        VAR13 = VAR53;
    VAR51:
        FUN19(VAR2, VAR15, VAR13, VAR5[0], VAR5[1], VAR5[2], VAR6[2]);
        break;
    case VAR54:
        VAR7 = VAR5[0], VAR8 = VAR5[1], VAR9 = VAR5[2];
        VAR10 = VAR5[3], VAR11 = VAR5[4], VAR12 = VAR5[5];
        if (VAR7 == VAR10 || (VAR7 == VAR12 && !VAR6[5]))
        {
            VAR7 = VAR55;
        }
        FUN17(VAR2, VAR15, VAR41 | VAR56, VAR42 | VAR56, VAR7, VAR9, VAR11, VAR6[4]);
        FUN18(VAR2, VAR15, VAR57, VAR58, VAR8, VAR10, VAR12, VAR6[5]);
        FUN20(VAR2, VAR15, VAR5[0], VAR7);
        break;
    case VAR59:
        VAR7 = VAR5[0], VAR8 = VAR5[1], VAR9 = VAR5[2];
        VAR10 = VAR5[3], VAR11 = VAR5[4], VAR12 = VAR5[5];
        if ((VAR7 == VAR10 && !VAR6[3]) || (VAR7 == VAR12 && !VAR6[5]))
        {
            VAR7 = VAR55;
        }
        if (VAR6[2])
        {
            if (VAR6[4])
            {
                FUN2(VAR2, VAR15, VAR7, VAR11);
                VAR11 = VAR7;
            }
            FUN19(VAR2, VAR15, VAR44 | VAR56, VAR7, VAR11, VAR9, 1);
        }
        else
        {
            FUN17(VAR2, VAR15, VAR42 | VAR56, VAR41 | VAR56, VAR7, VAR9, VAR11, VAR6[4]);
        }
        if (VAR6[3])
        {
            if (VAR6[5])
            {
                FUN2(VAR2, VAR15, VAR8, VAR12);
                VAR12 = VAR8;
            }
            FUN19(VAR2, VAR15, VAR60, VAR8, VAR12, VAR10, 1);
        }
        else
        {
            FUN18(VAR2, VAR15, VAR58, VAR57, VAR8, VAR10, VAR12, VAR6[5]);
        }
        FUN20(VAR2, VAR15, VAR5[0], VAR7);
        break;
    case VAR61:
        FUN21(VAR2, VAR15, VAR44, VAR5[0], VAR5[1], 0);
        break;
    case VAR62:
        FUN22(VAR2, VAR15, VAR39, VAR5[0], 0, VAR5[1], FUN23(0));
        break;
    case VAR63:
        FUN24(VAR2, VAR15, VAR5[0], VAR5[1], VAR5[2]);
        break;
    case VAR64:
        FUN25(VAR2, VAR15, VAR5[0], VAR5[1], VAR5[2], VAR5[3]);
        break;
    case VAR65:
        FUN26(VAR2, VAR15, VAR5[0], VAR5[1], VAR5[2], VAR5[3]);
        break;
    case VAR66:
        VAR13 = VAR6[2] ? FUN23(VAR5[2] & 0x1f) : FUN27(VAR5[2]);
        goto VAR67;
    case VAR68:
        VAR13 = VAR6[2] ? (VAR5[2] & 0x1f) ? FUN28(VAR5[2] & 0x1f) : FUN23(0) : FUN29(VAR5[2]);
        goto VAR67;
    case VAR69:
        VAR13 = VAR6[2] ? (VAR5[2] & 0x1f) ? FUN30(VAR5[2] & 0x1f) : FUN23(0) : FUN31(VAR5[2]);
        goto VAR67;
    case VAR70:
        VAR13 = VAR6[2] ? (VAR5[2] & 0x1f) ? FUN32(VAR5[2] & 0x1f) : FUN23(0) : FUN33(VAR5[2]);
    VAR67:
        FUN22(VAR2, VAR15, VAR38, VAR5[0], 0, VAR5[1], VAR13);
        break;
    case VAR71:
        if (VAR6[2])
        {
            FUN22(VAR2, VAR15, VAR38, VAR5[0], 0, VAR5[1], ((0x20 - VAR5[2]) & 0x1f) ? FUN32((0x20 - VAR5[2]) & 0x1f) : FUN23(0));
        }
        else
        {
            FUN21(VAR2, VAR15, VAR44, VAR55, VAR5[2], 0x20);
            FUN22(VAR2, VAR15, VAR38, VAR5[0], 0, VAR5[1], FUN33(VAR55));
        }
        break;
    case VAR72:
        FUN17(VAR2, VAR15, VAR35, VAR36, 0, VAR5[0], VAR5[1], VAR6[1]);
        FUN7(VAR2, VAR37[VAR5[2]], FUN8(VAR5[3]));
        break;
    case VAR73:
        FUN17(VAR2, VAR15, VAR35, VAR36, 0, VAR5[1], VAR5[3], VAR6[3]);
        FUN17(VAR2, VAR74, VAR35, VAR36, 0, VAR5[0], VAR5[2], VAR6[2]);
        FUN7(VAR2, VAR37[VAR5[4]], FUN8(VAR5[5]));
        break;
    case VAR75:
        FUN17(VAR2, VAR15, VAR35, VAR36, 0, VAR5[1], VAR5[2], VAR6[2]);
        FUN21(VAR2, VAR37[VAR5[3]], VAR38, VAR5[0], 0, 1);
        FUN21(VAR2, VAR37[FUN34(VAR5[3])], VAR38, VAR5[0], 0, 0);
        break;
    case VAR76:
        FUN17(VAR2, VAR15, VAR35, VAR36, 0, VAR5[2], VAR5[4], VAR6[4]);
        FUN17(VAR2, VAR74, VAR35, VAR36, 0, VAR5[1], VAR5[3], VAR6[3]);
        FUN21(VAR2, VAR37[VAR5[5]], VAR38, VAR5[0], 0, 1);
        FUN21(VAR2, VAR37[FUN34(VAR5[5])], VAR38, VAR5[0], 0, 0);
        break;
    case VAR77:
        FUN35(VAR2, VAR5, 0);
        break;
    case VAR78:
        FUN35(VAR2, VAR5, 1);
        break;
    case VAR79:
        FUN36(VAR2, VAR5, 0);
        break;
    case VAR80:
        FUN36(VAR2, VAR5, 1);
        break;
    case VAR81:
        FUN37(VAR2, VAR15, VAR5[0], VAR5[1]);
        break;
    case VAR82:
        FUN38(VAR2, VAR15, VAR5[0], VAR5[1]);
        break;
    case VAR83:
        FUN39(VAR2, VAR15, VAR5[0], VAR5[1]);
        break;
    case VAR84:
        FUN40(VAR2, VAR15, VAR5[0], VAR5[1]);
        break;
    case VAR85:
        FUN41(VAR2, VAR15, VAR5[0], VAR5[1]);
        break;
    case VAR86:
        FUN42(VAR2, VAR15, VAR5[0], VAR5[2], VAR5[3], VAR5[4], VAR6[2]);
        break;
    case VAR87:
        FUN43(VAR2, VAR15, VAR5[0], VAR5[1], VAR5[2]);
        break;
    case VAR88:
        FUN44(VAR2, VAR15, VAR5[0], VAR5[1], VAR5[2]);
        break;
    case VAR89:
    case VAR90:
    case VAR91:
    default:
        FUN45();
    }
}