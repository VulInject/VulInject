void FUN1(VAR1 *VAR2)
{
    pthread_mutex_lock(&VAR2->VAR3);
    --VAR2->VAR4;
    while (VAR2->VAR4 < 0)
    {
        FUN2(&VAR2->VAR5, &VAR2->VAR3);
    }
    pthread_mutex_unlock(&VAR2->VAR3);
    int VAR6;
    do
    {
        VAR6 = sem_wait(&VAR2->VAR2);
    } while (VAR6 == -1 && VAR7 == VAR8);
    if (VAR6 < 0)
    {
        FUN3(VAR7, VAR9);
    }
}