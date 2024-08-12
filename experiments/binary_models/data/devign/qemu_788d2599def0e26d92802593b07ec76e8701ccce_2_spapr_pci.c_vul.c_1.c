static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 **VAR6)
{
    VAR7 *VAR8 = FUN2(FUN3(VAR2));
    VAR9 *VAR10 = FUN4(VAR4);
    VAR11 *VAR12 = FUN5(VAR8, VAR10);
    VAR5 *VAR13 = NULL;
    if (!VAR8->VAR14)
    {
        if (VAR4->VAR15)
        {
            FUN6(VAR6, VAR16, FUN7(FUN8(VAR8)));
        }
        return;
    }
    FUN9(VAR12);
    FUN10(VAR12, VAR8, VAR10, &VAR13);
    if (VAR13)
    {
        FUN11(VAR6, VAR13);
        return;
    }
    if (VAR4->VAR15)
    {
        FUN12(VAR12);
    }
}