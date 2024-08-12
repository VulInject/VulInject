static int FUN1(VAR1 *VAR2, const char *VAR3, VAR4 **VAR5, VAR4 **VAR6) {
FUN2(VAR7) VAR8 *VAR9 = NULL;
VAR10 *VAR11;

assert(VAR2);
assert(VAR3);
assert(VAR5);
assert(VAR6);

if (FUN3(&VAR9, VAR3) >= 0 && FUN4(VAR9))
return FUN5(VAR2, VAR9, VAR3,  false, VAR5);


if (FUN6(VAR2, VAR3, &VAR11) < 0)
return 0; 

return FUN7(VAR6, NULL, FUN8(VAR11));
}