static int FUN1(VAR1 **VAR2, char *VAR3, void *VAR4)
{
    char VAR5[128] = "", VAR6[32] = "";
    int VAR7 = 0, VAR8 = 0, VAR9 = 0, VAR10 = 0, VAR11 = VAR12;
    int *VAR13 = NULL, VAR14;
    sscanf(VAR3, "", &VAR7, &VAR8, &VAR9, &VAR10, VAR6, VAR5);
    if (!strcmp(VAR6, ""))
        VAR11 = VAR12;
    else if (!strcmp(VAR6, ""))
        VAR11 = VAR15;
    else if (!strcmp(VAR6, ""))
        VAR11 = VAR16;
    else if (!strcmp(VAR6, ""))
    {
        VAR11 = VAR17;
        if ((VAR14 = FUN2(&VAR7, &VAR8, &VAR13, VAR5, VAR4)) < 0)
            return VAR14;
    }
    else
    {
        FUN3(VAR4, VAR18, "", VAR6);
        return FUN4(VAR19);
    }
    if (VAR8 <= 0 || VAR7 <= 0)
    {
        FUN3(VAR4, VAR18, "", VAR7, VAR8);
        return FUN4(VAR19);
    }
    if (VAR9 < 0 || VAR10 < 0 || VAR9 >= VAR7 || VAR10 >= VAR8)
    {
        FUN3(VAR4, VAR18, "", VAR9, VAR10, VAR7, VAR8);
        return FUN4(VAR19);
    }
    *VAR2 = FUN5(VAR7, VAR8, VAR9, VAR10, VAR11, VAR13);
    FUN6(&VAR13);
    if (!*VAR2)
        return FUN4(VAR20);
    FUN3(VAR4, VAR21, "", VAR8, VAR7, VAR9, VAR10, VAR6);
    return 0;
}