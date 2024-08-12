static int FUN1(VAR1 *VAR2, VAR3 *VAR4, void *VAR5) {
const char *VAR6;

FUN2(VAR2);
FUN2(VAR4);

FUN2(FUN3(VAR5, ""));

FUN2(FUN4(VAR4, VAR7, &VAR6) >= 0);
FUN2(FUN5(VAR6, ""));

FUN6("", VAR8, VAR6);
return 1;
}