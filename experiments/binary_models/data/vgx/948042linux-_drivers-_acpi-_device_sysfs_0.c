static VAR1 FUN1(struct VAR2 *VAR3,
struct VAR4 *VAR5, char *VAR6)
{
struct VAR7 *VAR8 = FUN2(VAR3);
int VAR9;
int VAR10;

VAR10 = FUN3(VAR8, &VAR9);
if (VAR10)
return VAR10;

return sprintf(VAR6, "", FUN4(VAR9));
}