static int FUN1(int argc, char **argv)
{
    int VAR1, VAR2, VAR3;
    const char *VAR4, *VAR5, *VAR6;
    int64_t VAR7, VAR8;
    VAR9 *VAR10 = NULL;
    VAR11 *VAR12;
    static QemuOptsList VAR13 = {
        .VAR14 = "",
        .VAR15 = FUN2(VAR13.VAR15),
        .VAR16 = {{.VAR14 = VAR17, .VAR18 = VAR19, .VAR20 = ""}, {}},
    };
    if (argc < 3)
    {
        FUN3();
        return 1;
    }
    VAR6 = argv[--argc];
    VAR5 = NULL;
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
            FUN3();
            break;
        case '':
            VAR5 = VAR21;
            break;
        }
    }
    if (VAR22 >= argc)
    {
        FUN3();
    }
    VAR4 = argv[VAR22++];
    switch (VAR6[0])
    {
    case '':
        VAR3 = 1;
        VAR6++;
        break;
    case '':
        VAR3 = -1;
        VAR6++;
        break;
    default:
        VAR3 = 0;
        break;
    }
    VAR12 = FUN4(&VAR13, NULL, 0, NULL);
    if (FUN5(VAR12, VAR17, VAR6))
    {
        VAR2 = -1;
        FUN6(VAR12);
        goto VAR23;
    }
    VAR7 = FUN7(VAR12, VAR17, 0);
    FUN6(VAR12);
    VAR10 = FUN8(VAR4, VAR5, VAR24 | VAR25, true);
    if (!VAR10)
    {
        VAR2 = -1;
        goto VAR23;
    }
    if (VAR3)
    {
        VAR8 = FUN9(VAR10) + VAR7 * VAR3;
    }
    else
    {
        VAR8 = VAR7;
    }
    if (VAR8 <= 0)
    {
        FUN10("");
        VAR2 = -1;
        goto VAR23;
    }
    VAR2 = FUN11(VAR10, VAR8);
    switch (VAR2)
    {
    case 0:
        FUN12("");
        break;
    case -VAR26:
        FUN10("");
        break;
    case -VAR27:
        FUN10("");
        break;
    default:
        FUN10("", -VAR2);
        break;
    }
VAR23:
    if (VAR10)
    {
        FUN13(VAR10);
    }
    if (VAR2)
    {
        return 1;
    }
    return 0;
}