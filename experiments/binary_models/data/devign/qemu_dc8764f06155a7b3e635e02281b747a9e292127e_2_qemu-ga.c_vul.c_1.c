static VAR1 FUN1(void)
{
    struct sigaction VAR2, VAR3;
    int VAR4;
    memset(&VAR2, 0, sizeof(struct VAR5));
    VAR2.VAR6 = VAR7;
    VAR4 = FUN2(VAR8, &VAR2, NULL);
    if (VAR4 == -1)
    {
        FUN3("", strerror(VAR9));
        return false;
    }
    VAR4 = FUN2(VAR10, &VAR2, NULL);
    if (VAR4 == -1)
    {
        FUN3("", strerror(VAR9));
        return false;
    }
    memset(&VAR3, 0, sizeof(struct VAR5));
    VAR3.VAR6 = VAR11;
    VAR3.VAR12 = VAR13;
    VAR4 = FUN2(VAR14, &VAR3, NULL);
    if (VAR4 == -1)
    {
        FUN3("", strerror(VAR9));
    }
    return true;
}