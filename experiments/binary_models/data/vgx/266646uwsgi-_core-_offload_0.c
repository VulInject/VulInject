static int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4) {

if (!VAR4->VAR5 && VAR4->VAR6 == -1) return -1;

if (VAR4->VAR5) {
VAR4->VAR6 = open(VAR4->VAR5, VAR7 | VAR8);
if (VAR4->VAR6 < 0) {
FUN2(VAR4->VAR5);
return -1;
}
}


if (!VAR4->VAR9) {
struct stat VAR10;
if (FUN3(VAR4->VAR6, &VAR10)) {
FUN4("");
if (VAR4->VAR5) {
close(VAR4->VAR6);
}
return -1;
}
VAR4->VAR9 = VAR10.VAR11;
}

if (VAR4->VAR12 == -1) {
VAR4->VAR12 = VAR4->VAR13;
}
VAR4->VAR13 = -1;

return 0;
}