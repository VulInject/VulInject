static int FUN1(const char *VAR1)
{
    const char *VAR2 = "";
    char *VAR3, *VAR4;
    int VAR5, VAR6 = 0;
    time_t VAR7;
    struct VAR8 *VAR8;
    AVBPrint VAR9;
    if (VAR10)
        return 0;
    FUN2(&VAR7);
    VAR8 = FUN3(&VAR7);
    while (VAR1 && *VAR1)
    {
        if ((VAR5 = FUN4(&VAR1, "", "", 0, &VAR3, &VAR4)) < 0)
        {
            if (VAR6)
                FUN5(NULL, VAR11, "", FUN6(VAR5));
            break;
        }
        if (*VAR1)
            VAR1++;
        VAR6++;
        if (!strcmp(VAR3, ""))
        {
            VAR2 = VAR4;
            VAR4 = NULL;
        }
        else
        {
            FUN5(NULL, VAR11, "", VAR3);
        }
        FUN7(VAR4);
        FUN7(VAR3);
    }
    FUN8(&VAR9, 0, 1);
    FUN9(&VAR9, VAR2, VAR8);
    if (!FUN10(&VAR9))
    {
        FUN5(NULL, VAR11, "");
        return FUN11(VAR12);
    }
    VAR10 = fopen(VAR9.VAR13, "");
    if (!VAR10)
    {
        FUN5(NULL, VAR11, ""%VAR14\"", VAR9.VAR13, strerror(VAR15));
        return FUN11(VAR15);
    }
    FUN12(VAR16);
    FUN5(NULL, VAR17, ""
                              ""%VAR14\"",
           VAR18, VAR8->VAR19 + 1900, VAR8->VAR20 + 1, VAR8->VAR21, VAR8->VAR22, VAR8->VAR23, VAR8->VAR24, VAR9.VAR13);
    FUN13(FUN14(FUN15(), VAR25));
    FUN16(&VAR9, NULL);
    return 0;
}