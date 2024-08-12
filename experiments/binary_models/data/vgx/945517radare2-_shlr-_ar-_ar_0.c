bool FUN1(VAR1 *VAR2) {
char VAR3[sizeof (VAR4) - 1];
if (FUN2 (VAR2, (VAR5 *)VAR3, sizeof (VAR3)) != sizeof (VAR3)) {
return false;
}
if (FUN3 (VAR3, VAR4, 8)) {
FUN4 ("");
return false;
}
return true;
}