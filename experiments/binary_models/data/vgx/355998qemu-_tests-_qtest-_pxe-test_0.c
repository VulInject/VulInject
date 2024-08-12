static void FUN1(const VAR1 *VAR2, bool VAR3)
{
VAR4 *VAR5;
char *VAR6;
const char *VAR7 = VAR2->VAR7;

if (!VAR7) {
VAR7 = "";
}

VAR6 = FUN2(
""
"" VAR8 ""
"" VAR8 "",
VAR2->VAR9, VAR10, VAR3 ? "" : "", VAR3 ? "" : "",
VAR2->VAR11, VAR7);

VAR5 = FUN3(VAR6);
FUN4(VAR5);
FUN5(VAR5);
FUN6(VAR6);
}