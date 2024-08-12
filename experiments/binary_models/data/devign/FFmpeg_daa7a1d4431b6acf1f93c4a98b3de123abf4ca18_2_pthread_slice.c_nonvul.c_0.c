void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    int VAR6;
    pthread_mutex_lock(&VAR4->VAR7);
    VAR4->VAR8 = 1;
    FUN2(&VAR4->VAR9);
    pthread_mutex_unlock(&VAR4->VAR7);
    for (VAR6 = 0; VAR6 < VAR2->VAR10; VAR6++)
        FUN3(VAR4->VAR11[VAR6], NULL);
    pthread_mutex_destroy(&VAR4->VAR7);
    pthread_cond_destroy(&VAR4->VAR9);
    pthread_cond_destroy(&VAR4->VAR12);
    FUN4(VAR4->VAR11);
    FUN5(&VAR2->VAR5);
}