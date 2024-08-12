static int FUN1(VAR1 *VAR2, VAR3 *VAR4) {
FUN2(VAR5) VAR6 *VAR7 = NULL;
int VAR8;

assert(VAR2);
assert(VAR4);

VAR8 = FUN3(VAR2, VAR9, &VAR7);
if (VAR8 < 0)
return FUN4(VAR2, VAR8, "");

VAR8 = FUN5(VAR2, &VAR4->VAR10, VAR7);
if (VAR8 < 0)
return FUN4(VAR2, VAR8, "");

VAR8 = FUN6(VAR2, &VAR4->VAR11, VAR7);
if (VAR8 < 0)
return FUN4(VAR2, VAR8, "");

VAR8 = FUN7(VAR2->VAR12->VAR13, NULL, VAR7, VAR14,
VAR15, VAR2);
if (VAR8 < 0)
return FUN4(VAR2, VAR8, "");

FUN8(VAR2);

return 0;
}