int FUN1(VAR1 *VAR2, const char *VAR3) {
char *VAR4;

if (VAR2 == NULL ||
VAR3 == NULL) {
VAR5 = VAR6;
return -1;
}


VAR4 = FUN2(VAR2, VAR3);
while (VAR4) {
FUN3();

FUN4(VAR3);
VAR4 = FUN2(VAR2, VAR3);
}

return 0;
VAR5 = VAR7;
return -1;
}