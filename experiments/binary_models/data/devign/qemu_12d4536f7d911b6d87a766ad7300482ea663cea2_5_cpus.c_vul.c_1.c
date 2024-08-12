static void FUN1(VAR1 *VAR2)
{
    struct timespec VAR3 = {0, 0};
    siginfo_t VAR4;
    sigset_t VAR5;
    sigset_t VAR6;
    int VAR7;
    FUN2(&VAR5);
    FUN3(&VAR5, VAR8);
    FUN3(&VAR5, VAR9);
    do
    {
        VAR7 = FUN4(&VAR5, &VAR4, &VAR3);
        if (VAR7 == -1 && !(VAR10 == VAR11 || VAR10 == VAR12))
        {
            FUN5("");
            FUN6(1);
        }
        switch (VAR7)
        {
        case VAR9:
            if (FUN7(VAR2, VAR4.VAR13, VAR4.VAR14))
            {
                FUN8();
            }
            break;
        default:
            break;
        }
        VAR7 = FUN9(&VAR6);
        if (VAR7 == -1)
        {
            FUN5("");
            FUN6(1);
        }
    } while (FUN10(&VAR6, VAR8) || FUN10(&VAR6, VAR9));
    if (FUN10(&VAR6, VAR15) || FUN10(&VAR6, VAR16))
    {
        FUN11();
    }
}