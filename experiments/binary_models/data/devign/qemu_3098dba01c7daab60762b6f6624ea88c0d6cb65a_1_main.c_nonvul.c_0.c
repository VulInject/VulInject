static inline void FUN1(void)
{
    VAR1 *VAR2;
    pthread_mutex_lock(&VAR3);
    FUN2();
    VAR4 = 1;
    for (VAR2 = VAR5; VAR2; VAR2 = VAR2->VAR6)
    {
        if (VAR2->VAR7)
        {
            VAR4++;
            FUN3(VAR2);
        }
    }
    if (VAR4 > 1)
    {
        FUN4(&VAR8, &VAR3);
    }
}