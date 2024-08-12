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
    case VAR42:
        VAR8 = 16;
        VAR9 = 16 * 2;
        break;
    case VAR43:
    case VAR44:
        VAR8 = 32;
        VAR9 = 8;
        break;
    case VAR45:
        if (VAR2->VAR46 == VAR47)
        {
            VAR8 = 64;
            VAR9 = 64;
        }
    case VAR48:
        if (VAR2->VAR46 == VAR49)
        {
            VAR8 = 4;
            VAR9 = 4;
        }
    case VAR50:
    case VAR51:
    case VAR52:
        if (VAR2->VAR46 == VAR53)
        {
            VAR8 = 4;
            VAR9 = 4;
        }
        break;
    case VAR54:
        if ((VAR2->VAR46 == VAR55) || (VAR2->VAR46 == VAR56))
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
    if (VAR2->VAR46 == VAR57 || VAR2->VAR46 == VAR58)
    {
        VAR8 = FUN2(VAR8, 8);
    }
    *VAR3 = FUN3(*VAR3, VAR8);
    *VAR4 = FUN3(*VAR4, VAR9);
    if (VAR2->VAR46 == VAR59 || VAR2->VAR60)
        *VAR4 += 2;
    for (VAR7 = 0; VAR7 < 4; VAR7++)
        VAR5[VAR7] = VAR61;
}