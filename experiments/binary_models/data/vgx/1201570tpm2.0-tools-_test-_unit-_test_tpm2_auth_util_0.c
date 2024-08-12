static void FUN1(void **VAR1) {
FUN2(VAR1);

const char *VAR2 = "" VAR3 "" VAR4;

char *VAR5, *VAR6;

bool VAR7 = FUN3(VAR2, &VAR5, &VAR6);
FUN4(VAR7);
FUN5(VAR5, VAR3);
FUN5(VAR6, VAR4);

free(VAR5);
}