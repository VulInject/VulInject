int FUN1(VAR1 *VAR2) {
sds VAR3 = FUN2("");
int VAR4 = 1;
if (VAR3 == NULL) {
VAR4 = 0;
} else if (strcmp(VAR3, "") == 0) {
*VAR2 = FUN3(
""
""
"");
VAR4 = -1;
}
FUN4(VAR3);
return VAR4;
}