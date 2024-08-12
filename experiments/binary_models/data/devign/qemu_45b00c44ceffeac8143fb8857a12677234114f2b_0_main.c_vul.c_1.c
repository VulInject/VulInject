FUN1(VAR1 *VAR2, int argc, char *argv[])
{
    int VAR3;
    while ((VAR3 = getopt(argc, argv, ""
                                   ""
                                   "")) != -1)
    {
        switch (VAR3)
        {
        case '':
            FUN2(argv[0], 0);
            break;
        case '':
            VAR2->VAR4 = 1;
            break;
        case '':
            VAR2->VAR5 = strdup(VAR6);
            break;
        default:
            FUN2(argv[0], 1);
            break;
        }
    }
}