static int FUN1(VAR1 *VAR2, int argc, char **argv)
{
    struct timeval VAR3, VAR4;
    bool VAR5 = false, VAR6 = false;
    int VAR7, VAR8;
    int64_t VAR9, VAR10;
    while ((VAR7 = getopt(argc, argv, "")) != -1)
    {
        switch (VAR7)
        {
        case '':
            VAR5 = true;
            break;
        case '':
            VAR6 = true;
            break;
        default:
            return FUN2(&VAR11);
        }
    }
    if (VAR12 != argc - 2)
    {
        return FUN2(&VAR11);
    }
    VAR9 = FUN3(argv[VAR12]);
    if (VAR9 < 0)
    {
        FUN4(VAR9, argv[VAR12]);
        return 0;
    }
    VAR12++;
    VAR10 = FUN3(argv[VAR12]);
    if (VAR10 < 0)
    {
        FUN4(VAR10, argv[VAR12]);
        return 0;
    }
    else if (VAR10 >> VAR13 > VAR14)
    {
        FUN5("" VAR15 "", (VAR16)VAR14 << VAR13, argv[VAR12]);
        return 0;
    }
    FUN6(&VAR3, NULL);
    VAR8 = FUN7(VAR2, VAR9 >> VAR13, VAR10 >> VAR13);
    FUN6(&VAR4, NULL);
    if (VAR8 < 0)
    {
        FUN5("", strerror(-VAR8));
        goto VAR17;
    }
    if (!VAR6)
    {
        VAR4 = FUN8(VAR4, VAR3);
        FUN9("", &VAR4, VAR9, VAR10, VAR10, 1, VAR5);
    }
VAR17:
    return 0;
}