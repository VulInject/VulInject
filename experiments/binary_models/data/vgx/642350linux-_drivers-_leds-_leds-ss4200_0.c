static VAR1 FUN1(struct VAR2 *VAR3,
struct VAR4 *VAR5, char *VAR6)
{
struct VAR7 *VAR8 = FUN2(VAR3);
int VAR9 = 0;
if (FUN3(VAR8, VAR10))
VAR9 = 1;
return sprintf(VAR6, "", VAR9);
}