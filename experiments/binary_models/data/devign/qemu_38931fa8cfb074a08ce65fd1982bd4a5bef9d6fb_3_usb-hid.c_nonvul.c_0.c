static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6, int VAR7, int VAR8, VAR9 *VAR10)
{
    VAR11 *VAR12 = FUN2(VAR11, VAR2, VAR2);
    VAR13 *VAR14 = &VAR12->VAR15;
    int VAR16;
    VAR16 = FUN3(VAR2, VAR4, VAR5, VAR6, VAR7, VAR8, VAR10);
    if (VAR16 >= 0)
    {
        return VAR16;
    }
    VAR16 = 0;
    switch (VAR5)
    {
    case VAR17 | VAR18:
        VAR10[0] = 0;
        VAR16 = 1;
        break;
    case VAR19 | VAR20:
        VAR16 = 0;
        break;
    case VAR21 | VAR22:
        switch (VAR6 >> 8)
        {
        case 0x22:
            if (VAR14->VAR23 == VAR24)
            {
                memcpy(VAR10, VAR25, sizeof(VAR25));
                VAR16 = sizeof(VAR25);
            }
            else if (VAR14->VAR23 == VAR26)
            {
                memcpy(VAR10, VAR27, sizeof(VAR27));
                VAR16 = sizeof(VAR27);
            }
            else if (VAR14->VAR23 == VAR28)
            {
                memcpy(VAR10, VAR29, sizeof(VAR29));
                VAR16 = sizeof(VAR29);
            }
            break;
        default:
            goto VAR30;
        }
        break;
    case VAR31:
        if (VAR14->VAR23 == VAR24 || VAR14->VAR23 == VAR26)
        {
            VAR16 = FUN4(VAR14, VAR10, VAR8);
        }
        else if (VAR14->VAR23 == VAR28)
        {
            VAR16 = FUN5(VAR14, VAR10, VAR8);
        }
        break;
    case VAR32:
        if (VAR14->VAR23 == VAR28)
        {
            VAR16 = FUN6(VAR14, VAR10, VAR8);
        }
        else
        {
            goto VAR30;
        }
        break;
    case VAR33:
        if (VAR14->VAR23 != VAR28 && VAR14->VAR23 != VAR24)
        {
            goto VAR30;
        }
        VAR16 = 1;
        VAR10[0] = VAR12->VAR34;
        break;
    case VAR35:
        if (VAR14->VAR23 != VAR28 && VAR14->VAR23 != VAR24)
        {
            goto VAR30;
        }
        VAR16 = 0;
        VAR12->VAR34 = VAR6;
        break;
    case VAR36:
        VAR16 = 1;
        VAR10[0] = VAR12->VAR37;
        break;
    case VAR38:
        VAR12->VAR37 = (VAR9)(VAR6 >> 8);
        FUN7(VAR12, FUN8(VAR39));
        VAR16 = 0;
        break;
    default:
    VAR30:
        VAR16 = VAR40;
        break;
    }
    return VAR16;
}