static int FUN1(VAR1 *VAR2, void *VAR3, VAR4 *VAR5) {
int VAR6;

FUN2(FUN3(FUN4(VAR2), "", "", NULL) >= 0);

VAR6 = FUN5(VAR2, NULL);
FUN2(VAR6 >= 0);

return 1;
}