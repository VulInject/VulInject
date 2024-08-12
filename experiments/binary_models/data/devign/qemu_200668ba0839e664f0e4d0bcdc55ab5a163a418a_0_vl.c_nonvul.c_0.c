void FUN1(int VAR1)
{
    fd_set VAR2, VAR3, VAR4;
    int VAR5, VAR6;
    struct timeval VAR7;
    int VAR8;
    if (VAR1)
        VAR8 = 0;
    else
    {
        VAR8 = FUN2();
        FUN3(&VAR8);
    }
    FUN4(&VAR8);
    VAR7.VAR9 = VAR8 / 1000;
    VAR7.VAR10 = (VAR8 % 1000) * 1000;
    VAR6 = -1;
    FUN5(&VAR2);
    FUN5(&VAR3);
    FUN5(&VAR4);
    FUN6(&VAR6, &VAR2, &VAR3, &VAR4);
    FUN7(&VAR6, &VAR2, &VAR3, &VAR4);
    if (VAR8 > 0)
    {
        FUN8();
    }
    VAR5 = FUN9(VAR6 + 1, &VAR2, &VAR3, &VAR4, &VAR7);
    if (VAR8 > 0)
    {
        FUN10();
    }
    FUN11(&VAR2, &VAR3, &VAR4, VAR5);
    FUN12(&VAR2, &VAR3, &VAR4, (VAR5 < 0));
    FUN13();
    FUN14();
}