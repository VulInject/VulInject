int FUN1(VAR1 *VAR2, int VAR3, int VAR4, double VAR5, int VAR6, int64_t VAR7, int64_t VAR8, char *VAR9, char *VAR10, double *VAR11)
{
    if (!VAR2 || !VAR10)
        return FUN2(VAR12);
    if (VAR3)
    {
        FUN3(VAR2, "");
    }
    if (VAR6)
        FUN3(VAR2, "", FUN4(VAR5));
    else
        FUN3(VAR2, "", VAR5);
    if (VAR4)
        FUN3(VAR2, "" VAR13 "" VAR13 "", VAR7, VAR8);
    if (VAR11)
    {
        time_t VAR14, VAR15;
        int VAR16;
        struct VAR17 *VAR17, VAR18;
        char VAR19[128], VAR20[128];
        VAR14 = (VAR21)*VAR11;
        VAR16 = FUN5(FUN4(1000 * (*VAR11 - VAR14)), 0, 999);
        VAR17 = FUN6(&VAR14, &VAR18);
        if (!FUN7(VAR19, sizeof(VAR19), "", VAR17))
        {
            FUN8(NULL, VAR22, "");
            return VAR23;
        }
        if (!FUN7(VAR20, sizeof(VAR20), "", VAR17) || VAR20[1] < '' || VAR20[1] > '')
        {
            int VAR24, VAR25 = VAR17->VAR26;
            VAR17 = FUN9(&VAR14, &VAR18);
            VAR17->VAR26 = VAR25;
            VAR15 = FUN10(VAR17);
            VAR24 = (FUN11(VAR15 - VAR14) + 30) / 60;
            snprintf(VAR20, sizeof(VAR20), "", VAR15 <= VAR14 ? '' : '', VAR24 / 60, VAR24 % 60);
        }
        FUN3(VAR2, "", VAR19, VAR16, VAR20);
        *VAR11 += VAR5;
    }
    if (VAR9)
        FUN3(VAR2, "", VAR9);
    FUN3(VAR2, "", VAR10);
    return 0;
}