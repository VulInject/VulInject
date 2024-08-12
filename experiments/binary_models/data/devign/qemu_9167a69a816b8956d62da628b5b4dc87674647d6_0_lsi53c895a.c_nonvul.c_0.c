static VAR1 FUN1(VAR2 *VAR3, int VAR4)
{
    uint8_t VAR5;
case VAR6:
    return VAR3->VAR7 & 0xff;
case VAR6 + 1:
    return (VAR3->VAR7 >> 8) & 0xff;
case VAR6 + 2:
    return (VAR3->VAR7 >> 16) & 0xff;
case VAR6 + 3:
    return (VAR3->VAR7 >> 24) & 0xff;
    FUN2("", VAR4);
    switch (VAR4)
    {
    case 0x00:
        return VAR3->VAR8;
    case 0x01:
        return VAR3->VAR9;
    case 0x02:
        return VAR3->VAR10;
    case 0x03:
        return VAR3->VAR11;
    case 0x04:
        return VAR3->VAR12;
    case 0x05:
        return VAR3->VAR13;
    case 0x06:
        return VAR3->VAR14;
    case 0x07:
        return 0x7f;
    case 0x08:
        return 0x00;
    case 0xa:
        return VAR3->VAR15;
    case 0xb:
        return 0;
    case 0xc:
        VAR5 = VAR3->VAR16 | 0x80;
        if ((VAR3->VAR17 & VAR18) == 0)
            VAR3->VAR16 = 0;
        FUN3(VAR3);
        return VAR5;
    case 0x0d:
        return VAR3->VAR19;
    case 0x0e:
        return VAR3->VAR20;
    case 0x0f:
        return VAR3->VAR9 & VAR21 ? 0 : 2;
        FUN4(VAR22, 0x10)
        case 0x14 : return VAR3->VAR17;
    case 0x16:
        return VAR3->VAR23;
    case 0x17:
        return VAR3->VAR24;
    case 0x18:
        return 0xff;
    case 0x19:
        return 0;
    case 0x1a:
        VAR5 = VAR3->VAR25 | VAR26 | VAR27;
        if (VAR3->VAR17 & VAR28)
        {
            VAR3->VAR17 &= ~VAR28;
            VAR5 |= VAR29;
        }
        return VAR5;
    case 0x1b:
        return VAR3->VAR30;
        FUN4(VAR31, 0x1c)
        case 0x20 : return 0;
    case 0x21:
        return VAR3->VAR32;
    case 0x22:
        return VAR3->VAR33;
    case 0x23:
        return 0;
    case 0x24:
        return VAR3->VAR34 & 0xff;
    case 0x25:
        return (VAR3->VAR34 >> 8) & 0xff;
    case 0x26:
        return (VAR3->VAR34 >> 16) & 0xff;
    case 0x27:
        return VAR3->VAR35;
        FUN4(VAR36, 0x2c)
        FUN4(VAR37, 0x30) FUN4(VAR38[0], 0x34) case 0x38 : return VAR3->VAR39;
    case 0x39:
        return VAR3->VAR40;
    case 0x3b:
        return VAR3->VAR41;
    case 0x40:
        return VAR3->VAR42;
    case 0x41:
        return VAR3->VAR43;
    case 0x42:
        VAR5 = VAR3->VAR44;
        VAR3->VAR44 = 0;
        FUN3(VAR3);
        return VAR5;
    case 0x43:
        VAR5 = VAR3->VAR45;
        VAR3->VAR45 = 0;
        FUN3(VAR3);
        return VAR5;
    case 0x46:
        return 0x0f;
    case 0x47:
        return 0x0f;
    case 0x48:
        return VAR3->VAR46;
    case 0x4a:
        return VAR3->VAR47;
    case 0x4b:
        return VAR3->VAR48;
    case 0x4d:
        return VAR3->VAR49;
    case 0x4e:
        return VAR3->VAR50;
    case 0x4f:
        return VAR3->VAR51;
    case 0x50:
        return VAR3->VAR52;
    case 0x52:
        return 0xe0;
    case 0x56:
        return VAR3->VAR53;
    case 0x57:
        return VAR3->VAR54;
    case 0x58:
        if ((VAR3->VAR20 & VAR55) == VAR56)
            return VAR3->VAR57[0];
        return 0;
    case 0x59:
        return 0;
        FUN4(VAR58, 0xa0)
        FUN4(VAR59, 0xa4) FUN4(VAR60, 0xa8) FUN4(VAR61, 0xac) FUN4(VAR62, 0xb0) FUN4(VAR63, 0xb4) FUN4(VAR64, 0xb8) FUN4(VAR65, 0xc0) FUN4(VAR66, 0xc4) FUN4(VAR67, 0xc8) FUN4(VAR68, 0xcc) FUN4(VAR69, 0xd4) FUN4(VAR70, 0xd8) FUN4(VAR71, 0xdc)
    }
    if (VAR4 >= 0x5c && VAR4 < 0xa0)
    {
        int VAR72;
        int VAR73;
        VAR72 = (VAR4 - 0x58) >> 2;
        VAR73 = (VAR4 & 3) * 8;
        return (VAR3->VAR38[VAR72] >> VAR73) & 0xff;
    }
    FUN5("", VAR4);
    FUN6(1);
}