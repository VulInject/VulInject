void FUN1(VAR1 *mutex)
{
    int VAR2;
    pthread_mutexattr_t VAR3;
    pthread_mutexattr_init(&VAR3);
    FUN2(&VAR3, VAR4);
    VAR2 = pthread_mutex_init(&mutex->VAR5, &VAR3);
    pthread_mutexattr_destroy(&VAR3);
    if (VAR2)
        FUN3(VAR2, VAR6);
}