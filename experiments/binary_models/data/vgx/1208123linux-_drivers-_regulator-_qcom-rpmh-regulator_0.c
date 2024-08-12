static int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4, bool VAR5)
{
int VAR6;

if (VAR5 || VAR2->VAR7)
VAR6 = FUN2(VAR2->VAR8, VAR9, VAR4, 1);
else
VAR6 = FUN3(VAR2->VAR8, VAR9, VAR4,
1);

return VAR6;
}