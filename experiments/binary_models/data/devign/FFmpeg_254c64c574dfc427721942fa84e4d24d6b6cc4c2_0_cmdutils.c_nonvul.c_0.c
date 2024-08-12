int FUN1(void *VAR1, const char *VAR2, const char *VAR3)
{
    const VAR4 *VAR5;
    int VAR6 = 0;
    char VAR7[128];
    const char *VAR8;
    const VAR9 *VAR10 = FUN2(), *VAR11 = FUN3();
    const VAR9 *VAR12 = FUN4();
    const VAR9 *VAR13 = FUN5();
    const VAR9 *VAR14 = FUN6();
    if (!strcmp(VAR2, "") || !strcmp(VAR2, ""))
        FUN7(VAR15);
    if (!(VAR8 = strchr(VAR2, '')))
        VAR8 = VAR2 + strlen(VAR2);
    FUN8(VAR7, VAR2, FUN9(sizeof(VAR7), VAR8 - VAR2 + 1));
    if ((VAR5 = FUN10(&VAR10, VAR7, NULL, 0, VAR16 | VAR17)) || ((VAR2[0] == '' || VAR2[0] == '' || VAR2[0] == '') && (VAR5 = FUN10(&VAR10, VAR2 + 1, NULL, 0, VAR17))))
    {
        FUN11(&VAR18, VAR2, VAR3, VAR19);
        VAR6 = 1;
    }
    if ((VAR5 = FUN10(&VAR11, VAR2, NULL, 0, VAR16 | VAR17)))
    {
        FUN11(&VAR20, VAR2, VAR3, VAR19);
        if (VAR6)
            FUN12(NULL, VAR21, "", VAR2);
        VAR6 = 1;
    }
    if (!VAR6 && (VAR5 = FUN10(&VAR13, VAR2, NULL, 0, VAR16 | VAR17)))
    {
        struct VAR22 *VAR23 = FUN13();
        int VAR24 = FUN14(VAR23, VAR2, VAR3, 0);
        FUN15(VAR23);
        if (!strcmp(VAR2, "") || !strcmp(VAR2, "") || !strcmp(VAR2, "") || !strcmp(VAR2, "") || !strcmp(VAR2, "") || !strcmp(VAR2, ""))
        {
            FUN12(NULL, VAR25, "");
            return FUN16(VAR26);
        }
        if (VAR24 < 0)
        {
            FUN12(NULL, VAR25, "", VAR2);
            return VAR24;
        }
        FUN11(&VAR27, VAR2, VAR3, VAR19);
        VAR6 = 1;
    }
    if (!VAR6 && !strcmp(VAR2, ""))
    {
        FUN12(NULL, VAR28, "", VAR2, VAR3);
        VAR6 = 1;
    }
    if (!VAR6 && (VAR5 = FUN10(&VAR14, VAR2, NULL, 0, VAR16 | VAR17)))
    {
        struct VAR29 *VAR30 = FUN17();
        int VAR24 = FUN14(VAR30, VAR2, VAR3, 0);
        FUN18(&VAR30);
        if (VAR24 < 0)
        {
            FUN12(NULL, VAR25, "", VAR2);
            return VAR24;
        }
        FUN11(&VAR31, VAR2, VAR3, VAR19);
        VAR6 = 1;
    }
    if ((VAR5 = FUN10(&VAR12, VAR2, NULL, 0, VAR16 | VAR17)))
    {
        FUN11(&VAR32, VAR2, VAR3, VAR19);
        VAR6 = 1;
    }
    if (VAR6)
        return 0;
    return VAR33;
}