void FUN1(VAR1 *VAR2, uint32_t VAR3)
{
    VAR4 *VAR5;
    VAR6 *VAR7;
    int VAR8;
    FUN2("", VAR3);
    VAR7 = FUN3(VAR2);
    if (VAR7 != VAR2->VAR9 && !VAR7->VAR10)
        return;
    if ((VAR7->VAR11 & (VAR12 | VAR13)) && VAR3 != VAR14)
        return;
    if (!FUN4(VAR7, VAR3))
    {
        goto VAR15;
    }
    if (VAR16[VAR3].VAR17 != NULL)
    {
        bool VAR18;
        VAR7->VAR11 = VAR19 | VAR12;
        VAR7->VAR20 = 0;
        VAR18 = VAR16[VAR3].FUN5(VAR7, VAR3);
        if (VAR18)
        {
            VAR7->VAR11 &= ~VAR12;
            assert(!!VAR7->VAR20 == !!(VAR7->VAR11 & VAR21));
            if ((VAR16[VAR3].VAR22 & VAR23) && !VAR7->VAR20)
            {
                VAR7->VAR11 |= VAR24;
            }
            FUN6(VAR7->VAR2);
        }
        return;
    }
    switch (VAR3)
    {
    case VAR25:
        if (!VAR7->VAR10)
            goto VAR15;
        switch (VAR7->VAR26)
        {
        case 0x02:
            FUN7(VAR7->VAR10, true);
            VAR5 = (VAR4 *)VAR7->VAR5;
            FUN8(VAR5 + 85, (1 << 14) | (1 << 5) | 1);
            VAR7->VAR11 = VAR19 | VAR24;
            FUN6(VAR7->VAR2);
            break;
        case 0x82:
            FUN7(VAR7->VAR10, false);
            VAR5 = (VAR4 *)VAR7->VAR5;
            FUN8(VAR5 + 85, (1 << 14) | 1);
            FUN9(VAR7);
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
            VAR7->VAR11 = VAR19 | VAR24;
            FUN6(VAR7->VAR2);
            break;
        case 0x03:
        {
            uint8_t VAR3 = VAR7->VAR27 & 0x07;
            VAR5 = (VAR4 *)VAR7->VAR5;
            switch (VAR7->VAR27 >> 3)
            {
            case 0x00:
            case 0x01:
                FUN8(VAR5 + 62, 0x07);
                FUN8(VAR5 + 63, 0x07);
                FUN8(VAR5 + 88, 0x3f);
                break;
            case 0x02:
                FUN8(VAR5 + 62, 0x07 | (1 << (VAR3 + 8)));
                FUN8(VAR5 + 63, 0x07);
                FUN8(VAR5 + 88, 0x3f);
                break;
            case 0x04:
                FUN8(VAR5 + 62, 0x07);
                FUN8(VAR5 + 63, 0x07 | (1 << (VAR3 + 8)));
                FUN8(VAR5 + 88, 0x3f);
                break;
            case 0x08:
                FUN8(VAR5 + 62, 0x07);
                FUN8(VAR5 + 63, 0x07);
                FUN8(VAR5 + 88, 0x3f | (1 << (VAR3 + 8)));
                break;
            default:
                goto VAR15;
            }
            VAR7->VAR11 = VAR19 | VAR24;
            FUN6(VAR7->VAR2);
            break;
        }
        default:
            goto VAR15;
        }
        break;
    case VAR28:
    case VAR29:
        FUN9(VAR7);
        break;
    case VAR30:
        VAR7->VAR11 = VAR19 | VAR24;
        FUN6(VAR7->VAR2);
        break;
    case VAR31:
        FUN10(VAR7);
        VAR7->VAR11 = VAR19 | VAR24;
        FUN11(VAR7, VAR7->VAR32, 512, VAR33);
        FUN6(VAR7->VAR2);
        break;
    case VAR34:
        FUN12(VAR7);
        if (VAR7->VAR35 == VAR36)
            VAR7->VAR11 = 0;
        else
            VAR7->VAR11 = VAR19 | VAR24;
        VAR7->VAR20 = 0x01;
        FUN6(VAR7->VAR2);
        break;
    case VAR14:
        FUN12(VAR7);
        VAR7->VAR11 = 0x00;
        VAR7->VAR20 = 0x01;
        break;
    case VAR37:
        if (VAR7->VAR26 & 0x02)
            goto VAR15;
        VAR7->VAR11 = VAR19 | VAR24;
        VAR7->VAR38 = VAR7->VAR26 & 1;
        VAR7->VAR27 = 1;
        FUN11(VAR7, VAR7->VAR32, VAR39, VAR40);
        break;
    case VAR41:
        VAR7->VAR20 = 0x09;
        VAR7->VAR11 = VAR19 | VAR24;
        FUN6(VAR7->VAR2);
        break;
    case VAR42:
    case VAR43:
    case VAR44:
        if (VAR3 == VAR43)
            VAR7->VAR27 = 0;
        if (VAR3 == VAR42)
            VAR7->VAR45 = 1;
        VAR7->VAR20 = 0x00;
        VAR7->VAR11 = VAR19 | VAR24;
        FUN6(VAR7->VAR2);
        break;
    case VAR46:
        VAR7->VAR20 = 0x00;
        VAR7->VAR11 = VAR19 | VAR24;
        memset(VAR7->VAR32, 0, 0x200);
        VAR7->VAR32[0x00] = VAR7->VAR47;
        VAR7->VAR32[0x01] = VAR7->VAR48;
        VAR7->VAR32[0x02] = VAR7->VAR49;
        VAR7->VAR32[0x03] = VAR7->VAR50;
        VAR7->VAR32[0x04] = FUN13(VAR7) >> 16;
        VAR7->VAR32[0x05] = FUN13(VAR7) >> 8;
        VAR7->VAR32[0x06] = FUN13(VAR7) >> 0;
        VAR7->VAR32[0x13] = 0x00;
        VAR7->VAR32[0x18] = 0x00;
        VAR7->VAR32[0x19] = 0x00;
        VAR7->VAR32[0x1a] = 0x01;
        FUN11(VAR7, VAR7->VAR32, 0x200, VAR33);
        FUN6(VAR7->VAR2);
        break;
    case VAR51:
        switch (VAR7->VAR26)
        {
        case 0x02:
            FUN14(VAR7);
            break;
        case 0x03:
            FUN15(VAR7);
            break;
        case 0x04:
            FUN16(VAR7);
            break;
        default:
            goto VAR15;
        }
        FUN11(VAR7, VAR7->VAR32, 0x200, VAR33);
        VAR7->VAR11 = 0x00;
        FUN6(VAR7->VAR2);
        break;
    case VAR52:
        switch (VAR7->VAR26)
        {
        case 0x01:
            VAR7->VAR27 = 0x50;
            break;
        default:
            goto VAR15;
        }
        VAR7->VAR11 = VAR19 | VAR24;
        FUN6(VAR7->VAR2);
        break;
    case VAR53:
        if (VAR7->VAR47 != 0xc2 || VAR7->VAR48 != 0x4f)
            goto VAR15;
        if (!VAR7->VAR54 && VAR7->VAR26 != VAR55)
            goto VAR15;
        switch (VAR7->VAR26)
        {
        case VAR56:
            VAR7->VAR54 = 0;
            VAR7->VAR11 = VAR19 | VAR24;
            FUN6(VAR7->VAR2);
            break;
        case VAR55:
            VAR7->VAR54 = 1;
            VAR7->VAR11 = VAR19 | VAR24;
            FUN6(VAR7->VAR2);
            break;
        case VAR57:
            switch (VAR7->VAR50)
            {
            case 0x00:
                VAR7->VAR58 = 0;
                break;
            case 0xf1:
                VAR7->VAR58 = 1;
                break;
            default:
                goto VAR15;
            }
            VAR7->VAR11 = VAR19 | VAR24;
            FUN6(VAR7->VAR2);
            break;
        case VAR59:
            if (!VAR7->VAR60)
            {
                VAR7->VAR47 = 0xc2;
                VAR7->VAR48 = 0x4f;
            }
            else
            {
                VAR7->VAR47 = 0x2c;
                VAR7->VAR48 = 0xf4;
            }
            VAR7->VAR11 = VAR19 | VAR24;
            FUN6(VAR7->VAR2);
            break;
        case VAR61:
            memset(VAR7->VAR32, 0, 0x200);
            VAR7->VAR32[0] = 0x01;
            for (VAR8 = 0; VAR8 < FUN17(VAR62); VAR8++)
            {
                VAR7->VAR32[2 + 0 + (VAR8 * 12)] = VAR62[VAR8][0];
                VAR7->VAR32[2 + 1 + (VAR8 * 12)] = VAR62[VAR8][11];
            }
            for (VAR8 = 0; VAR8 < 511; VAR8++)
                VAR7->VAR32[511] += VAR7->VAR32[VAR8];
            VAR7->VAR32[511] = 0x100 - VAR7->VAR32[511];
            VAR7->VAR11 = VAR19 | VAR24;
            FUN11(VAR7, VAR7->VAR32, 0x200, VAR33);
            FUN6(VAR7->VAR2);
            break;
        case VAR63:
            memset(VAR7->VAR32, 0, 0x200);
            VAR7->VAR32[0] = 0x01;
            for (VAR8 = 0; VAR8 < FUN17(VAR62); VAR8++)
            {
                int VAR64;
                for (VAR64 = 0; VAR64 < 11; VAR64++)
                {
                    VAR7->VAR32[2 + VAR64 + (VAR8 * 12)] = VAR62[VAR8][VAR64];
                }
            }
            VAR7->VAR32[362] = 0x02 | (VAR7->VAR58 ? 0x80 : 0x00);
            if (VAR7->VAR65 == 0)
            {
                VAR7->VAR32[363] = 0;
            }
            else
            {
                VAR7->VAR32[363] = VAR7->VAR66[3 + (VAR7->VAR65 - 1) * 24];
            }
            VAR7->VAR32[364] = 0x20;
            VAR7->VAR32[365] = 0x01;
            VAR7->VAR32[367] = (1 << 4 | 1 << 3 | 1);
            VAR7->VAR32[368] = 0x03;
            VAR7->VAR32[369] = 0x00;
            VAR7->VAR32[370] = 0x01;
            VAR7->VAR32[372] = 0x02;
            VAR7->VAR32[373] = 0x36;
            VAR7->VAR32[374] = 0x01;
            for (VAR8 = 0; VAR8 < 511; VAR8++)
                VAR7->VAR32[511] += VAR7->VAR32[VAR8];
            VAR7->VAR32[511] = 0x100 - VAR7->VAR32[511];
            VAR7->VAR11 = VAR19 | VAR24;
            FUN11(VAR7, VAR7->VAR32, 0x200, VAR33);
            FUN6(VAR7->VAR2);
            break;
        case VAR67:
            switch (VAR7->VAR50)
            {
            case 0x01:
                memset(VAR7->VAR32, 0, 0x200);
                VAR7->VAR32[0] = 0x01;
                VAR7->VAR32[1] = 0x00;
                VAR7->VAR32[452] = VAR7->VAR60 & 0xff;
                VAR7->VAR32[453] = (VAR7->VAR60 & 0xff00) >> 8;
                for (VAR8 = 0; VAR8 < 511; VAR8++)
                    VAR7->VAR32[511] += VAR7->VAR32[VAR8];
                VAR7->VAR32[511] = 0x100 - VAR7->VAR32[511];
                break;
            case 0x06:
                memset(VAR7->VAR32, 0, 0x200);
                VAR7->VAR32[0] = 0x01;
                if (VAR7->VAR65 == 0)
                {
                    VAR7->VAR32[508] = 0;
                }
                else
                {
                    VAR7->VAR32[508] = VAR7->VAR65;
                    for (VAR8 = 2; VAR8 < 506; VAR8++)
                        VAR7->VAR32[VAR8] = VAR7->VAR66[VAR8];
                }
                for (VAR8 = 0; VAR8 < 511; VAR8++)
                    VAR7->VAR32[511] += VAR7->VAR32[VAR8];
                VAR7->VAR32[511] = 0x100 - VAR7->VAR32[511];
                break;
            default:
                goto VAR15;
            }
            VAR7->VAR11 = VAR19 | VAR24;
            FUN11(VAR7, VAR7->VAR32, 0x200, VAR33);
            FUN6(VAR7->VAR2);
            break;
        case VAR68:
            switch (VAR7->VAR50)
            {
            case 0:
            case 1:
            case 2:
                VAR7->VAR65++;
                if (VAR7->VAR65 > 21)
                    VAR7->VAR65 = 0;
                VAR8 = 2 + (VAR7->VAR65 - 1) * 24;
                VAR7->VAR66[VAR8] = VAR7->VAR50;
                VAR7->VAR66[VAR8 + 1] = 0x00;
                VAR7->VAR66[VAR8 + 2] = 0x34;
                VAR7->VAR66[VAR8 + 3] = 0x12;
                VAR7->VAR11 = VAR19 | VAR24;
                FUN6(VAR7->VAR2);
                break;
            default:
                goto VAR15;
            }
            break;
        default:
            goto VAR15;
        }
        break;
    default:
    VAR15:
        FUN18(VAR7);
        FUN6(VAR7->VAR2);
        break;
    }
}