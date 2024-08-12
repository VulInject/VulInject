VAR1 *FUN1(const char *VAR2) 
{
VAR1 *VAR3;
int VAR4;

if (VAR2 == NULL)
return NULL;

VAR3 = calloc(1, sizeof(*VAR3));
if (VAR3 == NULL)
return NULL;

VAR3->VAR5 = strdup(VAR2);
if (VAR3->VAR5 == NULL) {
free(VAR3);
return NULL;
}

VAR3->VAR6 = 0;
pthread_mutex_init(&VAR3->VAR7,  NULL);

VAR4 = FUN2(VAR3);
if (VAR4 != 0) {
FUN3(VAR3);
free(VAR3);
return NULL;
}

return VAR3;
}