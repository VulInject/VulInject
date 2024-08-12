void
FUN1(void *VAR1, int VAR2)
{
struct VAR3 *VAR4 = VAR1;
int VAR5;

FUN2(("", VAR4));

if (VAR4->VAR6 != NULL) {
VAR5 = FUN3(VAR4->VAR6);
if (VAR5)
FUN4("",
VAR4->VAR7.VAR8, FUN5(VAR5));
VAR4->VAR6 = NULL;
}
}