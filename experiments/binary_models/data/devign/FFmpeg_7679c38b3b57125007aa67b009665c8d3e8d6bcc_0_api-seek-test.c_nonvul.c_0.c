static int FUN1(const char *VAR1, const char *VAR2, const char *VAR3)
{
    VAR4 *VAR5 = NULL;
    VAR6 *VAR7 = NULL;
    VAR8 *VAR9 = NULL;
    VAR10 *VAR11 = NULL;
    VAR12 *VAR13 = NULL;
    int VAR14;
    int VAR15;
    int VAR16, VAR17;
    long int VAR18, VAR19;
    VAR20 = 0;
    VAR21 = 0;
    VAR22 = VAR23 = NULL;
    VAR15 = FUN2(&VAR13, VAR1, NULL, NULL);
    if (VAR15 < 0)
    {
        FUN3(NULL, VAR24, "");
        return VAR15;
    }
    VAR15 = FUN4(VAR13, NULL);
    if (VAR15 < 0)
    {
        FUN3(NULL, VAR24, "");
        return VAR15;
    }
    VAR18 = FUN5(VAR2);
    VAR19 = FUN5(VAR3);
    if ((VAR18 < 0) || (VAR19 < 0))
        return -1;
    VAR14 = FUN6(VAR13, VAR25, -1, -1, NULL, 0);
    if (VAR14 < 0)
    {
        FUN3(NULL, VAR24, "");
        return -1;
    }
    VAR9 = VAR13->VAR26[VAR14]->VAR27;
    VAR5 = FUN7(VAR9->VAR28);
    if (!VAR5)
    {
        FUN3(NULL, VAR24, "");
        return -1;
    }
    VAR7 = FUN8(VAR5);
    if (!VAR7)
    {
        FUN3(NULL, VAR24, "");
        return FUN9(VAR29);
    }
    VAR15 = FUN10(VAR7, VAR9);
    if (VAR15)
    {
        FUN3(NULL, VAR24, "");
        return VAR15;
    }
    VAR15 = FUN11(VAR7, VAR5, NULL);
    if (VAR15 < 0)
    {
        FUN3(VAR7, VAR24, "");
        return VAR15;
    }
    VAR11 = FUN12();
    if (!VAR11)
    {
        FUN3(NULL, VAR24, "");
        return FUN9(VAR29);
    }
    VAR15 = FUN13(VAR13, VAR14, VAR7, VAR11, 0, 0, 1);
    if (VAR15 != 0)
        return -1;
    for (VAR16 = VAR18; VAR16 < VAR19; VAR16 += 100)
    {
        for (VAR17 = VAR16 + 100; VAR17 < VAR19; VAR17 += 100)
        {
            VAR15 = FUN13(VAR13, VAR14, VAR7, VAR11, VAR16, VAR17, 0);
            if (VAR15 != 0)
                return -1;
        }
    }
    FUN14(&VAR22);
    FUN14(&VAR23);
    FUN15(&VAR11);
    FUN16(VAR7);
    FUN17(&VAR13);
    FUN18(&VAR7);
    return 0;
}