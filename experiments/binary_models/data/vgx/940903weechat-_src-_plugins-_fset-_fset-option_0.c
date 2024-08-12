FUN1 (const char *VAR1, int *VAR2)
{
struct VAR3 *VAR4;
int VAR5, VAR6;

if (VAR2)
*VAR2 = -1;

if (!VAR1)
return NULL;

VAR5 = FUN2 (VAR7);
for (VAR6 = 0; VAR6 < VAR5; VAR6++)
{
VAR4 = FUN3 (VAR7, VAR6);
if (VAR4 && (strcmp (VAR4->VAR1, VAR1) == 0))
{
if (VAR2)
*VAR2 = VAR6;
return VAR4;
}
}


return NULL;
}