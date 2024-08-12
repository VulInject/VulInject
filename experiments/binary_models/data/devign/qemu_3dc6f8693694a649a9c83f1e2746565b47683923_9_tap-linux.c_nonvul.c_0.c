int FUN1(char *VAR1, int VAR2, int *VAR3, int VAR4, int VAR5, VAR6 **VAR7)
{
    struct ifreq VAR8;
    int VAR9, VAR10;
    int VAR11 = sizeof(struct VAR12);
    unsigned int VAR13;
    FUN2(VAR9 = open(VAR14, VAR15));
    if (VAR9 < 0)
    {
        FUN3(VAR7, VAR16, "", VAR14);
        return -1;
    }
    memset(&VAR8, 0, sizeof(VAR8));
    VAR8.VAR17 = VAR18 | VAR19;
    if (FUN4(VAR9, VAR20, &VAR13) == -1)
    {
        FUN5("", strerror(VAR16));
        VAR13 = 0;
    }
    if (VAR13 & VAR21)
    {
        VAR8.VAR17 |= VAR21;
    }
    if (*VAR3)
    {
        if (VAR13 & VAR22)
        {
            *VAR3 = 1;
            VAR8.VAR17 |= VAR22;
        }
        else
        {
            *VAR3 = 0;
        }
        if (VAR4 && !*VAR3)
        {
            FUN6(VAR7, ""
                             "");
            close(VAR9);
            return -1;
        }
        FUN4(VAR9, VAR23, &VAR11);
    }
    if (VAR5)
    {
        if (!(VAR13 & VAR24))
        {
            FUN6(VAR7, ""
                             "");
            close(VAR9);
            return -1;
        }
        else
        {
            VAR8.VAR17 |= VAR24;
        }
    }
    if (VAR1[0] != '')
        FUN7(VAR8.VAR25, VAR26, VAR1);
    else
        FUN7(VAR8.VAR25, VAR26, "");
    VAR10 = FUN4(VAR9, VAR27, (void *)&VAR8);
    if (VAR10 != 0)
    {
        if (VAR1[0] != '')
        {
            FUN3(VAR7, VAR16, "", VAR14, VAR8.VAR25);
        }
        else
        {
            FUN3(VAR7, VAR16, "", VAR14);
        }
        close(VAR9);
        return -1;
    }
    FUN7(VAR1, VAR2, VAR8.VAR25);
    FUN8(VAR9, VAR28, VAR29);
    return VAR9;
}