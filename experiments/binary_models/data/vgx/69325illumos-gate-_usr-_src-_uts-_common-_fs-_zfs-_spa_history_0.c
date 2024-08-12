static void
FUN1(VAR1 *VAR2, const char *VAR3, VAR4 *VAR5,
VAR6 *VAR7, const char *VAR8, va_list VAR9)
{
char *VAR10;


if (VAR7->VAR11 == VAR12 || !FUN2(VAR5)) {
FUN3(VAR2);
return;
}

VAR10 = FUN4(vsnprintf(NULL, 0, VAR8, VAR9) + 1, VAR13);
(void) vsprintf(VAR10, VAR8, VAR9);
FUN5(VAR2, VAR14, VAR10);
FUN6(VAR10);

FUN5(VAR2, VAR15, VAR3);
FUN7(VAR2, VAR16, VAR7->VAR11);

if (FUN8(VAR7)) {
FUN9(VAR2, VAR7);
} else {
FUN10(FUN11(VAR5),
VAR17, VAR2, 0, VAR18, VAR7);
}

}