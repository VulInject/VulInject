static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    char *VAR7;
    VAR8 *VAR9 = VAR4->VAR9;
    VAR10 *VAR11 = VAR12[VAR9->VAR13];
    VAR14 *VAR15 = VAR6->VAR16;
    int VAR17 = VAR6->VAR17;
    int VAR18;
    char VAR19[255];
    snprintf(VAR19, sizeof(VAR19), "", VAR9->VAR13, VAR9->VAR20);
    VAR18 = FUN2(&VAR4->VAR21, FUN3(""), VAR19, NULL, NULL, VAR2->VAR22);
    if (VAR18 < 0)
        return VAR18;
    if (VAR4->VAR23 || VAR4->VAR24)
    {
        char VAR25[255];
        VAR14 *VAR21;
        snprintf(VAR25, sizeof(VAR25), "", VAR4->VAR23, VAR4->VAR24, (unsigned)VAR9->VAR26);
        snprintf(VAR19, sizeof(VAR19), "", VAR9->VAR13, VAR9->VAR20);
        if ((VAR18 = FUN2(&VAR21, FUN3(""), VAR19, VAR25, NULL, VAR2->VAR22)) < 0)
            return VAR18;
        if ((VAR18 = FUN4(VAR15, VAR17, VAR21, 0)) < 0)
            return VAR18;
        VAR15 = VAR21;
        VAR17 = 0;
    }
    if ((VAR7 = FUN5(VAR4)))
    {
        VAR14 *VAR21;
        snprintf(VAR19, sizeof(VAR19), "", VAR9->VAR13, VAR9->VAR20);
        VAR18 = FUN2(&VAR21, FUN3(""), "", VAR7, NULL, VAR2->VAR22);
        FUN6(&VAR7);
        if (VAR18 < 0)
            return VAR18;
        if ((VAR18 = FUN4(VAR15, VAR17, VAR21, 0)) < 0)
            return VAR18;
        VAR15 = VAR21;
        VAR17 = 0;
    }
    if (VAR9->VAR27.VAR28)
    {
        VAR14 *VAR29;
        char VAR25[255];
        snprintf(VAR25, sizeof(VAR25), "", VAR9->VAR27.VAR28, VAR9->VAR27.VAR30);
        snprintf(VAR19, sizeof(VAR19), "", VAR9->VAR13, VAR9->VAR20);
        VAR18 = FUN2(&VAR29, FUN3(""), VAR19, VAR25, NULL, VAR2->VAR22);
        if (VAR18 < 0)
            return VAR18;
        VAR18 = FUN4(VAR15, VAR17, VAR29, 0);
        if (VAR18 < 0)
            return VAR18;
        VAR15 = VAR29;
        VAR17 = 0;
    }
    snprintf(VAR19, sizeof(VAR19), "", VAR9->VAR13, VAR9->VAR20);
    VAR18 = FUN7(VAR11->VAR31, VAR11->VAR32, &VAR15, &VAR17, VAR19);
    if (VAR18 < 0)
        return VAR18;
    if ((VAR18 = FUN4(VAR15, VAR17, VAR4->VAR21, 0)) < 0)
        return VAR18;
    return 0;
}