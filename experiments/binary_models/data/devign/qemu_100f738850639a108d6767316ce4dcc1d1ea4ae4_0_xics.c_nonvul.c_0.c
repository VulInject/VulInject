static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    VAR7 *VAR8 = FUN3(VAR2);
    VAR9 *VAR10;
    VAR3 *VAR11 = NULL;
    VAR10 = FUN4(FUN5(VAR2), VAR12, &VAR11);
    if (!VAR10)
    {
        FUN6(VAR4, "" VAR12 "", VAR13, FUN7(VAR11));
        return;
    }
    VAR8->VAR14 = FUN8(VAR10);
    if (VAR6->VAR15)
    {
        VAR6->FUN9(VAR8, VAR4);
    }
}