static void FUN1(struct VAR1 *VAR2, u32 VAR3)
{
if (VAR2->VAR4.VAR5 == VAR6) {
struct VAR7 *VAR8 =
(struct VAR7 *)VAR2;
VAR8->VAR9 = FUN2(VAR3);
} else if (VAR2->VAR4.VAR5 == VAR10) {
FUN3("");
return;
} else {
struct VAR11 *VAR8 = (struct VAR11 *)VAR2;
VAR8->VAR12 = FUN2(VAR3);
}
}