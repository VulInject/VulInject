static bool FUN1(void) {

if (!VAR1.VAR2) {
FUN2("");
return false;
}

if (VAR1.VAR3) {
if (VAR1.VAR4 && !VAR1.VAR5) {
FUN2("");
return false;
}
return true;
}

if (!VAR1.VAR5) {
FUN2("");
return false;
}

return true;
}