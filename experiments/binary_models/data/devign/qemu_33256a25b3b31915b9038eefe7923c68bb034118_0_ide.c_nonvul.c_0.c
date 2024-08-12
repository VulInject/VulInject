static void FUN1(void *VAR1, uint32_t VAR2, uint32_t VAR3)
{
    VAR4 *VAR5 = VAR1;
    VAR4 *VAR6;
    int VAR7, VAR8;
    int VAR9 = 0;
    FUN2("", VAR2, VAR3);
    VAR2 &= 7;
    if (VAR2 != 7 && (VAR5->VAR10->VAR11 & (VAR12 | VAR13)))
        return;
    switch (VAR2)
    {
    case 0:
        break;
    case 1:
        FUN3(VAR5);
        VAR5[0].VAR14 = VAR5[0].VAR15;
        VAR5[1].VAR14 = VAR5[1].VAR15;
        VAR5[0].VAR15 = VAR3;
        VAR5[1].VAR15 = VAR3;
        break;
    case 2:
        FUN3(VAR5);
        VAR5[0].VAR16 = VAR5[0].VAR17;
        VAR5[1].VAR16 = VAR5[1].VAR17;
        VAR5[0].VAR17 = VAR3;
        VAR5[1].VAR17 = VAR3;
        break;
    case 3:
        FUN3(VAR5);
        VAR5[0].VAR18 = VAR5[0].VAR19;
        VAR5[1].VAR18 = VAR5[1].VAR19;
        VAR5[0].VAR19 = VAR3;
        VAR5[1].VAR19 = VAR3;
        break;
    case 4:
        FUN3(VAR5);
        VAR5[0].VAR20 = VAR5[0].VAR21;
        VAR5[1].VAR20 = VAR5[1].VAR21;
        VAR5[0].VAR21 = VAR3;
        VAR5[1].VAR21 = VAR3;
        break;
    case 5:
        FUN3(VAR5);
        VAR5[0].VAR22 = VAR5[0].VAR23;
        VAR5[1].VAR22 = VAR5[1].VAR23;
        VAR5[0].VAR23 = VAR3;
        VAR5[1].VAR23 = VAR3;
        break;
    case 6:
        VAR5[0].VAR24 = (VAR3 & ~0x10) | 0xa0;
        VAR5[1].VAR24 = (VAR3 | 0x10) | 0xa0;
        VAR7 = (VAR3 >> 4) & 1;
        VAR6 = VAR5 + VAR7;
        VAR5->VAR10 = VAR6;
        break;
    default:
    case 7:
        FUN2("", VAR3);
        VAR6 = VAR5->VAR10;
        if (VAR6 != VAR5 && !VAR6->VAR25)
            break;
        if ((VAR6->VAR11 & (VAR12 | VAR13)) && VAR3 != VAR26)
            break;
        switch (VAR3)
        {
        case VAR27:
            if (VAR6->VAR25 && !VAR6->VAR28)
            {
                if (!VAR6->VAR29)
                    FUN4(VAR6);
                else
                    FUN5(VAR6);
                VAR6->VAR11 = VAR30 | VAR31;
                FUN6(VAR6, VAR6->VAR32, 512, VAR33);
            }
            else
            {
                if (VAR6->VAR28)
                {
                    FUN7(VAR6);
                }
                FUN8(VAR6);
            }
            FUN9(VAR6);
            break;
        case VAR34:
        case VAR35:
            VAR6->VAR36 = 0;
            VAR6->VAR11 = VAR30 | VAR31;
            FUN9(VAR6);
            break;
        case VAR37:
            if (VAR6->VAR29 && VAR6->VAR17 == 0)
            {
                VAR6->VAR38 = 0;
                VAR6->VAR11 = VAR30 | VAR31;
            }
            else if ((VAR6->VAR17 & 0xff) != 0 && ((VAR6->VAR17 & 0xff) > VAR39 || (VAR6->VAR17 & (VAR6->VAR17 - 1)) != 0))
            {
                FUN8(VAR6);
            }
            else
            {
                VAR6->VAR38 = VAR6->VAR17 & 0xff;
                VAR6->VAR11 = VAR30 | VAR31;
            }
            FUN9(VAR6);
            break;
        case VAR40:
            VAR9 = 1;
        case VAR41:
        case VAR42:
            FUN10(VAR6, VAR9);
            VAR6->VAR11 = VAR30 | VAR31;
            FUN9(VAR6);
            break;
        case VAR43:
            VAR9 = 1;
        case VAR44:
        case VAR45:
            if (!VAR6->VAR25)
                goto VAR46;
            FUN10(VAR6, VAR9);
            VAR6->VAR47 = 1;
            FUN11(VAR6);
            break;
        case VAR48:
            VAR9 = 1;
        case VAR49:
        case VAR50:
        case VAR51:
        case VAR52:
            FUN10(VAR6, VAR9);
            VAR6->VAR36 = 0;
            VAR6->VAR11 = VAR31 | VAR30;
            VAR6->VAR47 = 1;
            FUN6(VAR6, VAR6->VAR32, 512, VAR53);
            VAR6->VAR54 = 1;
            break;
        case VAR55:
            VAR9 = 1;
        case VAR56:
            if (!VAR6->VAR38)
                goto VAR46;
            FUN10(VAR6, VAR9);
            VAR6->VAR47 = VAR6->VAR38;
            FUN11(VAR6);
            break;
        case VAR57:
            VAR9 = 1;
        case VAR58:
        case VAR59:
            if (!VAR6->VAR38)
                goto VAR46;
            FUN10(VAR6, VAR9);
            VAR6->VAR36 = 0;
            VAR6->VAR11 = VAR31 | VAR30;
            VAR6->VAR47 = VAR6->VAR38;
            VAR8 = VAR6->VAR17;
            if (VAR8 > VAR6->VAR47)
                VAR8 = VAR6->VAR47;
            FUN6(VAR6, VAR6->VAR32, 512 * VAR8, VAR53);
            VAR6->VAR54 = 1;
            break;
        case VAR60:
            VAR9 = 1;
        case VAR61:
        case VAR62:
            if (!VAR6->VAR25)
                goto VAR46;
            FUN10(VAR6, VAR9);
            FUN12(VAR6);
            break;
        case VAR63:
            VAR9 = 1;
        case VAR64:
        case VAR65:
            if (!VAR6->VAR25)
                goto VAR46;
            FUN10(VAR6, VAR9);
            FUN13(VAR6);
            VAR6->VAR54 = 1;
            break;
        case VAR66:
            VAR9 = 1;
        case VAR67:
            FUN10(VAR6, VAR9);
            FUN14(VAR6, VAR6->VAR68 - 1);
            VAR6->VAR11 = VAR30 | VAR31;
            FUN9(VAR6);
            break;
        case VAR69:
        case VAR70:
            VAR6->VAR17 = 0xff;
            VAR6->VAR11 = VAR30 | VAR31;
            FUN9(VAR6);
            break;
        case VAR71:
            if (!VAR6->VAR25)
                goto VAR46;
            switch (VAR6->VAR15)
            {
            case 0xcc:
            case 0x66:
            case 0x02:
            case 0x82:
            case 0xaa:
            case 0x55:
            case 0x05:
            case 0x85:
            case 0x69:
            case 0x67:
            case 0x96:
            case 0x9a:
            case 0x42:
            case 0xc2:
                VAR6->VAR11 = VAR30 | VAR31;
                FUN9(VAR6);
                break;
            case 0x03:
            {
                uint8_t VAR3 = VAR6->VAR17 & 0x07;
                switch (VAR6->VAR17 >> 3)
                {
                case 0x00:
                case 0x01:
                    FUN15(VAR6->VAR72 + 62, 0x07);
                    FUN15(VAR6->VAR72 + 63, 0x07);
                    FUN15(VAR6->VAR72 + 88, 0x3f);
                    break;
                case 0x02:
                    FUN15(VAR6->VAR72 + 62, 0x07 | (1 << (VAR3 + 8)));
                    FUN15(VAR6->VAR72 + 63, 0x07);
                    FUN15(VAR6->VAR72 + 88, 0x3f);
                    break;
                case 0x04:
                    FUN15(VAR6->VAR72 + 62, 0x07);
                    FUN15(VAR6->VAR72 + 63, 0x07 | (1 << (VAR3 + 8)));
                    FUN15(VAR6->VAR72 + 88, 0x3f);
                    break;
                case 0x08:
                    FUN15(VAR6->VAR72 + 62, 0x07);
                    FUN15(VAR6->VAR72 + 63, 0x07);
                    FUN15(VAR6->VAR72 + 88, 0x3f | (1 << (VAR3 + 8)));
                    break;
                default:
                    goto VAR46;
                }
                VAR6->VAR11 = VAR30 | VAR31;
                FUN9(VAR6);
                break;
            }
            default:
                goto VAR46;
            }
            break;
        case VAR73:
        case VAR74:
            if (VAR6->VAR25)
                FUN16(VAR6->VAR25);
            VAR6->VAR11 = VAR30 | VAR31;
            FUN9(VAR6);
            break;
        case VAR75:
        case VAR76:
        case VAR77:
        case VAR78:
        case VAR79:
        case VAR80:
        case VAR81:
        case VAR82:
        case VAR83:
        case VAR84:
            VAR6->VAR11 = VAR30;
            FUN9(VAR6);
            break;
        case VAR85:
            if (VAR6->VAR28)
            {
                FUN17(VAR6);
                VAR6->VAR11 = VAR30 | VAR31;
                FUN6(VAR6, VAR6->VAR32, 512, VAR33);
            }
            else
            {
                FUN8(VAR6);
            }
            FUN9(VAR6);
            break;
        case VAR86:
            FUN7(VAR6);
            if (VAR6->VAR28)
                VAR6->VAR11 = 0;
            else
                VAR6->VAR11 = VAR30 | VAR31;
            VAR6->VAR36 = 0x01;
            FUN9(VAR6);
            break;
        case VAR87:
            if (!VAR6->VAR28)
                goto VAR46;
            FUN7(VAR6);
            VAR6->VAR11 = 0x00;
            VAR6->VAR36 = 0x01;
            break;
        case VAR88:
            if (!VAR6->VAR28)
                goto VAR46;
            if (VAR6->VAR15 & 0x02)
                goto VAR46;
            VAR6->VAR11 = VAR30 | VAR31;
            VAR6->VAR89 = VAR6->VAR15 & 1;
            VAR6->VAR17 = 1;
            FUN6(VAR6, VAR6->VAR32, VAR90, VAR91);
            break;
        case VAR92:
            if (!VAR6->VAR29)
                goto VAR46;
            VAR6->VAR36 = 0x09;
            VAR6->VAR11 = VAR30 | VAR31;
            FUN9(VAR6);
            break;
        case VAR93:
        case VAR94:
            if (!VAR6->VAR29)
                goto VAR46;
            if (VAR3 == VAR94)
                VAR6->VAR17 = 0;
            if (VAR3 == VAR93)
                VAR6->VAR54 = 1;
            VAR6->VAR36 = 0x00;
            VAR6->VAR11 = VAR30 | VAR31;
            FUN9(VAR6);
            break;
        case VAR95:
            if (!VAR6->VAR29)
                goto VAR46;
            VAR6->VAR36 = 0x00;
            VAR6->VAR11 = VAR30 | VAR31;
            memset(VAR6->VAR32, 0, 0x200);
            VAR6->VAR32[0x00] = VAR6->VAR23;
            VAR6->VAR32[0x01] = VAR6->VAR21;
            VAR6->VAR32[0x02] = VAR6->VAR24;
            VAR6->VAR32[0x03] = VAR6->VAR19;
            VAR6->VAR32[0x04] = FUN18(VAR6) >> 16;
            VAR6->VAR32[0x05] = FUN18(VAR6) >> 8;
            VAR6->VAR32[0x06] = FUN18(VAR6) >> 0;
            VAR6->VAR32[0x13] = 0x00;
            VAR6->VAR32[0x18] = 0x00;
            VAR6->VAR32[0x19] = 0x00;
            VAR6->VAR32[0x1a] = 0x01;
            FUN6(VAR6, VAR6->VAR32, 0x200, VAR33);
            FUN9(VAR6);
            break;
        case VAR96:
            if (!VAR6->VAR29)
                goto VAR46;
            switch (VAR6->VAR15)
            {
            case 0x02:
                FUN19(VAR6);
                break;
            case 0x03:
                FUN20(VAR6);
                break;
            case 0x04:
                FUN21(VAR6);
                break;
            default:
                goto VAR46;
            }
            FUN6(VAR6, VAR6->VAR32, 0x200, VAR33);
            VAR6->VAR11 = 0x00;
            FUN9(VAR6);
            break;
        case VAR97:
            if (!VAR6->VAR29)
                goto VAR46;
            switch (VAR6->VAR15)
            {
            case 0x01:
                VAR6->VAR17 = 0x50;
                break;
            default:
                goto VAR46;
            }
            VAR6->VAR11 = VAR30 | VAR31;
            FUN9(VAR6);
            break;
        default:
        VAR46:
            FUN8(VAR6);
            FUN9(VAR6);
            break;
        }
    }
}