int FUN1(char *VAR1, int VAR2, int *VAR3, int VAR4, int VAR5)
{
    struct ifreq VAR6;
    int VAR7, VAR8;
    int VAR9 = sizeof(struct VAR10);
    FUN2(VAR7 = open(VAR11, VAR12));
    if (VAR7 < 0)
    {
        FUN3("", VAR11);
        return -1;
    }
    memset(&VAR6, 0, sizeof(VAR6));
    VAR6.VAR13 = VAR14 | VAR15;
    if (*VAR3)
    {
        unsigned int VAR16;
        if (FUN4(VAR7, VAR17, &VAR16) == 0 && VAR16 & VAR18)
        {
            *VAR3 = 1;
            VAR6.VAR13 |= VAR18;
        }
        else
        {
            *VAR3 = 0;
        }
        if (VAR4 && !*VAR3)
        {
            FUN3(""
                         "");
            close(VAR7);
            return -1;
        }
        FUN4(VAR7, VAR19, &VAR9);
    }
    if (VAR5)
    {
        unsigned int VAR16;
        if ((FUN4(VAR7, VAR17, &VAR16) != 0) || !(VAR16 & VAR20))
        {
            FUN3(""
                         "");
            close(VAR7);
            return -1;
        }
        else
        {
            VAR6.VAR13 |= VAR20;
        }
    }
    if (VAR1[0] != '')
        FUN5(VAR6.VAR21, VAR22, VAR1);
    else
        FUN5(VAR6.VAR21, VAR22, "");
    VAR8 = FUN4(VAR7, VAR23, (void *)&VAR6);
    if (VAR8 != 0)
    {
        if (VAR1[0] != '')
        {
            FUN3("", VAR11, VAR6.VAR21);
        }
        else
        {
            FUN3("", VAR11);
        }
        close(VAR7);
        return -1;
    }
    FUN5(VAR1, VAR2, VAR6.VAR21);
    FUN6(VAR7, VAR24, VAR25);
    return VAR7;
}