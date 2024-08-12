static inline void FUN1(VAR1 *VAR2, TCGOpcode VAR3, const VAR4 *VAR5, const int *VAR6)
{
    MIPSInsn VAR7, VAR8;
    TCGArg VAR9, VAR10, VAR11;
    int VAR12;
    VAR9 = VAR5[0];
    VAR10 = VAR5[1];
    VAR11 = VAR5[2];
    VAR12 = VAR6[2];
    switch (VAR3)
    {
    case VAR13:
    {
        TCGReg VAR14 = VAR15;
        if (VAR9 & ~0xffff)
        {
            FUN2(VAR2, VAR16, VAR17, VAR9 & ~0xffff);
            VAR14 = VAR17;
        }
        if (!FUN3(VAR2, VAR18, VAR19))
        {
            FUN2(VAR2, VAR16, VAR20, (VAR21)VAR19);
            FUN4(VAR2, VAR22, 0, VAR20, 0);
        }
        FUN5(VAR2, VAR23, VAR17, VAR14, VAR9 & 0xffff);
    }
    break;
    case VAR24:
        if (VAR2->VAR25)
        {
            VAR2->VAR25[VAR9] = FUN6(VAR2);
            FUN7(VAR2, VAR18 | (*(VAR26 *)VAR2->VAR27 & 0x3ffffff));
        }
        else
        {
            FUN8(VAR2, VAR16, VAR20, VAR15, (VAR21)(VAR2->VAR28 + VAR9));
            FUN4(VAR2, VAR22, 0, VAR20, 0);
        }
        FUN9(VAR2);
        VAR2->VAR29[VAR9] = FUN6(VAR2);
        break;
    case VAR30:
        FUN10(VAR2, VAR31, VAR15, VAR15, FUN11(VAR9));
        break;
    case VAR32:
        VAR7 = VAR33;
        goto VAR34;
    case VAR35:
        VAR7 = VAR36;
        goto VAR34;
    case VAR37:
        VAR7 = VAR38;
        goto VAR34;
    case VAR39:
        VAR7 = VAR40;
        goto VAR34;
    case VAR41:
        VAR7 = VAR42;
        goto VAR34;
    case VAR43:
        VAR7 = VAR44;
        goto VAR34;
    case VAR45:
        VAR7 = VAR46;
        goto VAR34;
    case VAR47:
        VAR7 = VAR48;
    VAR34:
        FUN12(VAR2, VAR7, VAR9, VAR10, VAR11);
        break;
    case VAR49:
        VAR7 = VAR50, VAR8 = VAR51;
        goto VAR52;
    case VAR53:
        VAR7 = VAR54, VAR8 = VAR23;
        goto VAR52;
    case VAR55:
        VAR7 = VAR56, VAR8 = VAR57;
    VAR52:
        if (VAR12)
        {
            FUN5(VAR2, VAR8, VAR9, VAR10, VAR11);
            break;
        }
    VAR58:
        FUN4(VAR2, VAR7, VAR9, VAR10, VAR11);
        break;
    case VAR59:
        if (VAR12)
        {
            FUN5(VAR2, VAR51, VAR9, VAR10, -VAR11);
            break;
        }
        VAR7 = VAR60;
        goto VAR52;
    case VAR61:
        if (VAR12 && VAR11 != (VAR62)VAR11)
        {
            int VAR63 = FUN13(~VAR11) - 1;
            assert(VAR64);
            assert(FUN14(VAR11));
            FUN15(VAR2, VAR65, VAR9, VAR10, VAR63, 0);
            break;
        }
        VAR7 = VAR66, VAR8 = VAR67;
        goto VAR52;
    case VAR68:
        VAR7 = VAR69;
        goto VAR58;
    case VAR70:
        if (VAR71)
        {
            FUN4(VAR2, VAR72, VAR9, VAR10, VAR11);
            break;
        }
        VAR7 = VAR73, VAR8 = VAR74;
        goto VAR75;
    case VAR76:
        VAR7 = VAR73, VAR8 = VAR77;
        goto VAR75;
    case VAR78:
        VAR7 = VAR79, VAR8 = VAR77;
        goto VAR75;
    case VAR80:
        VAR7 = VAR81, VAR8 = VAR74;
        goto VAR75;
    case VAR82:
        VAR7 = VAR83, VAR8 = VAR74;
        goto VAR75;
    case VAR84:
        VAR7 = VAR81, VAR8 = VAR77;
        goto VAR75;
    case VAR85:
        VAR7 = VAR83, VAR8 = VAR77;
    VAR75:
        FUN4(VAR2, VAR7, 0, VAR10, VAR11);
        FUN4(VAR2, VAR8, VAR9, 0, 0);
        break;
    case VAR86:
        VAR7 = VAR73;
        goto VAR87;
    case VAR88:
        VAR7 = VAR79;
    VAR87:
        FUN4(VAR2, VAR7, 0, VAR11, VAR5[3]);
        FUN4(VAR2, VAR74, VAR9, 0, 0);
        FUN4(VAR2, VAR77, VAR10, 0, 0);
        break;
    case VAR89:
        VAR7 = VAR69;
        goto VAR90;
    case VAR91:
        VAR7 = VAR92;
        goto VAR90;
    case VAR93:
        VAR7 = VAR94;
        goto VAR90;
    case VAR95:
        VAR7 = VAR96;
    VAR90:
        FUN4(VAR2, VAR7, VAR9, VAR15, VAR10);
        break;
    case VAR97:
        VAR7 = VAR98, VAR8 = VAR99;
        goto VAR100;
    case VAR101:
        VAR7 = VAR102, VAR8 = VAR103;
        goto VAR100;
    case VAR104:
        VAR7 = VAR105, VAR8 = VAR106;
        goto VAR100;
    case VAR107:
        VAR7 = VAR108, VAR8 = VAR109;
    VAR100:
        if (VAR12)
        {
            FUN16(VAR2, VAR8, VAR9, VAR10, VAR11);
        }
        else
        {
            FUN4(VAR2, VAR7, VAR9, VAR11, VAR10);
        }
        break;
    case VAR110:
        if (VAR12)
        {
            FUN16(VAR2, VAR109, VAR9, VAR10, 32 - VAR11);
        }
        else
        {
            FUN4(VAR2, VAR60, VAR20, VAR15, VAR11);
            FUN4(VAR2, VAR108, VAR9, VAR20, VAR10);
        }
        break;
    case VAR111:
        FUN4(VAR2, VAR92, VAR9, 0, VAR10);
        FUN16(VAR2, VAR109, VAR9, VAR9, 16);
        break;
    case VAR112:
        FUN15(VAR2, VAR113, VAR9, VAR11, VAR5[3] + VAR5[4] - 1, VAR5[3]);
        break;
    case VAR114:
        FUN10(VAR2, VAR11, VAR9, VAR10, FUN11(VAR5[3]));
        break;
    case VAR115:
        FUN17(VAR2, VAR5[4], VAR9, VAR10, VAR11, VAR5[3], FUN11(VAR5[5]));
        break;
    case VAR116:
        FUN18(VAR2, VAR5[5], VAR9, VAR10, VAR11, VAR5[3]);
        break;
    case VAR117:
        FUN19(VAR2, VAR5[3], VAR9, VAR10, VAR11);
        break;
    case VAR118:
        FUN20(VAR2, VAR5[5], VAR9, VAR10, VAR11, VAR5[3], VAR5[4]);
        break;
    case VAR119:
        FUN21(VAR2, VAR5, false);
        break;
    case VAR120:
        FUN21(VAR2, VAR5, true);
        break;
    case VAR121:
        FUN22(VAR2, VAR5, false);
        break;
    case VAR122:
        FUN22(VAR2, VAR5, true);
        break;
    case VAR123:
        FUN23(VAR2, VAR9, VAR10, VAR11, VAR5[3], VAR5[4], VAR5[5], VAR6[4], VAR6[5], false);
        break;
    case VAR124:
        FUN23(VAR2, VAR9, VAR10, VAR11, VAR5[3], VAR5[4], VAR5[5], VAR6[4], VAR6[5], true);
        break;
    case VAR125:
    case VAR126:
    case VAR127:
    default:
        FUN24();
    }
}