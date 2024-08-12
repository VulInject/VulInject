static void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6)
{
    int VAR7 = (VAR4->VAR8 >> 6) & 0x3f;
    int VAR9 = (VAR4->VAR8 >> 12) & 0xf;
    uint32_t VAR10;
    switch (VAR7)
    {
    case VAR11:
        VAR10 = VAR12;
        goto VAR13;
    case VAR14:
        VAR10 = VAR15;
        goto VAR13;
    case VAR16:
        VAR10 = VAR17;
        goto VAR13;
    case VAR18:
        VAR10 = VAR19;
        goto VAR13;
    case VAR20:
        VAR10 = VAR21;
        goto VAR13;
    case VAR22:
        VAR10 = VAR23;
    VAR13:
        FUN2(VAR4, VAR10, VAR6, VAR5, -1);
        break;
    case VAR24:
    case VAR24 + 32:
        FUN3(VAR4);
        if (VAR5 == 0)
        {
            break;
        }
        FUN4(VAR4, VAR25[VAR5], VAR6, (VAR4->VAR8 >> 11) & 0x7);
        break;
    case VAR26:
    case VAR26 + 32:
        FUN3(VAR4);
        {
            TCGv VAR27 = FUN5();
            FUN6(VAR27, VAR5);
            FUN7(VAR4, VAR27, VAR6, (VAR4->VAR8 >> 11) & 0x7);
            FUN8(VAR27);
        }
        break;
    case 0x2a:
        switch (VAR9 & 3)
        {
        case VAR28:
            FUN9(VAR4, VAR29, (VAR4->VAR8 >> 14) & 3, VAR6, VAR5);
            break;
        case VAR30:
            FUN9(VAR4, VAR31, (VAR4->VAR8 >> 14) & 3, VAR6, VAR5);
            break;
        case VAR32:
            FUN9(VAR4, VAR33, (VAR4->VAR8 >> 14) & 3, VAR6, VAR5);
            break;
        case VAR34:
            FUN9(VAR4, VAR35, (VAR4->VAR8 >> 14) & 3, VAR6, VAR5);
            break;
        default:
            goto VAR36;
        }
        break;
    case 0x32:
        switch (VAR9 & 3)
        {
        case VAR37:
            FUN9(VAR4, VAR38, (VAR4->VAR8 >> 14) & 3, VAR6, VAR5);
            break;
        case VAR39:
            FUN9(VAR4, VAR40, (VAR4->VAR8 >> 14) & 3, VAR6, VAR5);
            break;
        default:
            goto VAR36;
        }
        break;
    case 0x2c:
        switch (VAR9)
        {
        case VAR41:
            FUN10(VAR4, VAR42);
            FUN11(VAR4, VAR43, VAR6, VAR5);
            break;
        case VAR44:
            FUN12(VAR4, VAR45, VAR6, VAR5);
            break;
        case VAR46:
            FUN12(VAR4, VAR47, VAR6, VAR5);
            break;
        case VAR48:
            VAR10 = VAR49;
            goto VAR50;
        case VAR51:
            VAR10 = VAR52;
        VAR50:
            FUN10(VAR4, VAR53);
            FUN13(VAR4, VAR10, VAR5, VAR6);
            break;
        case VAR54:
            FUN14(VAR4, VAR42);
            FUN15(VAR4, VAR5, VAR6, 0);
            break;
        case VAR55:
            FUN12(VAR4, VAR56, VAR6, VAR5);
            break;
        case VAR57:
            FUN14(VAR4, VAR42);
            VAR10 = VAR38;
            goto VAR58;
        case VAR59:
            FUN14(VAR4, VAR42);
            VAR10 = VAR40;
            goto VAR58;
        case VAR60:
            FUN14(VAR4, VAR42);
            VAR10 = VAR61;
            goto VAR62;
        case VAR63:
            FUN14(VAR4, VAR42);
            VAR10 = VAR64;
            goto VAR62;
        VAR62:
            FUN10(VAR4, VAR53);
            FUN9(VAR4, VAR10, 0, VAR6, VAR5);
            break;
        case VAR65:
            FUN14(VAR4, VAR42);
            VAR10 = VAR29;
            goto VAR58;
        case VAR66:
            FUN14(VAR4, VAR42);
            VAR10 = VAR31;
            goto VAR58;
        case VAR67:
            FUN14(VAR4, VAR42);
            VAR10 = VAR33;
            goto VAR58;
        case VAR68:
            FUN14(VAR4, VAR42);
            VAR10 = VAR35;
        VAR58:
            FUN10(VAR4, VAR53);
            FUN9(VAR4, VAR10, 0, VAR6, VAR5);
            break;
        default:
            goto VAR36;
        }
        break;
    case 0x34:
        switch (VAR9)
        {
        case VAR69:
        case VAR70:
        case VAR71:
        case VAR72:
        case VAR73:
        case VAR74:
            FUN16(VAR4, VAR75, 2);
            break;
        default:
            goto VAR36;
        }
        break;
    case 0x3c:
        switch (VAR9)
        {
        case VAR76:
        case VAR77:
            if (VAR4->VAR78 & VAR42)
            {
                FUN17(VAR4, VAR79, 4, VAR6, VAR5, 0, 0);
            }
            else
            {
                FUN17(VAR4, VAR79, 4, VAR6, VAR5, 0, 4);
                VAR4->VAR80 |= VAR81;
            }
            break;
        case VAR82:
        case VAR83:
            FUN14(VAR4, VAR42);
            FUN17(VAR4, VAR79, 4, VAR6, VAR5, 0, 2);
            VAR4->VAR80 |= VAR81;
            break;
        default:
            goto VAR36;
        }
        break;
    case 0x05:
        switch (VAR9)
        {
        case VAR84:
            FUN3(VAR4);
            FUN10(VAR4, VAR85);
            FUN18(VAR6, VAR5);
            break;
        case VAR86:
            FUN3(VAR4);
            FUN10(VAR4, VAR85);
            FUN19(VAR6, VAR5);
            break;
        default:
            goto VAR36;
        }
        break;
    case 0x0d:
        switch (VAR9)
        {
        case VAR87:
            VAR10 = VAR88;
            goto VAR89;
        case VAR90:
            VAR10 = VAR91;
            goto VAR89;
        case VAR92:
            VAR10 = VAR93;
            goto VAR89;
        case VAR94:
            VAR10 = VAR95;
            goto VAR89;
        case VAR96:
            VAR10 = VAR97;
            goto VAR89;
        case VAR98:
            VAR10 = VAR99;
            goto VAR89;
        case VAR100:
            VAR10 = VAR101;
            goto VAR89;
        case VAR102:
            VAR10 = VAR103;
            goto VAR89;
        case VAR104:
            VAR10 = VAR105;
        VAR89:
            FUN20(VAR2, VAR4, VAR10, VAR5, VAR6);
            break;
        default:
            goto VAR36;
        }
        break;
    case 0x1d:
        switch (VAR9)
        {
        case VAR106:
            FUN3(VAR4);
            {
                TCGv VAR27 = FUN5();
                FUN21(VAR4, 1);
                FUN22(VAR27, VAR107);
                FUN23(VAR27, VAR6);
                VAR4->VAR108 = VAR109;
                FUN8(VAR27);
            }
            break;
        case VAR110:
            FUN3(VAR4);
            {
                TCGv VAR27 = FUN5();
                FUN21(VAR4, 1);
                FUN24(VAR27, VAR107);
                FUN23(VAR27, VAR6);
                VAR4->VAR108 = VAR109;
                FUN8(VAR27);
            }
            break;
        default:
            goto VAR36;
        }
        break;
    case 0x2d:
        switch (VAR9)
        {
        case VAR111:
            break;
        case VAR112:
            FUN25(VAR4, VAR113);
            break;
        case VAR114:
            if (FUN26(FUN27(VAR4->VAR8, 16, 10)))
            {
                FUN28(VAR107);
            }
            else
            {
                FUN10(VAR4, VAR53);
                if (VAR4->VAR80 & VAR115)
                {
                    FUN25(VAR4, VAR116);
                }
                else
                {
                    FUN25(VAR4, VAR117);
                }
            }
            break;
        default:
            goto VAR36;
        }
        break;
    case 0x01:
        switch (VAR9 & 3)
        {
        case VAR118:
            FUN29(VAR4, VAR119, VAR9 >> 2, VAR6);
            break;
        case VAR120:
            FUN29(VAR4, VAR121, VAR9 >> 2, VAR6);
            break;
        case VAR122:
            FUN29(VAR4, VAR123, VAR9 >> 2, VAR6);
            break;
        case VAR124:
            FUN29(VAR4, VAR125, VAR9 >> 2, VAR6);
            break;
        default:
            goto VAR36;
        }
        break;
    case 0x35:
        FUN14(VAR4, VAR42);
        switch (VAR9)
        {
        case VAR126:
            FUN29(VAR4, VAR119, 0, VAR6);
            break;
        case VAR127:
            FUN29(VAR4, VAR121, 0, VAR6);
            break;
        case VAR128:
            FUN29(VAR4, VAR123, 0, VAR6);
            break;
        case VAR129:
            FUN29(VAR4, VAR125, 0, VAR6);
            break;
        default:
            goto VAR36;
        }
        break;
    default:
    VAR36:
        FUN30("");
        FUN25(VAR4, VAR116);
        break;
    }
}