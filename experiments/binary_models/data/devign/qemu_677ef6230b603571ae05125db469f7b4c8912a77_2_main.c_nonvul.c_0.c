void FUN1(int VAR1)
{
    FUN2(VAR1);
    if (VAR1)
    {
        VAR2 *VAR3, *VAR4;
        FUN3(VAR3, VAR4)
        {
            if (VAR3 != VAR5)
            {
                FUN4(&VAR6, VAR5, VAR7);
            }
        }
        VAR8 = 0;
        pthread_mutex_init(&VAR9, NULL);
        pthread_mutex_init(&VAR10, NULL);
        pthread_cond_init(&VAR11, NULL);
        pthread_cond_init(&VAR12, NULL);
        FUN5(&VAR13.VAR14.VAR15);
        FUN6(VAR5);
    }
    else
    {
        pthread_mutex_unlock(&VAR9);
        FUN7(&VAR13.VAR14.VAR15);
    }
}