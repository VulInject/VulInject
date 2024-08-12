static int FUN1(VAR1 *VAR2, const char *VAR3)
{
    char VAR4[128];
    char VAR5[1024];
    VAR6 *VAR7;
    int VAR8, VAR9, VAR10;
    int64_t VAR11;
    if (VAR2->VAR12->VAR13)
    {
        strcpy(VAR5, VAR2->VAR12->VAR13->VAR14);
        VAR8 = VAR15;
        if (FUN2(VAR4, sizeof(VAR4), "", VAR3))
        {
            VAR11 = FUN3(VAR4, 0);
            if (VAR11 == VAR16)
                return -1;
        }
        else if (FUN2(VAR4, sizeof(VAR4), "", VAR3))
        {
            int VAR17 = FUN4(VAR4, 0, 10);
            VAR11 = FUN5() - VAR17 * (VAR18)1000000;
        }
        else
            VAR11 = FUN5() - VAR2->VAR12->VAR17 * (VAR18)1000;
    }
    else
    {
        strcpy(VAR5, VAR2->VAR12->VAR14);
        VAR8 = 0;
        if (FUN2(VAR4, sizeof(VAR4), "", VAR3))
        {
            VAR11 = FUN3(VAR4, 1);
            if (VAR11 == VAR16)
                return -1;
        }
        else
            VAR11 = 0;
    }
    if (VAR5[0] == '')
        return -1;
    {
        time_t VAR19 = VAR11 / 1000000;
        FUN6("" VAR20 "", VAR11, FUN7(&VAR19));
    }
    if ((VAR10 = FUN8(&VAR7, VAR5, VAR2->VAR12->VAR21, VAR8, VAR2->VAR12->VAR22)) < 0)
    {
        FUN6("", VAR5, VAR10);
        return -1;
    }
    VAR7->VAR23 |= VAR24;
    VAR2->VAR25 = VAR7;
    if (FUN9(VAR2->VAR25) < 0)
    {
        FUN6("", VAR5);
        FUN10(VAR7);
        return -1;
    }
    for (VAR9 = 0; VAR9 < VAR7->VAR26; VAR9++)
        FUN11(VAR7, VAR9);
    VAR2->VAR27 = 0;
    for (VAR9 = 0; VAR9 < VAR2->VAR12->VAR26; VAR9++)
    {
        if (VAR2->VAR27 == 0 && VAR2->VAR12->VAR28[VAR9]->VAR29->VAR30 == VAR31)
        {
            VAR2->VAR27 = VAR9;
        }
    }
    if (VAR2->VAR25->VAR32->VAR33)
        FUN12(VAR2->VAR25, -1, VAR11, 0);
    VAR2->VAR34 = VAR35;
    VAR2->VAR36 = VAR37;
    return 0;
}