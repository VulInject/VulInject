static int FUN1(const char *VAR1)
{
if (FUN2(VAR1, "", &VAR1)) {
unsigned long VAR2;
if (!FUN3(VAR1, &VAR2))
return 0;
if (VAR2 < 8192) {
FUN4("", VAR2);
VAR2 *= 1024 * 1024;
} else if (VAR2 < 1024 * 1024) {
FUN4("");
VAR2 = 1024 * 1024;
}
VAR3 = VAR2;
} else if (FUN2(VAR1, "", &VAR1)) {
unsigned long VAR2;
if (!FUN3(VAR1, &VAR2))
return 0;
VAR4 = VAR2;
} else if (FUN2(VAR1, "", &VAR1)) {
FUN5(VAR1);
} else if (FUN2(VAR1, "", &VAR1)) {
FUN6(VAR1);
} else if (FUN2(VAR1, "", &VAR1)) {
FUN7(VAR1);
} else if (!strcmp(VAR1, "")) {
VAR5 = 0;
} else if (!strcmp(VAR1, "")) {
VAR5 = 1;
} else if (!strcmp(VAR1, "")) {
; 
} else {
return 0;
}

return 1;
}