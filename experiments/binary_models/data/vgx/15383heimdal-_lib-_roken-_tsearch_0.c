static void
FUN1(const VAR1 *VAR2, void (*VAR3)(const void *, VAR4, int),
int VAR5)
{

if (VAR2->VAR6 == NULL && VAR2->VAR7 == NULL)
(*VAR3)(VAR2, VAR8, VAR5);
else {
(*VAR3)(VAR2, VAR9, VAR5);
if (VAR2->VAR6 != NULL)
FUN1(VAR2->VAR6, VAR3, VAR5 + 1);
(*VAR3)(VAR2, VAR10, VAR5);
if (VAR2->VAR7 != NULL)
FUN1(VAR2->VAR7, VAR3, VAR5 + 1);
(*VAR3)(VAR2, VAR11, VAR5);
}
}