static VAR1 *
FUN1(
uint32_t VAR2,
VAR3 *VAR4,
uint32_t VAR5
)
{
VAR1 *VAR6;

VAR6 = (VAR1 *)malloc(sizeof (VAR1));
if (VAR6 != NULL) {
if (pthread_mutex_init(&VAR6->VAR7, NULL) != 0 ||
(VAR6->VAR4 = (VAR3 *)malloc(VAR5)) == NULL) {
free(VAR6);
return (NULL);
}
VAR6->VAR2 = VAR2;
(void) strcpy((char *)VAR6->VAR4, (char *)VAR4);
VAR6->VAR8 = VAR5;

VAR6->VAR9 = VAR10;
}

return (VAR6);
}