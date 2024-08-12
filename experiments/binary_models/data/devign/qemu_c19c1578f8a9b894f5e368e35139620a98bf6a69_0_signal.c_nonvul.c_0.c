int FUN1(VAR1 *VAR2, int VAR3, VAR4 *VAR5)
{
    VAR6 *VAR7 = FUN2(VAR2);
    VAR8 *VAR9 = VAR7->VAR10;
    struct VAR11 *VAR12;
    struct VAR13 *VAR14, **VAR15;
    FUN3(VAR2, VAR3);
    VAR12 = &VAR9->VAR16[VAR3 - 1];
    VAR15 = &VAR12->VAR17;
    if (VAR3 < VAR18)
    {
        if (!VAR12->VAR19)
            VAR14 = &VAR12->VAR5;
        else
            return 0;
    }
    else
    {
        if (!VAR12->VAR19)
        {
            VAR14 = &VAR12->VAR5;
        }
        else
        {
            VAR14 = FUN4(VAR2);
            if (!VAR14)
                return -VAR20;
            while (*VAR15 != NULL)
                VAR15 = &(*VAR15)->VAR21;
        }
    }
    *VAR15 = VAR14;
    VAR14->VAR5 = *VAR5;
    VAR14->VAR21 = NULL;
    VAR12->VAR19 = 1;
    FUN5(&VAR9->VAR22, 1);
    return 1;
}