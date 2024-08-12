FUN1 (struct VAR1 *VAR2, char *VAR3)
{
static char *VAR4 = 0;
static int VAR5;
char *VAR6;

if (!VAR4)
{
VAR5 = 80;
VAR4 = (char *) xmalloc (VAR5);
}

VAR6 = VAR3;
while (*VAR6 && *VAR6 != '' && *VAR6 != '' && *VAR6 != '')
VAR6++;
if (VAR6 - VAR3 > VAR5 - 1)
{
VAR5 = VAR6 - VAR3 + 1;
FUN2 (VAR4);
VAR4 = (char *) xmalloc (VAR5);
}
strncpy (VAR4, VAR3, VAR6 - VAR3);
VAR4[VAR6 - VAR3] = '';
if (FUN3 (VAR4[0]))
VAR4[0] = FUN4 (VAR4[0]);
FUN5 (VAR7, VAR4);
}