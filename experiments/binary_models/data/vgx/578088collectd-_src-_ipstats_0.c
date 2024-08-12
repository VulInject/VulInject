static int FUN1(void) {
if (VAR1 != VAR2) {
FUN2("");
return -1;
}

if (VAR3 != VAR1) {
FUN2("");
return -1;
}

if (VAR3 != VAR4) {
FUN2("");
return -1;
}

return 0;
}