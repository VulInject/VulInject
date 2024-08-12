static int FUN1(VAR1 *VAR2, VAR3 **VAR4, const char *VAR5, VAR6 *VAR7, VAR6 *VAR8, int *VAR9)
{
    VAR10 *VAR11 = VAR2->VAR12;
    VAR6 *VAR13 = NULL;
    const char *VAR14 = NULL;
    int VAR15;
    int VAR16 = 0;
    FUN2(&VAR13, VAR7, 0);
    FUN2(&VAR13, VAR8, 0);
    if (FUN3(VAR5, "", NULL))
    {
        if (VAR5[6] == '' || VAR5[6] == '')
            VAR14 = FUN4(VAR5 + 7);
    }
    if (!VAR14)
        VAR14 = FUN4(VAR5);
    if (!VAR14)
        return VAR17;
    if (FUN3(VAR14, "", NULL))
    {
        if (strcmp(VAR11->VAR18, "") && !FUN5(VAR5, VAR11->VAR18))
        {
            FUN6(VAR2, VAR19, ""
                                    "",
                   VAR5);
            return VAR17;
        }
    }
    else if (FUN3(VAR14, "", NULL))
    {
        VAR16 = 1;
    }
    else
        return VAR17;
    if (!FUN7(VAR14, VAR5, strlen(VAR14)) && VAR5[strlen(VAR14)] == '')
        ;
    else if (FUN3(VAR5, "", NULL) && !FUN7(VAR14, VAR5 + 7, strlen(VAR14)) && VAR5[7 + strlen(VAR14)] == '')
        ;
    else if (strcmp(VAR14, "") || !FUN7(VAR5, "", 5))
        return VAR17;
    if (VAR16 && VAR11->VAR20 && *VAR4)
    {
        VAR15 = FUN8(VAR11->VAR21, VAR4, VAR5);
        if (VAR15 == VAR22)
        {
            return VAR15;
        }
        else if (VAR15 < 0)
        {
            if (VAR15 != VAR23)
                FUN6(VAR2, VAR24, "", VAR5, FUN9(VAR15));
            VAR15 = VAR2->FUN10(VAR2, VAR4, VAR5, VAR25, &VAR13);
        }
    }
    else
    {
        VAR15 = VAR2->FUN10(VAR2, VAR4, VAR5, VAR25, &VAR13);
    }
    if (VAR15 >= 0)
    {
        char *VAR26 = NULL;
        if (!(VAR2->VAR27 & VAR28))
            FUN11(*VAR4, "", VAR29, (VAR30 **)&VAR26);
        if (VAR26)
        {
            FUN12(VAR11->VAR31);
            VAR11->VAR31 = VAR26;
        }
        FUN13(&VAR7, "", VAR11->VAR31, 0);
    }
    FUN14(&VAR13);
    if (VAR9)
        *VAR9 = VAR16;
    return VAR15;
}