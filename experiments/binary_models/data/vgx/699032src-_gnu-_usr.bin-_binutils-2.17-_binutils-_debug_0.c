FUN1 (void *VAR1, const char *VAR2)
{
struct VAR3 *VAR4 = (struct VAR3 *) VAR1;
struct VAR5 *VAR6;
struct VAR7 *VAR8;

if (VAR2 == NULL)
VAR2 = "";

VAR6 = (struct VAR5 *) xmalloc (sizeof *VAR6);
memset (VAR6, 0, sizeof *VAR6);

VAR6->VAR9 = VAR2;

VAR8 = (struct VAR7 *) xmalloc (sizeof *VAR8);
memset (VAR8, 0, sizeof *VAR8);

VAR8->VAR10 = VAR6;
VAR4->VAR11 = VAR6;

if (VAR4->VAR12 != NULL)
VAR4->VAR12->VAR13 = VAR8;
else
{
assert (VAR4->VAR14 == NULL);
VAR4->VAR14 = VAR8;
}

VAR4->VAR12 = VAR8;

VAR4->VAR15 = NULL;
VAR4->VAR16 = NULL;
VAR4->VAR17 = NULL;

return VAR18;
}