FUN1 (struct VAR1 *VAR2,
int VAR3, int VAR4)
{
int VAR5;
char *VAR6;

if (!VAR2->VAR7)
return 0;

VAR5 = ((VAR3 / VAR8) *
VAR8) + VAR8;
if (VAR2->VAR9 != VAR5)
{
VAR6 = realloc (VAR2->VAR10, VAR5);
if (!VAR6)
return 0;
VAR2->VAR10 = VAR6;
VAR2->VAR9 = VAR5;
}

VAR2->VAR11 = VAR3;
VAR2->VAR12 = VAR4;

return 1;
}