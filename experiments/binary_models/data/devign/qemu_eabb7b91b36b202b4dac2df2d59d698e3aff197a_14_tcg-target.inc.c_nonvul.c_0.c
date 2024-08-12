static void FUN1(VAR1 *VAR2, TCGOpcode VAR3, const TCGArg VAR4[VAR5], const int VAR6[VAR5])
{
    TCGType VAR7 = (VAR8[VAR3].VAR9 & VAR10) != 0;
    TCGArg VAR11 = VAR4[0];
    TCGArg VAR12 = VAR4[1];
    TCGArg VAR13 = VAR4[2];
    int VAR14 = VAR6[2];
    switch (VAR3)
    {
    case VAR15:
        FUN2(VAR2, VAR16, VAR17, VAR11);
        FUN3(VAR2, VAR18);
        break;
    case VAR19:
        FUN4(VAR2->VAR20 != NULL);
        VAR2->VAR20[VAR11] = FUN5(VAR2);
        FUN6(VAR2);
        VAR2->VAR21[VAR11] = FUN5(VAR2);
        break;
    case VAR22:
        FUN7(VAR2, FUN8(VAR11));
        break;
    case VAR23:
    case VAR24:
        FUN9(VAR2, VAR25, VAR11, VAR12, VAR13);
        break;
    case VAR26:
        FUN9(VAR2, VAR27, VAR11, VAR12, VAR13);
        break;
    case VAR28:
        FUN9(VAR2, VAR29, VAR11, VAR12, VAR13);
        break;
    case VAR30:
    case VAR31:
        FUN9(VAR2, VAR32, VAR11, VAR12, VAR13);
        break;
    case VAR33:
        FUN9(VAR2, VAR34, VAR11, VAR12, VAR13);
        break;
    case VAR35:
        FUN9(VAR2, VAR36, VAR11, VAR12, VAR13);
        break;
    case VAR37:
    case VAR38:
        FUN9(VAR2, VAR39, VAR11, VAR12, VAR13);
        break;
    case VAR40:
        FUN9(VAR2, VAR41, VAR11, VAR12, VAR13);
        break;
    case VAR42:
        FUN9(VAR2, VAR43, VAR11, VAR12, VAR13);
        break;
    case VAR44:
    case VAR45:
        FUN9(VAR2, VAR46, FUN10(0), VAR12, VAR13);
        break;
    case VAR47:
    case VAR48:
        FUN9(VAR2, VAR49, FUN10(0), VAR12, VAR13);
        break;
    case VAR50:
    case VAR51:
        FUN9(VAR2, VAR52, FUN10(0), VAR12, VAR13);
        break;
    case VAR53:
        FUN9(VAR2, VAR54, FUN10(0), VAR12, VAR13);
        break;
    case VAR55:
        VAR13 = (VAR56)VAR13;
    case VAR57:
        if (VAR14)
        {
            FUN11(VAR2, VAR7, VAR11, VAR12, VAR13);
        }
        else
        {
            FUN12(VAR2, 3502, VAR58, VAR7, VAR11, VAR12, VAR13);
        }
        break;
    case VAR59:
        VAR13 = (VAR56)VAR13;
    case VAR60:
        if (VAR14)
        {
            FUN11(VAR2, VAR7, VAR11, VAR12, -VAR13);
        }
        else
        {
            FUN12(VAR2, 3502, VAR61, VAR7, VAR11, VAR12, VAR13);
        }
        break;
    case VAR62:
    case VAR63:
        FUN12(VAR2, 3502, VAR61, VAR7, VAR11, VAR64, VAR12);
        break;
    case VAR65:
        VAR13 = (VAR56)VAR13;
    case VAR66:
        if (VAR14)
        {
            FUN13(VAR2, VAR67, VAR7, VAR11, VAR12, VAR13);
        }
        else
        {
            FUN12(VAR2, 3510, VAR68, VAR7, VAR11, VAR12, VAR13);
        }
        break;
    case VAR69:
        VAR13 = (VAR56)VAR13;
    case VAR70:
        if (VAR14)
        {
            FUN13(VAR2, VAR67, VAR7, VAR11, VAR12, ~VAR13);
        }
        else
        {
            FUN12(VAR2, 3510, VAR71, VAR7, VAR11, VAR12, VAR13);
        }
        break;
    case VAR72:
        VAR13 = (VAR56)VAR13;
    case VAR73:
        if (VAR14)
        {
            FUN13(VAR2, VAR74, VAR7, VAR11, VAR12, VAR13);
        }
        else
        {
            FUN12(VAR2, 3510, VAR75, VAR7, VAR11, VAR12, VAR13);
        }
        break;
    case VAR76:
        VAR13 = (VAR56)VAR13;
    case VAR77:
        if (VAR14)
        {
            FUN13(VAR2, VAR74, VAR7, VAR11, VAR12, ~VAR13);
        }
        else
        {
            FUN12(VAR2, 3510, VAR78, VAR7, VAR11, VAR12, VAR13);
        }
        break;
    case VAR79:
        VAR13 = (VAR56)VAR13;
    case VAR80:
        if (VAR14)
        {
            FUN13(VAR2, VAR81, VAR7, VAR11, VAR12, VAR13);
        }
        else
        {
            FUN12(VAR2, 3510, VAR82, VAR7, VAR11, VAR12, VAR13);
        }
        break;
    case VAR83:
        VAR13 = (VAR56)VAR13;
    case VAR84:
        if (VAR14)
        {
            FUN13(VAR2, VAR81, VAR7, VAR11, VAR12, ~VAR13);
        }
        else
        {
            FUN12(VAR2, 3510, VAR85, VAR7, VAR11, VAR12, VAR13);
        }
        break;
    case VAR86:
    case VAR87:
        FUN12(VAR2, 3510, VAR78, VAR7, VAR11, VAR64, VAR12);
        break;
    case VAR88:
    case VAR89:
        FUN12(VAR2, 3509, VAR90, VAR7, VAR11, VAR12, VAR13, VAR64);
        break;
    case VAR91:
    case VAR92:
        FUN12(VAR2, 3508, VAR93, VAR7, VAR11, VAR12, VAR13);
        break;
    case VAR94:
    case VAR95:
        FUN12(VAR2, 3508, VAR96, VAR7, VAR11, VAR12, VAR13);
        break;
    case VAR97:
    case VAR98:
        FUN12(VAR2, 3508, VAR93, VAR7, VAR99, VAR12, VAR13);
        FUN12(VAR2, 3509, VAR100, VAR7, VAR11, VAR99, VAR13, VAR12);
        break;
    case VAR101:
    case VAR102:
        FUN12(VAR2, 3508, VAR96, VAR7, VAR99, VAR12, VAR13);
        FUN12(VAR2, 3509, VAR100, VAR7, VAR11, VAR99, VAR13, VAR12);
        break;
    case VAR103:
    case VAR104:
        if (VAR14)
        {
            FUN14(VAR2, VAR7, VAR11, VAR12, VAR13);
        }
        else
        {
            FUN12(VAR2, 3508, VAR105, VAR7, VAR11, VAR12, VAR13);
        }
        break;
    case VAR106:
    case VAR107:
        if (VAR14)
        {
            FUN15(VAR2, VAR7, VAR11, VAR12, VAR13);
        }
        else
        {
            FUN12(VAR2, 3508, VAR108, VAR7, VAR11, VAR12, VAR13);
        }
        break;
    case VAR109:
    case VAR110:
        if (VAR14)
        {
            FUN16(VAR2, VAR7, VAR11, VAR12, VAR13);
        }
        else
        {
            FUN12(VAR2, 3508, VAR111, VAR7, VAR11, VAR12, VAR13);
        }
        break;
    case VAR112:
    case VAR113:
        if (VAR14)
        {
            FUN17(VAR2, VAR7, VAR11, VAR12, VAR13);
        }
        else
        {
            FUN12(VAR2, 3508, VAR114, VAR7, VAR11, VAR12, VAR13);
        }
        break;
    case VAR115:
    case VAR116:
        if (VAR14)
        {
            FUN18(VAR2, VAR7, VAR11, VAR12, VAR13);
        }
        else
        {
            FUN12(VAR2, 3502, VAR61, 0, VAR99, VAR64, VAR13);
            FUN12(VAR2, 3508, VAR114, VAR7, VAR11, VAR12, VAR99);
        }
        break;
    case VAR117:
        VAR12 = (VAR56)VAR12;
    case VAR118:
        FUN19(VAR2, VAR7, VAR13, VAR11, VAR12, VAR6[1], FUN8(VAR4[3]));
        break;
    case VAR119:
        VAR13 = (VAR56)VAR13;
    case VAR120:
        FUN20(VAR2, VAR7, VAR12, VAR13, VAR14);
        FUN12(VAR2, 3506, VAR121, VAR122, VAR11, VAR64, VAR64, FUN21(VAR4[3]));
        break;
    case VAR123:
        VAR13 = (VAR56)VAR13;
    case VAR124:
        FUN20(VAR2, VAR7, VAR12, VAR13, VAR14);
        FUN12(VAR2, 3506, VAR125, VAR7, VAR11, FUN10(3), FUN10(4), VAR4[5]);
        break;
    case VAR126:
    case VAR127:
        FUN22(VAR2, VAR11, VAR12, VAR13, VAR7);
        break;
    case VAR128:
    case VAR129:
        FUN23(VAR2, FUN10(0), VAR12, VAR13);
        break;
    case VAR130:
        FUN24(VAR2, VAR11, VAR12);
        break;
    case VAR131:
    case VAR132:
        FUN25(VAR2, VAR11, VAR12);
        break;
    case VAR133:
    case VAR134:
        FUN26(VAR2, VAR11, VAR12);
        break;
    case VAR135:
    case VAR136:
        FUN27(VAR2, VAR7, VAR137, VAR11, VAR12);
        break;
    case VAR138:
    case VAR139:
        FUN27(VAR2, VAR7, VAR140, VAR11, VAR12);
        break;
    case VAR141:
    case VAR142:
        FUN27(VAR2, VAR16, VAR143, VAR11, VAR12);
        break;
    case VAR144:
    case VAR145:
        FUN28(VAR2, VAR137, VAR11, VAR12);
        break;
    case VAR146:
    case VAR147:
        FUN28(VAR2, VAR140, VAR11, VAR12);
        break;
    case VAR148:
    case VAR149:
        FUN29(VAR2, VAR122, VAR11, VAR12);
        break;
    case VAR150:
    case VAR151:
        FUN30(VAR2, VAR7, VAR11, FUN10(2), VAR4[3], VAR4[4]);
        break;
    case VAR152:
        FUN31(VAR2, VAR122, VAR11, VAR12, FUN10(2), FUN10(3), (VAR56)VAR4[4], VAR4[5], VAR6[4], VAR6[5], false);
        break;
    case VAR153:
        FUN31(VAR2, VAR16, VAR11, VAR12, FUN10(2), FUN10(3), VAR4[4], VAR4[5], VAR6[4], VAR6[5], false);
        break;
    case VAR154:
        FUN31(VAR2, VAR122, VAR11, VAR12, FUN10(2), FUN10(3), (VAR56)VAR4[4], VAR4[5], VAR6[4], VAR6[5], true);
        break;
    case VAR155:
        FUN31(VAR2, VAR16, VAR11, VAR12, FUN10(2), FUN10(3), VAR4[4], VAR4[5], VAR6[4], VAR6[5], true);
        break;
    case VAR156:
        FUN12(VAR2, 3508, VAR157, VAR16, VAR11, VAR12, VAR13);
        break;
    case VAR158:
        FUN12(VAR2, 3508, VAR159, VAR16, VAR11, VAR12, VAR13);
        break;
    case VAR160:
    case VAR161:
    case VAR162:
    case VAR163:
    case VAR164:
    default:
        FUN32();
    }
}