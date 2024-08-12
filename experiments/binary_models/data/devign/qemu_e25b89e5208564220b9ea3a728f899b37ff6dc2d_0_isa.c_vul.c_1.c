VAR1 *FUN1(VAR2 *VAR3, int VAR4, int VAR5, int VAR6, VAR7 *VAR8, VAR7 *VAR9)
{
    VAR10 *VAR11;
    VAR1 *VAR12;
    VAR13 *VAR14;
    VAR12 = FUN2(VAR3, VAR15);
    VAR11 = FUN3(VAR12);
    FUN4(VAR11, "", VAR4);
    FUN4(VAR11, "", VAR5);
    FUN4(VAR11, "", VAR6);
    if (FUN5(VAR11) < 0)
    {
        return NULL;
    }
    VAR14 = FUN6(VAR11);
    if (VAR8)
    {
        FUN7(&VAR14->VAR3, 0, VAR8);
    }
    if (VAR9)
    {
        FUN7(&VAR14->VAR3, 1, VAR9);
    }
    return VAR12;
}