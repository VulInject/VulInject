static int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4,
int VAR5, char **VAR6)
{
struct VAR7 *VAR8;
struct VAR7 *VAR9;

VAR8 = VAR2->VAR10;
VAR2->VAR10 = NULL;
for (; VAR8; VAR8 = VAR9) {
VAR9 = VAR8->VAR9;
FUN2(VAR8->VAR11.VAR12);
FUN3(VAR8);
}
FUN4(NULL, VAR13, "");
return 0;
}