void
FUN1(VAR1 *VAR2)
{

if (!VAR3) {
VAR4 = VAR5;
VAR3 = (VAR6 *) malloc(VAR4 * sizeof (VAR6));
if (!VAR3) {
(void) FUN2("",
VAR4);
FUN3(1);
}
}

VAR7 += 1;

if (VAR7 >= VAR4) {
VAR4 += VAR5;
VAR3 = (VAR6 *) realloc(VAR3,
VAR4 * sizeof (VAR6));

if (!VAR3) {
(void) fprintf(VAR8,
"", VAR4);
FUN3(1);
}
}

VAR3[VAR7].VAR9 = VAR2;
VAR3[VAR7].VAR10 = VAR7;
VAR2->VAR11 = VAR12;

if (VAR13 & VAR14) {
(void) FUN2("", VAR7);
FUN4(VAR2);
(void) FUN2("");
}
}