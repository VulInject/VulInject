static int FUN1(int argc, char **argv)
{
    int VAR1, VAR2;
    const char *VAR3, *VAR4;
    VAR5 *VAR6;
    BdrvCheckResult VAR7;
    int VAR8 = 0;
    int VAR9 = VAR10 | VAR11;
    VAR4 = NULL;
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
            VAR4 = VAR12;
            break;
        case '':
            VAR9 |= VAR13;
            if (!strcmp(VAR12, ""))
            {
                VAR8 = VAR14;
            }
            else if (!strcmp(VAR12, ""))
            {
                VAR8 = VAR14 | VAR15;
            }
            else
            {
                FUN2();
            }
            break;
        }
    }
    if (VAR16 >= argc)
    {
        FUN2();
    }
    VAR3 = argv[VAR16++];
    VAR6 = FUN3(VAR3, VAR4, VAR9);
    if (!VAR6)
    {
        return 1;
    }
    VAR2 = FUN4(VAR6, &VAR7, VAR8);
    if (VAR2 == -VAR17)
    {
        FUN5("");
        FUN6(VAR6);
        return 1;
    }
    if (VAR7.VAR18 || VAR7.VAR19)
    {
        FUN7(""
               ""
               ""
               "",
               VAR7.VAR19, VAR7.VAR18);
        VAR2 = FUN4(VAR6, &VAR7, 0);
    }
    if (!(VAR7.VAR20 || VAR7.VAR21 || VAR7.VAR22))
    {
        FUN7("");
    }
    else
    {
        if (VAR7.VAR20)
        {
            FUN7(""
                   ""
                   "",
                   VAR7.VAR20);
        }
        if (VAR7.VAR21)
        {
            FUN7(""
                   "",
                   VAR7.VAR21);
        }
        if (VAR7.VAR22)
        {
            FUN7("", VAR7.VAR22);
        }
    }
    if (VAR7.VAR23.VAR24 != 0 && VAR7.VAR23.VAR25 != 0)
    {
        FUN7("" VAR26 "" VAR26 "", VAR7.VAR23.VAR25, VAR7.VAR23.VAR24, VAR7.VAR23.VAR25 * 100.0 / VAR7.VAR23.VAR24, VAR7.VAR23.VAR27 * 100.0 / VAR7.VAR23.VAR25);
    }
    FUN6(VAR6);
    if (VAR2 < 0 || VAR7.VAR22)
    {
        FUN7(""
               "",
               strerror(-VAR2));
        return 1;
    }
    if (VAR7.VAR20)
    {
        return 2;
    }
    else if (VAR7.VAR21)
    {
        return 3;
    }
    else
    {
        return 0;
    }
}