static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6;
    VAR3 *VAR7 = NULL;
    if (!VAR2->VAR8.VAR9)
    {
        FUN2(VAR2, &VAR7);
        assert(VAR7);
        FUN3(VAR4, VAR7);
        return;
    }
    VAR6 = FUN4(VAR2->VAR8.VAR9);
    if (VAR6->VAR10)
    {
        FUN5(VAR2, VAR4);
    }
    else
    {
        FUN6(VAR2, VAR4);
    }
}