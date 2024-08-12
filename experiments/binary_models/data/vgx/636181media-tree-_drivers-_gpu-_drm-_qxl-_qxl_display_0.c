static void FUN1(struct VAR1 *VAR2, unsigned VAR3)
{
if (VAR2->VAR4 &&
VAR3 > VAR2->VAR4->VAR3) {
FUN2(VAR2->VAR4);
VAR2->VAR4 = NULL;
}
if (!VAR2->VAR4) {
VAR2->VAR4 = FUN3(
sizeof(struct VAR5) +
sizeof(struct VAR6) * VAR3, VAR7);
if (!VAR2->VAR4) {
FUN4(VAR2,
"",
VAR8, VAR3);
return;
}
}
VAR2->VAR4->VAR3 = VAR3;
}

enum {
VAR9,
VAR10,
VAR11,
};