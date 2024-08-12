static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const char *VAR5, VAR6 ***VAR7, VAR8 **VAR9, VAR10 *VAR11, VAR12 **VAR13)
{
    VAR14 *VAR15 = FUN2();
    VAR3 **VAR16 = NULL;
    size_t VAR17 = 0;
    VAR12 *VAR18 = NULL;
    size_t VAR19;
    if (FUN3(VAR15, VAR4, &VAR17, &VAR16, VAR13) < 0)
    {
        return -1;
    }
    for (VAR19 = 0; VAR19 < VAR17; VAR19++)
    {
        VAR6 *VAR20 = FUN4();
        FUN5(FUN6(VAR20), VAR5);
        if (FUN7(VAR20, VAR16[VAR19], VAR18 == NULL ? &VAR18 : NULL) < 0)
        {
            continue;
        }
        (*VAR11)++;
        *VAR7 = FUN8(VAR6 *, *VAR7, *VAR11);
        *VAR9 = FUN8(VAR8, *VAR9, *VAR11);
        (*VAR7)[*VAR11 - 1] = VAR20;
        (*VAR9)[*VAR11 - 1] = 0;
    }
    for (VAR19 = 0; VAR19 < VAR17; VAR19++)
    {
        FUN9(VAR16[VAR19]);
    }
    FUN10(VAR16);
    if (VAR18)
    {
        if (*VAR11 == 0)
        {
            FUN11(VAR13, VAR18);
            return -1;
        }
        else
        {
            FUN12(VAR18);
        }
    }
    for (VAR19 = 0; VAR19 < *VAR11; VAR19++)
    {
        (*VAR9)[VAR19] = FUN13(FUN6((*VAR7)[VAR19]), VAR21, VAR22, VAR2, NULL);
    }
    return 0;
}