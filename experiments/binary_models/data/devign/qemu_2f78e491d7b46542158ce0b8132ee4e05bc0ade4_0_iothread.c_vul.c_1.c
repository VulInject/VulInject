static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    VAR6->VAR7 = false;
    VAR6->VAR8 = FUN3();
    VAR6->VAR9 = -1;
    FUN4(&VAR6->VAR10);
    FUN5(&VAR6->VAR11);
    FUN6(&VAR6->VAR12, "", VAR13, VAR6, VAR14);
    FUN7(&VAR6->VAR10);
    while (VAR6->VAR9 == -1)
    {
        FUN8(&VAR6->VAR11, &VAR6->VAR10);
    }
    FUN9(&VAR6->VAR10);
}