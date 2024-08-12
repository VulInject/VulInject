int
FUN1(char *VAR1, size_t VAR2, int argc, char ***argv)
{
int	VAR3;
size_t	VAR4;

if (argc == 0)
return (0);
*argv = xcalloc(argc, sizeof **argv);

VAR1[VAR2 - 1] = '';
for (VAR3 = 0; VAR3 < argc; VAR3++) {
if (VAR2 == 0) {
FUN2(argc, *argv);
return (-1);
}

VAR4 = strlen(VAR1) + 1;
(*argv)[VAR3] = xstrdup(VAR1);

VAR1 += VAR4;
VAR2 -= VAR4;
}
FUN3(argc, *argv, "", VAR5);

return (0);
}