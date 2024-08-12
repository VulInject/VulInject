static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, int64_t VAR7)
{
    unsigned int VAR8 = 0, VAR9 = 0, VAR10;
    char VAR11[256];
    VAR12 *VAR13 = NULL;
    VAR12 *VAR14 = NULL;
    int VAR15 = FUN2(VAR16);
    int64_t VAR17 = FUN3(VAR4);
    VAR18 *VAR19 = FUN4(VAR2->VAR20, "", NULL, 0);
    if (VAR19 && !strcmp(VAR19->VAR21, ""))
    {
        return 0;
    }
    if (VAR6->VAR22 > 0)
    {
        FUN5(VAR2, VAR23, "");
        return 0;
    }
    while (FUN3(VAR4) < VAR7 - 2 && FUN6(VAR4, VAR11, sizeof(VAR11)) > 0)
    {
        VAR12 **VAR24;
        unsigned int VAR25;
        if (FUN7(VAR4) != VAR26)
            break;
        VAR25 = FUN8(VAR4);
        if (VAR25 >> 28)
            break;
        if (!strcmp(VAR27, VAR11) && !VAR13)
        {
            VAR24 = &VAR13;
            VAR8 = VAR25;
        }
        else if (!strcmp(VAR28, VAR11) && !VAR14)
        {
            VAR24 = &VAR14;
            VAR9 = VAR25;
        }
        else
            break;
        if (!(*VAR24 = FUN9(sizeof(**VAR24) * VAR25)))
        {
            VAR15 = FUN2(VAR29);
            goto VAR30;
        }
        for (VAR10 = 0; VAR10 < VAR25 && FUN3(VAR4) < VAR7 - 1; VAR10++)
        {
            if (FUN7(VAR4) != VAR31)
                goto VAR30;
            VAR24[0][VAR10] = FUN10(FUN11(VAR4));
        }
        if (VAR13 && VAR14)
        {
            VAR15 = 0;
            break;
        }
    }
    if (VAR8 == VAR9 && VAR9 && VAR7 <= VAR14[0])
    {
        for (VAR10 = 0; VAR10 < VAR8; VAR10++)
            FUN12(VAR6, VAR14[VAR10], VAR13[VAR10] * 1000, 0, 0, VAR32);
    }
    else
        FUN5(VAR2, VAR23, "");
VAR30:
    FUN13(&VAR13);
    FUN13(&VAR14);
    FUN14(VAR4, VAR17, VAR33);
    return VAR15;
}