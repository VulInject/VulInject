static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 **VAR6)
{
    VAR7 *VAR8 = FUN2(FUN3(VAR2));
    VAR9 *VAR10 = FUN4(VAR4);
    VAR11 *VAR12;
    VAR13 *VAR14 = FUN5(VAR8, VAR10);
    VAR5 *VAR15 = NULL;
    if (!VAR8->VAR16)
    {
        FUN6(VAR6, VAR17, FUN7(FUN8(VAR8)));
        return;
    }
    FUN9(VAR14);
    VAR12 = FUN10(VAR14);
    if (!VAR12->FUN11(VAR14))
    {
        FUN12(VAR14, VAR8, VAR10, &VAR15);
        if (VAR15)
        {
            FUN13(VAR6, VAR15);
            return;
        }
        FUN14(VAR14);
    }
}