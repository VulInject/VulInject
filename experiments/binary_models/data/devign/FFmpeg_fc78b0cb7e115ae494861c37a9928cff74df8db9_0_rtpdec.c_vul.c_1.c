VAR1 *FUN1(VAR2 *VAR3, VAR4 *VAR5, VAR6 *VAR7, int VAR8, VAR9 *VAR10)
{
    VAR1 *VAR11;
    VAR11 = FUN2(sizeof(VAR1));
    if (!VAR11)
        return NULL;
    VAR11->VAR8 = VAR8;
    VAR11->VAR12 = VAR13;
    VAR11->VAR14 = VAR13;
    VAR11->VAR15 = VAR3;
    VAR11->VAR5 = VAR5;
    VAR11->VAR10 = VAR10;
    FUN3(&VAR11->VAR16, 0);
    if (!strcmp(FUN4(VAR8), ""))
    {
        VAR11->VAR17 = FUN5(VAR11->VAR15);
        if (VAR11->VAR17 == NULL)
        {
            FUN6(VAR11);
            return NULL;
        }
    }
    else
    {
        FUN7(VAR5, 32, 1, 90000);
        switch (VAR5->VAR18->VAR19)
        {
        case VAR20:
        case VAR21:
        case VAR22:
        case VAR23:
        case VAR24:
        case VAR25:
        case VAR26:
            VAR5->VAR27 = VAR28;
            break;
        default:
            if (VAR5->VAR18->VAR29 == VAR30)
            {
                FUN7(VAR5, 32, 1, VAR5->VAR18->VAR31);
            }
            break;
        }
    }
    VAR11->VAR32 = VAR7;
    FUN8(VAR11->VAR33, sizeof(VAR11->VAR33));
    return VAR11;
}