static VAR1 FUN1(VAR2 *VAR3, hwaddr VAR4, const struct VAR5 *VAR6, target_ulong VAR7, VAR8 *VAR9, unsigned *VAR10)
{
    int VAR11;
    const VAR8 *VAR12;
    target_ulong VAR13, VAR14;
    target_ulong VAR15;
    VAR15 = (VAR4 & FUN2(VAR3)) * VAR16;
    VAR12 = FUN3(VAR3, VAR15, VAR16);
    if (!VAR12)
    {
        return -1;
    }
    for (VAR11 = 0; VAR11 < VAR16; VAR11++)
    {
        VAR13 = FUN4(VAR3, VAR12, VAR11);
        VAR14 = FUN5(VAR3, VAR12, VAR11);
        if (FUN6(VAR13, VAR7))
        {
            *VAR10 = FUN7(VAR6, VAR13, VAR14);
            if (*VAR10 == 0)
            {
                continue;
            }
            VAR9->VAR13 = VAR13;
            VAR9->VAR14 = VAR14;
            FUN8(VAR3, VAR12, VAR15, VAR16);
            return VAR15 + VAR11;
        }
    }
    FUN8(VAR3, VAR12, VAR15, VAR16);
    return -1;
}