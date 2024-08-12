static int FUN1(VAR1 *VAR2, int VAR3, VAR4 *VAR5, const char *VAR6)
{
    const char *VAR7;
    char *VAR8;
    char VAR9[25];
    int VAR10 = strlen(VAR6), VAR11 = sizeof(VAR9), VAR12 = 0;
    VAR13 *VAR14 = VAR2->VAR15[VAR3]->VAR14;
    assert(VAR14->VAR16 == VAR17);
    assert(VAR5);
    if (!(VAR8 = FUN2(VAR10)))
    {
        FUN3(VAR14, VAR18, "");
        return FUN4(VAR19);
    }
    if (FUN5(VAR6, "", &VAR7))
    {
        while (*VAR7 && *VAR7 == '')
            VAR7++;
        while (*VAR7 && *VAR7 != '')
            VAR7++;
        while (*VAR7 && *VAR7 == '')
            VAR7++;
        while (FUN6(&VAR7, VAR9, VAR11, VAR8, VAR10))
        {
            VAR12 = FUN7(VAR14, VAR5, VAR9, VAR8);
            if (VAR12 < 0 && VAR12 != VAR20)
                return VAR12;
        }
    }
    FUN8(VAR8);
    return 0;
}