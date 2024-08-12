int
FUN1 (char const *VAR1)
{

size_t VAR2 = strlen (VAR1);
int VAR3 = 0;
if (VAR2 && FUN2 (VAR1[VAR2 - 1]))
{

struct stat VAR4;
VAR3 = FUN3 (VAR1, &VAR4);
if (VAR3 == 0 || VAR5 == VAR6)
{

char *VAR7 = malloc (VAR2);
if (!VAR7)
return -1;
memcpy (VAR7, VAR1, VAR2);
while (VAR2 && FUN2 (VAR7[VAR2 - 1]))
VAR7[--VAR2] = '';
if (VAR2 && (FUN3 (VAR7, &VAR4) || FUN4 (VAR4.VAR8)))
{
free (VAR7);
VAR5 = VAR9;
return -1;
}
free (VAR7);
VAR3 = 0;
}
}
if (!VAR3)
{
if (VAR2 >= 2 && VAR1[VAR2 - 1] == '' && VAR1[VAR2 - 2] == ''
&& (VAR2 == 2 || FUN2 (VAR1[VAR2 - 3])))
{
VAR5 = VAR10; 
return -1;
}
VAR3 = unlink (VAR1);
}
return VAR3;
}