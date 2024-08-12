int FUN1(VAR1 *VAR2, VAR3* VAR4) {
block VAR5;
struct VAR6* VAR7 = FUN2(VAR2, "", VAR8, sizeof(VAR8)-1);
int VAR9 = FUN3(VAR7, &VAR5);
assert(!VAR9);
FUN4(VAR7);

VAR5 = FUN5(VAR5);
VAR5 = FUN6(VAR10, sizeof(VAR10)/sizeof(VAR10[0]), VAR5);
VAR5 = FUN7(VAR5);

*VAR4 = FUN8(VAR5, *VAR4, VAR11);
return VAR9;
}