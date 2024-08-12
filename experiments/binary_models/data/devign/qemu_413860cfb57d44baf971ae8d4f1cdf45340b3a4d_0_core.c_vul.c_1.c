void FUN1(VAR1 *VAR2, uint32_t VAR3)
{
    VAR4 *VAR5;
    VAR6 *VAR7;
    int VAR8;
    int VAR9 = 0;
    FUN2("", VAR3);
    VAR7 = FUN3(VAR2);
    if (VAR7 != VAR2->VAR10 && !VAR7->VAR11)
        return;
    if ((VAR7->VAR12 & (VAR13 | VAR14)) && VAR3 != VAR15)
        return;
    if (!FUN4(VAR7, VAR3))
    {
        goto VAR16;
    }
    if (VAR17[VAR3].VAR18 != NULL)
    {
        bool VAR19;
        VAR7->VAR12 = VAR20 | VAR13;
        VAR7->VAR21 = 0;
        VAR19 = VAR17[VAR3].FUN5(VAR7, VAR3);
        if (VAR19)
        {
            VAR7->VAR12 &= ~VAR13;
            assert(!!VAR7->VAR21 == !!(VAR7->VAR12 & VAR22));
            if ((VAR17[VAR3].VAR23 & VAR24) && !VAR7->VAR21)
            {
                VAR7->VAR12 |= VAR25;
            }
            FUN6(VAR7->VAR2);
        }
        return;
    }
    switch (VAR3)
    {
    case VAR26:
        if (VAR7->VAR27 == VAR28 && VAR7->VAR29 == 0)
        {
            VAR7->VAR30 = 0;
            VAR7->VAR12 = VAR20 | VAR25;
        }
        else if ((VAR7->VAR29 & 0xff) != 0 && ((VAR7->VAR29 & 0xff) > VAR31 || (VAR7->VAR29 & (VAR7->VAR29 - 1)) != 0))
        {
            FUN7(VAR7);
        }
        else
        {
            VAR7->VAR30 = VAR7->VAR29 & 0xff;
            VAR7->VAR12 = VAR20 | VAR25;
        }
        FUN6(VAR7->VAR2);
        break;
    case VAR32:
        VAR9 = 1;
    case VAR33:
    case VAR34:
        FUN8(VAR7, VAR9);
        VAR7->VAR12 = VAR20 | VAR25;
        FUN6(VAR7->VAR2);
        break;
    case VAR35:
        VAR9 = 1;
    case VAR36:
    case VAR37:
        if (VAR7->VAR27 == VAR38)
        {
            FUN9(VAR7);
            goto VAR16;
        }
        if (!VAR7->VAR11)
        {
            goto VAR16;
        }
        FUN8(VAR7, VAR9);
        VAR7->VAR39 = 1;
        FUN10(VAR7);
        break;
    case VAR40:
        VAR9 = 1;
    case VAR41:
    case VAR42:
    case VAR43:
    case VAR44:
        if (!VAR7->VAR11)
        {
            goto VAR16;
        }
        FUN8(VAR7, VAR9);
        VAR7->VAR21 = 0;
        VAR7->VAR12 = VAR25 | VAR20;
        VAR7->VAR39 = 1;
        FUN11(VAR7, VAR7->VAR45, 512, VAR46);
        VAR7->VAR47 = 1;
        break;
    case VAR48:
        VAR9 = 1;
    case VAR49:
        if (!VAR7->VAR11)
        {
            goto VAR16;
        }
        if (!VAR7->VAR30)
        {
            goto VAR16;
        }
        FUN8(VAR7, VAR9);
        VAR7->VAR39 = VAR7->VAR30;
        FUN10(VAR7);
        break;
    case VAR50:
        VAR9 = 1;
    case VAR51:
    case VAR52:
        if (!VAR7->VAR11)
        {
            goto VAR16;
        }
        if (!VAR7->VAR30)
        {
            goto VAR16;
        }
        FUN8(VAR7, VAR9);
        VAR7->VAR21 = 0;
        VAR7->VAR12 = VAR25 | VAR20;
        VAR7->VAR39 = VAR7->VAR30;
        VAR8 = VAR7->VAR29;
        if (VAR8 > VAR7->VAR39)
            VAR8 = VAR7->VAR39;
        FUN11(VAR7, VAR7->VAR45, 512 * VAR8, VAR46);
        VAR7->VAR47 = 1;
        break;
    case VAR53:
        VAR9 = 1;
    case VAR54:
    case VAR55:
        if (!VAR7->VAR11)
        {
            goto VAR16;
        }
        FUN8(VAR7, VAR9);
        FUN12(VAR7, VAR56);
        break;
    case VAR57:
        VAR9 = 1;
    case VAR58:
    case VAR59:
        if (!VAR7->VAR11)
        {
            goto VAR16;
        }
        FUN8(VAR7, VAR9);
        FUN12(VAR7, VAR60);
        VAR7->VAR47 = 1;
        break;
    case VAR61:
        VAR9 = 1;
    case VAR62:
        if (VAR7->VAR63 == 0)
        {
            goto VAR16;
        }
        FUN8(VAR7, VAR9);
        FUN13(VAR7, VAR7->VAR63 - 1);
        VAR7->VAR12 = VAR20 | VAR25;
        FUN6(VAR7->VAR2);
        break;
    case VAR64:
    case VAR65:
        VAR7->VAR21 = 0;
        VAR7->VAR29 = 0xff;
        VAR7->VAR12 = VAR20 | VAR25;
        FUN6(VAR7->VAR2);
        break;
    case VAR66:
        if (!VAR7->VAR11)
            goto VAR16;
        switch (VAR7->VAR67)
        {
        case 0x02:
            FUN14(VAR7->VAR11, true);
            VAR5 = (VAR4 *)VAR7->VAR5;
            FUN15(VAR5 + 85, (1 << 14) | (1 << 5) | 1);
            VAR7->VAR12 = VAR20 | VAR25;
            FUN6(VAR7->VAR2);
            break;
        case 0x82:
            FUN14(VAR7->VAR11, false);
            VAR5 = (VAR4 *)VAR7->VAR5;
            FUN15(VAR5 + 85, (1 << 14) | 1);
            FUN16(VAR7);
            break;
        case 0xcc:
        case 0x66:
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
            VAR7->VAR12 = VAR20 | VAR25;
            FUN6(VAR7->VAR2);
            break;
        case 0x03:
        {
            uint8_t VAR3 = VAR7->VAR29 & 0x07;
            VAR5 = (VAR4 *)VAR7->VAR5;
            switch (VAR7->VAR29 >> 3)
            {
            case 0x00:
            case 0x01:
                FUN15(VAR5 + 62, 0x07);
                FUN15(VAR5 + 63, 0x07);
                FUN15(VAR5 + 88, 0x3f);
                break;
            case 0x02:
                FUN15(VAR5 + 62, 0x07 | (1 << (VAR3 + 8)));
                FUN15(VAR5 + 63, 0x07);
                FUN15(VAR5 + 88, 0x3f);
                break;
            case 0x04:
                FUN15(VAR5 + 62, 0x07);
                FUN15(VAR5 + 63, 0x07 | (1 << (VAR3 + 8)));
                FUN15(VAR5 + 88, 0x3f);
                break;
            case 0x08:
                FUN15(VAR5 + 62, 0x07);
                FUN15(VAR5 + 63, 0x07);
                FUN15(VAR5 + 88, 0x3f | (1 << (VAR3 + 8)));
                break;
            default:
                goto VAR16;
            }
            VAR7->VAR12 = VAR20 | VAR25;
            FUN6(VAR7->VAR2);
            break;
        }
        default:
            goto VAR16;
        }
        break;
    case VAR68:
    case VAR69:
        FUN16(VAR7);
        break;
    case VAR70:
        VAR7->VAR12 = VAR20 | VAR25;
        FUN6(VAR7->VAR2);
        break;
    case VAR71:
        FUN17(VAR7);
        VAR7->VAR12 = VAR20 | VAR25;
        FUN11(VAR7, VAR7->VAR45, 512, VAR72);
        FUN6(VAR7->VAR2);
        break;
    case VAR73:
        FUN9(VAR7);
        if (VAR7->VAR27 == VAR38)
            VAR7->VAR12 = 0;
        else
            VAR7->VAR12 = VAR20 | VAR25;
        VAR7->VAR21 = 0x01;
        FUN6(VAR7->VAR2);
        break;
    case VAR15:
        FUN9(VAR7);
        VAR7->VAR12 = 0x00;
        VAR7->VAR21 = 0x01;
        break;
    case VAR74:
        if (VAR7->VAR67 & 0x02)
            goto VAR16;
        VAR7->VAR12 = VAR20 | VAR25;
        VAR7->VAR75 = VAR7->VAR67 & 1;
        VAR7->VAR29 = 1;
        FUN11(VAR7, VAR7->VAR45, VAR76, VAR77);
        break;
    case VAR78:
        VAR7->VAR21 = 0x09;
        VAR7->VAR12 = VAR20 | VAR25;
        FUN6(VAR7->VAR2);
        break;
    case VAR79:
    case VAR80:
    case VAR81:
        if (VAR3 == VAR80)
            VAR7->VAR29 = 0;
        if (VAR3 == VAR79)
            VAR7->VAR47 = 1;
        VAR7->VAR21 = 0x00;
        VAR7->VAR12 = VAR20 | VAR25;
        FUN6(VAR7->VAR2);
        break;
    case VAR82:
        VAR7->VAR21 = 0x00;
        VAR7->VAR12 = VAR20 | VAR25;
        memset(VAR7->VAR45, 0, 0x200);
        VAR7->VAR45[0x00] = VAR7->VAR83;
        VAR7->VAR45[0x01] = VAR7->VAR84;
        VAR7->VAR45[0x02] = VAR7->VAR85;
        VAR7->VAR45[0x03] = VAR7->VAR86;
        VAR7->VAR45[0x04] = FUN18(VAR7) >> 16;
        VAR7->VAR45[0x05] = FUN18(VAR7) >> 8;
        VAR7->VAR45[0x06] = FUN18(VAR7) >> 0;
        VAR7->VAR45[0x13] = 0x00;
        VAR7->VAR45[0x18] = 0x00;
        VAR7->VAR45[0x19] = 0x00;
        VAR7->VAR45[0x1a] = 0x01;
        FUN11(VAR7, VAR7->VAR45, 0x200, VAR72);
        FUN6(VAR7->VAR2);
        break;
    case VAR87:
        switch (VAR7->VAR67)
        {
        case 0x02:
            FUN19(VAR7);
            break;
        case 0x03:
            FUN20(VAR7);
            break;
        case 0x04:
            FUN21(VAR7);
            break;
        default:
            goto VAR16;
        }
        FUN11(VAR7, VAR7->VAR45, 0x200, VAR72);
        VAR7->VAR12 = 0x00;
        FUN6(VAR7->VAR2);
        break;
    case VAR88:
        switch (VAR7->VAR67)
        {
        case 0x01:
            VAR7->VAR29 = 0x50;
            break;
        default:
            goto VAR16;
        }
        VAR7->VAR12 = VAR20 | VAR25;
        FUN6(VAR7->VAR2);
        break;
    case VAR89:
        if (VAR7->VAR83 != 0xc2 || VAR7->VAR84 != 0x4f)
            goto VAR16;
        if (!VAR7->VAR90 && VAR7->VAR67 != VAR91)
            goto VAR16;
        switch (VAR7->VAR67)
        {
        case VAR92:
            VAR7->VAR90 = 0;
            VAR7->VAR12 = VAR20 | VAR25;
            FUN6(VAR7->VAR2);
            break;
        case VAR91:
            VAR7->VAR90 = 1;
            VAR7->VAR12 = VAR20 | VAR25;
            FUN6(VAR7->VAR2);
            break;
        case VAR93:
            switch (VAR7->VAR86)
            {
            case 0x00:
                VAR7->VAR94 = 0;
                break;
            case 0xf1:
                VAR7->VAR94 = 1;
                break;
            default:
                goto VAR16;
            }
            VAR7->VAR12 = VAR20 | VAR25;
            FUN6(VAR7->VAR2);
            break;
        case VAR95:
            if (!VAR7->VAR96)
            {
                VAR7->VAR83 = 0xc2;
                VAR7->VAR84 = 0x4f;
            }
            else
            {
                VAR7->VAR83 = 0x2c;
                VAR7->VAR84 = 0xf4;
            }
            VAR7->VAR12 = VAR20 | VAR25;
            FUN6(VAR7->VAR2);
            break;
        case VAR97:
            memset(VAR7->VAR45, 0, 0x200);
            VAR7->VAR45[0] = 0x01;
            for (VAR8 = 0; VAR8 < FUN22(VAR98); VAR8++)
            {
                VAR7->VAR45[2 + 0 + (VAR8 * 12)] = VAR98[VAR8][0];
                VAR7->VAR45[2 + 1 + (VAR8 * 12)] = VAR98[VAR8][11];
            }
            for (VAR8 = 0; VAR8 < 511; VAR8++)
                VAR7->VAR45[511] += VAR7->VAR45[VAR8];
            VAR7->VAR45[511] = 0x100 - VAR7->VAR45[511];
            VAR7->VAR12 = VAR20 | VAR25;
            FUN11(VAR7, VAR7->VAR45, 0x200, VAR72);
            FUN6(VAR7->VAR2);
            break;
        case VAR99:
            memset(VAR7->VAR45, 0, 0x200);
            VAR7->VAR45[0] = 0x01;
            for (VAR8 = 0; VAR8 < FUN22(VAR98); VAR8++)
            {
                int VAR100;
                for (VAR100 = 0; VAR100 < 11; VAR100++)
                {
                    VAR7->VAR45[2 + VAR100 + (VAR8 * 12)] = VAR98[VAR8][VAR100];
                }
            }
            VAR7->VAR45[362] = 0x02 | (VAR7->VAR94 ? 0x80 : 0x00);
            if (VAR7->VAR101 == 0)
            {
                VAR7->VAR45[363] = 0;
            }
            else
            {
                VAR7->VAR45[363] = VAR7->VAR102[3 + (VAR7->VAR101 - 1) * 24];
            }
            VAR7->VAR45[364] = 0x20;
            VAR7->VAR45[365] = 0x01;
            VAR7->VAR45[367] = (1 << 4 | 1 << 3 | 1);
            VAR7->VAR45[368] = 0x03;
            VAR7->VAR45[369] = 0x00;
            VAR7->VAR45[370] = 0x01;
            VAR7->VAR45[372] = 0x02;
            VAR7->VAR45[373] = 0x36;
            VAR7->VAR45[374] = 0x01;
            for (VAR8 = 0; VAR8 < 511; VAR8++)
                VAR7->VAR45[511] += VAR7->VAR45[VAR8];
            VAR7->VAR45[511] = 0x100 - VAR7->VAR45[511];
            VAR7->VAR12 = VAR20 | VAR25;
            FUN11(VAR7, VAR7->VAR45, 0x200, VAR72);
            FUN6(VAR7->VAR2);
            break;
        case VAR103:
            switch (VAR7->VAR86)
            {
            case 0x01:
                memset(VAR7->VAR45, 0, 0x200);
                VAR7->VAR45[0] = 0x01;
                VAR7->VAR45[1] = 0x00;
                VAR7->VAR45[452] = VAR7->VAR96 & 0xff;
                VAR7->VAR45[453] = (VAR7->VAR96 & 0xff00) >> 8;
                for (VAR8 = 0; VAR8 < 511; VAR8++)
                    VAR7->VAR45[511] += VAR7->VAR45[VAR8];
                VAR7->VAR45[511] = 0x100 - VAR7->VAR45[511];
                break;
            case 0x06:
                memset(VAR7->VAR45, 0, 0x200);
                VAR7->VAR45[0] = 0x01;
                if (VAR7->VAR101 == 0)
                {
                    VAR7->VAR45[508] = 0;
                }
                else
                {
                    VAR7->VAR45[508] = VAR7->VAR101;
                    for (VAR8 = 2; VAR8 < 506; VAR8++)
                        VAR7->VAR45[VAR8] = VAR7->VAR102[VAR8];
                }
                for (VAR8 = 0; VAR8 < 511; VAR8++)
                    VAR7->VAR45[511] += VAR7->VAR45[VAR8];
                VAR7->VAR45[511] = 0x100 - VAR7->VAR45[511];
                break;
            default:
                goto VAR16;
            }
            VAR7->VAR12 = VAR20 | VAR25;
            FUN11(VAR7, VAR7->VAR45, 0x200, VAR72);
            FUN6(VAR7->VAR2);
            break;
        case VAR104:
            switch (VAR7->VAR86)
            {
            case 0:
            case 1:
            case 2:
                VAR7->VAR101++;
                if (VAR7->VAR101 > 21)
                    VAR7->VAR101 = 0;
                VAR8 = 2 + (VAR7->VAR101 - 1) * 24;
                VAR7->VAR102[VAR8] = VAR7->VAR86;
                VAR7->VAR102[VAR8 + 1] = 0x00;
                VAR7->VAR102[VAR8 + 2] = 0x34;
                VAR7->VAR102[VAR8 + 3] = 0x12;
                VAR7->VAR12 = VAR20 | VAR25;
                FUN6(VAR7->VAR2);
                break;
            default:
                goto VAR16;
            }
            break;
        default:
            goto VAR16;
        }
        break;
    default:
    VAR16:
        FUN7(VAR7);
        FUN6(VAR7->VAR2);
        break;
    }
}