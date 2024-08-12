int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6, int VAR7, enum dwt_type VAR8, int VAR9, VAR3 *VAR10)
{
    int VAR11;
    VAR2->VAR4 = VAR4;
    VAR2->VAR5 = VAR5;
    VAR2->VAR6 = VAR6;
    VAR2->VAR7 = VAR7;
    VAR2->VAR9 = VAR9;
    VAR2->VAR10 = VAR10 + 8;
    for (VAR11 = VAR9 - 1; VAR11 >= 0; VAR11--)
    {
        int VAR12 = VAR6 >> VAR11;
        int VAR13 = VAR7 << VAR11;
        switch (VAR8)
        {
        case VAR14:
            FUN2(VAR2->VAR15 + VAR11, VAR4, VAR12, VAR13);
            break;
        case VAR16:
            FUN3(VAR2->VAR15 + VAR11, VAR4, VAR12, VAR13);
            break;
        case VAR17:
            FUN4(VAR2->VAR15 + VAR11, VAR4, VAR12, VAR13);
            break;
        case VAR18:
        case VAR19:
            VAR2->VAR15[VAR11].VAR20 = 1;
            break;
        case VAR21:
            FUN5(VAR2->VAR15 + VAR11, VAR4, VAR12, VAR13);
            break;
        default:
            VAR2->VAR15[VAR11].VAR20 = 0;
            break;
        }
    }
    switch (VAR8)
    {
    case VAR14:
        VAR2->VAR22 = VAR23;
        VAR2->VAR24 = (void *)VAR25;
        VAR2->VAR26 = (void *)VAR27;
        VAR2->VAR28 = VAR29;
        VAR2->VAR30 = 7;
        break;
    case VAR16:
        VAR2->VAR22 = VAR31;
        VAR2->VAR24 = (void *)VAR25;
        VAR2->VAR26 = (void *)VAR32;
        VAR2->VAR28 = VAR33;
        VAR2->VAR30 = 3;
        break;
    case VAR17:
        VAR2->VAR22 = VAR34;
        VAR2->VAR24 = (void *)VAR35;
        VAR2->VAR26 = (void *)VAR27;
        VAR2->VAR28 = VAR36;
        VAR2->VAR30 = 7;
        break;
    case VAR18:
    case VAR19:
        VAR2->VAR22 = VAR37;
        VAR2->VAR38 = (void *)VAR39;
        if (VAR8 == VAR18)
            VAR2->VAR28 = VAR40;
        else
            VAR2->VAR28 = VAR41;
        VAR2->VAR30 = 1;
        break;
    case VAR42:
        VAR2->VAR22 = VAR43;
        VAR2->VAR24 = (void *)VAR44;
        VAR2->VAR26 = (void *)VAR45;
        VAR2->VAR28 = VAR46;
        break;
    case VAR21:
        VAR2->VAR22 = VAR47;
        VAR2->VAR24 = (void *)VAR48;
        VAR2->VAR26 = (void *)VAR49;
        VAR2->VAR50 = (void *)VAR51;
        VAR2->VAR52 = (void *)VAR53;
        VAR2->VAR28 = VAR54;
        VAR2->VAR30 = 5;
        break;
    default:
        FUN6(NULL, VAR55, "", VAR8);
        return -1;
    }
    if (VAR56)
        FUN7(VAR2, VAR8);
    return 0;