static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6, int *VAR7)
{
    VAR5 *VAR8 = FUN2(VAR6);
    VAR9 *VAR10;
    int VAR11 = sizeof(*VAR8) + VAR12;
    if (!VAR8)
        return FUN3(VAR13);
    VAR10 = FUN4(VAR11);
    if (!VAR10)
    {
        FUN5(&VAR8);
        return FUN3(VAR13);
    }
    VAR4->VAR14 = FUN6(VAR10, VAR11, VAR15, NULL, VAR16);
    if (!VAR4->VAR14)
    {
        FUN5(&VAR8);
        FUN7(&VAR10);
        return FUN3(VAR13);
    }
    FUN8((VAR5 *)VAR10, VAR8);
    FUN5(&VAR8);
    VAR4->VAR10 = VAR10;
    VAR4->VAR11 = sizeof(*VAR8);
    VAR4->VAR17 |= VAR18;
    *VAR7 = 1;
    return 0;
}