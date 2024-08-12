FUN1(int argc, char **argv)
{
    int VAR1 = 0;
    int VAR2 = 0;
    int VAR3 = 0;
    int VAR4;
    while ((VAR4 = getopt(argc, argv, "")) != VAR5)
    {
        switch (VAR4)
        {
        case '':
            VAR1 |= VAR6;
            break;
        case '':
            VAR1 |= VAR7 | VAR8;
            break;
        case '':
            VAR2 = 1;
            break;
        case '':
            VAR3 = 1;
            break;
        default:
            return FUN2(&VAR9);
        }
    }
    if (!VAR2)
    {
        VAR1 |= VAR10;
    }
    if (VAR11 != argc - 1)
        return FUN2(&VAR9);
    return FUN3(argv[VAR11], VAR1, VAR3);
}