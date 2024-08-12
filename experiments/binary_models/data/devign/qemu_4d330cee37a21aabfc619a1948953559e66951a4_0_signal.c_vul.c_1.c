static void FUN1(int VAR1, VAR2 *VAR3, void *VAR4)
{
    VAR5 *VAR6 = VAR7->VAR8;
    int VAR9;
    target_siginfo_t VAR10;
    if ((VAR1 == VAR11 || VAR1 == VAR12) && VAR3->VAR13 > 0)
    {
        if (FUN2(VAR1, VAR3, VAR4))
            return;
    }
    VAR9 = FUN3(VAR1);
    if (VAR9 < 1 || VAR9 > VAR14)
        return;
    FUN4(VAR6, VAR1, VAR9);
    FUN5(&VAR10, VAR3);
    if (FUN6(VAR6, VAR9, &VAR10) == 1)
    {
        FUN7(VAR7);
    }