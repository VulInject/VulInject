static int FUN1(int argc, char **argv)
{
    int VAR1, VAR2 = 0;
    uint64_t VAR3 = -1;
    const char *VAR4 = "";
    const char *VAR5 = NULL;
    const char *VAR6;
    const char *VAR7 = NULL;
    char *VAR8 = NULL;
    for (;;)
    {
        VAR1 = getopt(argc, argv, "");
        if (VAR1 == -1)
        {
            break;
        }
        switch (VAR1)
        {
        case '':
        case '':
            FUN2();
            break;
        case '':
            VAR5 = VAR9;
            break;
        case '':
            VAR7 = VAR9;
            break;
        case '':
            VAR4 = VAR9;
            break;
        case '':
            FUN3(""
                         "");
            return 1;
        case '':
            FUN3(""
                         "");
            return 1;
        case '':
            VAR8 = VAR9;
            break;
        }
    }
    if (VAR10 >= argc)
    {
        FUN2();
    }
    VAR6 = argv[VAR10++];
    if (VAR10 < argc)
    {
        int64_t VAR11;
        char *VAR12;
        VAR11 = FUN4(argv[VAR10++], &VAR12, VAR13);
        if (VAR11 < 0 || *VAR12)
        {
            FUN3(""
                         "");
            FUN3("");
            VAR2 = -1;
            goto VAR14;
        }
        VAR3 = (VAR15)VAR11;
    }
    if (VAR8 && !strcmp(VAR8, ""))
    {
        VAR2 = FUN5(VAR6, VAR4);
        goto VAR14;
    }
    VAR2 = FUN6(VAR6, VAR4, VAR7, VAR5, VAR8, VAR3, VAR16);
VAR14:
    if (VAR2)
    {
        return 1;
    }
    return 0;
}