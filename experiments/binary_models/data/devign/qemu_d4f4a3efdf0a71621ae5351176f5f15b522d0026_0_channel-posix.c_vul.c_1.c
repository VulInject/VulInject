static VAR1 FUN1(VAR2 *VAR3, const VAR4 *VAR5, GAChannelMethod VAR6)
{
    int VAR7;
    VAR3->VAR6 = VAR6;
    switch (VAR3->VAR6)
    {
    case VAR8:
    {
        int VAR9 = FUN2(VAR5, VAR10 | VAR11 | VAR12);
        if (VAR9 == -1)
        {
            FUN3("", strerror(VAR13));
            FUN4(VAR14);
        }
        VAR7 = FUN5(VAR9, VAR15, VAR16 | VAR17 | VAR18);
        if (VAR7 == -1)
        {
            FUN3("", strerror(VAR13));
            FUN4(VAR14);
        }
        VAR7 = FUN6(VAR3, VAR9);
        if (VAR7)
        {
            FUN3("");
            return false;
        }
        break;
    }
    case VAR19:
    {
        struct termios VAR20;
        int VAR9 = FUN2(VAR5, VAR10 | VAR21 | VAR11);
        if (VAR9 == -1)
        {
            FUN3("", strerror(VAR13));
            FUN4(VAR14);
        }
        FUN7(VAR9, &VAR20);
        VAR20.VAR22 &= ~(VAR23 | VAR24 | VAR25 | VAR26 | VAR27 | VAR28 | VAR29 | VAR30 | VAR31 | VAR32 | VAR33 | VAR34 | VAR35);
        VAR20.VAR36 = 0;
        VAR20.VAR37 = 0;
        VAR20.VAR38 |= VAR39;
        VAR20.VAR40[VAR41] = 1;
        VAR20.VAR40[VAR42] = 0;
        FUN8(VAR9, VAR43);
        FUN9(VAR9, VAR44, &VAR20);
        VAR7 = FUN6(VAR3, VAR9);
        if (VAR7)
        {
            FUN10("");
        }
        break;
    }
    case VAR45:
    {
        VAR46 *VAR47 = NULL;
        int VAR9 = FUN11(VAR5, NULL, strlen(VAR5), &VAR47);
        if (VAR47 != NULL)
        {
            FUN3("", FUN12(VAR47));
            FUN13(VAR47);
            return false;
        }
        FUN14(VAR3, VAR9, true);
        break;
    }
    default:
        FUN3("");
        return false;
    }
    return true;