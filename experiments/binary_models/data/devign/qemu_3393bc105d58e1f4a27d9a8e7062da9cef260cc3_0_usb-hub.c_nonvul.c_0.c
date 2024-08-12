static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6, int VAR7, int VAR8, VAR9 *VAR10)
{
    VAR11 *VAR12 = (VAR11 *)VAR2;
    int VAR13;
    VAR13 = FUN2(VAR2, VAR4, VAR5, VAR6, VAR7, VAR8, VAR10);
    if (VAR13 >= 0)
    {
        return VAR13;
    }
    switch (VAR5)
    {
    case VAR14 | VAR15:
        if (VAR6 == 0 && VAR7 != 0x81)
        {
            goto VAR16;
        }
        VAR13 = 0;
        break;
    case VAR17 | VAR18:
        VAR10[0] = 0;
        VAR13 = 1;
        break;
    case VAR19 | VAR20:
        VAR13 = 0;
        break;
    case VAR21:
        VAR10[0] = 0;
        VAR10[1] = 0;
        VAR10[2] = 0;
        VAR10[3] = 0;
        VAR13 = 4;
        break;
    case VAR22:
    {
        unsigned int VAR23 = VAR7 - 1;
        VAR24 *VAR25;
        if (VAR23 >= VAR26)
        {
            goto VAR16;
        }
        VAR25 = &VAR12->VAR27[VAR23];
        VAR10[0] = VAR25->VAR28;
        VAR10[1] = VAR25->VAR28 >> 8;
        VAR10[2] = VAR25->VAR29;
        VAR10[3] = VAR25->VAR29 >> 8;
        VAR13 = 4;
    }
    break;
    case VAR30:
    case VAR31:
        if (VAR6 == 0 || VAR6 == 1)
        {
        }
        else
        {
            goto VAR16;
        }
        VAR13 = 0;
        break;
    case VAR32:
    {
        unsigned int VAR23 = VAR7 - 1;
        VAR24 *VAR25;
        VAR1 *VAR2;
        if (VAR23 >= VAR26)
        {
            goto VAR16;
        }
        VAR25 = &VAR12->VAR27[VAR23];
        VAR2 = VAR25->VAR25.VAR2;
        switch (VAR6)
        {
        case VAR33:
            VAR25->VAR28 |= VAR34;
            break;
        case VAR35:
            if (VAR2 && VAR2->VAR36)
            {
                FUN3(VAR2, VAR37);
                VAR25->VAR29 |= VAR38;
                VAR25->VAR28 |= VAR39;
            }
            break;
        case VAR40:
            break;
        default:
            goto VAR16;
        }
        VAR13 = 0;
    }
    break;
    case VAR41:
    {
        unsigned int VAR23 = VAR7 - 1;
        VAR24 *VAR25;
        if (VAR23 >= VAR26)
        {
            goto VAR16;
        }
        VAR25 = &VAR12->VAR27[VAR23];
        switch (VAR6)
        {
        case VAR42:
            VAR25->VAR28 &= ~VAR39;
            break;
        case VAR43:
            VAR25->VAR29 &= ~VAR44;
            break;
        case VAR33:
            VAR25->VAR28 &= ~VAR34;
            break;
        case VAR45:
            VAR25->VAR29 &= ~VAR46;
            break;
        case VAR47:
            VAR25->VAR29 &= ~VAR48;
            break;
        case VAR49:
            VAR25->VAR29 &= ~VAR50;
            break;
        case VAR51:
            VAR25->VAR29 &= ~VAR38;
            break;
        default:
            goto VAR16;
        }
        VAR13 = 0;
    }
    break;
    case VAR52:
    {
        unsigned int VAR23, VAR53, VAR54 = 0;
        memcpy(VAR10, VAR55, sizeof(VAR55));
        VAR10[2] = VAR26;
        VAR53 = ((VAR26 + 1 + 7) / 8) + 7;
        for (VAR23 = 7; VAR23 < VAR53; VAR23++)
        {
            VAR10[VAR23] = 0x00;
            VAR54++;
        }
        VAR53 = VAR53 + ((VAR26 + 7) / 8);
        for (; VAR23 < VAR53; VAR23++)
        {
            VAR10[VAR23] = 0xff;
            VAR54++;
        }
        VAR13 = sizeof(VAR55) + VAR54;
        VAR10[0] = VAR13;
        break;
    }
    default:
    VAR16:
        VAR13 = VAR56;
        break;
    }
    return VAR13;
}