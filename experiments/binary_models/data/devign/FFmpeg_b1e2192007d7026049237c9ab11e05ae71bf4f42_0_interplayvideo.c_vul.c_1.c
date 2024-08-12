static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *VAR12 = VAR2->VAR13;
    VAR14 *VAR15 = VAR3;
    int VAR16;
    if (VAR9 < 2)
        return VAR17;
    VAR12->VAR18 = FUN2(VAR6->VAR3);
    if (VAR9 < VAR12->VAR18 + 2)
        return VAR9;
    if (FUN3(VAR6, VAR19, NULL))
    {
        FUN4(VAR12->VAR20);
        FUN4(VAR12->VAR21);
    }
    VAR12->VAR22 = VAR8 + 2;
    FUN5(&VAR12->VAR23, VAR8 + 2 + VAR12->VAR18, VAR9 - VAR12->VAR18);
    if ((VAR16 = FUN6(VAR2, VAR15, VAR24)) < 0)
        return VAR16;
    if (!VAR12->VAR25)
    {
        int VAR10;
        const VAR7 *VAR26 = FUN3(VAR6, VAR27, &VAR10);
        if (VAR26 && VAR10 == VAR28)
        {
            VAR15->VAR29 = 1;
            memcpy(VAR12->VAR26, VAR26, VAR28);
        }
        else if (VAR26)
        {
            FUN7(VAR2, VAR30, "", VAR10);
        }
    }
    FUN8(VAR12, VAR15);
    *VAR4 = 1;
    FUN4(VAR12->VAR21);
    FUN9(VAR14 *, VAR12->VAR21, VAR12->VAR20);
    if ((VAR16 = FUN10(VAR12->VAR20, VAR15)) < 0)
        return VAR16;
    return VAR9;
}