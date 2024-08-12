unsigned FUN1(const VAR1 *VAR2)
{
unsigned VAR3;
pthread_mutex_lock(&VAR4);
{
VAR3 = VAR2->VAR5;
}
pthread_mutex_unlock(&VAR4);
return VAR3;
}