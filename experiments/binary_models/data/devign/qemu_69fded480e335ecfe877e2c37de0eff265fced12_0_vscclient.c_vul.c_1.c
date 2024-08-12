main(int argc, char *argv[])
{
    VAR1 *VAR2;
    VAR3 *VAR4;
    char *VAR5;
    char *VAR6;
    VSCMsgHeader VAR7;
    VAR8 *VAR9 = NULL;
    char *VAR10[VAR11];
    char *VAR12 = NULL;
    int VAR13 = 0;
    int VAR14, VAR15;
    if (FUN1() != 0)
        return 1;
    while ((VAR14 = getopt(argc, argv, "")) != -1)
    {
        switch (VAR14)
        {
        case '':
            if (VAR13 >= VAR11)
            {
                FUN2("", VAR11);
                FUN3(5);
            }
            VAR10[VAR13++] = VAR16;
            break;
        case '':
            VAR12 = VAR16;
            break;
        case '':
            FUN4();
            FUN3(4);
            break;
        case '':
            VAR17 = FUN5(VAR16, 1);
            break;
        }
    }
    if (argc - VAR18 != 2)
    {
        FUN4();
        FUN3(4);
    }
    if (VAR13 > 0)
    {
        char *VAR19;
        int VAR20, VAR21;
        if (VAR12 == NULL)
        {
            VAR12 = (char *)""/VAR22/VAR23/VAR24\"";
        }
        VAR20 = strlen(VAR12) + strlen(VAR25) + 2;
        for (VAR21 = 0; VAR21 < VAR13; VAR21++)
        {
            VAR20 += strlen(VAR10[VAR21]) + 1;
        }
        VAR19 = FUN6(VAR20);
        strcpy(VAR19, VAR12);
        strcat(VAR19, VAR25);
        for (VAR21 = 0; VAR21 < VAR13; VAR21++)
        {
            strcat(VAR19, VAR10[VAR21]);
            strcat(VAR19, "");
        }
        strcat(VAR19, "");
        VAR12 = VAR19;
    }
    if (VAR12)
    {
        VAR9 = FUN7(VAR12);
    }
    VAR5 = FUN8(argv[argc - 2]);
    VAR6 = FUN8(argv[argc - 1]);
    VAR15 = FUN9(VAR5, VAR6);
    if (VAR15 == -1)
    {
        fprintf(VAR26, "");
        FUN3(5);
    }
    VAR27 = FUN10();
    FUN11(&VAR28);
    FUN11(&VAR29);
    FUN12(&VAR30);
    FUN13(VAR9);
    VAR2 = FUN14(NULL, true);
    FUN2("");
    FUN15(VAR31);
    VAR4 = FUN16(VAR32);
    VAR4 = FUN17(VAR32);
    FUN18(VAR4, VAR33, VAR34, NULL);
    VAR35 = FUN19(VAR15);
    VAR35 = FUN17(VAR15);
    FUN20(VAR35, NULL, NULL);
    FUN21(VAR35, VAR36);
    VSCMsgInit VAR37 = {.VAR38 = FUN22(VAR39), .VAR40 = VAR41, .VAR42 = {0}};
    FUN23(VAR43, VAR7.VAR44, &VAR37, sizeof(VAR37));
    FUN24(VAR2);
    FUN25(VAR2);
    FUN26(VAR4);
    FUN26(VAR35);
    FUN27(VAR27);
    FUN28(VAR15);
    return 0;
}