static void FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4, *VAR5;

if (!VAR2->VAR6)
return;


FUN2(VAR4, VAR5, &VAR7, VAR8) {
if (VAR4->VAR9 == VAR2->VAR6->VAR9) {
if (VAR4->VAR10 <= 1) {
VAR4->VAR10 = 0;
FUN3(VAR4->VAR9);
FUN4(&VAR4->VAR8);
FUN5(VAR4);
VAR2->VAR6 = NULL;
return;
} else {
VAR4->VAR10--;
}
}
}
}