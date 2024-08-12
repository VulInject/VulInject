unsigned long FUN1(void *VAR1, char **argv, char **VAR2)
{
    unsigned long VAR3, VAR4, VAR5;
    int VAR6;
    int *VAR7;
    int argc, VAR8;
    VAR5 = VAR9;
    VAR4 = FUN2(0, VAR5 + VAR10, VAR11 | VAR12, VAR13 | VAR14, -1, 0);
    if (VAR4 == -1)
        FUN3("");
    FUN4(VAR4 + VAR5, VAR10, VAR15);
    VAR3 = VAR4 + VAR5;
    VAR7 = (void *)VAR3;
    VAR7--;
    *VAR7 = 0;
    VAR7--;
    FUN5("", (char *)argv[0], (int)argv[0]);
    FUN6(VAR7, (int)argv[0]);
    VAR7--;
    FUN6(VAR7, 0);
    VAR7--;
    for (VAR8 = 0; VAR2[VAR8]; VAR8++)
        ;
    for (VAR6 = VAR8 - 1; VAR6 >= 0; VAR6--)
    {
        FUN5("", (char *)VAR2[VAR6], (int)VAR2[VAR6]);
        FUN6(VAR7, (int)VAR2[VAR6]);
        VAR7--;
        FUN7((int)VAR2[VAR6], (int)(VAR2[VAR6] + strlen(VAR2[VAR6])), VAR11 | VAR16);
    }
    if (VAR17[0])
    {
        char *VAR18;
        asprintf(&VAR18, "", VAR17);
        FUN7((int)VAR18, (int)(VAR18 + strlen(VAR17) + 1), VAR11 | VAR16);
        FUN6(VAR7, (int)VAR18);
        VAR7--;
    }
    {
        char *VAR19;
        asprintf(&VAR19, "");
        FUN7((int)VAR19, (int)(VAR19 + strlen(VAR19) + 1), VAR11 | VAR16);
        FUN6(VAR7, (int)VAR19);
        VAR7--;
    }
    char *VAR20[] = {"", "", "", "", "", "", "", "", ""};
    char **VAR21 = malloc(sizeof(VAR20));
    bcopy(VAR20, VAR21, sizeof(VAR20));
    FUN7((int)VAR21, (int)((void *)VAR21 + sizeof(VAR20)), VAR11 | VAR16);
    for (VAR6 = 0; VAR6 < 9; VAR6++)
    {
        FUN5("", (char *)VAR21[VAR6], (int)VAR21[VAR6]);
        FUN6(VAR7, (int)VAR21[VAR6]);
        VAR7--;
    }
    FUN6(VAR7, 0);
    VAR7--;
    for (argc = 0; argv[argc]; argc++)
        ;
    for (VAR6 = argc - 1; VAR6 >= 0; VAR6--)
    {
        FUN5("", (char *)argv[VAR6], (int)argv[VAR6]);
        FUN6(VAR7, (int)argv[VAR6]);
        VAR7--;
        FUN7((int)argv[VAR6], (int)(argv[VAR6] + strlen(argv[VAR6])), VAR11 | VAR16);
    }
    FUN5("", argc);
    FUN6(VAR7, argc);
    VAR7--;
    FUN5("", (int)VAR1);
    FUN6(VAR7, (int)VAR1);
    return (unsigned long)VAR7;
}