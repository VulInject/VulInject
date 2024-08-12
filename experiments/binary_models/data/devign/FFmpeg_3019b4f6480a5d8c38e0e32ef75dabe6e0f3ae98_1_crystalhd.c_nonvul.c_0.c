static inline VAR1 FUN1(VAR2 *VAR3, void *VAR4, int *VAR5)
{
    BC_STATUS VAR6;
    BC_DTS_PROC_OUT VAR7 = {
        .VAR8.VAR9 = VAR3->VAR9,
        .VAR8.VAR10 = VAR3->VAR10,
    };
    VAR11 *VAR12 = VAR3->VAR13;
    HANDLE VAR14 = VAR12->VAR14;
    *VAR5 = 0;
    VAR6 = FUN2(VAR14, VAR15, &VAR7);
    if (VAR6 == VAR16)
    {
        FUN3(VAR3, VAR17, "");
        VAR3->VAR9 = VAR7.VAR8.VAR9;
        VAR3->VAR10 = VAR7.VAR8.VAR10;
        switch (VAR7.VAR8.VAR18)
        {
        case VAR19:
            VAR3->VAR20 = (VAR21){1, 1};
            break;
        case VAR22:
            VAR3->VAR20 = (VAR21){12, 11};
            break;
        case VAR23:
            VAR3->VAR20 = (VAR21){10, 11};
            break;
        case VAR24:
            VAR3->VAR20 = (VAR21){16, 11};
            break;
        case VAR25:
            VAR3->VAR20 = (VAR21){40, 33};
            break;
        case VAR26:
            VAR3->VAR20 = (VAR21){24, 11};
            break;
        case VAR27:
            VAR3->VAR20 = (VAR21){20, 11};
            break;
        case VAR28:
            VAR3->VAR20 = (VAR21){32, 11};
            break;
        case VAR29:
            VAR3->VAR20 = (VAR21){80, 33};
            break;
        case VAR30:
            VAR3->VAR20 = (VAR21){18, 11};
            break;
        case VAR31:
            VAR3->VAR20 = (VAR21){15, 11};
            break;
        case VAR32:
            VAR3->VAR20 = (VAR21){64, 33};
            break;
        case VAR33:
            VAR3->VAR20 = (VAR21){160, 99};
            break;
        case VAR34:
            VAR3->VAR20 = (VAR21){4, 3};
            break;
        case VAR35:
            VAR3->VAR20 = (VAR21){16, 9};
            break;
        case VAR36:
            VAR3->VAR20 = (VAR21){221, 1};
            break;
        }
        return VAR37;
    }
    else if (VAR6 == VAR38)
    {
        int VAR39 = -1;
        if (VAR7.VAR40 & VAR41)
        {
            if (VAR3->VAR42->VAR43 == VAR44 && VAR7.VAR8.VAR45 == 0 && VAR12->VAR46)
            {
                if (!VAR12->VAR46)
                {
                    FUN3(VAR3, VAR17, "");
                }
                FUN4(VAR14, NULL, VAR47);
                return VAR37;
            }
            FUN5(VAR12, &VAR7);
            VAR39 = FUN6(VAR3, &VAR7, VAR4, VAR5);
        }
        else
        {
            FUN3(VAR3, VAR48, ""
                                        "");
            VAR39 = VAR37;
        }
        FUN4(VAR14, NULL, VAR47);
        return VAR39;
    }
    else if (VAR6 == VAR49)
    {
        return VAR37;
    }
    else
    {
        FUN3(VAR3, VAR48, "", VAR6);
        return VAR50;
    }
}