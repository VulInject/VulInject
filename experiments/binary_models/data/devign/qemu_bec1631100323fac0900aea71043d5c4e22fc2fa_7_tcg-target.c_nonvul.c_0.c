static inline void FUN1(VAR1 *VAR2, TCGOpcode VAR3, const VAR4 *VAR5, const int *VAR6)
{
    int VAR7, VAR8, VAR9 = 0;
case FUN2(FUN2(VAR10, VAR11), VAR12):
    VAR9 = VAR13;
case FUN2(FUN2(VAR10, VAR11), VAR14) case FUN2(FUN2(VAR10, VAR11), VAR14) switch (VAR3) { case VAR15:
    FUN3(VAR2, VAR16, VAR17, VAR5[0]);
    FUN4(VAR2, VAR18);
    break;
case VAR19:
    if (VAR2->VAR20)
    {
        FUN5(VAR2, VAR21);
        VAR2->VAR20[VAR5[0]] = FUN6(VAR2);
        FUN7(VAR2, 0);
    }
    else
    {
        FUN8(VAR2, VAR22, VAR23, -1, (VAR24)(VAR2->VAR25 + VAR5[0]));
    }
    VAR2->VAR26[VAR5[0]] = FUN6(VAR2);
    break;
case VAR27:
    FUN9(VAR2, VAR28, FUN10(VAR5[0]), 0);
    break;
    FUN11(VAR29) : FUN8(VAR2, VAR30, VAR5[0], VAR5[1], VAR5[2]);
    break;
    FUN11(VAR31) : FUN8(VAR2, VAR32 + VAR9, VAR5[0], VAR5[1], VAR5[2]);
    break;
    FUN11(VAR33) : FUN8(VAR2, VAR34, VAR5[0], VAR5[1], VAR5[2]);
    break;
    FUN11(VAR35) : FUN8(VAR2, VAR36 + VAR9, VAR5[0], VAR5[1], VAR5[2]);
    break;
case VAR37:
case VAR38:
    FUN12(VAR2, VAR39, VAR5[0], VAR5[1], VAR5[2]);
    break;
    FUN11(VAR40) : if (VAR6[0])
    {
        FUN8(VAR2, VAR41, 0, VAR5[1], VAR5[2]);
        FUN5(VAR2, VAR5[0]);
    }
    else { FUN8(VAR2, VAR42 | VAR43, VAR5[0], VAR5[1], VAR5[2]); }
    break;
    FUN11(VAR44) : if (VAR6[0])
    {
        FUN8(VAR2, VAR45 | VAR46, 0, VAR5[1], VAR5[2]);
        FUN13(VAR2, VAR5[0]);
    }
    else { FUN8(VAR2, VAR47 | VAR46, VAR5[0], VAR5[1], VAR5[2]); }
    break;
case VAR48:
case VAR49:
    if (VAR6[0])
    {
        FUN8(VAR2, VAR45, 0, VAR5[1], VAR5[2]);
        FUN7(VAR2, VAR5[0]);
    }
    else
    {
        FUN14(VAR2, VAR39, VAR5[0], VAR5[1], VAR5[2]);
    }
    break;
    FUN11(VAR50) : if (VAR5[0] != VAR5[1])
    {
        TCGArg VAR51 = VAR5[0], VAR52 = VAR5[1], VAR53 = VAR5[2], VAR54 = 0;
        if (VAR6[2])
        {
            VAR54 = VAR53, VAR53 = -1;
        }
        else if (VAR51 == VAR53)
        {
            FUN15(VAR2, VAR55 + VAR9, VAR51, VAR52);
            break;
        }
        FUN16(VAR2, VAR56 + VAR9, VAR51, VAR52, VAR53, 0, VAR54);
        break;
    }
    VAR7 = VAR55;
    goto VAR57;
    FUN11(VAR58) : VAR7 = VAR59;
    goto VAR57;
    FUN11(and) : VAR7 = VAR60;
    goto VAR57;
    FUN11(or) : VAR7 = VAR61;
    goto VAR57;
    FUN11(xor) : VAR7 = VAR62;
    goto VAR57;
VAR57:
    if (VAR6[2])
    {
        FUN17(VAR2, VAR7 + VAR9, VAR5[0], VAR5[2], 0);
    }
    else
    {
        FUN15(VAR2, VAR7 + VAR9, VAR5[0], VAR5[2]);
    }
    break;
    FUN11(VAR63) : if (VAR6[2])
    {
        FUN18(VAR2, VAR9 ? VAR64 : VAR39, VAR5[0], VAR5[1]);
        FUN17(VAR2, VAR60 + VAR9, VAR5[0], ~VAR5[2], 0);
    }
    else { FUN19(VAR2, VAR65 + VAR9, VAR5[0], VAR5[2], VAR5[1]); }
    break;
    FUN11(VAR66) : if (VAR6[2])
    {
        int32_t VAR67;
        VAR67 = VAR5[2];
        if (VAR67 == (VAR68)VAR67)
        {
            FUN20(VAR2, VAR69 + VAR9, VAR5[0], VAR5[0]);
            FUN5(VAR2, VAR67);
        }
        else
        {
            FUN20(VAR2, VAR70 + VAR9, VAR5[0], VAR5[0]);
            FUN7(VAR2, VAR67);
        }
    }
    else { FUN20(VAR2, VAR71 + VAR9, VAR5[0], VAR5[2]); }
    break;
    FUN11(VAR72) : FUN20(VAR2, VAR73 + VAR9, VAR74, VAR5[4]);
    break;
    FUN11(VAR75) : FUN20(VAR2, VAR73 + VAR9, VAR76, VAR5[4]);
    break;
    FUN11(VAR77) : VAR7 = VAR78;
    VAR8 = VAR79;
    goto VAR80;
    FUN11(VAR81) : VAR7 = VAR82;
    VAR8 = VAR83;
    goto VAR80;
    FUN11(VAR84) : VAR7 = VAR85;
    VAR8 = VAR86;
    goto VAR80;
    FUN11(VAR87) : VAR7 = VAR88;
    goto VAR89;
    FUN11(VAR90) : VAR7 = VAR91;
    goto VAR89;
VAR80:
    if (VAR92 && !VAR6[2])
    {
        FUN19(VAR2, VAR8 + VAR9, VAR5[0], VAR5[2], VAR5[1]);
        break;
    }
VAR89:
    if (VAR6[2])
    {
        FUN21(VAR2, VAR7 + VAR9, VAR5[0], VAR5[2]);
    }
    else
    {
        FUN20(VAR2, VAR93 + VAR9, VAR7, VAR5[0]);
    }
    break;
case VAR94:
    FUN22(VAR2, VAR5[2], VAR5[0], VAR5[1], VAR6[1], FUN10(VAR5[3]), 0);
    break;
case VAR95:
    FUN23(VAR2, VAR5[3], VAR5[0], VAR5[1], VAR5[2], VAR6[2]);
    break;
case VAR96:
    FUN24(VAR2, VAR5[5], VAR5[0], VAR5[1], VAR5[2], VAR6[2], VAR5[3]);
    break;
    FUN11(VAR97) : FUN25(VAR2, VAR5[0]);
    break;
    FUN11(VAR98) : FUN26(VAR2, VAR5[0]);
    break;
    FUN11(VAR99) : FUN20(VAR2, VAR73 + VAR9, VAR100, VAR5[0]);
    break;
    FUN11(not ) : FUN20(VAR2, VAR73 + VAR9, VAR101, VAR5[0]);
    break;
    FUN11(VAR102) : FUN27(VAR2, VAR5[0], VAR5[1], VAR9);
    break;
    FUN11(VAR103) : FUN28(VAR2, VAR5[0], VAR5[1], VAR9);
    break;
    FUN11(VAR104) : FUN29(VAR2, VAR5[0], VAR5[1]);
    break;
    FUN11(VAR105) : FUN30(VAR2, VAR5[0], VAR5[1]);
    break;
case VAR106:
    FUN31(VAR2, VAR5, 0);
    break;
case VAR107:
    FUN31(VAR2, VAR5, 1);
    break;
case VAR108:
    FUN32(VAR2, VAR5, 0);
    break;
case VAR109:
    FUN32(VAR2, VAR5, 1);
    break;
    FUN11(VAR110) : FUN20(VAR2, VAR73 + VAR9, VAR111, VAR5[3]);
    break;
    FUN11(VAR112) : FUN20(VAR2, VAR73 + VAR9, VAR113, VAR5[3]);
    break;
    FUN11(VAR114) : if (VAR6[4]) { FUN17(VAR2, VAR55 + VAR9, VAR5[0], VAR5[4], 1); }
    else { FUN15(VAR2, VAR55 + VAR9, VAR5[0], VAR5[4]); }
    if (VAR6[5])
    {
        FUN17(VAR2, VAR115 + VAR9, VAR5[1], VAR5[5], 1);
    }
    else
    {
        FUN15(VAR2, VAR115 + VAR9, VAR5[1], VAR5[5]);
    }
    break;
    FUN11(VAR116) : if (VAR6[4]) { FUN17(VAR2, VAR59 + VAR9, VAR5[0], VAR5[4], 1); }
    else { FUN15(VAR2, VAR59 + VAR9, VAR5[0], VAR5[4]); }
    if (VAR6[5])
    {
        FUN17(VAR2, VAR117 + VAR9, VAR5[1], VAR5[5], 1);
    }
    else
    {
        FUN15(VAR2, VAR117 + VAR9, VAR5[1], VAR5[5]);
    }
    break;
case VAR118:
    FUN33(VAR2, VAR5, VAR6, 0);
    break;
case VAR119:
    FUN34(VAR2, VAR5, VAR6);
    break;
case VAR120:
    FUN8(VAR2, VAR121, VAR5[0], VAR5[1], VAR5[2]);
    break;
case VAR122:
    FUN12(VAR2, VAR64, VAR5[0], VAR5[1], VAR5[2]);
    break;
case VAR123:
    if (VAR6[0])
    {
        FUN8(VAR2, VAR45 | VAR13, 0, VAR5[1], VAR5[2]);
        FUN7(VAR2, VAR5[0]);
    }
    else
    {
        FUN14(VAR2, VAR64, VAR5[0], VAR5[1], VAR5[2]);
    }
    break;
case VAR124:
    FUN35(VAR2, VAR5[2], VAR5[0], VAR5[1], VAR6[1], FUN10(VAR5[3]), 0);
    break;
case VAR125:
    FUN36(VAR2, VAR5[3], VAR5[0], VAR5[1], VAR5[2], VAR6[2]);
    break;
case VAR126:
    FUN37(VAR2, VAR5[5], VAR5[0], VAR5[1], VAR5[2], VAR6[2], VAR5[3]);
    break;
case VAR127:
    FUN38(VAR2, VAR5[0]);
    break;
case VAR128:
    FUN39(VAR2, VAR5[0], VAR5[1]);
    break;
case VAR129:
    FUN40(VAR2, VAR5[0], VAR5[1]);
    break;
    FUN11(VAR130) : if (VAR5[3] == 0 && VAR5[4] == 8) { FUN20(VAR2, VAR42 | VAR43 | VAR131, VAR5[2], VAR5[0]); }
    else if (VAR5[3] == 8 && VAR5[4] == 8) { FUN20(VAR2, VAR42, VAR5[2], VAR5[0] + 4); }
    else if (VAR5[3] == 0 && VAR5[4] == 16) { FUN20(VAR2, VAR47 | VAR46, VAR5[2], VAR5[0]); }
    else { FUN41(); }
    break;
case VAR132:
case VAR133:
case VAR134:
case VAR135:
case VAR136:
default:
    FUN41();
}
}