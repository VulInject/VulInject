static void *FUN1(VAR1 *VAR2, ram_addr_t VAR3, const char *VAR4)
{
    char *VAR5;
    char *VAR6;
    char *VAR7;
    void *VAR8;
    int VAR9;
    unsigned long VAR10;
    VAR10 = FUN2(VAR4);
    if (!VAR10)
    {
        return NULL;
    }
    if (VAR3 < VAR10)
    {
        return NULL;
    }
    if (FUN3() && !FUN4())
    {
        fprintf(VAR11, "");
        return NULL;
    }
    VAR6 = FUN5(VAR2->VAR12->VAR13);
    for (VAR7 = VAR6; *VAR7 != ''; VAR7++)
    {
        if (*VAR7 == '')
            *VAR7 = '';
    }
    VAR5 = FUN6("", VAR4, VAR6);
    FUN7(VAR6);
    VAR9 = mkstemp(VAR5);
    if (VAR9 < 0)
    {
        FUN8("");
        FUN7(VAR5);
        return NULL;
    }
    unlink(VAR5);
    FUN7(VAR5);
    VAR3 = (VAR3 + VAR10 - 1) & ~(VAR10 - 1);
    if (FUN9(VAR9, VAR3))
        FUN8("");
    VAR8 = FUN10(0, VAR3, VAR14 | VAR15, VAR16, VAR9, 0);
    if (VAR8 == VAR17)
    {
        FUN8("");
        close(VAR9);
        return (NULL);
    }
    if (VAR18)
    {
        int VAR19, VAR20;
        struct sigaction VAR21, VAR22;
        sigset_t VAR23, VAR24;
        memset(&VAR21, 0, sizeof(VAR21));
        VAR21.VAR25 = &VAR26;
        VAR21.VAR27 = 0;
        VAR19 = FUN11(VAR28, &VAR21, &VAR22);
        if (VAR19)
        {
            FUN8("");
            FUN12(1);
        }
        FUN13(&VAR23);
        FUN14(&VAR23, VAR28);
        FUN15(VAR29, &VAR23, &VAR24);
        if (FUN16(VAR30, 1))
        {
            fprintf(VAR11, "");
            FUN12(1);
        }
        for (VAR20 = 0; VAR20 < (VAR3 / VAR10) - 1; VAR20++)
        {
            memset(VAR8 + (VAR10 * VAR20), 0, 1);
        }
        VAR19 = FUN11(VAR28, &VAR22, NULL);
        if (VAR19)
        {
            FUN8("");
            FUN12(1);
        }
        FUN15(VAR31, &VAR24, NULL);
    }
    VAR2->VAR9 = VAR9;
    return VAR8;
}