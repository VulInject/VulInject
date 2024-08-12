FUN1(void *VAR1, int VAR2)
{
    struct VAR3 *VAR4 = VAR1;
    struct timeval VAR5;
    FUN2(&VAR5, NULL);
    if (VAR2 < 0)
    {
        FUN3("", strerror(-VAR2));
        return;
    }
    if (VAR4->VAR6)
    {
        return;
    }
    VAR5 = FUN4(VAR5, VAR4->VAR7);
    FUN5("", &VAR5, VAR4->VAR8, VAR4->VAR9.VAR10, VAR4->VAR9.VAR10, 1, VAR4->VAR11);
    FUN6(VAR4->VAR12);
    free(VAR4);
}