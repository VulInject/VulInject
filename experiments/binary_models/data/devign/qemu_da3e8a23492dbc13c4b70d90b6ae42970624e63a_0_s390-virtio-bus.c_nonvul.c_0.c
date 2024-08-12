static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    VAR7 *VAR8 = FUN3(VAR2);
    VAR5 *VAR9 = FUN2(&VAR8->VAR9);
    VAR3 *VAR10 = NULL;
    FUN4(&VAR8->VAR9, VAR6->VAR11, FUN5(FUN6(VAR6)));
    FUN7(VAR9, FUN8(&VAR2->VAR12));
    FUN9(FUN6(VAR9), true, "", &VAR10);
    if (VAR10)
    {
        FUN10(VAR4, VAR10);
        return;
    }
    FUN11(VAR2, FUN12(VAR9));
}