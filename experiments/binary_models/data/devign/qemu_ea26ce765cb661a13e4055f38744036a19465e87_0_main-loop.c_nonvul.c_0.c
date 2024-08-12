static int FUN1(int VAR1)
{
    struct timeval VAR2;
    int VAR3;
    FUN2(&VAR4, &VAR5, &VAR6, &VAR7, &VAR1);
    if (VAR1 > 0)
    {
        FUN3();
    }
    VAR2.VAR8 = VAR1 / 1000;
    VAR2.VAR9 = (VAR1 % 1000) * 1000;
    VAR3 = FUN4(VAR4 + 1, &VAR5, &VAR6, &VAR7, &VAR2);
    if (VAR1 > 0)
    {
        FUN5();
    }
    FUN6(&VAR5, &VAR6, &VAR7, (VAR3 < 0));
    return VAR3;
}