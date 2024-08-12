static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    char *VAR7;
    VAR8 *VAR9 = VAR4->VAR9;
    VAR10 *VAR11 = VAR9->VAR12->VAR11;
    VAR13 *VAR14 = VAR6->VAR15;
    int VAR16 = VAR6->VAR16;
    int VAR17;
    char VAR18[255];
    snprintf(VAR18, sizeof(VAR18), "", VAR9->VAR19, VAR9->VAR20);
    VAR17 = FUN2(&VAR4->VAR21, FUN3(""), VAR18, NULL, VAR7, VAR2->VAR22);
    if (VAR17 < 0)
        return VAR17;
    if (VAR11->VAR23 || VAR11->VAR24)
    {
        char VAR25[255];
        VAR13 *VAR21;
        snprintf(VAR25, sizeof(VAR25), "", VAR11->VAR23, VAR11->VAR24, (unsigned)VAR9->VAR26);
        snprintf(VAR18, sizeof(VAR18), "", VAR9->VAR19, VAR9->VAR20);
        if ((VAR17 = FUN2(&VAR21, FUN3(""), VAR18, VAR25, NULL, VAR2->VAR22)) < 0)
            return VAR17;
        if ((VAR17 = FUN4(VAR14, VAR16, VAR21, 0)) < 0)
            return VAR17;
        VAR14 = VAR21;
        VAR16 = 0;
    }
    if ((VAR7 = FUN5(VAR9)))
    {
        VAR13 *VAR21;
        snprintf(VAR18, sizeof(VAR18), "", VAR9->VAR19, VAR9->VAR20);
        if ((VAR17 = FUN2(&VAR21, FUN3(""), "", VAR7, NULL, VAR2->VAR22)) < 0)
            return VAR17;
        if ((VAR17 = FUN4(VAR14, VAR16, VAR21, 0)) < 0)
            return VAR17;
        VAR14 = VAR21;
        VAR16 = 0;
        FUN6(&VAR7);
    }
    if (VAR9->VAR27.VAR28)
    {
        VAR13 *VAR29;
        char VAR25[255];
        snprintf(VAR25, sizeof(VAR25), "", VAR9->VAR27.VAR28, VAR9->VAR27.VAR30);
        snprintf(VAR18, sizeof(VAR18), "", VAR9->VAR19, VAR9->VAR20);
        VAR17 = FUN2(&VAR29, FUN3(""), VAR18, VAR25, NULL, VAR2->VAR22);
        if (VAR17 < 0)
            return VAR17;
        VAR17 = FUN4(VAR14, VAR16, VAR29, 0);
        if (VAR17 < 0)
            return VAR17;
        VAR14 = VAR29;
        VAR16 = 0;
    }
    if ((VAR17 = FUN4(VAR14, VAR16, VAR4->VAR21, 0)) < 0)
        return VAR17;
    return 0;
}