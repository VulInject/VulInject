static char *FUN1(const char *VAR1)
{
const char *VAR2 = ":
char *VAR3;
int VAR4;


VAR1 += 1;

VAR4 = strspn(VAR1, "");

if (!(VAR4 == 40 || VAR4 == 64) || VAR1[VAR4] != '')
return NULL; 

VAR3 = strstr(VAR1 + VAR4 + 1, VAR2);
if (!VAR3)
return NULL;

VAR3 = strchr(VAR3 + strlen(VAR2), '');
if (!VAR3 || !*(VAR3 + 1))
return NULL;


return ++VAR3;
}