int
main(int argc, char **argv)
{
int	VAR1;
char	*VAR2;


if (argc < 3) {
(void) FUN1("",
argv[0]);
return (1);
}


if (FUN2(VAR3) == VAR4) {
(void) fprintf(VAR5, "",
FUN3(0));
return (1);
}


VAR2 = argv[1];
for (VAR1 = 2; VAR1 < argc; VAR1++) {
int	VAR6;
VAR7	*VAR8;
char	*VAR9;

VAR9 = argv[VAR1];
if ((VAR6 = open(VAR9, VAR10)) == -1) {
FUN4("");
continue;
}


if ((VAR8 = FUN5(VAR6, VAR11, 0)) == NULL) {
(void) fprintf(VAR5, "",
FUN3(0));
(void) close(VAR6);
continue;
}

if (FUN6(VAR8) == VAR12)
FUN7(VAR8, VAR9, VAR2);
else
(void) FUN1(""
"", VAR9, FUN6(VAR8));

(void) FUN8(VAR8);
(void) close(VAR6);
}

return (0);
}