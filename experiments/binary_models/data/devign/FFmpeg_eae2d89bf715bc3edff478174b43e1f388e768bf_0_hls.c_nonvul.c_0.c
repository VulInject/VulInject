static int FUN1(VAR1 *VAR2, VAR3 **VAR4, const char *VAR5, VAR6 *VAR7, VAR6 *VAR8)
{
    VAR9 *VAR10 = VAR2->VAR11;
    VAR6 *VAR12 = NULL;
    const char *VAR13 = NULL;
    int VAR14;
    FUN2(&VAR12, VAR7, 0);
    FUN2(&VAR12, VAR8, 0);
    if (FUN3(VAR5, "", NULL))
    {
        if (VAR5[6] == '' || VAR5[6] == '')
            VAR13 = FUN4(VAR5 + 7);
    }
    if (!VAR13)
        VAR13 = FUN4(VAR5);
    if (!VAR13)
        return VAR15;
    if (!FUN3(VAR13, "", NULL) && !FUN3(VAR13, "", NULL))
        return VAR15;
    if (!FUN5(VAR13, VAR5, strlen(VAR13)) && VAR5[strlen(VAR13)] == '')
        ;
    else if (FUN3(VAR5, "", NULL) && !FUN5(VAR13, VAR5 + 7, strlen(VAR13)) && VAR5[7 + strlen(VAR13)] == '')
        ;
    else if (strcmp(VAR13, "") || !FUN5(VAR5, "", 5))
        return VAR15;
    VAR14 = VAR2->FUN6(VAR2, VAR4, VAR5, VAR16, &VAR12);
    if (VAR14 >= 0)
    {
        void *VAR17 = (VAR2->VAR18 & VAR19) ? NULL : VAR2->VAR4;
        FUN7(&VAR10->VAR20, "", VAR17);
        FUN8(&VAR7, "", VAR10->VAR20, 0);
    }
    FUN9(&VAR12);
    return VAR14;
}