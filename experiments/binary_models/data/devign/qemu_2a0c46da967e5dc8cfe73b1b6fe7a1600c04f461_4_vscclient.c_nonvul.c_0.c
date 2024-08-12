main(int argc, char *argv[])
{
    VAR1 *VAR2;
    VAR3 *VAR4;
    char *VAR5;
    char *VAR6;
    VAR7 *VAR8 = NULL;
    char *VAR9[VAR10];
    char *VAR11 = NULL;
    int VAR12 = 0;
    int VAR13, VAR14;
    WSADATA VAR15;
    if (FUN1(FUN2(2, 2), &VAR15) != 0)
    {
        VAR13 = FUN3();
        fprintf(VAR16, "", VAR13);
        return 1;
    }
    if (!FUN4())
    {
        FUN5(NULL);
    }
    while ((VAR13 = getopt(argc, argv, "")) != -1)
    {
        switch (VAR13)
        {
        case '':
            if (VAR12 >= VAR10)
            {
                FUN6("", VAR10);
                FUN7(5);
            }
            VAR9[VAR12++] = VAR17;
            break;
        case '':
            VAR11 = VAR17;
            break;
        case '':
            FUN8();
            FUN7(4);
            break;
        case '':
            VAR18 = FUN9(VAR17, 1);
            break;
        }
    }
    if (argc - VAR19 != 2)
    {
        FUN8();
        FUN7(4);
    }
    if (VAR12 > 0)
    {
        char *VAR20;
        int VAR21, VAR22;
        if (VAR11 == NULL)
        {
            VAR11 = (char *)""/VAR23/VAR24/VAR25\"";
        }
        VAR21 = strlen(VAR11) + strlen(VAR26) + 2;
        for (VAR22 = 0; VAR22 < VAR12; VAR22++)
        {
            VAR21 += strlen(VAR9[VAR22]) + 1;
        }
        VAR20 = FUN10(VAR21);
        strcpy(VAR20, VAR11);
        strcat(VAR20, VAR26);
        for (VAR22 = 0; VAR22 < VAR12; VAR22++)
        {
            strcat(VAR20, VAR9[VAR22]);
            strcat(VAR20, "");
        }
        strcat(VAR20, "");
        VAR11 = VAR20;
    }
    if (VAR11)
    {
        VAR8 = FUN11(VAR11);
    }
    VAR5 = FUN12(argv[argc - 2]);
    VAR6 = FUN12(argv[argc - 1]);
    VAR14 = FUN13(VAR5, VAR6);
    if (VAR14 == -1)
    {
        fprintf(VAR16, "");
        FUN7(5);
    }
    VAR27 = FUN14();
    FUN15(VAR8);
    VAR2 = FUN16(NULL, VAR28);
    FUN6("");
    FUN17(VAR29);
    VAR4 = FUN18(VAR30);
    VAR4 = FUN19(VAR30);
    FUN20(VAR4, VAR31, VAR32, NULL);
    VAR33 = FUN21(VAR14);
    VAR33 = FUN19(VAR14);
    FUN22(VAR33, NULL, NULL);
    FUN23(VAR33, VAR34);
    VSCMsgInit VAR35 = {.VAR36 = FUN24(VAR37), .VAR38 = VAR39, .VAR40 = {0}};
    FUN25(VAR41, 0, &VAR35, sizeof(VAR35));
    FUN26(VAR2);
    FUN27(VAR2);
    FUN28(VAR4);
    FUN28(VAR33);
    FUN29(VAR27, VAR28);
    FUN30(VAR14);
    return 0;
}