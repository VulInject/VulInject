static void FUN1(VAR1 *VAR2, int argc, char **argv)
{
    const char *VAR3 = "";
    int VAR4 = 0, VAR5;
    const struct option VAR6[] = {{"", 0, NULL, ''}, {"", 0, NULL, ''}, {"", 0, NULL, ''}, {"", 1, NULL, ''}, {"", 1, NULL, ''}, {"", 2, NULL, ''}, {"", 0, NULL, ''}, {"", 1, NULL, ''}, {"", 1, NULL, ''}, {"", 0, NULL, ''}, {"", 1, NULL, ''}, {"", 1, NULL, ''}, {"", 1, NULL, ''}, {NULL, 0, NULL, 0}};
    VAR2->VAR7 = VAR8 | VAR9;
    while ((VAR5 = getopt_long(argc, argv, VAR3, VAR6, &VAR4)) != -1)
    {
        switch (VAR5)
        {
        case '':
            FUN2(VAR2->VAR10);
            VAR2->VAR10 = FUN3(VAR11);
            break;
        case '':
            FUN2(VAR2->VAR12);
            VAR2->VAR12 = FUN3(VAR11);
            break;
        case '':
            FUN2(VAR2->VAR13);
            VAR2->VAR13 = FUN3(VAR11);
            break;
        case '':
            FUN2(VAR2->VAR14);
            VAR2->VAR14 = FUN3(VAR11);
            break;
        case '':
            FUN2(VAR2->VAR15);
            VAR2->VAR15 = FUN3(VAR11 ?: VAR16);
            break;
        case '':
            FUN2(VAR2->VAR17);
            VAR2->VAR17 = FUN3(VAR11);
            break;
        case '':
            VAR2->VAR7 = VAR18;
            break;
        case '':
            FUN4("", VAR19);
            FUN5(VAR20);
        case '':
            VAR2->VAR21 = 1;
            break;
        case '':
            VAR2->VAR22 = 1;
            break;
        case '':
        {
            if (FUN6(VAR11))
            {
                FUN7(VAR23, NULL);
                FUN5(VAR20);
            }
            VAR2->VAR24 = FUN8(VAR2->VAR24, FUN9(VAR11, ""));
            break;
        }
        case '':
            VAR2->VAR25 = VAR11;
            if (strcmp(VAR2->VAR25, "") == 0)
            {
                if (FUN10())
                {
                    FUN5(VAR26);
                }
                if (FUN11(VAR2->VAR12, VAR2->VAR13, VAR2->VAR17))
                {
                    FUN5(VAR26);
                }
                FUN5(VAR20);
            }
            else if (strcmp(VAR2->VAR25, "") == 0)
            {
                FUN12();
                FUN5(FUN13());
            }
            else if (strcmp(VAR2->VAR25, "") == 0)
            {
                if (FUN10())
                {
                    FUN5(VAR26);
                }
                FUN5(VAR20);
            }
            else if (strcmp(VAR2->VAR25, "") == 0)
            {
                FUN12();
                FUN5(VAR20);
            }
            else
            {
                FUN4("");
                FUN5(VAR26);
            }
            break;
        case '':
            FUN14(argv[0]);
            FUN5(VAR20);
        case '':
            FUN15("", argv[0]);
            FUN5(VAR26);
        }
    }
}