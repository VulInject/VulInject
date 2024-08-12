static struct VAR1 *FUN1(int VAR2)
{
struct VAR1 *VAR3;
VAR3 = malloc(sizeof(struct VAR1));
VAR3->VAR4 = 1;
VAR3->VAR2 = VAR2;
pthread_mutex_init(&VAR3->VAR5, NULL);

return VAR3;
}