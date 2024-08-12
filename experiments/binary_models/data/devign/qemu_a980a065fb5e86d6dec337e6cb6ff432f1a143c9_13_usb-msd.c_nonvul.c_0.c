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
    case VAR23 | VAR18:
        VAR11 = 0;
        break;
    case VAR24 | VAR22:
        VAR11 = 0;
        break;
    case VAR25 | VAR26:
        VAR10->VAR27 = VAR28;
        VAR11 = 0;
        break;
    case VAR29 | VAR30:
        VAR8[0] = 0;
        VAR11 = 1;
        break;
    default:
    VAR19:
        VAR11 = VAR31;
        break;
    }
    return VAR11;
}