static int FUN1 (void)
{
const char *VAR1 = "";
char VAR2 = '';

char *VAR3 = FUN2(VAR1, VAR2, strlen(VAR1));
if (VAR3 == NULL)
return 0;

if (strlen(VAR3) != 2)
return 0;

if (strcmp(VAR3, "") != 0)
return 0;

return 1;
}