void FUN1(VAR1 *VAR2, int *VAR3, int *VAR4)
{
    int VAR5 = 1;
    int VAR6 = 1;
    switch (VAR2->VAR7)
    {
    case VAR8:
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
        VAR5 = 16;
        VAR6 = 16;
        break;
    case VAR20:
    case VAR21:
        VAR5 = 32;
        VAR6 = 8;
        break;
    case VAR22:
        if (VAR2->VAR23 == VAR24)
        {
            VAR5 = 64;
            VAR6 = 64;
        }
    case VAR25:
        if (VAR2->VAR23 == VAR26)
        {
            VAR5 = 4;
            VAR6 = 4;
        }
    case VAR27:
    case VAR28:
    case VAR29:
        if (VAR2->VAR23 == VAR30)
        {
            VAR5 = 4;
            VAR6 = 4;
        }
        break;
    case VAR31:
        if ((VAR2->VAR23 == VAR32) || (VAR2->VAR23 == VAR33))
        {
            VAR5 = 4;
            VAR6 = 4;
        }
        break;
    default:
        VAR5 = 1;
        VAR6 = 1;
        break;
    }
    *VAR3 = FUN2(*VAR3, VAR5);
    *VAR4 = FUN2(*VAR4, VAR6);
    if (VAR2->VAR23 == VAR34)
        *VAR4 += 2;