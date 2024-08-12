int FUN1(VAR1 *VAR2, int VAR3, VAR4 *VAR5)
{
    VAR6 *VAR7 = FUN2(VAR2);
    VAR8 *VAR9 = VAR7->VAR10;
    struct VAR11 *VAR12;
    struct VAR13 *VAR14, **VAR15;
    abi_ulong VAR16;
    int VAR17;
    FUN3(VAR2, VAR3);
    VAR12 = &VAR9->VAR18[VAR3 - 1];
    VAR17 = FUN4();
    VAR16 = VAR19[VAR3 - 1].VAR20;
    if (VAR9->VAR21 && VAR3 == VAR22)
    {
        VAR16 = VAR23;
    }
    if (!VAR17 && VAR16 == VAR23)
    {
        if (VAR3 == VAR24 || VAR3 == VAR25 || VAR3 == VAR26)
        {
            FUN5(FUN6(), VAR27);
            return 0;
        }
        else if (VAR3 != VAR28 && VAR3 != VAR29 && VAR3 != VAR30 && VAR3 != VAR31)
        {
            FUN7(VAR3);
        }
        else
        {
            return 0;
        }
    }
    else if (!VAR17 && VAR16 == VAR32)
    {
        return 0;
    }
    else if (!VAR17 && VAR16 == VAR33)
    {
        FUN7(VAR3);
    }
    else
    {
        VAR15 = &VAR12->VAR34;
        if (VAR3 < VAR35)
        {
            if (!VAR12->VAR36)
                VAR14 = &VAR12->VAR5;
            else
                return 0;
        }
        else
        {
            if (!VAR12->VAR36)
            {
                VAR14 = &VAR12->VAR5;
            }
            else
            {
                VAR14 = FUN8(VAR2);
                if (!VAR14)
                    return -VAR37;
                while (*VAR15 != NULL)
                    VAR15 = &(*VAR15)->VAR38;
            }
        }
        *VAR15 = VAR14;
        VAR14->VAR5 = *VAR5;
        VAR14->VAR38 = NULL;
        VAR12->VAR36 = 1;
        VAR9->VAR39 = 1;
        return 1;
    }
}