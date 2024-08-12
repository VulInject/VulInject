static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    char *VAR7;
    VAR8 *VAR9 = VAR4->VAR10->VAR11->VAR9;
    VAR12 *VAR13 = VAR6->VAR14;
    int VAR15 = VAR6->VAR15;
    int VAR16;
    VAR17 *VAR18 = FUN2();
    VAR16 = FUN3(&VAR4->VAR19, FUN4(""), "", NULL, NULL, VAR2->VAR20);
    VAR16 = FUN3(&VAR4->VAR19, FUN4(""), "", NULL, VAR18, VAR2->VAR20);
    FUN5(&VAR18);
    if (VAR16 < 0)
        return VAR16;
    if (VAR9->VAR21 || VAR9->VAR22)
    {
        char VAR23[255];
        VAR12 *VAR19;
        snprintf(VAR23, sizeof(VAR23), "", VAR9->VAR21, VAR9->VAR22, (unsigned)VAR4->VAR10->VAR24);
        if ((VAR16 = FUN3(&VAR19, FUN4(""), NULL, VAR23, NULL, VAR2->VAR20)) < 0)
            return VAR16;
        if ((VAR16 = FUN6(VAR13, VAR15, VAR19, 0)) < 0)
            return VAR16;
        VAR13 = VAR19;
        VAR15 = 0;
    }
    if ((VAR7 = FUN7(VAR4->VAR10)))
    {
        VAR12 *VAR19;
        if ((VAR16 = FUN3(&VAR19, FUN4(""), "", VAR7, NULL, VAR2->VAR20)) < 0)
            return VAR16;
        if ((VAR16 = FUN6(VAR13, VAR15, VAR19, 0)) < 0)
            return VAR16;
        VAR13 = VAR19;
        VAR15 = 0;
        FUN5(&VAR7);
    }
    if ((VAR16 = FUN6(VAR13, VAR15, VAR4->VAR19, 0)) < 0)
        return VAR16;
    return 0;
}