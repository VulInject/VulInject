void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5->VAR6;
    int VAR7;
    pthread_mutex_lock(&VAR4->VAR8);
    VAR4->VAR9 = 1;
    FUN2(&VAR4->VAR10);
    for (VAR7 = 0; VAR7 < VAR4->VAR11; VAR7++)
        FUN2(&VAR4->VAR12[VAR7]);
    pthread_mutex_unlock(&VAR4->VAR8);
    for (VAR7 = 0; VAR7 < VAR2->VAR11; VAR7++)
        FUN3(VAR4->VAR13[VAR7], NULL);
    for (VAR7 = 0; VAR7 < VAR4->VAR11; VAR7++)
    {
        pthread_mutex_destroy(&VAR4->VAR14[VAR7]);
        pthread_cond_destroy(&VAR4->VAR12[VAR7]);
    }
    pthread_mutex_destroy(&VAR4->VAR8);
    pthread_cond_destroy(&VAR4->VAR10);
    pthread_cond_destroy(&VAR4->VAR15);
    FUN4(&VAR4->VAR16);
    FUN4(&VAR4->VAR14);
    FUN4(&VAR4->VAR12);
    FUN4(&VAR4->VAR13);
    FUN4(&VAR2->VAR5->VAR6);
}