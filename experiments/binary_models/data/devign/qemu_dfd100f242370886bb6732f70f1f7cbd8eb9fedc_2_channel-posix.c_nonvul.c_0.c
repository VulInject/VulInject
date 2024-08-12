static VAR1 FUN1(VAR2 *VAR3, const VAR4 *VAR5, GAChannelMethod VAR6, int VAR7)
{
    int VAR8;
    VAR3->VAR6 = VAR6;
    switch (VAR3->VAR6)
    {
    case VAR9:
    {
        assert(VAR7 < 0);
        VAR7 = FUN2(VAR5, VAR10 | VAR11 | VAR12);
        if (VAR7 == -1)
        {
            FUN3("", strerror(VAR13));
            return false;
        }
        VAR8 = FUN4(VAR7, VAR14, VAR15 | VAR16 | VAR17);
        if (VAR8 == -1)
        {
            FUN3("", strerror(VAR13));
            close(VAR7);
            return false;
        }
        VAR8 = FUN5(VAR3, VAR7);
        if (VAR8)
        {
            FUN3("");
            close(VAR7);
            return false;
        }
        break;
    }
    case VAR18:
    {
        struct termios VAR19;
        assert(VAR7 < 0);
        VAR7 = FUN2(VAR5, VAR10 | VAR20 | VAR11);
        if (VAR7 == -1)
        {
            FUN3("", strerror(VAR13));
            return false;
        }
        FUN6(VAR7, &VAR19);
        VAR19.VAR21 &= ~(VAR22 | VAR23 | VAR24 | VAR25 | VAR26 | VAR27 | VAR28 | VAR29 | VAR30 | VAR31 | VAR32 | VAR33 | VAR34);
        VAR19.VAR35 = 0;
        VAR19.VAR36 = 0;
        VAR19.VAR37 |= VAR38;
        VAR19.VAR39[VAR40] = 1;
        VAR19.VAR39[VAR41] = 0;
        FUN7(VAR7, VAR42);
        FUN8(VAR7, VAR43, &VAR19);
        VAR8 = FUN5(VAR3, VAR7);
        if (VAR8)
        {
            FUN3("");
            close(VAR7);
            return false;
        }
        break;
    }
    case VAR44:
    {
        if (VAR7 < 0)
        {
            VAR45 *VAR46 = NULL;
            VAR7 = FUN9(VAR5, NULL, strlen(VAR5), &VAR46);
            if (VAR46 != NULL)
            {
                FUN3("", FUN10(VAR46));
                FUN11(VAR46);
                return false;
            }
        }
        FUN12(VAR3, VAR7, true);
        break;
    }
    case VAR47:
    {
        if (VAR7 < 0)
        {
            VAR45 *VAR46 = NULL;
            VAR48 *VAR49;
            char *VAR50;
            VAR50 = FUN13("", VAR5);
            VAR49 = FUN14(VAR50, &VAR46);
            FUN15(VAR50);
            if (VAR46 != NULL)
            {
                FUN3("", FUN10(VAR46));
                FUN11(VAR46);
                return false;
            }
            VAR7 = FUN16(VAR49, &VAR46);
            FUN17(VAR49);
            if (VAR46 != NULL)
            {
                FUN3("", FUN10(VAR46));
                FUN11(VAR46);
                return false;
            }
        }
        FUN12(VAR3, VAR7, true);
        break;
    }
    default:
        FUN3("");
        return false;
    }
    return true;
}