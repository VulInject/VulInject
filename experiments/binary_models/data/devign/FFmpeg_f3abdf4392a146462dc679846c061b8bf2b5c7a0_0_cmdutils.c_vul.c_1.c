int FUN1(void *VAR1, const char *VAR2, const char *VAR3)
{
    const VAR4 *VAR5;
    int VAR6 = 0;
    char VAR7[128];
    const char *VAR8;
    const VAR9 *VAR10 = FUN2(), *VAR11 = FUN3();
    const av_unused VAR9 *VAR12;
    const VAR9 *VAR13, *VAR14;
    if (!strcmp(VAR2, "") || !strcmp(VAR2, ""))
        FUN4(VAR15);
    if (!(VAR8 = strchr(VAR2, '')))
        VAR8 = VAR2 + strlen(VAR2);
    FUN5(VAR7, VAR2, FUN6(sizeof(VAR7), VAR8 - VAR2 + 1));
    if ((VAR5 = FUN7(&VAR10, VAR7, NULL, 0, VAR16 | VAR17)) || ((VAR2[0] == '' || VAR2[0] == '' || VAR2[0] == '') && (VAR5 = FUN7(&VAR10, VAR2 + 1, NULL, 0, VAR17))))
    {
        FUN8(&VAR18, VAR2, VAR3, VAR19);
        VAR6 = 1;
    }
    if ((VAR5 = FUN7(&VAR11, VAR2, NULL, 0, VAR16 | VAR17)))
    {
        FUN8(&VAR20, VAR2, VAR3, VAR19);
        if (VAR6)
            FUN9(NULL, VAR21, "", VAR2);
        VAR6 = 1;
    }
    VAR13 = FUN10();
    if (!VAR6 && FUN7(&VAR13, VAR2, NULL, 0, VAR16 | VAR17))
    {
        int VAR22 = FUN11(VAR23, VAR2, VAR3, 0);
        if (VAR22 < 0)
        {
            FUN9(NULL, VAR24, "", VAR2);
            return VAR22;
        }
        VAR6 = 1;
    }
    VAR14 = FUN12();
    if (!VAR6 && FUN7(&VAR14, VAR2, NULL, 0, VAR16 | VAR17))
    {
        int VAR22 = FUN11(VAR25, VAR2, VAR3, 0);
        if (VAR22 < 0)
        {
            FUN9(NULL, VAR24, "", VAR2);
            return VAR22;
        }
        VAR6 = 1;
    }
    VAR12 = FUN13();
    if (FUN7(&VAR12, VAR2, NULL, 0, VAR16 | VAR17))
    {
        FUN8(&VAR26, VAR2, VAR3, VAR19);
        VAR6 = 1;
    }
    if (VAR6)
        return 0;
    return VAR27;
}