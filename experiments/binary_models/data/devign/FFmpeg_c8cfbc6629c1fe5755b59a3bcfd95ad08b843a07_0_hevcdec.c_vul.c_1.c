static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    int VAR7;
    int VAR8;
    VAR9 *VAR10;
    VAR11 *VAR12 = VAR2->VAR13;
    if (!VAR6->VAR14)
    {
        VAR7 = FUN2(VAR12, VAR3, 1);
        if (VAR7 < 0)
            return VAR7;
        *VAR4 = VAR7;
        return 0;
    }
    VAR10 = FUN3(VAR6, VAR15, &VAR8);
    if (VAR10 && VAR8 > 0)
    {
        VAR7 = FUN4(VAR12, VAR10, VAR8);
        if (VAR7 < 0)
            return VAR7;
    }
    VAR12->VAR16 = NULL;
    VAR7 = FUN5(VAR12, VAR6->VAR3, VAR6->VAR14);
    if (VAR7 < 0)
        return VAR7;
    if (VAR2->VAR17)
    {
        if (VAR12->VAR16 && (VAR7 = VAR2->VAR17->FUN6(VAR2)) < 0)
        {
            FUN7(VAR2, VAR18, "");
            FUN8(VAR12, VAR12->VAR16, ~0);
            return VAR7;
        }
    }
    else
    {
        if (VAR2->VAR19 & VAR20 && VAR12->VAR21 && VAR12->VAR22.VAR23.VAR24)
        {
            VAR7 = FUN9(VAR12, VAR12->VAR16->VAR25);
            if (VAR7 < 0 && VAR2->VAR19 & VAR26)
            {
                FUN8(VAR12, VAR12->VAR16, ~0);
                return VAR7;
            }
        }
    }
    VAR12->VAR22.VAR23.VAR24 = 0;
    if (VAR12->VAR21)
    {
        FUN7(VAR2, VAR27, "", VAR12->VAR28);
        VAR12->VAR21 = 0;
    }
    if (VAR12->VAR29->VAR30[0])
    {
        FUN10(VAR3, VAR12->VAR29);
        *VAR4 = 1;
    }
    return VAR6->VAR14;
}