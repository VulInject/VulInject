static int FUN1(VAR1 *VAR2) {
VAR3 *VAR4 = FUN2(VAR2);
int VAR5;

assert(VAR4);

VAR5 = FUN3(VAR2);
if (VAR5 < 0) {
FUN4(VAR4, VAR6);
return VAR5;
}

return 1;
}