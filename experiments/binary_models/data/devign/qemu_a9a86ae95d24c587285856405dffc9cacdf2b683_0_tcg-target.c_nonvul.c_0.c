static inline void FUN1(VAR1 *VAR2, TCGOpcode VAR3, const VAR4 *VAR5, const int *VAR6)
{
    int VAR7;
    switch (VAR3)
    {
    case VAR8:
    {
        VAR9 *VAR10 = VAR2->VAR11;
        if (VAR5[0] >> 8)
            FUN2(VAR2, VAR12, VAR13, VAR14, 0);
        else
            FUN3(VAR2, VAR12, VAR15, VAR13, 0, VAR5[0]);
        FUN4(VAR2, VAR12, (VAR16)VAR17);
        if (VAR5[0] >> 8)
        {
            *VAR10 = (VAR9)(VAR2->VAR11 - VAR10) - 8;
            FUN5(VAR2, VAR5[0]);
        }
    }
    break;
    case VAR18:
        if (VAR2->VAR19)
        {
            VAR2->VAR19[VAR5[0]] = VAR2->VAR11 - VAR2->VAR20;
            FUN6(VAR2, VAR12);
            FUN2(VAR2, VAR12, VAR14, VAR14, -4);
            VAR2->VAR19[VAR5[0]] = VAR2->VAR11 - VAR2->VAR20;
            FUN5(VAR2, 0);
        }
        else
        {
            VAR7 = (int)(VAR2->VAR21 + VAR5[0]) - ((int)VAR2->VAR11 + 8);
            if (VAR7 > 0xfff || VAR7 < -0xfff)
            {
                FUN7(VAR2, VAR12, VAR13, (VAR22)(VAR2->VAR21 + VAR5[0]));
                FUN2(VAR2, VAR12, VAR14, VAR13, 0);
            }
            else
                FUN2(VAR2, VAR12, VAR14, VAR14, VAR7);
            FUN2(VAR2, VAR12, VAR13, VAR14, 0);
            FUN2(VAR2, VAR12, VAR14, VAR13, 0);
            FUN5(VAR2, (VAR22)(VAR2->VAR21 + VAR5[0]));
        }
        VAR2->VAR23[VAR5[0]] = VAR2->VAR11 - VAR2->VAR20;
        break;
    case VAR24:
        if (VAR6[0])
            FUN8(VAR2, VAR5[0]);
        else
            FUN9(VAR2, VAR12, VAR5[0]);
        break;
    case VAR25:
        FUN10(VAR2, VAR12, VAR5[0]);
        break;
    case VAR26:
        FUN11(VAR2, VAR12, VAR5[0], VAR5[1], VAR5[2]);
        break;
    case VAR27:
        FUN12(VAR2, VAR12, VAR5[0], VAR5[1], VAR5[2]);
        break;
    case VAR28:
        FUN13(VAR2, VAR12, VAR5[0], VAR5[1], VAR5[2]);
        break;
    case VAR29:
        FUN14(VAR2, VAR12, VAR5[0], VAR5[1], VAR5[2]);
        break;
    case VAR30:
        FUN15(VAR2, VAR12, VAR5[0], VAR5[1], VAR5[2]);
        break;
    case VAR31:
        FUN16(VAR2, VAR12, VAR5[0], VAR5[1], VAR5[2]);
        break;
    case VAR32:
        FUN17(VAR2, VAR12, VAR5[0], VAR5[1], VAR5[2]);
        break;
    case VAR33:
        FUN18(VAR2, VAR12, VAR5[0], VAR5[1], VAR5[2]);
        break;
    case VAR34:
        FUN19(VAR2, VAR12, VAR15, VAR5[0], 0, VAR5[1], FUN20(0));
        break;
    case VAR35:
        FUN7(VAR2, VAR12, VAR5[0], VAR5[1]);
        break;
    case VAR36:
        FUN21(VAR2, VAR12, VAR37, 0, VAR5[1], VAR5[2], VAR6[2]);
        FUN21(VAR2, VAR38[VAR5[5]], VAR15, VAR5[0], 0, VAR5[3], VAR6[3]);
        break;
    case VAR39:
        FUN22(VAR2, VAR12, VAR40, VAR41, VAR5[0], VAR5[1], VAR5[2], VAR6[2]);
        break;
    case VAR42:
        FUN22(VAR2, VAR12, VAR41, VAR40, VAR5[0], VAR5[1], VAR5[2], VAR6[2]);
        break;
    case VAR43:
        FUN23(VAR2, VAR12, VAR44, VAR45, VAR5[0], VAR5[1], VAR5[2], VAR6[2]);
        break;
    case VAR46:
        FUN23(VAR2, VAR12, VAR45, VAR44, VAR5[0], VAR5[1], VAR5[2], VAR6[2]);
        break;
    case VAR47:
        VAR7 = VAR48;
        goto VAR49;
    case VAR50:
        VAR7 = VAR51;
    VAR49:
        FUN21(VAR2, VAR12, VAR7, VAR5[0], VAR5[1], VAR5[2], VAR6[2]);
        break;
    case VAR52:
        FUN24(VAR2, VAR12, VAR40, VAR53, VAR5[0], VAR5[1], VAR5[2], VAR5[3], VAR5[4], VAR5[5], FUN20(0));
        break;
    case VAR54:
        FUN24(VAR2, VAR12, VAR41, VAR55, VAR5[0], VAR5[1], VAR5[2], VAR5[3], VAR5[4], VAR5[5], FUN20(0));
        break;
    case VAR56:
        FUN3(VAR2, VAR12, VAR57, VAR5[0], VAR5[1], 0);
        break;
    case VAR58:
        FUN19(VAR2, VAR12, VAR59, VAR5[0], 0, VAR5[1], FUN20(0));
        break;
    case VAR60:
        FUN25(VAR2, VAR12, VAR5[0], VAR5[1], VAR5[2]);
        break;
    case VAR61:
        FUN26(VAR2, VAR12, VAR5[0], VAR5[1], VAR5[2], VAR5[3]);
        break;
    case VAR62:
        FUN27(VAR2, VAR12, VAR5[0], VAR5[1], VAR5[2], VAR5[3]);
        break;
    case VAR63:
        VAR7 = VAR6[2] ? FUN20(VAR5[2] & 0x1f) : FUN28(VAR5[2]);
        goto VAR64;
    case VAR65:
        VAR7 = VAR6[2] ? (VAR5[2] & 0x1f) ? FUN29(VAR5[2] & 0x1f) : FUN20(0) : FUN30(VAR5[2]);
        goto VAR64;
    case VAR66:
        VAR7 = VAR6[2] ? (VAR5[2] & 0x1f) ? FUN31(VAR5[2] & 0x1f) : FUN20(0) : FUN32(VAR5[2]);
        goto VAR64;
    case VAR67:
        VAR7 = VAR6[2] ? (VAR5[2] & 0x1f) ? FUN33(VAR5[2] & 0x1f) : FUN20(0) : FUN34(VAR5[2]);
    VAR64:
        FUN19(VAR2, VAR12, VAR15, VAR5[0], 0, VAR5[1], VAR7);
        break;
    case VAR68:
        if (VAR6[2])
        {
            FUN19(VAR2, VAR12, VAR15, VAR5[0], 0, VAR5[1], ((0x20 - VAR5[2]) & 0x1f) ? FUN33((0x20 - VAR5[2]) & 0x1f) : FUN20(0));
        }
        else
        {
            FUN3(VAR2, VAR12, VAR57, VAR69, VAR5[1], 0x20);
            FUN19(VAR2, VAR12, VAR15, VAR5[0], 0, VAR5[1], FUN34(VAR69));
        }
        break;
    case VAR70:
        FUN21(VAR2, VAR12, VAR37, 0, VAR5[0], VAR5[1], VAR6[1]);
        FUN10(VAR2, VAR38[VAR5[2]], VAR5[3]);
        break;
    case VAR71:
        FUN19(VAR2, VAR12, VAR37, 0, VAR5[1], VAR5[3], FUN20(0));
        FUN19(VAR2, VAR72, VAR37, 0, VAR5[0], VAR5[2], FUN20(0));
        FUN10(VAR2, VAR38[VAR5[4]], VAR5[5]);
        break;
    case VAR73:
        FUN21(VAR2, VAR12, VAR37, 0, VAR5[1], VAR5[2], VAR6[2]);
        FUN3(VAR2, VAR38[VAR5[3]], VAR15, VAR5[0], 0, 1);
        FUN3(VAR2, VAR38[FUN35(VAR5[3])], VAR15, VAR5[0], 0, 0);
        break;
    case VAR74:
        FUN19(VAR2, VAR12, VAR37, 0, VAR5[2], VAR5[4], FUN20(0));
        FUN19(VAR2, VAR72, VAR37, 0, VAR5[1], VAR5[3], FUN20(0));
        FUN3(VAR2, VAR38[VAR5[5]], VAR15, VAR5[0], 0, 1);
        FUN3(VAR2, VAR38[FUN35(VAR5[5])], VAR15, VAR5[0], 0, 0);
        break;
    case VAR75:
        FUN36(VAR2, VAR5, 0);
        break;
    case VAR76:
        FUN36(VAR2, VAR5, 0 | 4);
        break;
    case VAR77:
        FUN36(VAR2, VAR5, 1);
        break;
    case VAR78:
        FUN36(VAR2, VAR5, 1 | 4);
        break;
    case VAR79:
        FUN36(VAR2, VAR5, 2);
        break;
    case VAR80:
        FUN36(VAR2, VAR5, 3);
        break;
    case VAR81:
        FUN37(VAR2, VAR5, 0);
        break;
    case VAR82:
        FUN37(VAR2, VAR5, 1);
        break;
    case VAR83:
        FUN37(VAR2, VAR5, 2);
        break;
    case VAR84:
        FUN37(VAR2, VAR5, 3);
        break;
    case VAR85:
        FUN38(VAR2, VAR12, VAR5[0], VAR5[1]);
        break;
    case VAR86:
        FUN39(VAR2, VAR12, VAR5[0], VAR5[1]);
        break;
    case VAR87:
        FUN40(VAR2, VAR12, VAR5[0], VAR5[1]);
        break;
    case VAR88:
        FUN41(VAR2, VAR12, VAR5[0], VAR5[1]);
        break;
    case VAR89:
        FUN42(VAR2, VAR12, VAR5[0], VAR5[1]);
        break;
    default:
        FUN43();
    }
}