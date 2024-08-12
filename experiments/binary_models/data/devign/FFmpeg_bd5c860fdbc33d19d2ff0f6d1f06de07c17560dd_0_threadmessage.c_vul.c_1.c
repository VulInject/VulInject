int FUN1(VAR1 **VAR2, unsigned VAR3, unsigned VAR4)
{
    VAR1 *VAR5;
    int VAR6 = 0;
    if (VAR3 > VAR7 / VAR4)
        return FUN2(VAR8);
    if (!(VAR5 = FUN3(sizeof(*VAR5))))
        return FUN2(VAR9);
    if ((VAR6 = pthread_mutex_init(&VAR5->VAR10, NULL)))
    {
        FUN4(VAR5);
        return FUN2(VAR6);
    }
    if ((VAR6 = pthread_cond_init(&VAR5->VAR11, NULL)))
    {
        pthread_mutex_destroy(&VAR5->VAR10);
        FUN4(VAR5);
        return FUN2(VAR6);
    }
    if (!(VAR5->VAR12 = FUN5(VAR4 * VAR3)))
    {
        pthread_cond_destroy(&VAR5->VAR11);
        pthread_mutex_destroy(&VAR5->VAR10);
        FUN4(VAR5);
        return FUN2(VAR6);
    }
    VAR5->VAR4 = VAR4;
    *VAR2 = VAR5;
    return 0;
    *VAR2 = NULL;
    return FUN2(VAR13);
}