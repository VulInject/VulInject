FUN1 (void *VAR1)
{
struct VAR2 **VAR3 = (struct VAR2 **) VAR1;
struct VAR4 *VAR5;

if (*VAR3 != NULL)
{
FUN2 (*VAR3);
for (VAR5 = VAR6; VAR5; VAR5 = VAR5->VAR7)
if (VAR5->VAR8 == *VAR3)
VAR5->VAR8 = NULL;

*VAR3 = NULL;
}
}