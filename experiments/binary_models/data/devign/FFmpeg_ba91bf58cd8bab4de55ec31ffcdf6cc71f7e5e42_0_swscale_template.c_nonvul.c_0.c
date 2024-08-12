static void FUN1(VAR1)(VAR2 *VAR3)
{
    enum PixelFormat VAR4 = VAR3->VAR4;
    if (!(VAR3->VAR5 & VAR6))
    {
        if (VAR3->VAR5 & VAR7)
        {
            VAR3->VAR8 = FUN1(VAR9);
            VAR3->VAR10 = FUN1(VAR11);
            switch (VAR3->VAR12)
            {
            case VAR13:
                VAR3->VAR14 = FUN1(VAR15);
                break;
            case VAR16:
                VAR3->VAR14 = FUN1(VAR17);
                break;
            case VAR18:
                VAR3->VAR14 = FUN1(VAR19);
                break;
            case VAR20:
                VAR3->VAR14 = FUN1(VAR21);
                break;
            case VAR22:
                VAR3->VAR14 = FUN1(VAR23);
                break;
            default:
                break;
            }
        }
        else
        {
            int VAR24 = FUN2(VAR3->VAR4) || FUN3(VAR3->VAR4);
            VAR3->VAR8 = VAR24 ? FUN1(VAR9) : FUN1(VAR8);
            VAR3->VAR10 = FUN1(VAR10);
            switch (VAR3->VAR12)
            {
            case VAR13:
                VAR3->VAR14 = FUN1(VAR25);
                break;
            case VAR16:
                VAR3->VAR14 = FUN1(VAR26);
                break;
            case VAR18:
                VAR3->VAR14 = FUN1(VAR27);
                break;
            case VAR20:
                VAR3->VAR14 = FUN1(VAR28);
                break;
            case VAR22:
                VAR3->VAR14 = FUN1(VAR29);
                break;
            default:
                break;
            }
        }
        switch (VAR3->VAR12)
        {
        case VAR13:
            VAR3->VAR30 = FUN1(VAR31);
            VAR3->VAR32 = FUN1(VAR33);
            break;
        case VAR16:
            VAR3->VAR30 = FUN1(VAR34);
            VAR3->VAR32 = FUN1(VAR35);
            break;
        case VAR18:
            VAR3->VAR30 = FUN1(VAR36);
            VAR3->VAR32 = FUN1(VAR37);
            break;
        case VAR20:
            VAR3->VAR30 = FUN1(VAR38);
            VAR3->VAR32 = FUN1(VAR39);
            break;
        case VAR22:
            VAR3->VAR30 = FUN1(VAR40);
            VAR3->VAR32 = FUN1(VAR41);
            break;
        default:
            break;
        }
    }
    VAR3->VAR42 = FUN1(VAR42);
    if (VAR3->VAR5 & VAR43 && VAR3->VAR44)
    {
        VAR3->VAR45 = FUN1(VAR45);
        VAR3->VAR46 = FUN1(VAR46);
    }
    else
    {
        VAR3->VAR45 = NULL;
        VAR3->VAR46 = NULL;
    }
    switch (VAR4)
    {
    case VAR22:
        VAR3->VAR47 = FUN1(VAR48);
        break;
    case VAR49:
        VAR3->VAR47 = FUN1(VAR50);
        break;
    case VAR51:
        VAR3->VAR47 = FUN1(VAR52);
        break;
    case VAR53:
        VAR3->VAR47 = FUN1(VAR54);
        break;
    case VAR55:
    case VAR56:
    case VAR57:
    case VAR58:
    case VAR59:
    case VAR60:
    case VAR61:
        VAR3->VAR62 = FUN1(VAR62);
        break;
    }
    if (!VAR3->VAR63)
    {
        switch (VAR4)
        {
        case VAR16:
            VAR3->VAR47 = FUN1(VAR64);
            break;
        case VAR65:
            VAR3->VAR47 = FUN1(VAR66);
            break;
        default:
            break;
        }
    }
    switch (VAR4)
    {
    case VAR22:
    case VAR67:
        VAR3->VAR68 = FUN1(VAR69);
        break;
    case VAR49:
        VAR3->VAR68 = FUN1(VAR70);
        break;
    case VAR16:
        VAR3->VAR68 = FUN1(VAR71);
        break;
    case VAR65:
        VAR3->VAR68 = FUN1(VAR72);
        break;
    default:
        break;
    }
    if (VAR3->VAR73)
    {
        switch (VAR4)
        {
        case VAR67:
            VAR3->VAR74 = FUN1(VAR69);
            break;
        default:
            break;
        }
    }
    if (FUN4(VAR3->VAR4))
        VAR3->VAR62 = FUN1(VAR62);
}