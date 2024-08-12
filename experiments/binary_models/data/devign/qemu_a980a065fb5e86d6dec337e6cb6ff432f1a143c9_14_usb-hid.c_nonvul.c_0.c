static int FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5, int VAR6, VAR7 *VAR8)
{
    VAR9 *VAR10 = (VAR9 *)VAR2;
    int VAR11;
    VAR11 = FUN2(VAR2, VAR3, VAR4, VAR5, VAR6, VAR8);
    if (VAR11 >= 0)
    {
        return VAR11;
    }
    VAR11 = 0;
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
    case VAR17 | VAR22:
        VAR11 = 0;
        break;
    case VAR23 | VAR24:
        switch (VAR4 >> 8)
        {
        case 0x22:
            if (VAR10->VAR25 == VAR26)
            {
                memcpy(VAR8, VAR27, sizeof(VAR27));
                VAR11 = sizeof(VAR27);
            }
            else if (VAR10->VAR25 == VAR28)
            {
                memcpy(VAR8, VAR29, sizeof(VAR29));
                VAR11 = sizeof(VAR29);
            }
            else if (VAR10->VAR25 == VAR30)
            {
                memcpy(VAR8, VAR31, sizeof(VAR31));
                VAR11 = sizeof(VAR31);
            }
            break;
        default:
            goto VAR19;
        }
        break;
    case VAR32:
        if (VAR10->VAR25 == VAR26)
            VAR11 = FUN3(VAR10, VAR8, VAR6);
        else if (VAR10->VAR25 == VAR28)
            VAR11 = FUN4(VAR10, VAR8, VAR6);
        else if (VAR10->VAR25 == VAR30)
            VAR11 = FUN5(&VAR10->VAR33, VAR8, VAR6);
        break;
    case VAR34:
        if (VAR10->VAR25 == VAR30)
            VAR11 = FUN6(&VAR10->VAR33, VAR8, VAR6);
        else
            goto VAR19;
        break;
    case VAR35:
        if (VAR10->VAR25 != VAR30)
            goto VAR19;
        VAR11 = 1;
        VAR8[0] = VAR10->VAR36;
        break;
    case VAR37:
        if (VAR10->VAR25 != VAR30)
            goto VAR19;
        VAR11 = 0;
        VAR10->VAR36 = VAR4;
        break;
    case VAR38:
        VAR11 = 1;
        VAR8[0] = VAR10->VAR39;
        break;
    case VAR40:
        VAR10->VAR39 = (VAR7)(VAR4 >> 8);
        FUN7(VAR10, FUN8(VAR41));
        VAR11 = 0;
        break;
    default:
    VAR19:
        VAR11 = VAR42;
        break;
    }
    return VAR11;
}