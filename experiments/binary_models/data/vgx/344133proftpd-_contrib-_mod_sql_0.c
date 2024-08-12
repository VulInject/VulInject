int FUN1(const char *VAR1, VAR2 *VAR3) {
struct VAR4 *VAR5;

if (!VAR1 || !VAR3) {
VAR6 = VAR7;
return -1;
}

if (!VAR8) {
VAR8 = FUN2(VAR9);
FUN3(VAR8, VAR10);
}


VAR5 = FUN4(VAR1);
if (VAR5) {
VAR6 = VAR11;
return -1;
}

VAR5 = FUN5(VAR8, sizeof(struct VAR4));
VAR5->VAR1 = VAR1;
VAR5->VAR3 = VAR3;

if (VAR12) {
VAR12->VAR13 = VAR5;
VAR5->VAR14 = VAR12;
}

VAR12 = VAR5;
VAR15++;
FUN6(VAR16, 8, "", VAR1);

return 0;
}