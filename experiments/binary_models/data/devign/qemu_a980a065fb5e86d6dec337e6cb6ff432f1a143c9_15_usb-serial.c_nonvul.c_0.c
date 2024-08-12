static int FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5, int VAR6, VAR7 *VAR8)
{
    VAR9 *VAR10 = (VAR9 *)VAR2;
    int VAR11;
    FUN2("", VAR3, VAR4);
    VAR11 = FUN3(VAR2, VAR3, VAR4, VAR5, VAR6, VAR8);
    if (VAR11 >= 0)
    {
        return VAR11;
    }
    VAR11 = 0;
    switch (VAR3)
    {
    case VAR12 | VAR13:
        VAR8[0] = (0 << VAR14) | (VAR2->VAR15 << VAR16);
        VAR8[1] = 0x00;
        VAR11 = 2;
        break;
    case VAR17 | VAR18:
        if (VAR4 == VAR16)
        {
            VAR2->VAR15 = 0;
        }
        else
        {
            goto VAR19;
        }
        VAR11 = 0;
        break;
    case VAR17 | VAR20:
        if (VAR4 == VAR16)
        {
            VAR2->VAR15 = 1;
        }
        else
        {
            goto VAR19;
        }
        VAR11 = 0;
        break;
    case VAR12 | VAR21:
        VAR8[0] = 0;
        VAR11 = 1;
        break;
    case VAR22 | VAR23:
        VAR11 = 0;
        break;
    case VAR24 | VAR18:
        VAR11 = 0;
        break;
    case VAR25 | VAR26:
        switch (VAR4)
        {
        case VAR27:
            FUN4(VAR10);
            break;
        case VAR28:
            VAR10->VAR29 = 0;
            VAR10->VAR30 = 0;
            break;
        case VAR31:
            break;
        }
        break;
    case VAR25 | VAR32:
    {
        static int VAR33;
        FUN5(VAR10->VAR34, VAR35, &VAR33);
        if (VAR4 & VAR36)
        {
            if (VAR4 & VAR37)
                VAR33 |= VAR38;
            else
                VAR33 &= ~VAR38;
        }
        if (VAR4 & VAR39)
        {
            if (VAR4 & VAR40)
                VAR33 |= VAR41;
            else
                VAR33 &= ~VAR41;
        }
        FUN5(VAR10->VAR34, VAR42, &VAR33);
        break;
    }
    case VAR25 | VAR43:
        break;
    case VAR25 | VAR44:
    {
        static const int VAR45[8] = {0, 4, 2, 1, 3, 5, 6, 7};
        int VAR46 = VAR45[((VAR4 & 0xc000) >> 14) | ((VAR5 & 1) << 2)];
        int VAR47 = VAR4 & 0x3fff;
        if (VAR47 == 1 && VAR46 == 0)
            VAR46 = 4;
        if (VAR47 == 0 && VAR46 == 0)
            VAR47 = 1;
        VAR10->VAR48.VAR49 = (48000000 / 2) / (8 * VAR47 + VAR46);
        FUN5(VAR10->VAR34, VAR50, &VAR10->VAR48);
        break;
    }
    case VAR25 | VAR51:
        switch (VAR4 & VAR52)
        {
        case 0:
            VAR10->VAR48.VAR53 = '';
            break;
        case VAR54:
            VAR10->VAR48.VAR53 = '';
            break;
        case VAR55:
            VAR10->VAR48.VAR53 = '';
            break;
        default:
            FUN2("", VAR4 & VAR52);
            goto VAR19;
        }
        switch (VAR4 & VAR56)
        {
        case VAR57:
            VAR10->VAR48.VAR58 = 1;
            break;
        case VAR59:
            VAR10->VAR48.VAR58 = 2;
            break;
        default:
            FUN2("", VAR4 & VAR56);
            goto VAR19;
        }
        FUN5(VAR10->VAR34, VAR50, &VAR10->VAR48);
        break;
    case VAR60 | VAR61:
        VAR8[0] = FUN6(VAR10) | 1;
        VAR8[1] = 0;
        VAR11 = 2;
        break;
    case VAR25 | VAR62:
        VAR10->VAR63 = VAR4;
        break;
    case VAR25 | VAR64:
        VAR10->VAR65 = VAR4;
        break;
    case VAR25 | VAR66:
        VAR10->VAR67 = VAR4;
        break;
    case VAR60 | VAR68:
        VAR8[0] = VAR10->VAR67;
        VAR11 = 1;
        break;
    default:
    VAR19:
        FUN2("", VAR3, VAR4);
        VAR11 = VAR69;
        break;
    }
    return VAR11;
}