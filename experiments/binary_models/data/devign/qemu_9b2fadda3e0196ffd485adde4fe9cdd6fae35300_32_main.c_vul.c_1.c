void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(FUN3(VAR2));
    target_siginfo_t VAR5;
    int VAR6;
    target_ulong VAR7;
    for (;;)
    {
        FUN4(VAR4);
        VAR6 = FUN5(VAR4);
        FUN6(VAR4);
        switch (VAR6)
        {
        case VAR8:
            break;
        case VAR9:
            FUN7(VAR4, ""
                          "");
            break;
        case VAR10:
            FUN7(VAR4, ""
                          "");
            break;
        case VAR11:
            FUN8(VAR2, "" VAR12 "", VAR2->VAR13[VAR14]);
            switch (VAR2->VAR15 & 0xFF000000)
            {
            case 0x40000000:
                VAR5.VAR16 = VAR17;
                VAR5.VAR18 = 0;
                VAR5.VAR19 = VAR20;
                break;
            case 0x04000000:
                VAR5.VAR16 = VAR21;
                VAR5.VAR18 = 0;
                VAR5.VAR19 = VAR22;
                break;
            case 0x08000000:
                VAR5.VAR16 = VAR17;
                VAR5.VAR18 = 0;
                VAR5.VAR19 = VAR23;
                break;
            default:
                FUN8(VAR2, "", VAR2->VAR15);
                VAR5.VAR16 = VAR17;
                VAR5.VAR18 = 0;
                VAR5.VAR19 = VAR20;
                break;
            }
            VAR5.VAR24.VAR25.VAR26 = VAR2->VAR27;
            FUN9(VAR2, VAR5.VAR16, &VAR5);
            break;
        case VAR28:
            FUN8(VAR2, "" VAR12 "", VAR2->VAR13[VAR29]);
            switch (VAR2->VAR15 & 0xFF000000)
            {
            case 0x40000000:
                VAR5.VAR16 = VAR17;
                VAR5.VAR18 = 0;
                VAR5.VAR19 = VAR20;
                break;
            case 0x10000000:
            case 0x08000000:
                VAR5.VAR16 = VAR17;
                VAR5.VAR18 = 0;
                VAR5.VAR19 = VAR23;
                break;
            default:
                FUN8(VAR2, "", VAR2->VAR15);
                VAR5.VAR16 = VAR17;
                VAR5.VAR18 = 0;
                VAR5.VAR19 = VAR20;
                break;
            }
            VAR5.VAR24.VAR25.VAR26 = VAR2->VAR27 - 4;
            FUN9(VAR2, VAR5.VAR16, &VAR5);
            break;
        case VAR30:
            FUN7(VAR4, ""
                          "");
            break;
        case VAR31:
            FUN8(VAR2, "");
            VAR5.VAR16 = VAR32;
            VAR5.VAR18 = 0;
            VAR5.VAR19 = VAR33;
            VAR5.VAR24.VAR25.VAR26 = VAR2->VAR27;
            FUN9(VAR2, VAR5.VAR16, &VAR5);
            break;
        case VAR34:
            switch (VAR2->VAR15 & ~0xF)
            {
            case VAR35:
                FUN8(VAR2, "");
                VAR5.VAR16 = VAR36;
                VAR5.VAR18 = 0;
                switch (VAR2->VAR15 & 0xF)
                {
                case VAR37:
                    VAR5.VAR19 = VAR38;
                    break;
                case VAR39:
                    VAR5.VAR19 = VAR40;
                    break;
                case VAR41:
                case VAR42:
                    VAR5.VAR19 = VAR43;
                    break;
                case VAR44:
                    VAR5.VAR19 = VAR45;
                    break;
                case VAR46:
                    VAR5.VAR19 = VAR47;
                    break;
                case VAR48:
                case VAR49:
                case VAR50:
                case VAR51:
                case VAR52:
                case VAR53:
                case VAR54:
                    VAR5.VAR19 = VAR55;
                    break;
                default:
                    FUN8(VAR2, "", VAR2->VAR15);
                    break;
                }
                break;
            case VAR56:
                FUN8(VAR2, "");
                VAR5.VAR16 = VAR21;
                VAR5.VAR18 = 0;
                switch (VAR2->VAR15 & 0xF)
                {
                case VAR57:
                    VAR5.VAR19 = VAR58;
                    break;
                case VAR59:
                    VAR5.VAR19 = VAR60;
                    break;
                case VAR61:
                    VAR5.VAR19 = VAR62;
                    break;
                case VAR63:
                    VAR5.VAR19 = VAR64;
                    break;
                default:
                    FUN8(VAR2, "", VAR2->VAR15 & 0xF);
                    VAR5.VAR19 = VAR22;
                    break;
                }
                break;
            case VAR65:
                FUN8(VAR2, "");
                VAR5.VAR16 = VAR21;
                VAR5.VAR18 = 0;
                switch (VAR2->VAR15 & 0xF)
                {
                case VAR66:
                    VAR5.VAR19 = VAR67;
                    break;
                case VAR68:
                    VAR5.VAR19 = VAR62;
                    break;
                default:
                    FUN8(VAR2, "", VAR2->VAR15 & 0xF);
                    VAR5.VAR19 = VAR67;
                    break;
                }
                break;
            case VAR69:
                FUN7(VAR4, "");
                break;
            default:
                FUN7(VAR4, "", VAR2->VAR15);
                break;
            }
            VAR5.VAR24.VAR25.VAR26 = VAR2->VAR27 - 4;
            FUN9(VAR2, VAR5.VAR16, &VAR5);
            break;
        case VAR70:
            FUN8(VAR2, "");
            VAR5.VAR16 = VAR21;
            VAR5.VAR18 = 0;
            VAR5.VAR19 = VAR64;
            VAR5.VAR24.VAR25.VAR26 = VAR2->VAR27 - 4;
            FUN9(VAR2, VAR5.VAR16, &VAR5);
            break;
        case VAR71:
            FUN7(VAR4, ""
                          "");
            break;
        case VAR72:
            FUN8(VAR2, "");
            VAR5.VAR16 = VAR21;
            VAR5.VAR18 = 0;
            VAR5.VAR19 = VAR64;
            VAR5.VAR24.VAR25.VAR26 = VAR2->VAR27 - 4;
            FUN9(VAR2, VAR5.VAR16, &VAR5);
            break;
        case VAR73:
            FUN7(VAR4, ""
                          "");
            break;
        case VAR74:
            FUN7(VAR4, ""
                          "");
            break;
        case VAR75:
            FUN7(VAR4, ""
                          "");
            break;
        case VAR76:
            FUN7(VAR4, ""
                          "");
            break;
        case VAR77:
            FUN7(VAR4, ""
                          "");
            break;
        case VAR78:
            FUN8(VAR2, "");
            VAR5.VAR16 = VAR21;
            VAR5.VAR18 = 0;
            VAR5.VAR19 = VAR64;
            VAR5.VAR24.VAR25.VAR26 = VAR2->VAR27 - 4;
            FUN9(VAR2, VAR5.VAR16, &VAR5);
            break;
        case VAR79:
            FUN7(VAR4, "");
            break;
        case VAR80:
            FUN7(VAR4, "");
            break;
        case VAR81:
            FUN7(VAR4, "");
            break;
        case VAR82:
            FUN7(VAR4, ""
                          "");
            break;
        case VAR83:
            FUN7(VAR4, ""
                          "");
            break;
        case VAR84:
            FUN7(VAR4, ""
                          "");
            break;
        case VAR85:
            FUN7(VAR4, ""
                          "");
            break;
        case VAR86:
            FUN7(VAR4, ""
                          "");
            break;
        case VAR87:
            FUN7(VAR4, ""
                          "");
            break;
        case VAR88:
            break;
        case VAR89:
            FUN7(VAR4, ""
                          "");
            break;
        case VAR90:
            FUN7(VAR4, ""
                          "");
            break;
        case VAR91:
            FUN7(VAR4, ""
                          "");
            break;
        case VAR92:
            FUN7(VAR4, ""
                          "");
            break;
        case VAR93:
            FUN8(VAR2, "");
            VAR5.VAR16 = VAR21;
            VAR5.VAR18 = 0;
            VAR5.VAR19 = VAR64;
            VAR5.VAR24.VAR25.VAR26 = VAR2->VAR27 - 4;
            FUN9(VAR2, VAR5.VAR16, &VAR5);
            break;
        case VAR94:
            FUN7(VAR4, ""
                          "");
            break;
        case VAR95:
            FUN7(VAR4, ""
                          "");
            break;
        case VAR96:
            FUN7(VAR4, ""
                          "");
            break;
        case VAR97:
            FUN7(VAR4, "");
            break;
        case VAR98:
            FUN7(VAR4, ""
                          "");
            break;
        case VAR99:
            FUN7(VAR4, ""
                          "");
            break;
        case VAR100:
            FUN7(VAR4, ""
                          "");
            break;
        case VAR101:
            FUN7(VAR4, "");
            break;
        case VAR102:
            FUN7(VAR4, ""
                          "");
            break;
        case VAR103:
            FUN7(VAR4, ""
                          "");
            break;
        case VAR104:
            FUN7(VAR4, ""
                          "");
            break;
        case VAR105:
            FUN7(VAR4, "");
            break;
        case VAR106:
            FUN7(VAR4, "");
            break;
        case VAR107:
            FUN7(VAR4, "");
            break;
        case VAR108:
            FUN7(VAR4, ""
                          "");
            break;
        case VAR109:
            break;
        case VAR110:
            break;
        case VAR111:
            VAR2->VAR112[0] &= ~0x1;
            VAR7 = FUN10(VAR2, VAR2->VAR113[0], VAR2->VAR113[3], VAR2->VAR113[4], VAR2->VAR113[5], VAR2->VAR113[6], VAR2->VAR113[7], VAR2->VAR113[8], 0, 0);
            if (VAR7 == -VAR114)
            {
                VAR2->VAR27 -= 4;
                break;
            }
            if (VAR7 == (VAR115)(-VAR116))
            {
                break;
            }
            if (VAR7 > (VAR115)(-515))
            {
                VAR2->VAR112[0] |= 0x1;
                VAR7 = -VAR7;
            }
            VAR2->VAR113[3] = VAR7;
            break;
        case VAR117:
            if (FUN11(VAR2))
            {
                VAR5.VAR16 = VAR17;
                VAR5.VAR18 = 0;
                VAR5.VAR19 = VAR20;
                VAR5.VAR24.VAR25.VAR26 = VAR2->VAR27;
                FUN9(VAR2, VAR5.VAR16, &VAR5);
            }
            break;
        case VAR118:
        {
            int VAR119;
            VAR119 = FUN12(VAR4, VAR120);
            if (VAR119)
            {
                VAR5.VAR16 = VAR119;
                VAR5.VAR18 = 0;
                VAR5.VAR19 = VAR121;
                FUN9(VAR2, VAR5.VAR16, &VAR5);
            }
        }
        break;
        case VAR122:
            break;
        default:
            FUN7(VAR4, "", VAR6);
            break;
        }
        FUN13(VAR2);
    }