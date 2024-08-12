static int FUN1(VAR1 *VAR2) {
VAR3 *VAR4 = FUN2(VAR2);

assert(VAR4);
assert(VAR4->VAR5 == VAR6);

if (VAR4->VAR7 != VAR4->VAR5)
FUN3(VAR4, VAR4->VAR7);

return 0;
}