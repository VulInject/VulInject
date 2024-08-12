extern int FUN1(char *VAR1, int VAR2)
{
char *VAR3;
int VAR4;
int argc = 1;
char **argv = xmalloc(sizeof(char *));
argv[0] = "";

while ((VAR3 = FUN2(&VAR1))) {
argc++;
FUN3(argv, argc, sizeof(char *));
argv[argc - 1] = VAR3;
}

if (argc > 1 && (VAR4 = FUN4(argc, argv)) < argc) {
FUN5("", argv[VAR4]);
for (VAR4 = 1; VAR4 < argc; VAR4++)
FUN6(argv[VAR4]);
FUN6(argv);
return VAR5;
}

for (VAR4 = 1; VAR4 < argc; VAR4++)
FUN6(argv[VAR4]);
FUN6(argv);

return VAR6;
}