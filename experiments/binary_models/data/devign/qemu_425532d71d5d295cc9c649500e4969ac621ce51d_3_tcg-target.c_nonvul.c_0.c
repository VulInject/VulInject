static inline void FUN1(VAR1 *VAR2, TCGOpcode VAR3, const VAR4 *VAR5, const int *VAR6)
{
    int VAR7;
    switch (VAR3)
    {
    case VAR8:
        if (FUN2(VAR5[0], 13))
        {
            FUN3(VAR2, VAR9, VAR10, 8, VAR11);
            FUN4(VAR2, VAR12, VAR5[0]);
        }
        else
        {
            FUN5(VAR2, VAR13, VAR14, VAR5[0] & ~0x3ff);
            FUN3(VAR2, VAR9, VAR10, 8, VAR11);
            FUN3(VAR2, VAR12, VAR12, VAR5[0] & 0x3ff, VAR15);
        }
        break;
    case VAR16:
        if (VAR2->VAR17)
        {
            uint32_t VAR18 = *(VAR19 *)VAR2->VAR20;
            VAR2->VAR17[VAR5[0]] = VAR2->VAR20 - VAR2->VAR21;
            FUN6(VAR2, VAR22 | (VAR18 & ~FUN7(-1)));
        }
        else
        {
            FUN8(VAR2, VAR23, (VAR24)(VAR2->VAR25 + VAR5[0]));
            FUN3(VAR2, VAR9, VAR23, 0, VAR26);
        }
        FUN9(VAR2);
        VAR2->VAR27[VAR5[0]] = VAR2->VAR20 - VAR2->VAR21;
        break;
    case VAR28:
        if (VAR6[0])
        {
            FUN10(VAR2, VAR5[0]);
        }
        else
        {
            FUN3(VAR2, VAR29, VAR5[0], 0, VAR26);
        }
        FUN9(VAR2);
        break;
    case VAR30:
        FUN11(VAR2, VAR31, VAR32, VAR5[0]);
        FUN9(VAR2);
        break;
    case VAR33:
        FUN5(VAR2, VAR34, VAR5[0], (VAR19)VAR5[1]);
        break;
        FUN12(FUN12(case VAR35, VAR36), VAR37) : FUN12(FUN12(case VAR35, VAR36), VAR38) FUN13(VAR39) : FUN14(VAR2, VAR5[0], VAR5[1], VAR5[2], VAR40);
        break;
        FUN13(VAR41) : FUN14(VAR2, VAR5[0], VAR5[1], VAR5[2], VAR42);
        break;
        FUN13(VAR43) : FUN14(VAR2, VAR5[0], VAR5[1], VAR5[2], VAR44);
        break;
        FUN13(VAR45) : FUN14(VAR2, VAR5[0], VAR5[1], VAR5[2], VAR46);
        break;
    case VAR47:
    case VAR48:
        FUN14(VAR2, VAR5[0], VAR5[1], VAR5[2], VAR49);
        break;
        FUN13(VAR50) : FUN14(VAR2, VAR5[0], VAR5[1], VAR5[2], VAR51);
        break;
        FUN13(VAR52) : FUN14(VAR2, VAR5[0], VAR5[1], VAR5[2], VAR53);
        break;
    case VAR54:
    case VAR55:
        FUN14(VAR2, VAR5[0], VAR5[1], VAR5[2], VAR56);
        break;
        FUN13(VAR57) : VAR7 = VAR58;
        goto VAR59;
        FUN13(VAR60) : VAR7 = VAR61;
        goto VAR59;
        FUN13(and) : VAR7 = VAR62;
        goto VAR59;
        FUN13(VAR63) : VAR7 = VAR64;
        goto VAR59;
        FUN13(or) : VAR7 = VAR15;
        goto VAR59;
        FUN13(VAR65) : VAR7 = VAR66;
        goto VAR59;
        FUN13(xor) : VAR7 = VAR67;
        goto VAR59;
    case VAR68:
        VAR7 = VAR69;
    VAR70:
        FUN15(VAR2, VAR5[0], VAR5[1], VAR5[2] & 31, VAR6[2], VAR7);
        break;
    case VAR71:
        VAR7 = VAR72;
        goto VAR70;
    case VAR73:
        VAR7 = VAR74;
        goto VAR70;
    case VAR75:
        VAR7 = VAR76;
        goto VAR59;
        FUN13(VAR77) : VAR7 = VAR61;
        goto VAR78;
        FUN13(not ) : VAR7 = VAR66;
        goto VAR78;
    case VAR79:
        FUN16(VAR2, VAR5[0], VAR5[1], VAR5[2], VAR6[2], 0);
        break;
    case VAR80:
        FUN16(VAR2, VAR5[0], VAR5[1], VAR5[2], VAR6[2], 1);
        break;
    case VAR81:
        FUN17(VAR2, VAR5[2], VAR5[0], VAR5[1], VAR6[1], VAR5[3]);
        break;
    case VAR82:
        FUN18(VAR2, VAR5[3], VAR5[0], VAR5[1], VAR5[2], VAR6[2]);
        break;
    case VAR83:
        FUN19(VAR2, VAR5[5], VAR5[0], VAR5[1], VAR5[2], VAR6[2], VAR5[3], VAR6[3]);
        break;
    case VAR84:
        FUN20(VAR2, VAR5[0], VAR5[1], VAR5[2], VAR5[3], VAR5[4], VAR6[4], VAR5[5], VAR6[5], VAR85, VAR86);
        break;
    case VAR87:
        FUN20(VAR2, VAR5[0], VAR5[1], VAR5[2], VAR5[3], VAR5[4], VAR6[4], VAR5[5], VAR6[5], VAR88, VAR89);
        break;
    case VAR90:
        VAR7 = VAR76;
        goto VAR91;
    case VAR92:
        VAR7 = VAR93;
    VAR91:
        FUN15(VAR2, VAR5[0], VAR5[2], VAR5[3], VAR6[3], VAR7);
        if (VAR94 || VAR5[0] <= VAR29)
        {
            FUN3(VAR2, VAR5[1], VAR5[0], 32, VAR95);
        }
        else
        {
            FUN21(VAR2, VAR5[1]);
        }
        break;
    case VAR96:
        FUN22(VAR2, VAR5[0], VAR5[1], VAR5[2], VAR5[3], false);
        break;
    case VAR97:
        FUN22(VAR2, VAR5[0], VAR5[1], VAR5[2], VAR5[3], true);
        break;
    case VAR98:
        FUN23(VAR2, VAR5[0], VAR5[1], VAR5[2], VAR5[3]);
        break;
    case VAR99:
        FUN23(VAR2, VAR5[0], VAR5[1], VAR5[2], VAR5[3]);
        break;
    case VAR100:
        FUN5(VAR2, VAR101, VAR5[0], VAR5[1]);
        break;
    case VAR102:
        FUN14(VAR2, VAR5[0], VAR5[1], VAR5[2], VAR103);
        break;
    case VAR104:
        FUN14(VAR2, VAR5[0], VAR5[1], VAR5[2], VAR105);
        break;
    case VAR106:
        FUN14(VAR2, VAR5[0], VAR5[1], VAR5[2], VAR107);
        break;
    case VAR108:
        VAR7 = VAR109;
    VAR110:
        FUN15(VAR2, VAR5[0], VAR5[1], VAR5[2] & 63, VAR6[2], VAR7);
        break;
    case VAR111:
        VAR7 = VAR95;
        goto VAR110;
    case VAR112:
        VAR7 = VAR113;
        goto VAR110;
    case VAR114:
        VAR7 = VAR115;
        goto VAR59;
    case VAR116:
        VAR7 = VAR117;
        goto VAR59;
    case VAR118:
        VAR7 = VAR119;
        goto VAR59;
    case VAR120:
        FUN3(VAR2, VAR5[0], VAR5[1], 0, VAR74);
        break;
    case VAR121:
        FUN3(VAR2, VAR5[0], VAR5[1], 0, VAR72);
        break;
    case VAR122:
        if (VAR5[2] == 0)
        {
            FUN24(VAR2, VAR34, VAR5[0], VAR5[1]);
        }
        else
        {
            FUN3(VAR2, VAR5[0], VAR5[1], VAR5[2], VAR95);
        }
        break;
    case VAR123:
        FUN25(VAR2, VAR5[2], VAR5[0], VAR5[1], VAR6[1], VAR5[3]);
        break;
    case VAR124:
        FUN26(VAR2, VAR5[3], VAR5[0], VAR5[1], VAR5[2], VAR6[2]);
        break;
    case VAR125:
        FUN27(VAR2, VAR5[5], VAR5[0], VAR5[1], VAR5[2], VAR6[2], VAR5[3], VAR6[3]);
        break;
    VAR59:
        FUN15(VAR2, VAR5[0], VAR5[1], VAR5[2], VAR6[2], VAR7);
        break;
    VAR78:
        FUN15(VAR2, VAR5[0], VAR9, VAR5[1], VAR6[1], VAR7);
        break;
    default:
        fprintf(VAR126, "", VAR3);
        FUN28();
    }
}