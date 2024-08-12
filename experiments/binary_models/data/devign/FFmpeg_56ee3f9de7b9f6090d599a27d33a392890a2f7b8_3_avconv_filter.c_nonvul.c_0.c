static int FUN1(VAR1 *VAR2, VAR3 **VAR4, int *VAR5)
{
    VAR6 *VAR7 = VAR8[VAR2->VAR9];
    VAR10 *VAR11 = (*VAR4)->VAR11;
    VAR3 *VAR12;
    const VAR13 *VAR14;
    const char *VAR15 = VAR2->VAR16->VAR17->VAR18 == VAR19 ? "" : "";
    char VAR20[128];
    int VAR21 = 0;
    if (VAR7->VAR22 == VAR23 && VAR7->VAR24 == VAR25)
        return 0;
    VAR14 = FUN2(VAR15);
    if (!VAR14)
    {
        FUN3(NULL, VAR26, ""
                                   "",
               VAR15);
        return VAR27;
    }
    snprintf(VAR20, sizeof(VAR20), "", VAR15, VAR2->VAR9, VAR2->VAR28);
    VAR12 = FUN4(VAR11, VAR14, VAR20);
    if (!VAR12)
        return FUN5(VAR29);
    if (VAR7->VAR22 != VAR23)
    {
        VAR21 = FUN6(VAR12, "", (double)VAR7->VAR22 / 1e6, VAR30);
    }
    if (VAR21 >= 0 && VAR7->VAR24 != VAR25)
    {
        VAR21 = FUN6(VAR12, "", (double)VAR7->VAR24 / 1e6, VAR30);
    }
    if (VAR21 < 0)
    {
        FUN3(VAR12, VAR26, "", VAR15);
        return VAR21;
    }
    VAR21 = FUN7(VAR12, NULL);
    if (VAR21 < 0)
        return VAR21;
    VAR21 = FUN8(*VAR4, *VAR5, VAR12, 0);
    if (VAR21 < 0)
        return VAR21;
    *VAR4 = VAR12;
    *VAR5 = 0;
    return 0;
}