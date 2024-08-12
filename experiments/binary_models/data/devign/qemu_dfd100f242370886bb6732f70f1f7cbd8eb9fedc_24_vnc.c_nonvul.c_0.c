static VAR1 *FUN1(VAR2 *VAR3, bool VAR4, int VAR5, int VAR6, VAR1 *VAR7)
{
    VAR1 *VAR8;
    VAR9 *VAR10;
    VAR11 *VAR12 = NULL;
    VAR13 *VAR14;
    VAR14 = FUN2(VAR3, &VAR12);
    if (!VAR14)
    {
        FUN3(VAR12);
        return VAR7;
    }
    VAR10 = FUN4(VAR9, 1);
    FUN5(VAR14, FUN6(VAR10), &VAR12);
    FUN7(VAR14);
    if (VAR12)
    {
        FUN8(VAR10);
        FUN3(VAR12);
        return VAR7;
    }
    VAR10->VAR4 = VAR4;
    FUN9(VAR5, VAR6, &VAR10->VAR5, &VAR10->VAR15, &VAR10->VAR16);
    VAR8 = FUN4(VAR1, 1);
    VAR8->VAR17 = VAR10;
    VAR8->VAR18 = VAR7;
    return VAR8;
}