static const char* FUN1(VAR1 *VAR2,
const char *VAR3) {


char *VAR4 = strstr(VAR3, "VAR5:
if (VAR4 == VAR3) {
VAR4 = FUN2(VAR2->VAR6, VAR3 + strlen("VAR5:
} else {
VAR4 = strstr(VAR3, "VAR7:
if (VAR4 == VAR3) {
VAR4 = FUN2(VAR2->VAR6, VAR3 + strlen("VAR7:
} else {
VAR4 = FUN2(VAR2->VAR6, VAR3);
}
}


int VAR8 = strlen(VAR4);
if (VAR4[VAR8 - 1] == VAR9)
VAR4[VAR8 - 1] = '';

return FUN3(VAR2, VAR4);
}