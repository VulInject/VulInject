static int FUN1(VAR1 *VAR2, VAR3 **VAR4, const char *VAR5, VAR6 *VAR7, VAR6 *VAR8, int *VAR9)
{
    VAR10 *VAR11 = VAR2->VAR12;
    VAR6 *VAR13 = NULL;
    const char *VAR14 = NULL;
    int VAR15;
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
        return VAR16;
    if (!FUN3(VAR14, "", NULL) && !FUN3(VAR14, "", NULL))
        return VAR16;
    if (!FUN5(VAR14, VAR5, strlen(VAR14)) && VAR5[strlen(VAR14)] == '')
        ;
    else if (FUN3(VAR5, "", NULL) && !FUN5(VAR14, VAR5 + 7, strlen(VAR14)) && VAR5[7 + strlen(VAR14)] == '')
        ;
    else if (strcmp(VAR14, "") || !FUN5(VAR5, "", 5))
        return VAR16;
    VAR15 = VAR2->FUN6(VAR2, VAR4, VAR5, VAR17, &VAR13);
    if (VAR15 >= 0)
    {
        char *VAR18 = NULL;
        if (!(VAR2->VAR19 & VAR20))
            FUN7(*VAR4, "", VAR21, (VAR22 **)&VAR18);
        if (VAR18)
        {
            FUN8(VAR11->VAR23);
            VAR11->VAR23 = VAR18;
        }
        FUN9(&VAR7, "", VAR11->VAR23, 0);
    }
    FUN10(&VAR13);
    if (VAR9)
        *VAR9 = FUN3(VAR14, "", NULL);
    return VAR15;
}