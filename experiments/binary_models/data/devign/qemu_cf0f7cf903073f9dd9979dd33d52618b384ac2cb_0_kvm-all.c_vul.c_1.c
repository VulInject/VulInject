void FUN1(VAR1 *VAR2)
{
    int VAR3;
    sigset_t VAR4;
    struct sigaction VAR5;
    memset(&VAR5, 0, sizeof(VAR5));
    VAR5.VAR6 = VAR7;
    FUN2(VAR8, &VAR5, NULL);
    FUN3(VAR9, NULL, &VAR4);
    FUN4(&VAR4, VAR10);
    FUN3(VAR11, &VAR4, NULL);
    FUN4(&VAR4, VAR8);
    VAR3 = FUN5(VAR2, &VAR4);
    if (VAR3)
    {
        fprintf(VAR12, "", strerror(-VAR3));
        FUN6(1);
    }
}