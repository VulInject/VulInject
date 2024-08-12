int
main(int argc, char **argv)
{
int	VAR1 = 0, VAR2;
char	*VAR3[VAR4];


(void) FUN1(VAR5, "");
(void) FUN2(VAR6);

if ((VAR2 = FUN3(&argc, argv, VAR3)) == 0) {
if (VAR7 != NULL) {
VAR8 = 0;
FUN4(VAR7);
(void) fclose(VAR7);
if (VAR8 != 0) {
(void) fprintf(VAR9,
FUN5(""
""));
FUN6(1);
}
}
if (VAR10 != NULL) {
VAR8 = 0;
FUN7(VAR10);
(void) fclose(VAR10);
if (VAR8 != 0) {
(void) fprintf(VAR9,
FUN5(""
""));
FUN6(1);
}
}
if (VAR11 & VAR12)
FUN8();
do {
VAR2 = 0;

if (VAR13 == VAR14) {
if (FUN9(VAR3[VAR1], "", stdin) == NULL) {
(void) fprintf(VAR9,
FUN5(""
""),
VAR3[VAR1], strerror(VAR8));
FUN6(1);
}
}


VAR2 = FUN10(VAR11, VAR15);

} while ((++VAR1 < argc) && VAR2 >= 0);
}
if ((VAR2 == 0) && (VAR11 & VAR12))
FUN11();

if (VAR2 == -2) {
(void) FUN12(FUN5(""
""));
FUN6(1);
} else if (VAR2 < 0) {
FUN6(1);
}
return (0);
}