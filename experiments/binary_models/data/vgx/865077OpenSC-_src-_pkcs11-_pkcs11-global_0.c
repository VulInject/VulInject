VAR1 FUN1(void **mutex)
{
VAR2 *VAR3;

VAR3 = calloc(1, sizeof(*VAR3));
if (VAR3 == NULL)
return VAR4;;
pthread_mutex_init(VAR3, NULL);
*mutex = VAR3;
return VAR5;
}