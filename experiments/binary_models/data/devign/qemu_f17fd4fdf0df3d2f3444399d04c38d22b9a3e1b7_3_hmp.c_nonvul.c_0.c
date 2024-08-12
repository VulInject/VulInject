void FUN1(VAR1 *VAR2, const VAR3 *VAR4)
{
    const char *VAR5 = FUN2(VAR4, "");
    const char *VAR6 = FUN2(VAR4, "");
    int64_t VAR7 = 0;
    long VAR8 = 0;
    VAR9 *VAR10 = NULL;
    bool VAR11 = false;
    int VAR12, VAR13;
    for (VAR12 = 0; VAR12 < VAR14; VAR12++)
    {
        if (strcmp(VAR5, VAR15[VAR12]) == 0)
        {
            MigrationParameters VAR16 = {0};
            switch (VAR12)
            {
            case VAR17:
                VAR16.VAR18 = true;
                VAR11 = true;
                break;
            case VAR19:
                VAR16.VAR20 = true;
                VAR11 = true;
                break;
            case VAR21:
                VAR16.VAR22 = true;
                VAR11 = true;
                break;
            case VAR23:
                VAR16.VAR24 = true;
                VAR11 = true;
                break;
            case VAR25:
                VAR16.VAR26 = true;
                VAR11 = true;
                break;
            case VAR27:
                VAR16.VAR28 = true;
                VAR16.VAR29 = (char *)VAR6;
                break;
            case VAR30:
                VAR16.VAR31 = true;
                VAR16.VAR32 = (char *)VAR6;
                break;
            case VAR33:
                VAR16.VAR34 = true;
                VAR13 = FUN3(VAR6, NULL, &VAR7);
                if (VAR13 < 0 || (VAR35)VAR7 != VAR7)
                {
                    FUN4(&VAR10, "", VAR6);
                    goto VAR36;
                }
                VAR16.VAR37 = VAR7;
                break;
            case VAR38:
                VAR16.VAR39 = true;
                VAR11 = true;
                break;
            case VAR40:
                VAR16.VAR41 = true;
                VAR11 = true;
                break;
            }
            if (VAR11)
            {
                if (FUN5(VAR6, NULL, 10, &VAR8) < 0)
                {
                    FUN4(&VAR10, "", VAR6);
                    goto VAR36;
                }
                VAR16.VAR42 = VAR8;
                VAR16.VAR43 = VAR8;
                VAR16.VAR44 = VAR8;
                VAR16.VAR45 = VAR8;
                VAR16.VAR46 = VAR8;
                VAR16.VAR47 = VAR8;
                VAR16.VAR48 = VAR8;
            }
            FUN6(&VAR16, &VAR10);
            break;
        }
    }
    if (VAR12 == VAR14)
    {
        FUN4(&VAR10, VAR49, VAR5);
    }
VAR36:
    if (VAR10)
    {
        FUN7(VAR10);
    }
}