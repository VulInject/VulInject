void FUN1(VAR1 *VAR2, int VAR3)
{
    pthread_mutex_lock(&VAR2->VAR4);
    VAR2->VAR5 = VAR3;
    FUN2(&VAR2->VAR6);
    pthread_mutex_unlock(&VAR2->VAR4);
}