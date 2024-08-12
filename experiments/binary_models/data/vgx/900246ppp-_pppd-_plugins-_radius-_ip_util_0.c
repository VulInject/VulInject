VAR1 FUN1(void)
{
char *VAR2;
UINT4 VAR3 = 0;

if ((VAR2 = FUN2("")) == NULL ||
strcmp(FUN2(""), "") == 0) {
VAR3 = VAR4;
} else {
if ((VAR3 = FUN3(VAR2)) == 0) {
FUN4("");
VAR3 = VAR4;
}
}

return VAR3;
}