static void FUN1(int VAR1, VAR2 *VAR3, void *VAR4)
{
    int VAR5;
    target_siginfo_t VAR6;
    if (VAR1 == VAR7 || VAR1 == VAR8)
    {
        if (FUN2(VAR1, VAR3, VAR4))
            return;
    }
    VAR5 = FUN3(VAR1);
    if (VAR5 < 1 || VAR5 > VAR9)
        return;
    fprintf(VAR10, "", VAR5);
    FUN4(VAR4);
    FUN5(&VAR6, VAR3);
    if (FUN6(VAR5, &VAR6) == 1)
    {
        FUN7(VAR11, VAR12);
    }
}