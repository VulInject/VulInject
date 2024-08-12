static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int *VAR5)
{
    int VAR6, VAR7;
    int VAR8;
    int VAR9, VAR10, VAR11, VAR12;
    int VAR13;
    int VAR14;
    VAR9 = (VAR4->VAR15 >> 11) & 0x1f;
    VAR8 = (VAR4->VAR15 >> 2) & 0x7;
    VAR8 = VAR8 == 0 ? 8 : VAR8;
    VAR6 = FUN2((VAR4->VAR15 >> 8) & 0x7);
    VAR10 = (VAR4->VAR15 >> 5) & 0x7;
    VAR7 = FUN2((VAR4->VAR15 >> 5) & 0x7);
    VAR11 = VAR12 = VAR4->VAR15 & 0x1f;
    VAR14 = 2;
    switch (VAR9)
    {
    case VAR16:
    {
        int16_t VAR17 = ((VAR18)VAR4->VAR15) << 2;
        FUN3(VAR2, VAR4, VAR19, VAR6, 29, VAR17);
    }
    break;
    case VAR20:
        FUN4(VAR4, VAR6, ((VAR18)VAR4->VAR15) << 2, 0, 0);
        break;
    case VAR21:
        VAR12 = (VAR4->VAR15 & 0x7ff) << 1;
        VAR12 = (VAR22)(VAR12 << 4) >> 4;
        FUN5(VAR4, VAR23, 2, 0, 0, VAR12);
        break;
    case VAR24:
        VAR12 = FUN6(VAR4->VAR25 + 2);
        VAR12 = (((VAR4->VAR15 & 0x1f) << 21) | ((VAR4->VAR15 >> 5) & 0x1f) << 16 | VAR12) << 2;
        VAR9 = ((VAR4->VAR15 >> 10) & 0x1) ? VAR26 : VAR27;
        FUN5(VAR4, VAR9, 4, VAR6, VAR7, VAR12);
        VAR14 = 4;
        *VAR5 = 1;
        break;
    case VAR28:
        FUN5(VAR4, VAR23, 2, VAR6, 0, ((VAR29)VAR4->VAR15) << 1);
        break;
    case VAR30:
        FUN5(VAR4, VAR31, 2, VAR6, 0, ((VAR29)VAR4->VAR15) << 1);
        break;
    case VAR32:
        switch (VAR4->VAR15 & 0x3)
        {
        case 0x0:
            FUN7(VAR2, VAR4, VAR33, VAR6, VAR7, VAR8);
            break;
        case 0x1:
            FUN8(VAR4);
            FUN7(VAR2, VAR4, VAR34, VAR6, VAR7, VAR8);
            FUN9(VAR4, VAR35);
            break;
        case 0x2:
            FUN7(VAR2, VAR4, VAR36, VAR6, VAR7, VAR8);
            break;
        case 0x3:
            FUN7(VAR2, VAR4, VAR37, VAR6, VAR7, VAR8);
            break;
        }
        break;
    case VAR38:
        FUN8(VAR4);
        FUN10(VAR4, VAR39, VAR7, VAR6, VAR12 << 3);
        break;
    case VAR40:
    {
        int16_t VAR17 = (VAR29)((VAR4->VAR15 & 0xf) << 4) >> 4;
        if ((VAR4->VAR15 >> 4) & 1)
        {
            FUN8(VAR4);
            FUN3(VAR2, VAR4, VAR41, VAR7, VAR6, VAR17);
            FUN9(VAR4, VAR35);
        }
        else
        {
            FUN3(VAR2, VAR4, VAR19, VAR7, VAR6, VAR17);
        }
    }
    break;
    case VAR42:
    {
        int16_t VAR17 = (VAR29)VAR4->VAR15;
        FUN3(VAR2, VAR4, VAR19, VAR6, VAR6, VAR17);
    }
    break;
    case VAR43:
    {
        int16_t VAR17 = (VAR18)VAR4->VAR15;
        FUN11(VAR2, VAR44, 24, VAR6, VAR17);
    }
    break;
    case VAR45:
    {
        int16_t VAR17 = (VAR18)VAR4->VAR15;
        FUN11(VAR2, VAR46, 24, VAR6, VAR17);
    }
    break;
    case VAR47:
    {
        int VAR48;
        VAR13 = (VAR4->VAR15 >> 8) & 0x7;
        switch (VAR13)
        {
        case VAR49:
            FUN5(VAR4, VAR23, 2, 24, 0, ((VAR29)VAR4->VAR15) << 1);
            break;
        case VAR50:
            FUN5(VAR4, VAR31, 2, 24, 0, ((VAR29)VAR4->VAR15) << 1);
            break;
        case VAR51:
            FUN10(VAR4, VAR52, 31, 29, (VAR4->VAR15 & 0xff) << 2);
            break;
        case VAR53:
            FUN3(VAR2, VAR4, VAR19, 29, 29, ((VAR29)VAR4->VAR15) << 3);
            break;
        case VAR54:
        {
            int VAR55 = VAR4->VAR15 & (1 << 6);
            int VAR56 = VAR4->VAR15 & (1 << 5);
            int VAR57 = VAR4->VAR15 & (1 << 4);
            int VAR58 = VAR4->VAR15 & 0xf;
            if (VAR58 == 0)
            {
                VAR58 = 128;
            }
            else
            {
                VAR58 = VAR58 << 3;
            }
            if (VAR4->VAR15 & (1 << 7))
            {
                FUN12(VAR4, 0, 0, VAR55, VAR56, VAR57, VAR58);
            }
            else
            {
                FUN13(VAR4, 0, 0, VAR55, VAR56, VAR57, VAR58);
            }
        }
        break;
        case VAR59:
        {
            int VAR60 = FUN2(VAR4->VAR15 & 0x7);
            VAR48 = (((VAR4->VAR15 >> 3) & 0x3) << 3) | ((VAR4->VAR15 >> 5) & 0x7);
            FUN14(VAR2, VAR4, VAR61, VAR48, VAR60, 0);
        }
        break;
        case VAR62:
            VAR48 = VAR4->VAR15 & 0x1f;
            FUN14(VAR2, VAR4, VAR61, VAR7, VAR48, 0);
            break;
        default:
            FUN9(VAR4, VAR35);
            break;
        }
    }
    break;
    case VAR63:
    {
        int16_t VAR17 = (VAR18)VAR4->VAR15;
        FUN3(VAR2, VAR4, VAR19, VAR6, 0, VAR17);
    }
    break;
    case VAR64:
    {
        int16_t VAR17 = (VAR18)VAR4->VAR15;
        FUN15(VAR2, VAR65, 24, VAR6, VAR17);
    }
    break;
    case VAR66:
        FUN8(VAR4);
        FUN10(VAR4, VAR67, VAR7, VAR6, VAR12 << 3);
        break;
    case VAR68:
        FUN10(VAR4, VAR69, VAR7, VAR6, VAR12);
        break;
    case VAR70:
        FUN10(VAR4, VAR71, VAR7, VAR6, VAR12 << 1);
        break;
    case VAR72:
        FUN10(VAR4, VAR73, VAR6, 29, ((VAR18)VAR4->VAR15) << 2);
        break;
    case VAR74:
        FUN10(VAR4, VAR73, VAR7, VAR6, VAR12 << 2);
        break;
    case VAR75:
        FUN10(VAR4, VAR76, VAR7, VAR6, VAR12);
        break;
    case VAR77:
        FUN10(VAR4, VAR78, VAR7, VAR6, VAR12 << 1);
        break;
    case VAR79:
        FUN10(VAR4, VAR80, VAR6, 0, ((VAR18)VAR4->VAR15) << 2);
        break;
    case VAR81:
        FUN8(VAR4);
        FUN10(VAR4, VAR82, VAR7, VAR6, VAR12 << 2);
        break;
    case VAR83:
        FUN10(VAR4, VAR84, VAR7, VAR6, VAR12);
        break;
    case VAR85:
        FUN10(VAR4, VAR86, VAR7, VAR6, VAR12 << 1);
        break;
    case VAR87:
        FUN10(VAR4, VAR52, VAR6, 29, ((VAR18)VAR4->VAR15) << 2);
        break;
    case VAR88:
        FUN10(VAR4, VAR52, VAR7, VAR6, VAR12 << 2);
        break;
    case VAR89:
    {
        int VAR60 = FUN2((VAR4->VAR15 >> 2) & 0x7);
        int VAR90;
        switch (VAR4->VAR15 & 0x3)
        {
        case VAR91:
            VAR90 = VAR61;
            break;
        case VAR92:
            VAR90 = VAR93;
            break;
        case VAR94:
            VAR90 = VAR95;
            FUN8(VAR4);
            break;
        case VAR96:
            VAR90 = VAR97;
            FUN8(VAR4);
            break;
        default:
            FUN9(VAR4, VAR35);
            goto VAR98;
        }
        FUN14(VAR2, VAR4, VAR90, VAR60, VAR6, VAR7);
    VAR98:;
    }
    break;
    case VAR99:
        switch (VAR11)
        {
        case VAR100:
        {
            int VAR101 = (VAR4->VAR15 >> 7) & 0x1;
            int VAR102 = (VAR4->VAR15 >> 6) & 0x1;
            int VAR103 = (VAR4->VAR15 >> 5) & 0x1;
            if (VAR102)
            {
                VAR9 = VAR101 ? VAR104 : VAR105;
            }
            else
            {
                VAR9 = VAR106;
            }
            FUN5(VAR4, VAR9, 2, VAR103 ? 31 : VAR6, 31, 0);
            if (!VAR101)
            {
                *VAR5 = 1;
            }
        }
        break;
        case VAR107:
            FUN16(VAR2, VAR4, VAR108);
            if (!(VAR4->VAR109 & VAR110))
            {
                FUN9(VAR4, VAR111);
            }
            else
            {
                FUN9(VAR4, VAR111);
            }
            break;
        case VAR112:
            FUN17(VAR2, VAR113, 24, VAR6, VAR7);
            break;
        case VAR114:
            FUN17(VAR2, VAR115, 24, VAR6, VAR7);
            break;
        case VAR116:
            FUN9(VAR4, VAR117);
            break;
        case VAR118:
            FUN18(VAR2, VAR4, VAR119, VAR7, VAR6, VAR7);
            break;
        case VAR120:
            FUN18(VAR2, VAR4, VAR121, VAR7, VAR6, VAR7);
            break;
        case VAR122:
            FUN18(VAR2, VAR4, VAR123, VAR7, VAR6, VAR7);
            break;
        case VAR124:
            FUN8(VAR4);
            FUN7(VAR2, VAR4, VAR125, VAR7, VAR7, VAR8);
            break;
        case VAR126:
            FUN19(VAR2, VAR127, 24, VAR6, VAR7);
            break;
        case VAR128:
            FUN14(VAR2, VAR4, VAR93, VAR6, 0, VAR7);
            break;
        case VAR129:
            FUN19(VAR2, VAR130, VAR6, VAR6, VAR7);
            break;
        case VAR131:
            FUN19(VAR2, VAR132, VAR6, VAR6, VAR7);
            break;
        case VAR133:
            FUN19(VAR2, VAR127, VAR6, VAR6, VAR7);
            break;
        case VAR134:
            FUN19(VAR2, VAR135, VAR6, VAR7, 0);
            break;
        case VAR136:
            FUN20(VAR4, VAR137, VAR6);
            break;
        case VAR138:
            switch (VAR10)
            {
            case VAR139:
                FUN21(VAR140[VAR6], VAR140[VAR6]);
                break;
            case VAR141:
                FUN22(VAR140[VAR6], VAR140[VAR6]);
                break;
            case VAR142:
                FUN23(VAR140[VAR6], VAR140[VAR6]);
                break;
            case VAR143:
                FUN24(VAR140[VAR6], VAR140[VAR6]);
                break;
            case VAR144:
                FUN8(VAR4);
                FUN25(VAR140[VAR6], VAR140[VAR6]);
                break;
            case VAR145:
                FUN8(VAR4);
                FUN26(VAR140[VAR6], VAR140[VAR6]);
                break;
            default:
                FUN9(VAR4, VAR35);
                break;
            }
            break;
        case VAR146:
            FUN20(VAR4, VAR147, VAR6);
            break;
        case VAR148:
            FUN8(VAR4);
            FUN7(VAR2, VAR4, VAR149, VAR7, VAR7, VAR8);
            break;
        case VAR150:
            FUN8(VAR4);
            FUN18(VAR2, VAR4, VAR151, VAR7, VAR6, VAR7);
            break;
        case VAR152:
            FUN8(VAR4);
            FUN18(VAR2, VAR4, VAR153, VAR7, VAR6, VAR7);
            break;
        case VAR154:
            FUN8(VAR4);
            FUN18(VAR2, VAR4, VAR155, VAR7, VAR6, VAR7);
            break;
        case VAR156:
            FUN27(VAR4, VAR157, VAR6, VAR7);
            break;
        case VAR158:
            FUN27(VAR4, VAR159, VAR6, VAR7);
            break;
        case VAR160:
            FUN27(VAR4, VAR161, VAR6, VAR7);
            break;
        case VAR162:
            FUN27(VAR4, VAR163, VAR6, VAR7);
            break;
        case VAR164:
            FUN8(VAR4);
            FUN27(VAR4, VAR165, VAR6, VAR7);
            break;
        case VAR166:
            FUN8(VAR4);
            FUN27(VAR4, VAR167, VAR6, VAR7);
            break;
        case VAR168:
            FUN8(VAR4);
            FUN27(VAR4, VAR169, VAR6, VAR7);
            break;
        case VAR170:
            FUN8(VAR4);
            FUN27(VAR4, VAR171, VAR6, VAR7);
            break;
        default:
            FUN9(VAR4, VAR35);
            break;
        }
        break;
    case VAR172:
        FUN28(VAR2, VAR4, VAR5);
        VAR14 = 4;
        break;
    case VAR173:
        VAR13 = (VAR4->VAR15 >> 8) & 0x7;
        FUN29(VAR2, VAR4, VAR7, VAR13, VAR12, 0);
        break;
    default:
        FUN9(VAR4, VAR35);
        break;
    }
    return VAR14;
}