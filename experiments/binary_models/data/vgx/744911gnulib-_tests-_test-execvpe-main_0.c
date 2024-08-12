FUN1 (VAR1, int, (const char *, char * const *, char * const *));



static const char *
FUN2 (const char *VAR2)
{
size_t VAR3 = strlen (VAR2);
char **VAR4;
for (VAR4 = VAR5; *VAR4 != NULL; VAR4++)
{
const char *VAR6 = *VAR4;
if (FUN3 (VAR6, VAR2, VAR3) == 0
&& VAR6[VAR3] == '')
return VAR6;
}
return NULL;
}