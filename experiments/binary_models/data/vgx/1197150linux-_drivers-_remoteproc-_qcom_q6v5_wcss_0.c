static int FUN1(struct VAR1 *VAR1, const struct VAR2 *VAR3)
{
struct VAR4 *VAR5 = VAR1->VAR6;
int VAR7;

VAR7 = FUN2(VAR5->VAR8, VAR3, VAR1->VAR2,
0, VAR5->VAR9, VAR5->VAR10,
VAR5->VAR11, &VAR5->VAR12);
if (VAR7)
return VAR7;

FUN3("", VAR5->VAR10, VAR5->VAR11);

return VAR7;
}