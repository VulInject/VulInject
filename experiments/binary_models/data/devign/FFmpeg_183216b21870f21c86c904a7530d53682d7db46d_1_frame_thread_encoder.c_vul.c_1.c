void FUN1(VAR1 *VAR2)
{
    int VAR3;
    VAR4 *VAR5 = VAR2->VAR6->VAR7;
    pthread_mutex_lock(&VAR5->VAR8);
    VAR5->VAR9 = 1;
    FUN2(&VAR5->VAR10);
    pthread_mutex_unlock(&VAR5->VAR8);
    for (VAR3 = 0; VAR3 < VAR2->VAR11; VAR3++)
    {
        FUN3(VAR5->VAR12[VAR3], NULL);
    }
    pthread_mutex_destroy(&VAR5->VAR8);
    pthread_mutex_destroy(&VAR5->VAR13);
    pthread_mutex_destroy(&VAR5->VAR14);
    pthread_cond_destroy(&VAR5->VAR10);
    pthread_cond_destroy(&VAR5->VAR15);
    FUN4(&VAR5->VAR16);
    FUN5(&VAR2->VAR6->VAR7);
}