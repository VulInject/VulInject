static int FUN1(struct VAR1 *VAR2)
{
int VAR3;
struct VAR4 *VAR5 = &VAR2->VAR5;
const struct VAR6 *VAR7;

VAR7 = FUN2(VAR8, VAR5->VAR9);
VAR3 = FUN3(VAR2, VAR7->VAR10);
if (VAR3)
FUN4(VAR5, "", VAR3);

return VAR3;
}