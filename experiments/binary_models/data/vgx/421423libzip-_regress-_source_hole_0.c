static VAR1 *
FUN1(const char *VAR2, int VAR3, VAR4 *VAR5) {
VAR1 *VAR6;
VAR7 *VAR8;

if ((VAR6 = FUN2()) == NULL) {
FUN3(VAR5, VAR9, 0);
return NULL;
}

if ((VAR3 & VAR10) == 0) {
if ((VAR8 = fopen(VAR2, "")) == NULL) {
if (!(VAR11 == VAR12 && (VAR3 & VAR13))) {
FUN4(VAR6);
return NULL;
}
}
else {
if (FUN5(VAR6, VAR8, VAR5) < 0) {
FUN4(VAR6);
fclose(VAR8);
return NULL;
}
fclose(VAR8);
}
}

return VAR6;
}