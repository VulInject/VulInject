static int
FUN1(VAR1 *VAR2, va_list VAR3) {
VAR4 *VAR5 = FUN2(VAR3, VAR4 *);
const char *VAR6 = FUN2(VAR3, const char *);
bool VAR7 = FUN2(VAR3, int);
int VAR8 = FUN2(VAR3, int);
time_t VAR9 = FUN2(VAR3, VAR10);
bool VAR11 = FUN2(VAR3, int);

char *VAR12 = FUN3(VAR5, VAR6, VAR7, VAR8, VAR9);

if (VAR11) {
VAR2->FUN4(VAR2, NULL, NULL, "", VAR12);
} else {
VAR2->FUN5(VAR2, NULL, "", VAR12);
}

free(VAR12);
return VAR13;
}