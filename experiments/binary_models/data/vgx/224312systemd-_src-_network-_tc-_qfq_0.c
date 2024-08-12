static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6) {
VAR7 *VAR8;
int VAR9;

assert(VAR2);
assert(VAR4);
assert(VAR6);

FUN2(VAR8 = FUN3(VAR4));

VAR9 = FUN4(VAR6, VAR10, "");
if (VAR9 < 0)
return VAR9;

if (VAR8->VAR11 > 0) {
VAR9 = FUN5(VAR6, VAR12, VAR8->VAR11);
if (VAR9 < 0)
return VAR9;
}

if (VAR8->VAR13 > 0) {
VAR9 = FUN5(VAR6, VAR14, VAR8->VAR13);
if (VAR9 < 0)
return VAR9;
}

VAR9 = FUN6(VAR6);
if (VAR9 < 0)
return VAR9;

return 0;
}