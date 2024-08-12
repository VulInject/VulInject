void FUN1(VAR1 *VAR2, int *VAR3, int *VAR4, int VAR5[4])
{
    int VAR6 = 1;
    int VAR7 = 1;
    switch (VAR2->VAR8)
    {
    case VAR9:
    case VAR10:
    case VAR11:
    case VAR12:
    case VAR13:
    case VAR14:
    case VAR15:
    case VAR16:
    case VAR17:
    case VAR18:
    case VAR19:
    case VAR20:
    case VAR21:
    case VAR22:
    case VAR23:
    case VAR24:
    case VAR25:
    case VAR26:
    case VAR27:
    case VAR28:
        VAR6 = 16;
        VAR7 = 16;
        if (VAR2->VAR29 == VAR30 || VAR2->VAR29 == VAR31 || VAR2->VAR29 == VAR32 || VAR2->VAR29 == VAR33 || VAR2->VAR29 == VAR34)
            VAR7 = 32;
        break;
    case VAR35:
    case VAR36:
        VAR6 = 32;
        VAR7 = 8;
        break;
    case VAR37:
        if (VAR2->VAR29 == VAR38)
        {
            VAR6 = 64;
            VAR7 = 64;
        }
    case VAR39:
        if (VAR2->VAR29 == VAR40)
        {
            VAR6 = 4;
            VAR7 = 4;
        }
    case VAR41:
    case VAR42:
    case VAR43:
        if (VAR2->VAR29 == VAR44)
        {
            VAR6 = 4;
            VAR7 = 4;
        }
        break;
    case VAR45:
        if ((VAR2->VAR29 == VAR46) || (VAR2->VAR29 == VAR47))
        {
            VAR6 = 4;
            VAR7 = 4;
        }
        break;
    default:
        VAR6 = 1;
        VAR7 = 1;
        break;
    }
    *VAR3 = FUN2(*VAR3, VAR6);
    *VAR4 = FUN2(*VAR4, VAR7);
    if (VAR2->VAR29 == VAR34 || VAR2->VAR48)
        *VAR4 += 2;
    VAR5[0] = VAR5[1] = VAR5[2] = VAR5[3] = VAR49;
    if (VAR2->VAR29 == VAR38 || VAR2->VAR29 == VAR50 || VAR2->VAR29 == VAR51 || VAR2->VAR29 == VAR52 || VAR2->VAR29 == VAR53)
    {
        VAR5[0] = VAR5[1] = VAR5[2] = 16;
    }