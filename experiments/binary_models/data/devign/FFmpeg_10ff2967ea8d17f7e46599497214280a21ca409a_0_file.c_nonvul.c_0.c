int FUN1(const char *VAR1, VAR2 **VAR3, VAR4 *VAR5, int VAR6, void *VAR7)
{
    FileLogContext VAR8 = {&VAR9, VAR6, VAR7};
    int VAR10, VAR11 = open(VAR1, VAR12);
    struct stat VAR13;
    av_unused void *VAR14;
    off_t VAR15;
    char VAR16[128];
    *VAR3 = NULL;
    if (VAR11 < 0)
    {
        VAR10 = FUN2(VAR17);
        FUN3(VAR10, VAR16, sizeof(VAR16));
        FUN4(&VAR8, VAR18, "", VAR1, VAR16);
        return VAR10;
    }
    if (FUN5(VAR11, &VAR13) < 0)
    {
        VAR10 = FUN2(VAR17);
        FUN3(VAR10, VAR16, sizeof(VAR16));
        FUN4(&VAR8, VAR18, "", VAR16);
        close(VAR11);
        return VAR10;
    }
    VAR15 = VAR13.VAR19;
    if (VAR15 > VAR20)
    {
        FUN4(&VAR8, VAR18, "", VAR1);
        close(VAR11);
        return FUN2(VAR21);
    }
    *VAR5 = VAR15;
    VAR14 = FUN6(NULL, *VAR5, VAR22 | VAR23, VAR24, VAR11, 0);
    if (VAR14 == (void *)-1)
    {
        VAR10 = FUN2(VAR17);
        FUN3(VAR10, VAR16, sizeof(VAR16));
        FUN4(&VAR8, VAR18, "", VAR16);
        close(VAR11);
        return VAR10;
    }
    *VAR3 = VAR14;
    {
        HANDLE VAR25, VAR26 = (VAR27)FUN7(VAR11);
        VAR25 = FUN8(VAR26, NULL, VAR28, 0, 0, NULL);
        if (!VAR25)
        {
            FUN4(&VAR8, VAR18, "");
            close(VAR11);
            return -1;
        }
        VAR14 = FUN9(VAR25, VAR29, 0, 0, *VAR5);
        FUN10(VAR25);
        if (!VAR14)
        {
            FUN4(&VAR8, VAR18, "");
            close(VAR11);
            return -1;
        }
        *VAR3 = VAR14;
    }
    *VAR3 = FUN11(*VAR5);
    if (!*VAR3)
    {
        FUN4(&VAR8, VAR18, "");
        close(VAR11);
        return FUN2(VAR30);
    }
    read(VAR11, *VAR3, *VAR5);
    close(VAR11);
    return 0;
}