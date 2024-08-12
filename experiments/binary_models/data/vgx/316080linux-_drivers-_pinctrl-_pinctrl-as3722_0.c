static int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4, unsigned VAR5, bool VAR6)
{
struct VAR7 *VAR8 = FUN2(VAR2);
struct VAR9 *VAR9 = VAR8->VAR9;
int VAR10;

VAR10 = FUN3(
VAR8->VAR11[VAR5].VAR12, VAR6);
if (VAR10 < 0) {
FUN4(VAR8->VAR13, "",
(VAR6) ? "" : "", VAR5);
return VAR10;
}

return FUN5(VAR9, FUN6(VAR5),
VAR14, VAR10);
}