static void FUN1(VAR1 *VAR2, VAR3 *VAR4, const char *VAR5, void *VAR6,
VAR7 **VAR8)
{
VAR9 *VAR10 = FUN2(VAR2);
VAR11 *VAR12 = VAR6;
uint16_t VAR13;

if (!FUN3(VAR4, VAR5, &VAR13, VAR8)) {
return;
}

if (strcmp(VAR5, "") == 0 || strcmp(VAR5, "") == 0) {
*VAR12 = FUN4(VAR13);
} else if (strcmp(VAR5, "") == 0) {
*VAR12 = FUN5(VAR13);
} else if (strcmp(VAR5, "") == 0) {
*VAR12 = FUN6(VAR13);
} else {
*VAR12 = VAR13;
}

FUN7(VAR10);
}