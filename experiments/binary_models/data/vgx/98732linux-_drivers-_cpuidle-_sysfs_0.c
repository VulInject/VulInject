static VAR1 FUN1(struct VAR2 *VAR3,
struct VAR4 *VAR5,
char *VAR6)
{
ssize_t VAR7;
struct VAR8 *VAR9;

FUN2(&VAR10);
VAR9 = FUN3();
if (VAR9)
VAR7 = sprintf(VAR6, "", VAR9->VAR11);
else
VAR7 = sprintf(VAR6, "");
FUN4(&VAR10);

return VAR7;
}