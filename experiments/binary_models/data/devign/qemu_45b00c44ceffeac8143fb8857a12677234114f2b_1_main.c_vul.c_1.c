FUN1(VAR1 *VAR2, int argc, char *argv[])
{
    int VAR3;
    unsigned long long VAR4;
    VAR5 *VAR6 = NULL;
    while ((VAR3 = getopt(argc, argv, ""
                                   ""
                                   ""
                                   ""
                                   ""
                                   ""
                                   ""
                                   "")) != -1)
    {
        switch (VAR3)
        {
        case '':
            FUN2(argv[0], 0);
            break;
        case '':
            VAR2->VAR7 = 1;
            break;
        case '':
            VAR2->VAR8 = 1;
            break;
        case '':
            VAR2->VAR9 = strdup(VAR10);
            break;
        case '':
            VAR2->VAR11 = strdup(VAR10);
            break;
        case '':
            VAR2->VAR12 = strdup(VAR10);
            break;
        case '':
            FUN3("", VAR10, &VAR2->VAR13, &VAR6);
            if (VAR6)
            {
                fprintf(VAR14, "", FUN4(VAR6));
                FUN5(VAR6);
                FUN2(argv[0], 1);
            }
            break;
        case '':
            if (FUN6(VAR10, &VAR4, 0) < 0)
            {
                fprintf(VAR14, "");
                FUN2(argv[0], 1);
            }
            VAR2->VAR15 = VAR4;
            break;
        default:
            FUN2(argv[0], 1);
            break;
        }
    }
    if (VAR2->VAR15 > VAR16)
    {
        fprintf(VAR14, "", VAR16);
        FUN2(argv[0], 1);
    }
    if (VAR2->VAR7 == 1 && VAR2->VAR8 == 0)
    {
        fprintf(VAR14, "");
        FUN2(argv[0], 1);
    }
}