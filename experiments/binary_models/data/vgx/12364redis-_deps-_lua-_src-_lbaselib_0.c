static int FUN1 (VAR1 *VAR2) {
static const char *const VAR3[] = {"", "", "",
"", "", "", "", NULL};
static const int VAR4[] = {VAR5, VAR6, VAR7,
VAR8, VAR9, VAR10, VAR11};
int VAR12 = FUN2(VAR2, 1, "", VAR3);
int VAR13 = FUN3(VAR2, 2, 0);
int VAR14 = FUN4(VAR2, VAR4[VAR12], VAR13);
switch (VAR4[VAR12]) {
case VAR8: {
int VAR15 = FUN4(VAR2, VAR16, 0);
FUN5(VAR2, VAR14 + ((VAR17)VAR15/1024));
return 1;
}
case VAR9: {
FUN6(VAR2, VAR14);
return 1;
}
default: {
FUN5(VAR2, VAR14);
return 1;
}
}
}