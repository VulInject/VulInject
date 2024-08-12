static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *VAR12 = VAR2->VAR13;
    int VAR14;
    VAR12->VAR8 = VAR8;
    VAR12->VAR10 = VAR9;
    if ((VAR14 = FUN2(VAR2, VAR12->VAR15)) < 0)
        return VAR14;
    if (VAR12->VAR16)
    {
        int VAR10;
        const VAR7 *VAR17 = FUN3(VAR6, VAR18, &VAR10);
        if (VAR17 && VAR10 == VAR19)
        {
            memcpy(VAR12->VAR17, VAR17, VAR19);
            VAR12->VAR15->VAR20 = 1;
        }
        else if (VAR17)
        {
            FUN4(VAR2, VAR21, "", VAR10);
        }
    }
    if (VAR12->VAR16)
        FUN5(VAR12);
    else
        FUN6(VAR12);
    if ((VAR14 = FUN7(VAR3, VAR12->VAR15)) < 0)
        return VAR14;
    *VAR4 = 1;
    return VAR9;
}