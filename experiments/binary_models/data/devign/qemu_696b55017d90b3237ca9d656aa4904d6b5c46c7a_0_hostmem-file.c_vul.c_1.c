FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    if (!VAR2->VAR7)
    {
        FUN3(VAR4, "");
        return;
    }
    if (!VAR6->VAR8)
    {
        FUN3(VAR4, "");
        return;
    }
    FUN3(VAR4, "");
    if (!FUN4(&VAR2->VAR9))
    {
        VAR2->VAR10 = VAR11;
        FUN5(&VAR2->VAR9, FUN6(VAR2), FUN7(FUN6(VAR2)), VAR2->VAR7, VAR6->VAR12, VAR6->VAR8, VAR4);
    }
}