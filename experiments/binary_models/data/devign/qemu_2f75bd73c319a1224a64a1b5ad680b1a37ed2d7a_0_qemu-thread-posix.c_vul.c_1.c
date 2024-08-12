void FUN1(VAR1 *VAR2, const char *VAR3, void *(*VAR4)(void *), void *VAR5, int VAR6)
{
    sigset_t VAR7, VAR8;
    int VAR9;
    pthread_attr_t VAR10;
    VAR9 = pthread_attr_init(&VAR10);
    if (VAR9)
    {
        FUN2(VAR9, VAR11);
    }
    if (VAR6 == VAR12)
    {
        VAR9 = FUN3(&VAR10, VAR13);
        if (VAR9)
        {
            FUN2(VAR9, VAR11);
        }
    }
    FUN4(&VAR7);
    FUN5(VAR14, &VAR7, &VAR8);
    VAR9 = FUN6(&VAR2->VAR2, &VAR10, VAR4, VAR5);
    if (VAR9)
        FUN2(VAR9, VAR11);
    if (VAR15)
    {
        FUN7(VAR2, VAR3);
    }
    FUN5(VAR14, &VAR8, NULL);
    pthread_attr_destroy(&VAR10);
}