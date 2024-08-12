static void FUN1(const char *VAR1, ...) {
char VAR2[VAR3+1];
va_list VAR4;

memset(VAR2, '', sizeof(VAR2));
FUN2(VAR4, VAR1);
FUN3(VAR2, sizeof(VAR2)-1, VAR1, VAR4);
FUN4(VAR4);

VAR2[sizeof(VAR2)-1] = '';
FUN5(VAR5, 19, "", VAR2);
}