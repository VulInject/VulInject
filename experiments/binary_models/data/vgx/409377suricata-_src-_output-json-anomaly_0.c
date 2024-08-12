static void FUN1(VAR1 *VAR2,
VAR3 *VAR4)
{
static bool VAR5 = false;
static bool VAR6 = false;
uint16_t VAR7 = VAR8;
if (VAR4 != NULL) {

VAR3 *VAR9 = FUN2(VAR4, "");
if (VAR9 != NULL) {
FUN3(VAR9, "", VAR10, &VAR7);
FUN3(VAR9, "", VAR11, &VAR7);
FUN3(VAR9, "", VAR12, &VAR7);
}
FUN3(VAR4, "", VAR13, &VAR7);
}
if (((VAR7 & (VAR12 | VAR13)) == VAR13) && !VAR6) {
FUN4(""
"");
VAR6 = true;
VAR7 &= ~VAR13;
}

if (VAR7 == 0 && !VAR5) {
FUN4(""
"");
VAR5 = true;
}
VAR2->VAR7 |= VAR7;
}