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
        void *VAR7 = malloc(VAR4->VAR8.VAR9);
        memset(VAR7, VAR4->VAR10, VAR4->VAR8.VAR9);
        if (memcmp(VAR4->VAR11, VAR7, VAR4->VAR8.VAR9))
        {
            FUN3(""
                   "",
                   (long long)VAR4->VAR12, VAR4->VAR8.VAR9);
        }
        free(VAR7);
    }
    if (VAR4->VAR13)
    {
        return;
    }
    if (VAR4->VAR14)
    {
        FUN4(VAR4->VAR11, VAR4->VAR12, VAR4->VAR8.VAR9);
    }
    VAR5 = FUN5(VAR5, VAR4->VAR15);
    FUN6("", &VAR5, VAR4->VAR12, VAR4->VAR8.VAR9, VAR4->VAR8.VAR9, 1, VAR4->VAR16);
    FUN7(VAR4->VAR11);
    free(VAR4);
}