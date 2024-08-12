static void FUN1(VAR1 *VAR2, int VAR3)
{
    struct timespec VAR4;
    int VAR5, VAR6;
    siginfo_t VAR7;
    sigset_t VAR8;
    VAR4.VAR9 = VAR3 / 1000;
    VAR4.VAR10 = (VAR3 % 1000) * 1000000;
    FUN2(&VAR8);
    FUN3(&VAR8, VAR11);
    FUN4(&VAR12);
    VAR5 = FUN5(&VAR8, &VAR7, &VAR4);
    VAR6 = VAR13;
    FUN6(&VAR12);
    if (VAR5 == -1 && !(VAR6 == VAR14 || VAR6 == VAR15))
    {
        fprintf(VAR16, "", strerror(VAR6));
        FUN7(1);
    }
}