static void
FUN1(const VAR1 *VAR2, int VAR3, const char *VAR4, 
va_list VAR5)
{
static bool VAR6 = true;
fprintf(VAR7, "",
VAR3 == VAR8 ? "" : "");
if (VAR6) {
fprintf(VAR7, "", FUN2(""));
VAR6 = false;
} else
fprintf(VAR7, "");
FUN3(VAR7, VAR4, VAR5);
FUN4(VAR5);
if (VAR2->VAR9)
fprintf(VAR7, "", VAR2->VAR9, VAR2->VAR10);
fprintf(VAR7, "");
if (VAR3 == VAR11)
VAR12 ++;
}