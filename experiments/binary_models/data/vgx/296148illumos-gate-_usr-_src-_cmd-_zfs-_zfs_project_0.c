static int
FUN1(const char *VAR1, VAR2 *VAR3,
struct VAR4 *VAR5)
{
int VAR6;

VAR6 = FUN2(VAR1, VAR5);
if (VAR6) {
(void) fprintf(VAR7, FUN3(""),
VAR1, strerror(VAR8));
return (VAR6);
}

if (!FUN4(VAR5->VAR9) && !FUN5(VAR5->VAR9)) {
(void) fprintf(VAR7, FUN3(""
""));
return (-1);
}

if (!FUN5(VAR5->VAR9)) {
if (VAR3->VAR10) {
(void) fprintf(VAR7, FUN3(
""), VAR1);
return (-1);
}

if (VAR3->VAR11) {
(void) fprintf(VAR7, FUN3(
""), VAR1);
return (-1);
}
}

return (0);
}