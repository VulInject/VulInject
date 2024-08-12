void FUN1(VAR1 *VAR2, int *VAR3, int *VAR4, int VAR5[VAR6])
{
    int VAR7;
    int VAR8 = 1;
    int VAR9 = 1;
    switch (VAR2->VAR10)
    {
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
    case VAR29:
    case VAR30:
    case VAR31:
    case VAR32:
    case VAR33:
    case VAR34:
    case VAR35:
    case VAR36:
    case VAR37:
    case VAR38:
    case VAR39:
    case VAR40:
    case VAR41:
        VAR8 = 16;
        VAR9 = 16 * 2;
        break;
    case VAR42:
    case VAR43:
        VAR8 = 32;
        VAR9 = 8;
        break;
    case VAR44:
        if (VAR2->VAR45 == VAR46)
        {
            VAR8 = 64;
            VAR9 = 64;
        }
    case VAR47:
        if (VAR2->VAR45 == VAR48)
        {
            VAR8 = 4;
            VAR9 = 4;
        }
    case VAR49:
    case VAR50:
    case VAR51:
        if (VAR2->VAR45 == VAR52)
        {
            VAR8 = 4;
            VAR9 = 4;
        }
        break;
    case VAR53:
        if ((VAR2->VAR45 == VAR54) || (VAR2->VAR45 == VAR55))
        {
            VAR8 = 4;
            VAR9 = 4;
        }
        break;
    default:
        VAR8 = 1;
        VAR9 = 1;
        break;
    }
    *VAR3 = FUN2(*VAR3, VAR8);
    *VAR4 = FUN2(*VAR4, VAR9);
    if (VAR2->VAR45 == VAR56 || VAR2->VAR57)
        *VAR4 += 2;
    for (VAR7 = 0; VAR7 < VAR6; VAR7++)
        VAR5[VAR7] = VAR58;
    if (VAR2->VAR45 == VAR46 || VAR2->VAR45 == VAR59 || VAR2->VAR45 == VAR60 || VAR2->VAR45 == VAR61 || VAR2->VAR45 == VAR62)
    {
        for (VAR7 = 0; VAR7 < VAR6; VAR7++)
            VAR5[VAR7] = 16;
    }
}