static bool FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    int64_t VAR8 = VAR6->VAR8;
    if (VAR8 == VAR9 && VAR6->VAR10)
    {
        VAR8 = VAR6->VAR11 ? VAR12 : VAR13;
    }
    *VAR4 = NULL;
    switch (VAR8)
    {
    case VAR9:
        return true;
    case VAR13:
        switch (VAR6->VAR10)
        {
        case 0:
            *VAR4 = VAR14.VAR15;
            break;
        case 13:
            *VAR4 = VAR16;
            break;
        case 30:
            *VAR4 = VAR17;
            break;
        case 31:
            *VAR4 = VAR18;
            break;
        case 32:
            *VAR4 = VAR19;
            break;
        case 40:
            *VAR4 = VAR14.VAR20;
            break;
        case 41:
            *VAR4 = VAR21;
            break;
        case 42:
            *VAR4 = VAR14.VAR22;
            break;
        case 50:
            *VAR4 = VAR14.VAR23;
            break;
        case 51:
            *VAR4 = VAR14.VAR24;
            break;
        case 52:
            *VAR4 = VAR14.VAR25;
            break;
        }
        break;
    case VAR12:
        switch (VAR6->VAR10)
        {
        case 0:
            *VAR4 = VAR14.VAR26;
            break;
        case 30:
            *VAR4 = VAR27;
            break;
        case 31:
            *VAR4 = VAR28;
            break;
        case 32:
            *VAR4 = VAR29;
            break;
        case 40:
            *VAR4 = VAR30;
            break;
        case 41:
            *VAR4 = VAR31;
            break;
        case 42:
            *VAR4 = VAR14.VAR32;
            break;
        case 50:
            *VAR4 = VAR33;
            break;
        case 51:
            *VAR4 = VAR14.VAR34;
            break;
        case 52:
            *VAR4 = VAR14.VAR35;
            break;
        }
        break;
    case VAR36:
        switch (VAR6->VAR10)
        {
        case 0:
            *VAR4 = VAR14.VAR37;
            break;
        case 30:
            *VAR4 = VAR14.VAR38;
            break;
        case 31:
            *VAR4 = VAR14.VAR39;
            break;
        case 32:
            *VAR4 = VAR14.VAR40;
            break;
        case 40:
            *VAR4 = VAR14.VAR41;
            break;
        case 41:
            *VAR4 = VAR14.VAR42;
            break;
        case 42:
            *VAR4 = VAR14.VAR43;
            break;
        case 50:
            *VAR4 = VAR44;
            break;
        case 51:
            *VAR4 = VAR14.VAR45;
            break;
        case 52:
            *VAR4 = VAR14.VAR46;
            break;
        }
        break;
    }
    if (!*VAR4)
    {
        FUN2(VAR2, VAR47, "");
        return false;
    }
    return true;
}