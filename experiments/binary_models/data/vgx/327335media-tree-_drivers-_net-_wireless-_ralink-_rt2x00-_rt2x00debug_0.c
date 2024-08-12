static struct VAR1 *FUN1(const char *VAR2,
struct VAR3
*VAR4,
struct VAR5
*VAR6)
{
char *VAR7;

VAR7 = FUN2(3 * VAR8, VAR9);
if (!VAR7)
return NULL;

VAR6->VAR7 = VAR7;
VAR7 += sprintf(VAR7, "", VAR4->VAR10->VAR11->VAR2);
VAR7 += sprintf(VAR7, "", VAR12);
VAR6->VAR13 = strlen(VAR6->VAR7);

return FUN3(VAR2, VAR14, VAR4->VAR15, VAR6);
}