static char *FUN1(void *VAR1) {
char *VAR2 = NULL;

if (!VAR1)
return (NULL);
FUN2(VAR1, VAR3, 0, (void *) &VAR2);
return (VAR2);
}