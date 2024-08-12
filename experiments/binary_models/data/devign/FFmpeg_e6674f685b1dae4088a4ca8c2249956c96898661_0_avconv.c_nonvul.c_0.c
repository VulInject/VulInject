static int FUN1(VAR1 *VAR2, const char *VAR3, const char *VAR4)
{
    VAR5 *VAR6 = NULL;
    int VAR7, VAR8 = 0, VAR9;
    int VAR10 = -1, VAR11;
    char *VAR12, *VAR13;
    char *VAR14;
    if (*VAR4 == '')
    {
        VAR8 = 1;
        VAR4++;
    }
    VAR14 = FUN2(VAR4);
    if (VAR13 = strchr(VAR14, ''))
    {
        *VAR13 = 0;
        VAR10 = FUN3(VAR13 + 1, &VAR13, 0);
        if (VAR10 >= VAR15 || VAR10 < 0)
        {
            FUN4(NULL, VAR16, "", VAR10);
            FUN5(1);
        }
        if (*VAR13)
            VAR13++;
        for (VAR7 = 0; VAR7 < VAR17[VAR10].VAR18; VAR7++)
            if (FUN6(VAR17[VAR10].VAR19, VAR17[VAR10].VAR19->VAR20[VAR7], VAR13) == 1)
            {
                VAR11 = VAR7;
                break;
            }
        if (VAR7 == VAR17[VAR10].VAR18)
        {
            FUN4(NULL, VAR16, ""
                                       "",
                   VAR4);
            FUN5(1);
        }
    }
    VAR9 = FUN3(VAR14, &VAR12, 0);
    if (VAR9 >= VAR15 || VAR9 < 0)
    {
        FUN4(NULL, VAR16, "", VAR9);
        FUN5(1);
    }
    if (VAR8)
        for (VAR7 = 0; VAR7 < VAR2->VAR21; VAR7++)
        {
            VAR6 = &VAR2->VAR22[VAR7];
            if (VAR9 == VAR6->VAR23 && FUN6(VAR17[VAR6->VAR23].VAR19, VAR17[VAR6->VAR23].VAR19->VAR20[VAR6->VAR24], *VAR12 == '' ? VAR12 + 1 : VAR12) > 0)
                VAR6->VAR25 = 1;
        }
    else
        for (VAR7 = 0; VAR7 < VAR17[VAR9].VAR18; VAR7++)
        {
            if (FUN6(VAR17[VAR9].VAR19, VAR17[VAR9].VAR19->VAR20[VAR7], *VAR12 == '' ? VAR12 + 1 : VAR12) <= 0)
                continue;
            VAR2->VAR22 = FUN7(VAR2->VAR22, sizeof(*VAR2->VAR22), &VAR2->VAR21, VAR2->VAR21 + 1);
            VAR6 = &VAR2->VAR22[VAR2->VAR21 - 1];
            VAR6->VAR23 = VAR9;
            VAR6->VAR24 = VAR7;
            if (VAR10 >= 0)
            {
                VAR6->VAR26 = VAR10;
                VAR6->VAR27 = VAR11;
            }
            else
            {
                VAR6->VAR26 = VAR9;
                VAR6->VAR27 = VAR7;
            }
        }
    if (!VAR6)
    {
        FUN4(NULL, VAR16, "", VAR4);
        FUN5(1);
    }
    FUN8(&VAR14);
    return 0;
}