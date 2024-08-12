int FUN1(bool VAR1) {
if (VAR2)
FUN2("");

const char *VAR3, *VAR4;
if (VAR1) {
VAR3 = "";
VAR4 = VAR5;
} else {
VAR3 = "";
VAR4 = VAR6;
}


int VAR7 = FUN3(VAR8 | VAR9 | VAR10, 3,
VAR11, VAR3, VAR4);

if (VAR7) {
fprintf(VAR12, "");
FUN4(VAR7);
}

if (VAR2)
FUN2("");

return 0;
}