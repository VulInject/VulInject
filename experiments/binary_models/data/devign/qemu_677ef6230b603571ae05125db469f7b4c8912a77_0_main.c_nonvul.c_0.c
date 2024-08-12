void FUN1(void)
{
    FUN2(&VAR1.VAR2.VAR3);
    pthread_mutex_lock(&VAR4);
    FUN3();
}