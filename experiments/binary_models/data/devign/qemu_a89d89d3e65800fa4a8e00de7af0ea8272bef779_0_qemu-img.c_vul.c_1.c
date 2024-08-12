static int FUN1(int argc, char **argv)
{
    VAR1 *VAR2;
    QEMUSnapshotInfo VAR3;
    char *VAR4, *VAR5 = NULL;
    int VAR6, VAR7 = 0, VAR8;
    int VAR9 = 0;
    qemu_timeval VAR10;
    bool VAR11 = false;
    VAR8 = VAR12 | VAR13;
    for (;;)
    {
        VAR6 = getopt(argc, argv, "");
        if (VAR6 == -1)
        {
            break;
        }
        switch (VAR6)
        {
        case '':
        case '':
            FUN2();
            return 0;
        case '':
            if (VAR9)
            {
                FUN2();
                return 0;
            }
            VAR9 = VAR14;
            VAR8 &= ~VAR13;
            break;
        case '':
            if (VAR9)
            {
                FUN2();
                return 0;
            }
            VAR9 = VAR15;
            VAR5 = VAR16;
            break;
        case '':
            if (VAR9)
            {
                FUN2();
                return 0;
            }
            VAR9 = VAR17;
            VAR5 = VAR16;
            break;
        case '':
            if (VAR9)
            {
                FUN2();
                return 0;
            }
            VAR9 = VAR18;
            VAR5 = VAR16;
            break;
        case '':
            VAR11 = true;
            break;
        }
    }
    if (VAR19 != argc - 1)
    {
        FUN2();
    }
    VAR4 = argv[VAR19++];
    VAR2 = FUN3(VAR4, NULL, VAR8, true, VAR11);
    if (!VAR2)
    {
        return 1;
    }
    switch (VAR9)
    {
    case VAR14:
        FUN4(VAR2);
        break;
    case VAR17:
        memset(&VAR3, 0, sizeof(VAR3));
        FUN5(VAR3.VAR20, sizeof(VAR3.VAR20), VAR5);
        FUN6(&VAR10);
        VAR3.VAR21 = VAR10.VAR22;
        VAR3.VAR23 = VAR10.VAR24 * 1000;
        VAR7 = FUN7(VAR2, &VAR3);
        if (VAR7)
        {
            FUN8("", VAR5, VAR7, strerror(-VAR7));
        }
        break;
    case VAR15:
        VAR7 = FUN9(VAR2, VAR5);
        if (VAR7)
        {
            FUN8("", VAR5, VAR7, strerror(-VAR7));
        }
        break;
    case VAR18:
        VAR7 = FUN10(VAR2, VAR5);
        if (VAR7)
        {
            FUN8("", VAR5, VAR7, strerror(-VAR7));
        }
        break;
    }
    FUN11(VAR2);
    if (VAR7)
    {
        return 1;
    }
    return 0;
}