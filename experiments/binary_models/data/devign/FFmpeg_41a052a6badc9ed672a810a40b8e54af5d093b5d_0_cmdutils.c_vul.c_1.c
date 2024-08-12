int FUN1(const char *VAR1, const char *VAR2)
{
    const VAR3 *VAR4, *VAR5, *VAR6, *VAR7;
    char VAR8[128];
    const char *VAR9;
    const VAR10 *VAR11 = FUN2(), *VAR12 = FUN3(), *VAR13, *VAR14;
    if (!(VAR9 = strchr(VAR1, '')))
        VAR9 = VAR1 + strlen(VAR1);
    FUN4(VAR8, VAR1, FUN5(sizeof(VAR8), VAR9 - VAR1 + 1));
    if ((VAR4 = FUN6(&VAR11, VAR8, NULL, 0, VAR15 | VAR16)) || ((VAR1[0] == '' || VAR1[0] == '' || VAR1[0] == '') && (VAR4 = FUN6(&VAR11, VAR1 + 1, NULL, 0, VAR16))))
        FUN7(&VAR17, VAR1, VAR2, FUN8(VAR4));
    if ((VAR5 = FUN6(&VAR12, VAR1, NULL, 0, VAR15 | VAR16)))
        FUN7(&VAR18, VAR1, VAR2, FUN8(VAR5));
    VAR13 = FUN9();
    if ((VAR6 = FUN6(&VAR13, VAR1, NULL, 0, VAR15 | VAR16)))
    {
        int VAR19 = FUN10(VAR20, VAR1, VAR2, 0);
        if (VAR19 < 0)
        {
            FUN11(NULL, VAR21, "", VAR1);
            return VAR19;
        }
    }
    VAR14 = FUN12();
    if (!VAR4 && !VAR5 && !VAR6 && (VAR7 = FUN6(&VAR14, VAR1, NULL, 0, VAR15 | VAR16)))
    {
        int VAR19 = FUN10(VAR22, VAR1, VAR2, 0);
        if (VAR19 < 0)
        {
            FUN11(NULL, VAR21, "", VAR1);
            return VAR19;
        }
    }
    if (VAR4 || VAR5 || VAR6 || VAR7)
        return 0;
    FUN11(NULL, VAR21, "", VAR1);
    return VAR23;
}