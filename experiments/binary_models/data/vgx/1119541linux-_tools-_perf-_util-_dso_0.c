void FUN1(struct VAR1 *VAR1)
{
pthread_mutex_lock(&VAR2);
FUN2(VAR1);
pthread_mutex_unlock(&VAR2);
}