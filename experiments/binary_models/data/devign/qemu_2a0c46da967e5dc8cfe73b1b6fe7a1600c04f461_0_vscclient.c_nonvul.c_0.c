FUN1(VAR1 *VAR2, GIOCondition VAR3, gpointer VAR4)
{
    int VAR5;
    int VAR6;
    int VAR7;
    uint8_t VAR8[VAR9];
    static uint8_t VAR10[VAR9];
    VReaderStatus VAR11;
    VAR12 *VAR13 = NULL;
    static VSCMsgHeader VAR14;
    VAR15 *VAR16;
    VAR17 *VAR18 = NULL;
    static VAR19 *VAR20;
    static gsize VAR21, VAR22;
    static int VAR23 = VAR24;
    if (VAR23 == VAR24 && VAR22 == 0)
    {
        VAR20 = (VAR19 *)&VAR14;
        VAR22 = sizeof(VAR14);
    }
    if (VAR22 > 0)
    {
        FUN2(VAR2, (VAR19 *)VAR20, VAR22, &VAR21, &VAR18);
        if (VAR18 != NULL)
        {
            FUN3("", VAR18->VAR25);
        }
        VAR20 += VAR21;
        VAR22 -= VAR21;
        if (VAR22 != 0)
        {
            return VAR26;
        }
    }
    if (VAR23 == VAR24)
    {
        VAR14.VAR27 = FUN4(VAR14.VAR27);
        VAR14.VAR28 = FUN4(VAR14.VAR28);
        VAR14.VAR29 = FUN4(VAR14.VAR29);
        if (VAR30)
        {
            FUN5("", VAR14.VAR27, VAR14.VAR28, VAR14.VAR29, VAR14.VAR29);
        }
        switch (VAR14.VAR27)
        {
        case VAR31:
        case VAR32:
        case VAR33:
        case VAR34:
            VAR20 = (VAR19 *)VAR10;
            VAR22 = VAR14.VAR29;
            VAR23 = VAR35;
            return VAR26;
        default:
            fprintf(VAR36, "", VAR14.VAR27);
            return VAR37;
        }
    }
    if (VAR23 == VAR35)
    {
        switch (VAR14.VAR27)
        {
        case VAR31:
            if (VAR30)
            {
                FUN5("");
                FUN6(VAR10, VAR14.VAR29);
            }
            VAR6 = VAR14.VAR29;
            VAR7 = sizeof(VAR8);
            VAR13 = FUN7(VAR14.VAR28);
            VAR11 = FUN8(VAR13, VAR10, VAR6, VAR8, &VAR7);
            if (VAR11 == VAR38)
            {
                VAR14.VAR29 = VAR7;
                if (VAR30)
                {
                    FUN5("");
                    FUN6(VAR8, VAR14.VAR29);
                }
                FUN9(VAR31, VAR14.VAR28, VAR8, VAR7);
            }
            else
            {
                VAR5 = VAR11;
                FUN9(VAR33, VAR14.VAR28, &VAR5, sizeof(VAR39));
            }
            FUN10(VAR13);
            VAR13 = NULL;
            break;
        case VAR32:
            FUN9(VAR40, VAR14.VAR28, NULL, 0);
            break;
        case VAR33:
            VAR16 = (VAR15 *)VAR10;
            if (VAR16->VAR41 == VAR42)
            {
                FUN11(&VAR43);
                if (VAR44)
                {
                    FUN12(VAR44, VAR14.VAR28);
                    FUN10(VAR44);
                    VAR44 = NULL;
                    FUN13(&VAR45);
                }
                FUN14(&VAR43);
                break;
            }
            FUN5("");
            if (VAR16->VAR41 == VAR46)
            {
                FUN11(&VAR43);
                if (VAR44)
                {
                    VAR44 = NULL;
                    FUN13(&VAR45);
                }
                FUN14(&VAR43);
            }
            break;
        case VAR34:
            if (FUN15(&VAR14, (VAR47 *)VAR10) < 0)
            {
                return VAR37;
            }
            break;
        default:
            FUN16();
            return VAR37;
        }
        VAR23 = VAR24;
    }
    return VAR26;
}