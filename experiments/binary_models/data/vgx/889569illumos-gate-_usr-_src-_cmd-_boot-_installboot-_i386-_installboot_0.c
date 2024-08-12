static void
FUN1(char *VAR1)
{
if (VAR2 && VAR3) {
(void) fprintf(VAR4, FUN2(""
""));
FUN3(VAR1, VAR5);
}

if (VAR3) {

if (VAR6) {
(void) fprintf(VAR4, VAR7, "");
VAR6 = false;
}
if (VAR8) {
(void) fprintf(VAR4, VAR7, "");
VAR8 = false;
}
if (VAR9 || VAR10) {
FUN4(VAR7, "");
VAR9 = false;
VAR10 = false;
}
}

if ((VAR9 || VAR10) && !VAR2)
FUN3(VAR1, VAR5);

if (VAR2) {
if (VAR11 || VAR12 || VAR6 || VAR8) {
FUN4(VAR7, "");
VAR11 = VAR12 = VAR6 = false;
VAR8 = false;
}
}
}