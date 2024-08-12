void
FUN1(void)
{
VAR1 *VAR2 = NULL;
VAR3 *VAR4 = FUN2();

VAR2 = FUN3 (VAR4, "",
"");
if (VAR2 != NULL) {
FUN4(VAR2, "", "");
}
}