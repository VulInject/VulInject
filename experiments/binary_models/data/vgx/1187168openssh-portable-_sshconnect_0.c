static char *
FUN1(const char *VAR1)
{
char *VAR2, *VAR3 = NULL;
size_t VAR4;

if (*VAR1 != '')
return xstrdup(VAR1);
if ((VAR2 = getenv("")) == NULL || (VAR4 = strlen(VAR2)) == 0)
return xstrdup(VAR1);
if (FUN2(VAR1, VAR2, VAR4) != 0)
return xstrdup(VAR1);

if (VAR2[VAR4 - 1] != '' && VAR1[VAR4] != '')
return xstrdup(VAR1);
if (VAR1[VAR4] == '')
VAR4++;
FUN3(&VAR3, "", VAR1 + VAR4);
return VAR3;
}