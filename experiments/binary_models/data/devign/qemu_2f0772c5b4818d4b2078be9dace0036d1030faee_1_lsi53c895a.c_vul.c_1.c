static void FUN1(VAR1 *VAR2, int VAR3, uint8_t VAR4)
{
case VAR5:
    VAR2->VAR6 &= 0xffffff00;
    VAR2->VAR6 |= VAR4;
    break;
case VAR5 + 1:
    VAR2->VAR6 &= 0xffff00ff;
    VAR2->VAR6 |= VAR4 << 8;
    break;
case VAR5 + 2:
    VAR2->VAR6 &= 0xff00ffff;
    VAR2->VAR6 |= VAR4 << 16;
    break;
case VAR5:
    VAR2->VAR6 &= 0xffffff00;
    VAR2->VAR6 |= VAR4;
    break;
case VAR5 + 1:
    VAR2->VAR6 &= 0xffff00ff;
    VAR2->VAR6 |= VAR4 << 8;
    break;
case VAR5 + 2:
    VAR2->VAR6 &= 0xff00ffff;
    VAR2->VAR6 |= VAR4 << 16;
    break;
case VAR5 + 3:
    VAR2->VAR6 &= 0x00ffffff;
    VAR2->VAR6 |= VAR4 << 24;
    break;
    FUN2("", VAR3, VAR4);
    switch (VAR3)
    {
    case 0x00:
        VAR2->VAR7 = VAR4;
        if (VAR4 & VAR8)
        {
            FUN3("");
        }
        break;
    case 0x01:
        VAR2->VAR9 = VAR4 & ~VAR10;
        if (VAR4 & VAR11)
        {
            FUN3("");
        }
        if (VAR4 & VAR12)
        {
            if (!(VAR2->VAR13 & VAR14))
            {
                VAR15 *VAR16;
                FUN4(VAR16, &VAR2->VAR17.VAR18.VAR19, VAR20)
                {
                    VAR21 *VAR22 = VAR16->VAR23;
                    FUN5(VAR22);
                }
                VAR2->VAR13 |= VAR14;
                FUN6(VAR2, VAR24, 0);
            }
        }
        else
        {
            VAR2->VAR13 &= ~VAR14;
        }
        break;
    case 0x02:
        VAR4 &= ~(VAR25 | VAR26);
        VAR2->VAR27 = VAR4;
        break;
    case 0x03:
        VAR2->VAR28 = VAR4;
        break;
    case 0x04:
        VAR2->VAR29 = VAR4;
        break;
    case 0x05:
        VAR2->VAR30 = VAR4;
        break;
    case 0x06:
        if ((VAR4 & 0xf) != (VAR2->VAR31 & 0xf))
            FUN3("");
        VAR2->VAR32 = VAR4 & 0xf;
        break;
    case 0x07:
        break;
    case 0x08:
        VAR2->VAR33 = VAR4;
        break;
    case 0x0a:
    case 0x0b:
        return;
    case 0x0c:
    case 0x0d:
    case 0x0e:
    case 0x0f:
        return;
        FUN7(VAR34, 0x10)
        case 0x14 : VAR2->VAR35 = (VAR2->VAR35 & 0x0f) | (VAR4 & 0xf0);
        if (VAR4 & VAR36)
        {
            FUN8(VAR2, VAR37);
        }
        if (VAR4 & VAR38)
        {
            VAR2->VAR35 &= ~VAR38;
            FUN9(VAR2);
        }
        if (VAR2->VAR39 == 1 && VAR4 & VAR40)
        {
            FUN2("");
            VAR2->VAR39 = 0;
            VAR2->VAR41 = VAR2->VAR42;
            FUN10(VAR2);
        }
        if (VAR4 & VAR43)
        {
            FUN11(VAR2);
        }
        break;
    case 0x16:
        VAR2->VAR44 = VAR4;
        break;
    case 0x17:
        VAR2->VAR45 = VAR4;
        break;
    case 0x1a:
        VAR2->VAR46 = VAR4 & VAR47;
        break;
    case 0x1b:
        VAR2->VAR48 = VAR4 & 0x0f;
        break;
        FUN7(VAR49, 0x1c)
        case 0x21 : if (VAR4 & 7) { FUN3("", VAR4); }
        VAR2->VAR50 = VAR4;
        break;
    case 0x22:
        if (VAR4 & (VAR51 | VAR52))
        {
            FUN3("");
        }
        VAR2->VAR53 = VAR4;
        break;
        FUN12(VAR54, 0x24)
        FUN7(VAR42, 0x28) case 0x2c : VAR2->VAR41 &= 0xffffff00;
        VAR2->VAR41 |= VAR4;
        break;
    case 0x2d:
        VAR2->VAR41 &= 0xffff00ff;
        VAR2->VAR41 |= VAR4 << 8;
        break;
    case 0x2e:
        VAR2->VAR41 &= 0xff00ffff;
        VAR2->VAR41 |= VAR4 << 16;
        break;
    case 0x2f:
        VAR2->VAR41 &= 0x00ffffff;
        VAR2->VAR41 |= VAR4 << 24;
        if ((VAR2->VAR55 & VAR56) == 0 && (VAR2->VAR57 & VAR58) == 0)
            FUN10(VAR2);
        break;
        FUN7(VAR59, 0x30)
        FUN7(VAR60[0], 0x34) case 0x38 : if (VAR4 & (VAR61 | VAR62)) { FUN3(""); }
        VAR2->VAR55 = VAR4;
        break;
    case 0x39:
        VAR2->VAR63 = VAR4;
        FUN9(VAR2);
        break;
    case 0x3a:
        VAR2->VAR64 = VAR4;
        break;
    case 0x3b:
        VAR2->VAR65 = VAR4 & ~(VAR66 | VAR67);
        if ((VAR4 & VAR67) && (VAR2->VAR57 & VAR58) == 0)
            FUN10(VAR2);
        break;
    case 0x40:
        VAR2->VAR68 = VAR4;
        FUN9(VAR2);
        break;
    case 0x41:
        VAR2->VAR69 = VAR4;
        FUN9(VAR2);
        break;
    case 0x47:
        break;
    case 0x48:
        VAR2->VAR70 = VAR4;
        break;
    case 0x49:
        if (VAR4 & 0xf)
        {
            FUN2("");
            FUN6(VAR2, 0, VAR71);
        }
        break;
    case 0x4a:
        VAR2->VAR72 = VAR4;
        break;
    case 0x4b:
        VAR2->VAR73 = VAR4;
        break;
    case 0x4d:
        VAR2->VAR74 = VAR4;
        break;
    case 0x4e:
        if (VAR4 & 1)
        {
            FUN3("");
        }
        VAR2->VAR75 = VAR4;
        break;
    case 0x4f:
        if (VAR4 & 0x41)
        {
            FUN3("");
        }
        VAR2->VAR76 = VAR4;
        break;
    case 0x56:
        VAR2->VAR77 = VAR4;
        break;
    case 0x57:
        VAR2->VAR78 = VAR4;
        break;
        FUN7(VAR79, 0xa0)
        FUN7(VAR80, 0xa4) FUN7(VAR81, 0xa8) FUN7(VAR82, 0xac) FUN7(VAR83, 0xb0) FUN7(VAR84, 0xb4) FUN7(VAR85, 0xb8) FUN7(VAR86, 0xc0) FUN7(VAR87, 0xc4) FUN7(VAR88, 0xc8) FUN7(VAR89, 0xcc) FUN7(VAR90, 0xd4) FUN7(VAR91, 0xd8) FUN7(VAR92, 0xdc) default : if (VAR3 >= 0x5c && VAR3 < 0xa0)
        {
            int VAR93;
            int VAR94;
            VAR93 = (VAR3 - 0x58) >> 2;
            VAR94 = (VAR3 & 3) * 8;
            VAR2->VAR60[VAR93] &= ~(0xff << VAR94);
            VAR2->VAR60[VAR93] |= (VAR4 & 0xff) << VAR94;
        }
        else { FUN3("", VAR3, VAR4); }
    }
}