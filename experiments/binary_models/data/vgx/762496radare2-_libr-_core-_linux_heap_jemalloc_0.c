static bool FUN1(VAR1)(VAR2 *VAR3, char *VAR4, VAR5 *VAR6) {
VAR7 *VAR8;
VAR9 *VAR10;
const char *VAR11 = NULL;
ut64 VAR12 = VAR13;

if (!VAR3 || !VAR3->VAR14 || !VAR3->VAR14->VAR15) {
return false;
}
FUN2 (VAR3->VAR14);
FUN3 (VAR3->VAR14->VAR15, VAR8, VAR10) {
if (strstr (VAR10->VAR16, "")) {
VAR12 = VAR10->VAR17;
VAR11 = VAR10->VAR16;
break;
}
}
if (!VAR11) {
FUN4 ("");
return false;
}
bool VAR18 = FUN1(VAR19)(VAR11, "");

if (!VAR18) {
FUN4 ("");
return false;
}
if (FUN5 (VAR11)) {
ut64 VAR20 = FUN1(VAR21)(VAR3, VAR11, VAR4);
if (VAR12 != VAR22 && VAR20 != 0) {
*VAR6 = VAR12 + VAR20;
return true;
}
}
return false;
FUN6 ("", VAR4);

char *VAR23 = FUN7 (VAR3, "", VAR4);
ut64 VAR24 = FUN8 (NULL, VAR23);
if (VAR24 && VAR24 != VAR13) {
*VAR6 = VAR24;
FUN6 (""VAR25"" VAR25"", VAR24, VAR12);
} else {
FUN6 ("");
}
free (VAR23);
return true;
}