static int FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5, int VAR6, VAR7 *VAR8)
{
    VAR9 *VAR10 = (VAR9 *)VAR2;
    int VAR11;
    VAR11 = FUN2(VAR2, VAR3, VAR4, VAR5, VAR6, VAR8);
    if (VAR11 >= 0)
    {
        return VAR11;
    }
    switch (VAR3)
    {
    case VAR12 | VAR13:
        VAR8[0] = (1 << VAR14) | (VAR2->VAR15 << VAR16);
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
    case VAR20 | VAR18:
        if (VAR4 == 0 && VAR5 != 0x81)
        {
            goto VAR19;
        }
        VAR11 = 0;
        break;
    case VAR17 | VAR21:
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
    case VAR12 | VAR22:
        VAR8[0] = 0;
        VAR11 = 1;
        break;
    case VAR17 | VAR23:
        VAR11 = 0;
        break;
    case VAR24:
        VAR8[0] = 0;
        VAR8[1] = 0;
        VAR8[2] = 0;
        VAR8[3] = 0;
        VAR11 = 4;
        break;
    case VAR25:
    {
        unsigned int VAR26 = VAR5 - 1;
        VAR27 *VAR28;
        if (VAR26 >= VAR29)
        {
            goto VAR19;
        }
        VAR28 = &VAR10->VAR30[VAR26];
        VAR8[0] = VAR28->VAR31;
        VAR8[1] = VAR28->VAR31 >> 8;
        VAR8[2] = VAR28->VAR32;
        VAR8[3] = VAR28->VAR32 >> 8;
        VAR11 = 4;
    }
    break;
    case VAR33:
    case VAR34:
        if (VAR4 == 0 || VAR4 == 1)
        {
        }
        else
        {
            goto VAR19;
        }
        VAR11 = 0;
        break;
    case VAR35:
    {
        unsigned int VAR26 = VAR5 - 1;
        VAR27 *VAR28;
        VAR1 *VAR2;
        if (VAR26 >= VAR29)
        {
            goto VAR19;
        }
        VAR28 = &VAR10->VAR30[VAR26];
        VAR2 = VAR28->VAR28.VAR2;
        switch (VAR4)
        {
        case VAR36:
            VAR28->VAR31 |= VAR37;
            break;
        case VAR38:
            if (VAR2)
            {
                FUN3(VAR2, VAR39);
                VAR28->VAR32 |= VAR40;
                VAR28->VAR31 |= VAR41;
            }
            break;
        case VAR42:
            break;
        default:
            goto VAR19;
        }
        VAR11 = 0;
    }
    break;
    case VAR43:
    {
        unsigned int VAR26 = VAR5 - 1;
        VAR27 *VAR28;
        if (VAR26 >= VAR29)
        {
            goto VAR19;
        }
        VAR28 = &VAR10->VAR30[VAR26];
        switch (VAR4)
        {
        case VAR44:
            VAR28->VAR31 &= ~VAR41;
            break;
        case VAR45:
            VAR28->VAR32 &= ~VAR46;
            break;
        case VAR36:
            VAR28->VAR31 &= ~VAR37;
            break;
        case VAR47:
            VAR28->VAR32 &= ~VAR48;
            break;
        case VAR49:
            VAR28->VAR32 &= ~VAR50;
            break;
        case VAR51:
            VAR28->VAR32 &= ~VAR52;
            break;
        case VAR53:
            VAR28->VAR32 &= ~VAR40;
            break;
        default:
            goto VAR19;
        }
        VAR11 = 0;
    }
    break;
    case VAR54:
    {
        unsigned int VAR26, VAR55, VAR56 = 0;
        memcpy(VAR8, VAR57, sizeof(VAR57));
        VAR8[2] = VAR29;
        VAR55 = ((VAR29 + 1 + 7) / 8) + 7;
        for (VAR26 = 7; VAR26 < VAR55; VAR26++)
        {
            VAR8[VAR26] = 0x00;
            VAR56++;
        }
        VAR55 = VAR55 + ((VAR29 + 7) / 8);
        for (; VAR26 < VAR55; VAR26++)
        {
            VAR8[VAR26] = 0xff;
            VAR56++;
        }
        VAR11 = sizeof(VAR57) + VAR56;
        VAR8[0] = VAR11;
        break;
    }
    default:
    VAR19:
        VAR11 = VAR58;
        break;
    }
    return VAR11;
}