static inline void FUN1(VAR1 *VAR2, TCGOpcode VAR3, const VAR4 *VAR5, const int *VAR6)
{
    int VAR7;
    switch (VAR3)
    {
    case VAR8:
        FUN2(VAR2, VAR9, VAR10, VAR5[0]);
        FUN3(VAR2, VAR11 | FUN4(VAR12) | FUN5(VAR13) | FUN6(8));
        FUN3(VAR2, VAR14 | FUN4(VAR12) | FUN5(VAR12) | FUN7(VAR12));
        break;
    case VAR15:
        if (VAR2->VAR16)
        {
            FUN8(VAR2, VAR17, VAR5[0] & 0xffffe000);
            FUN3(VAR2, VAR11 | FUN4(VAR12) | FUN5(VAR17) | FUN6((VAR5[0] & 0x1fff)));
            VAR2->VAR16[VAR5[0]] = VAR2->VAR18 - VAR2->VAR19;
        }
        else
        {
            FUN9(VAR2, VAR17, (VAR20)(VAR2->VAR21 + VAR5[0]));
            FUN3(VAR2, VAR11 | FUN4(VAR12) | FUN5(VAR17) | FUN7(VAR12));
        }
        FUN10(VAR2);
        VAR2->VAR22[VAR5[0]] = VAR2->VAR18 - VAR2->VAR19;
        break;
    case VAR23:
        if (VAR6[0])
            FUN3(VAR2, VAR24 | ((((VAR25)VAR5[0] - (VAR25)VAR2->VAR18) >> 2) & 0x3fffffff));
        else
        {
            FUN9(VAR2, VAR17, (VAR20)(VAR2->VAR21 + VAR5[0]));
            FUN3(VAR2, VAR11 | FUN4(VAR26) | FUN5(VAR17) | FUN7(VAR12));
        }
        FUN10(VAR2);
        break;
    case VAR27:
    case VAR28:
        FUN11(VAR2, VAR29, VAR5[0]);
        FUN10(VAR2);
        break;
    case VAR30:
        FUN2(VAR2, VAR31, VAR5[0], (VAR32)VAR5[1]);
        break;
        FUN12(FUN12(case VAR33, VAR34), VAR35) : FUN12(FUN12(case VAR33, VAR34), VAR36) FUN12(FUN12(case VAR33, VAR34), VAR35) FUN13(VAR37) : FUN14(VAR2, VAR5[0], VAR5[1], VAR5[2], VAR38);
        break;
        FUN13(VAR39) : FUN14(VAR2, VAR5[0], VAR5[1], VAR5[2], VAR40);
        break;
        FUN13(VAR41) : FUN14(VAR2, VAR5[0], VAR5[1], VAR5[2], VAR42);
        break;
        FUN13(VAR43) : FUN14(VAR2, VAR5[0], VAR5[1], VAR5[2], VAR44);
        break;
    case VAR45:
    case VAR46:
        FUN14(VAR2, VAR5[0], VAR5[1], VAR5[2], VAR47);
        break;
        FUN13(VAR48) : FUN14(VAR2, VAR5[0], VAR5[1], VAR5[2], VAR49);
        break;
        FUN13(VAR50) : FUN14(VAR2, VAR5[0], VAR5[1], VAR5[2], VAR51);
        break;
    case VAR52:
    case VAR53:
        FUN14(VAR2, VAR5[0], VAR5[1], VAR5[2], VAR54);
        break;
        FUN13(VAR55) : VAR7 = VAR56;
        goto VAR57;
        FUN13(VAR58) : VAR7 = VAR59;
        goto VAR57;
        FUN13(and) : VAR7 = VAR60;
        goto VAR57;
        FUN13(VAR61) : VAR7 = VAR62;
        goto VAR57;
        FUN13(or) : VAR7 = VAR63;
        goto VAR57;
        FUN13(VAR64) : VAR7 = VAR65;
        goto VAR57;
        FUN13(xor) : VAR7 = VAR66;
        goto VAR57;
    case VAR67:
        VAR7 = VAR68;
        goto VAR57;
    case VAR69:
        VAR7 = VAR70;
        goto VAR57;
    case VAR71:
        VAR7 = VAR72;
        goto VAR57;
    case VAR73:
        VAR7 = VAR74;
        goto VAR57;
        FUN13(VAR75) : VAR7 = VAR59;
        goto VAR76;
        FUN13(not ) : VAR7 = VAR65;
        goto VAR76;
    case VAR77:
        FUN15(VAR2, VAR5[0], VAR5[1], VAR5[2], VAR6[2], 0);
        break;
    case VAR78:
        FUN15(VAR2, VAR5[0], VAR5[1], VAR5[2], VAR6[2], 1);
        break;
    case VAR79:
    case VAR80:
        FUN15(VAR2, VAR17, VAR5[1], VAR5[2], VAR6[2], VAR3 == VAR80);
        FUN16(VAR2, VAR17, VAR17, VAR5[2], VAR6[2], VAR74);
        FUN17(VAR2, VAR5[0], VAR5[1], VAR17, VAR59);
        break;
    case VAR81:
        FUN18(VAR2, VAR5[2], VAR5[0], VAR5[1], VAR6[1], VAR5[3]);
        break;
    case VAR82:
        FUN19(VAR2, VAR5[3], VAR5[0], VAR5[1], VAR5[2], VAR6[2]);
        break;
    case VAR83:
        FUN20(VAR2, VAR5[4], VAR5[0], VAR5[1], VAR5[2], VAR6[2], VAR5[3], VAR6[3], VAR5[5]);
        break;
    case VAR84:
        FUN21(VAR2, VAR5[5], VAR5[0], VAR5[1], VAR5[2], VAR5[3], VAR6[3], VAR5[4], VAR6[4]);
        break;
    case VAR85:
        FUN16(VAR2, VAR5[0], VAR5[2], VAR5[4], VAR6[4], VAR86);
        FUN16(VAR2, VAR5[1], VAR5[3], VAR5[5], VAR6[5], VAR87);
        break;
    case VAR88:
        FUN16(VAR2, VAR5[0], VAR5[2], VAR5[4], VAR6[4], VAR89);
        FUN16(VAR2, VAR5[1], VAR5[3], VAR5[5], VAR6[5], VAR90);
        break;
    case VAR91:
        FUN16(VAR2, VAR5[0], VAR5[2], VAR5[3], VAR6[3], VAR74);
        FUN22(VAR2, VAR5[1]);
        break;
    case VAR92:
        FUN23(VAR2, VAR5, 0);
        break;
    case VAR93:
        FUN23(VAR2, VAR5, 0 | 4);
        break;
    case VAR94:
        FUN23(VAR2, VAR5, 1);
        break;
    case VAR95:
        FUN23(VAR2, VAR5, 1 | 4);
        break;
    case VAR96:
    case VAR97:
        FUN23(VAR2, VAR5, 2);
        break;
    case VAR98:
        FUN23(VAR2, VAR5, 2 | 4);
        break;
    case VAR99:
        FUN23(VAR2, VAR5, 3);
        break;
    case VAR100:
        FUN24(VAR2, VAR5, 0);
        break;
    case VAR101:
        FUN24(VAR2, VAR5, 1);
        break;
    case VAR102:
        FUN24(VAR2, VAR5, 2);
        break;
    case VAR103:
        FUN24(VAR2, VAR5, 3);
        break;
    case VAR104:
        FUN2(VAR2, VAR105, VAR5[0], VAR5[1]);
        break;
    case VAR106:
        FUN14(VAR2, VAR5[0], VAR5[1], VAR5[2], VAR107);
        break;
    case VAR108:
        FUN14(VAR2, VAR5[0], VAR5[1], VAR5[2], VAR109);
        break;
    case VAR110:
        FUN14(VAR2, VAR5[0], VAR5[1], VAR5[2], VAR111);
        break;
    case VAR112:
        VAR7 = VAR113;
        goto VAR57;
    case VAR114:
        VAR7 = VAR115;
        goto VAR57;
    case VAR116:
        VAR7 = VAR117;
        goto VAR57;
    case VAR118:
        VAR7 = VAR119;
        goto VAR57;
    case VAR120:
        VAR7 = VAR121;
        goto VAR57;
    case VAR122:
        VAR7 = VAR123;
        goto VAR57;
    case VAR124:
    case VAR125:
        FUN16(VAR2, VAR17, VAR5[1], VAR5[2], VAR6[2], VAR3 == VAR124 ? VAR121 : VAR123);
        FUN16(VAR2, VAR17, VAR17, VAR5[2], VAR6[2], VAR119);
        FUN17(VAR2, VAR5[0], VAR5[1], VAR17, VAR59);
        break;
    case VAR126:
        if (VAR6[1])
        {
            FUN2(VAR2, VAR105, VAR5[0], (VAR127)VAR5[1]);
        }
        else
        {
            FUN25(VAR2, VAR5[0], VAR5[1], 0, VAR72);
        }
        break;
    case VAR128:
        if (VAR6[1])
        {
            FUN26(VAR2, VAR5[0], VAR5[1]);
        }
        else
        {
            FUN25(VAR2, VAR5[0], VAR5[1], 0, VAR70);
        }
        break;
    case VAR129:
        FUN27(VAR2, VAR5[2], VAR5[0], VAR5[1], VAR6[1], VAR5[3]);
        break;
    case VAR130:
        FUN28(VAR2, VAR5[3], VAR5[0], VAR5[1], VAR5[2], VAR6[2]);
        break;
    VAR57:
        FUN16(VAR2, VAR5[0], VAR5[1], VAR5[2], VAR6[2], VAR7);
        break;
    VAR76:
        FUN16(VAR2, VAR5[0], VAR12, VAR5[1], VAR6[1], VAR7);
        break;
    default:
        fprintf(VAR131, "", VAR3);
        FUN29();
    }
}