static void FUN1(VAR1 *VAR2, TCGOpcode VAR3, const TCGArg VAR4[VAR5], const int VAR6[VAR5])
{
    TCGArg VAR7, VAR8, VAR9;
    int VAR10, VAR11;
    VAR7 = VAR4[0];
    VAR8 = VAR4[1];
    VAR9 = VAR4[2];
    VAR11 = VAR6[2];
    switch (VAR3)
    {
    case VAR12:
        if (FUN2(VAR7, 13))
        {
            FUN3(VAR2, VAR13, VAR14, 8, VAR15);
            FUN4(VAR2, VAR16, VAR7);
        }
        else
        {
            FUN5(VAR2, VAR17, VAR18, VAR7 & ~0x3ff);
            FUN3(VAR2, VAR13, VAR14, 8, VAR15);
            FUN3(VAR2, VAR16, VAR16, VAR7 & 0x3ff, VAR19);
        }
        break;
    case VAR20:
        if (VAR2->VAR21)
        {
            VAR2->VAR21[VAR7] = FUN6(VAR2);
            FUN7(VAR2, VAR22 | (*VAR2->VAR23 & ~FUN8(-1)));
        }
        else
        {
            FUN9(VAR2, VAR24, (VAR25)(VAR2->VAR26 + VAR7));
            FUN3(VAR2, VAR13, VAR24, 0, VAR27);
        }
        FUN10(VAR2);
        VAR2->VAR28[VAR7] = FUN6(VAR2);
        break;
    case VAR29:
        FUN11(VAR2, VAR30, VAR31, FUN12(VAR7));
        FUN10(VAR2);
        break;
        FUN13(FUN13(case VAR32, VAR33), VAR34) : FUN13(FUN13(case VAR32, VAR33), VAR35) FUN14(VAR36) : FUN15(VAR2, VAR7, VAR8, VAR9, VAR37);
        break;
        FUN14(VAR38) : FUN15(VAR2, VAR7, VAR8, VAR9, VAR39);
        break;
        FUN14(VAR40) : FUN15(VAR2, VAR7, VAR8, VAR9, VAR41);
        break;
        FUN14(VAR42) : FUN15(VAR2, VAR7, VAR8, VAR9, VAR43);
        break;
    case VAR44:
    case VAR45:
        FUN15(VAR2, VAR7, VAR8, VAR9, VAR46);
        break;
        FUN14(VAR47) : FUN15(VAR2, VAR7, VAR8, VAR9, VAR48);
        break;
        FUN14(VAR49) : FUN15(VAR2, VAR7, VAR8, VAR9, VAR50);
        break;
    case VAR51:
    case VAR52:
        FUN15(VAR2, VAR7, VAR8, VAR9, VAR53);
        break;
        FUN14(VAR54) : VAR10 = VAR55;
        goto VAR56;
        FUN14(VAR57) : VAR10 = VAR58;
        goto VAR56;
        FUN14(and) : VAR10 = VAR59;
        goto VAR56;
        FUN14(VAR60) : VAR10 = VAR61;
        goto VAR56;
        FUN14(or) : VAR10 = VAR19;
        goto VAR56;
        FUN14(VAR62) : VAR10 = VAR63;
        goto VAR56;
        FUN14(xor) : VAR10 = VAR64;
        goto VAR56;
    case VAR65:
        VAR10 = VAR66;
    VAR67:
        FUN16(VAR2, VAR7, VAR8, VAR9 & 31, VAR11, VAR10);
        break;
    case VAR68:
        VAR10 = VAR69;
        goto VAR67;
    case VAR70:
        VAR10 = VAR71;
        goto VAR67;
    case VAR72:
        VAR10 = VAR73;
        goto VAR56;
        FUN14(VAR74) : VAR10 = VAR58;
        goto VAR75;
        FUN14(not ) : VAR10 = VAR63;
        goto VAR75;
    case VAR76:
        FUN17(VAR2, VAR7, VAR8, VAR9, VAR11, 0);
        break;
    case VAR77:
        FUN17(VAR2, VAR7, VAR8, VAR9, VAR11, 1);
        break;
    case VAR78:
        FUN18(VAR2, VAR9, VAR7, VAR8, VAR6[1], FUN12(VAR4[3]));
        break;
    case VAR79:
        FUN19(VAR2, VAR4[3], VAR7, VAR8, VAR9, VAR11);
        break;
    case VAR80:
        FUN20(VAR2, VAR4[5], VAR7, VAR8, VAR9, VAR11, VAR4[3], VAR6[3]);
        break;
    case VAR81:
        FUN21(VAR2, VAR4[0], VAR4[1], VAR4[2], VAR4[3], VAR4[4], VAR6[4], VAR4[5], VAR6[5], VAR82, VAR83);
        break;
    case VAR84:
        FUN21(VAR2, VAR4[0], VAR4[1], VAR4[2], VAR4[3], VAR4[4], VAR6[4], VAR4[5], VAR6[5], VAR85, VAR86);
        break;
    case VAR87:
        VAR10 = VAR73;
        goto VAR88;
    case VAR89:
        VAR10 = VAR90;
    VAR88:
        FUN16(VAR2, VAR7, VAR9, VAR4[3], VAR6[3], VAR10);
        if (VAR91 || VAR7 <= VAR92)
        {
            FUN3(VAR2, VAR8, VAR7, 32, VAR93);
        }
        else
        {
            FUN22(VAR2, VAR8);
        }
        break;
    case VAR94:
        FUN23(VAR2, VAR7, VAR8, VAR9, false);
        break;
    case VAR95:
        FUN23(VAR2, VAR7, VAR8, VAR9, true);
        break;
    case VAR96:
    case VAR97:
        FUN24(VAR2, VAR7, VAR8, VAR9);
        break;
    case VAR98:
        FUN15(VAR2, VAR7, VAR8, VAR9, VAR99);
        break;
    case VAR100:
        FUN15(VAR2, VAR7, VAR8, VAR9, VAR101);
        break;
    case VAR102:
        FUN15(VAR2, VAR7, VAR8, VAR9, VAR103);
        break;
    case VAR104:
        VAR10 = VAR105;
    VAR106:
        FUN16(VAR2, VAR7, VAR8, VAR9 & 63, VAR11, VAR10);
        break;
    case VAR107:
        VAR10 = VAR93;
        goto VAR106;
    case VAR108:
        VAR10 = VAR109;
        goto VAR106;
    case VAR110:
        VAR10 = VAR111;
        goto VAR56;
    case VAR112:
        VAR10 = VAR113;
        goto VAR56;
    case VAR114:
        VAR10 = VAR115;
        goto VAR56;
    case VAR116:
    case VAR117:
        FUN3(VAR2, VAR7, VAR8, 0, VAR71);
        break;
    case VAR118:
    case VAR119:
        FUN3(VAR2, VAR7, VAR8, 0, VAR69);
        break;
    case VAR120:
        FUN25(VAR2, VAR121, VAR7, VAR8);
        break;
    case VAR122:
        FUN3(VAR2, VAR7, VAR8, 32, VAR93);
        break;
    case VAR123:
        FUN26(VAR2, VAR9, VAR7, VAR8, VAR6[1], FUN12(VAR4[3]));
        break;
    case VAR124:
        FUN27(VAR2, VAR4[3], VAR7, VAR8, VAR9, VAR11);
        break;
    case VAR125:
        FUN28(VAR2, VAR4[5], VAR7, VAR8, VAR9, VAR11, VAR4[3], VAR6[3]);
        break;
    case VAR126:
        FUN29(VAR2, VAR4[0], VAR4[1], VAR4[2], VAR4[3], VAR4[4], VAR6[4], VAR4[5], VAR6[5], false);
        break;
    case VAR127:
        FUN29(VAR2, VAR4[0], VAR4[1], VAR4[2], VAR4[3], VAR4[4], VAR6[4], VAR4[5], VAR6[5], true);
        break;
    case VAR128:
        FUN30(VAR2, VAR4[0], VAR4[1], VAR4[2], VAR129);
        break;
    VAR56:
        FUN16(VAR2, VAR7, VAR8, VAR9, VAR11, VAR10);
        break;
    VAR75:
        FUN16(VAR2, VAR7, VAR13, VAR8, VAR6[1], VAR10);
        break;
    case VAR130:
    case VAR131:
    case VAR132:
    case VAR133:
    case VAR134:
    default:
        FUN31();
    }
}