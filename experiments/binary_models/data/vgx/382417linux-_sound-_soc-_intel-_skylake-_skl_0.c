static int FUN1(struct VAR1 *VAR2, void *VAR3)
{
struct VAR4 *VAR5 = FUN2(VAR2);
struct VAR6 *VAR7 = VAR3;
struct VAR8 *VAR9;

VAR7 = FUN3(VAR7);
if (!VAR7) {
FUN4(VAR5->VAR10, "");
VAR7 = FUN5(VAR2, VAR3);
if (!VAR7) {
FUN6(VAR5->VAR10, "");
return -VAR11;
}
}

VAR2->VAR7 = VAR7;
VAR2->VAR12 = VAR7->VAR13;
VAR9 = VAR7->VAR9;

if (VAR9) {
VAR2->VAR14 = VAR9->VAR14;
VAR7->VAR15.VAR16 =
FUN7(&VAR2->VAR17->VAR10,
VAR2->VAR18);
}

return 0;
}