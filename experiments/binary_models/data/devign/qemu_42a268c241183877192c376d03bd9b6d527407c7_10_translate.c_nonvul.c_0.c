static void FUN1(VAR1 *VAR2, uint32_t VAR3, int VAR4, int VAR5, int16_t VAR6)
{
    int VAR7;
    TCGv VAR8 = FUN2();
    TCGv VAR9 = FUN2();
    VAR7 = 0;
    switch (VAR3)
    {
    case VAR10:
    case VAR11:
    case VAR12:
    case VAR13:
    case VAR14:
    case VAR15:
        if (VAR4 != VAR5)
        {
            FUN3(VAR8, VAR4);
            FUN3(VAR9, VAR5);
            VAR7 = 1;
        }
        break;
    case VAR16:
    case VAR17:
    case VAR18:
    case VAR19:
    case VAR20:
    case VAR21:
        if (VAR4 != 0 || VAR6 != 0)
        {
            FUN3(VAR8, VAR4);
            FUN4(VAR9, (VAR22)VAR6);
            VAR7 = 1;
        }
        break;
    }
    if (VAR7 == 0)
    {
        switch (VAR3)
        {
        case VAR10:
        case VAR16:
        case VAR11:
        case VAR17:
        case VAR12:
        case VAR18:
            FUN5(VAR2, VAR23);
            break;
        case VAR13:
        case VAR19:
        case VAR14:
        case VAR20:
        case VAR15:
        case VAR21:
            break;
        }
    }
    else
    {
        VAR24 *VAR25 = FUN6();
        switch (VAR3)
        {
        case VAR10:
        case VAR16:
            FUN7(VAR26, VAR8, VAR9, VAR25);
            break;
        case VAR11:
        case VAR17:
            FUN7(VAR27, VAR8, VAR9, VAR25);
            break;
        case VAR12:
        case VAR18:
            FUN7(VAR28, VAR8, VAR9, VAR25);
            break;
        case VAR13:
        case VAR19:
            FUN7(VAR29, VAR8, VAR9, VAR25);
            break;
        case VAR14:
        case VAR20:
            FUN7(VAR30, VAR8, VAR9, VAR25);
            break;
        case VAR15:
        case VAR21:
            FUN7(VAR31, VAR8, VAR9, VAR25);
            break;
        }
        FUN5(VAR2, VAR23);
        FUN8(VAR25);
    }
    FUN9(VAR8);
    FUN9(VAR9);
}