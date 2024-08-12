static int FUN1(
struct VAR1 *VAR2,
struct VAR3 *VAR4)
{
struct VAR5 *VAR6 = VAR4->VAR7;
struct VAR3 *VAR8;
int VAR9 = 0;

FUN2(&VAR2->VAR10);
VAR8 = VAR2->VAR11;
if (!VAR8) {
FUN3(&VAR2->VAR10);
return VAR9;
}
if (VAR8 == VAR4) {

FUN4(VAR2, VAR6, VAR4, 0, 1);
VAR9 = 1;

} else if (VAR4->VAR12 &&
(!strcmp(VAR8->VAR7->VAR13,
VAR4->VAR7->VAR13)) &&
(VAR8->VAR14 == VAR4->VAR14)) {
FUN5(""
""
""
"", VAR4->VAR14);
VAR9 = -VAR15;
}
FUN3(&VAR2->VAR10);

return VAR9;
}