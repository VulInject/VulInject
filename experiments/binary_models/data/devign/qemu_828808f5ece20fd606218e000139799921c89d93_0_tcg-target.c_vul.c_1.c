static void FUN1(VAR1 *VAR2, int VAR3, const VAR4 *VAR5, const int *VAR6)
{
    int VAR7;
    switch (VAR3)
    {
    case VAR8:
        FUN2(VAR2, VAR9, VAR10, VAR5[0]);
        FUN3(VAR2, 0, (VAR11)VAR12);
        break;
    case VAR13:
        if (VAR2->VAR14)
        {
            VAR2->VAR14[VAR5[0]] = VAR2->VAR15 - VAR2->VAR16;
            VAR2->VAR15 += 28;
        }
        else
        {
            FUN4();
        }
        VAR2->VAR17[VAR5[0]] = VAR2->VAR15 - VAR2->VAR16;
        break;
    case VAR18:
    {
        VAR19 *VAR20 = &VAR2->VAR21[VAR5[0]];
        if (VAR20->VAR22)
        {
            FUN3(VAR2, 0, VAR20->VAR23.VAR24);
        }
        else
        {
            uint32_t VAR25 = *(VAR26 *)VAR2->VAR15;
            FUN5(VAR2, VAR27 | (VAR25 & 0x3fffffc));
            FUN6(VAR2, VAR2->VAR15 - 4, VAR28, VAR5[0], 0);
        }
    }
    break;
    case VAR29:
        FUN7(VAR2, VAR5[0], VAR6[0]);
        break;
    case VAR30:
        if (VAR6[0])
        {
            FUN3(VAR2, 0, VAR5[0]);
        }
        else
        {
            FUN5(VAR2, VAR31 | FUN8(VAR5[0]) | VAR32);
            FUN5(VAR2, VAR33 | VAR34);
        }
        break;
    case VAR35:
        FUN2(VAR2, VAR36, VAR5[0], VAR5[1]);
        break;
    case VAR37:
        FUN2(VAR2, VAR9, VAR5[0], VAR5[1]);
        break;
    case VAR38:
    case VAR39:
        FUN9(VAR2, VAR5[0], VAR5[1], VAR5[2], VAR40, VAR41);
        break;
    case VAR42:
    case VAR43:
        FUN9(VAR2, VAR5[0], VAR5[1], VAR5[2], VAR40, VAR41);
        FUN5(VAR2, VAR44 | FUN8(VAR5[0]) | FUN10(VAR5[0]));
        break;
    case VAR45:
    case VAR46:
        FUN9(VAR2, VAR5[0], VAR5[1], VAR5[2], VAR47, VAR48);
        break;
    case VAR49:
    case VAR50:
        FUN9(VAR2, VAR5[0], VAR5[1], VAR5[2], VAR51, VAR52);
        break;
    case VAR53:
    case VAR54:
        FUN9(VAR2, VAR5[0], VAR5[1], VAR5[2], VAR55, VAR56);
        break;
    case VAR57:
        FUN9(VAR2, VAR5[0], VAR5[1], VAR5[2], VAR58, VAR59);
        break;
    case VAR60:
        FUN9(VAR2, VAR5[0], VAR5[1], VAR5[2], VAR61, VAR62);
        break;
    case VAR63:
    case VAR64:
        FUN9(VAR2, VAR5[0], VAR5[1], VAR5[2], VAR65, VAR66);
        break;
    case VAR67:
    case VAR68:
        FUN9(VAR2, VAR5[0], VAR5[1], VAR5[2], VAR69, VAR70);
        break;
    case VAR71:
    case VAR72:
        FUN9(VAR2, VAR5[0], VAR5[1], VAR5[2], VAR73, VAR74);
        break;
    case VAR75:
        FUN9(VAR2, VAR5[0], VAR5[1], VAR5[2], VAR76, VAR77);
        break;
    case VAR78:
        if (VAR6[2])
            FUN11(VAR2, VAR5[0], VAR5[1], VAR5[2]);
        else
            FUN5(VAR2, VAR79 | FUN12(VAR5[0], VAR5[1], VAR5[2]));
        break;
    case VAR80:
        if (VAR6[2])
            FUN11(VAR2, VAR5[0], VAR5[1], -VAR5[2]);
        else
            FUN5(VAR2, VAR81 | FUN12(VAR5[0], VAR5[2], VAR5[1]));
        break;
    case VAR82:
    case VAR83:
        if (VAR6[2])
        {
            if ((VAR5[2] & 0xffff) == VAR5[2])
                FUN5(VAR2, VAR84 | FUN8(VAR5[1]) | FUN10(VAR5[0]) | VAR5[2]);
            else if ((VAR5[2] & 0xffff0000) == VAR5[2])
                FUN5(VAR2, VAR85 | FUN8(VAR5[1]) | FUN10(VAR5[0]) | ((VAR5[2] >> 16) & 0xffff));
            else
            {
                FUN2(VAR2, (VAR3 == VAR83 ? VAR36 : VAR9), 0, VAR5[2]);
                FUN5(VAR2, VAR86 | FUN13(VAR5[1], VAR5[0], 0));
            }
        }
        else
            FUN5(VAR2, VAR86 | FUN13(VAR5[1], VAR5[0], VAR5[2]));
        break;
    case VAR87:
    case VAR88:
        if (VAR6[2])
        {
            if (VAR5[2] & 0xffff)
            {
                FUN5(VAR2, VAR89 | FUN8(VAR5[1]) | FUN10(VAR5[0]) | (VAR5[2] & 0xffff));
                if (VAR5[2] >> 16)
                    FUN5(VAR2, VAR90 | FUN8(VAR5[0]) | FUN10(VAR5[0]) | ((VAR5[2] >> 16) & 0xffff));
            }
            else
            {
                FUN5(VAR2, VAR90 | FUN8(VAR5[1]) | FUN10(VAR5[0]) | ((VAR5[2] >> 16) & 0xffff));
            }
        }
        else
            FUN5(VAR2, VAR91 | FUN13(VAR5[1], VAR5[0], VAR5[2]));
        break;
    case VAR92:
    case VAR93:
        if (VAR6[2])
        {
            if ((VAR5[2] & 0xffff) == VAR5[2])
                FUN5(VAR2, VAR94 | FUN8(VAR5[1]) | FUN10(VAR5[0]) | (VAR5[2] & 0xffff));
            else if ((VAR5[2] & 0xffff0000) == VAR5[2])
                FUN5(VAR2, VAR95 | FUN8(VAR5[1]) | FUN10(VAR5[0]) | ((VAR5[2] >> 16) & 0xffff));
            else
            {
                FUN2(VAR2, (VAR3 == VAR83 ? VAR36 : VAR9), 0, VAR5[2]);
                FUN5(VAR2, VAR96 | FUN13(VAR5[1], VAR5[0], 0));
            }
        }
        else
            FUN5(VAR2, VAR96 | FUN13(VAR5[1], VAR5[0], VAR5[2]));
        break;
    case VAR97:
        if (VAR6[2])
        {
            if (VAR5[2] == (VAR98)VAR5[2])
                FUN5(VAR2, VAR99 | FUN14(VAR5[0]) | FUN10(VAR5[1]) | (VAR5[2] & 0xffff));
            else
            {
                FUN2(VAR2, VAR36, 0, VAR5[2]);
                FUN5(VAR2, VAR100 | FUN12(VAR5[0], VAR5[1], 0));
            }
        }
        else
            FUN5(VAR2, VAR100 | FUN12(VAR5[0], VAR5[1], VAR5[2]));
        break;
    case VAR101:
        FUN5(VAR2, VAR102 | FUN12(VAR5[0], VAR5[1], VAR5[2]));
        break;
    case VAR103:
        FUN5(VAR2, VAR104 | FUN12(VAR5[0], VAR5[1], VAR5[2]));
        break;
    case VAR105:
        FUN5(VAR2, VAR102 | FUN12(0, VAR5[1], VAR5[2]));
        FUN5(VAR2, VAR100 | FUN12(0, 0, VAR5[2]));
        FUN5(VAR2, VAR81 | FUN12(VAR5[0], 0, VAR5[1]));
        break;
    case VAR106:
        FUN5(VAR2, VAR104 | FUN12(0, VAR5[1], VAR5[2]));
        FUN5(VAR2, VAR100 | FUN12(0, 0, VAR5[2]));
        FUN5(VAR2, VAR81 | FUN12(VAR5[0], 0, VAR5[1]));
        break;
    case VAR107:
        if (VAR6[2])
        {
            FUN5(VAR2, (VAR108 | FUN10(VAR5[0]) | FUN8(VAR5[1]) | FUN15(VAR5[2]) | FUN16(0) | FUN17(31 - VAR5[2])));
        }
        else
            FUN5(VAR2, VAR109 | FUN13(VAR5[1], VAR5[0], VAR5[2]));
        break;
    case VAR110:
        if (VAR6[2])
        {
            FUN5(VAR2, (VAR108 | FUN10(VAR5[0]) | FUN8(VAR5[1]) | FUN15(32 - VAR5[2]) | FUN16(VAR5[2]) | FUN17(31)));
        }
        else
            FUN5(VAR2, VAR111 | FUN13(VAR5[1], VAR5[0], VAR5[2]));
        break;
    case VAR112:
        if (VAR6[2])
            FUN5(VAR2, VAR113 | FUN8(VAR5[1]) | FUN10(VAR5[0]) | FUN15(VAR5[2]));
        else
            FUN5(VAR2, VAR114 | FUN13(VAR5[1], VAR5[0], VAR5[2]));
        break;
    case VAR115:
        FUN18(VAR2, VAR5[2], VAR5[0], VAR5[1], VAR6[1], VAR5[3], 0);
        break;
    case VAR116:
        FUN18(VAR2, VAR5[2], VAR5[0], VAR5[1], VAR6[1], VAR5[3], 1);
        break;
    case VAR117:
    case VAR118:
        FUN5(VAR2, VAR119 | FUN14(VAR5[0]) | FUN10(VAR5[1]));
        break;
    case VAR120:
        if (VAR6[2])
            FUN19(VAR2, VAR5[0], VAR5[1], VAR5[2]);
        else
            FUN5(VAR2, VAR79 | FUN12(VAR5[0], VAR5[1], VAR5[2]));
        break;
    case VAR121:
        if (VAR6[2])
            FUN19(VAR2, VAR5[0], VAR5[1], -VAR5[2]);
        else
            FUN5(VAR2, VAR81 | FUN12(VAR5[0], VAR5[2], VAR5[1]));
        break;
    case VAR122:
        if (VAR6[2])
            FUN20(VAR2, VAR123, VAR5[0], VAR5[1], VAR5[2], 63 - VAR5[2]);
        else
            FUN5(VAR2, VAR124 | FUN13(VAR5[1], VAR5[0], VAR5[2]));
        break;
    case VAR125:
        if (VAR6[2])
            FUN20(VAR2, VAR126, VAR5[0], VAR5[1], 64 - VAR5[2], VAR5[2]);
        else
            FUN5(VAR2, VAR127 | FUN13(VAR5[1], VAR5[0], VAR5[2]));
        break;
    case VAR128:
        if (VAR6[2])
        {
            int VAR129 = FUN15(VAR5[2] & 0x1f) | (((VAR5[2] >> 5) & 1) << 1);
            FUN5(VAR2, VAR130 | FUN10(VAR5[0]) | FUN8(VAR5[1]) | VAR129);
        }
        else
            FUN5(VAR2, VAR131 | FUN13(VAR5[1], VAR5[0], VAR5[2]));
        break;
    case VAR132:
        FUN5(VAR2, VAR133 | FUN12(VAR5[0], VAR5[1], VAR5[2]));
        break;
    case VAR134:
        FUN5(VAR2, VAR135 | FUN12(VAR5[0], VAR5[1], VAR5[2]));
        break;
    case VAR136:
        FUN5(VAR2, VAR137 | FUN12(VAR5[0], VAR5[1], VAR5[2]));
        break;
    case VAR138:
        FUN5(VAR2, VAR135 | FUN12(0, VAR5[1], VAR5[2]));
        FUN5(VAR2, VAR133 | FUN12(0, 0, VAR5[2]));
        FUN5(VAR2, VAR81 | FUN12(VAR5[0], 0, VAR5[1]));
        break;
    case VAR139:
        FUN5(VAR2, VAR137 | FUN12(0, VAR5[1], VAR5[2]));
        FUN5(VAR2, VAR133 | FUN12(0, 0, VAR5[2]));
        FUN5(VAR2, VAR81 | FUN12(VAR5[0], 0, VAR5[1]));
        break;
    case VAR140:
        FUN21(VAR2, VAR5, 0);
        break;
    case VAR141:
        FUN21(VAR2, VAR5, 0 | 4);
        break;
    case VAR142:
        FUN21(VAR2, VAR5, 1);
        break;
    case VAR143:
        FUN21(VAR2, VAR5, 1 | 4);
        break;
    case VAR144:
        FUN21(VAR2, VAR5, 2);
        break;
    case VAR145:
        FUN21(VAR2, VAR5, 2 | 4);
        break;
    case VAR146:
        FUN21(VAR2, VAR5, 3);
        break;
    case VAR147:
        FUN22(VAR2, VAR5, 0);
        break;
    case VAR148:
        FUN22(VAR2, VAR5, 1);
        break;
    case VAR149:
        FUN22(VAR2, VAR5, 2);
        break;
    case VAR150:
        FUN22(VAR2, VAR5, 3);
        break;
    case VAR151:
    case VAR152:
        VAR7 = VAR44;
        goto VAR153;
    case VAR154:
    case VAR155:
        VAR7 = VAR156;
        goto VAR153;
    case VAR157:
        VAR7 = VAR158;
        goto VAR153;
    VAR153:
        FUN5(VAR2, VAR7 | FUN8(VAR5[1]) | FUN10(VAR5[0]));
        break;
    default:
        FUN23(VAR2, VAR159);
        FUN4();
    }
}