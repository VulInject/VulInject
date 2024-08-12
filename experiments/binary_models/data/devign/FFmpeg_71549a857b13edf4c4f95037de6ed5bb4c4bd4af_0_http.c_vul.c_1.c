static int FUN1(VAR1 *VAR2, const char *VAR3, const char *VAR4, const char *VAR5, const char *VAR6, const char *VAR7, int *VAR8)
{
    VAR9 *VAR10 = VAR2->VAR11;
    int VAR12, VAR13;
    char VAR14[1024] = "";
    char *VAR15 = NULL, *VAR16 = NULL;
    int64_t VAR17 = VAR10->VAR17;
    int VAR18 = 0;
    const char *VAR19;
    VAR12 = VAR2->VAR20 & VAR21;
    if (VAR10->VAR22)
    {
        VAR12 = 1;
        VAR10->VAR23 = 0;
    }
    VAR19 = VAR12 ? "" : "";
    VAR15 = FUN2(&VAR10->VAR24, VAR6, VAR4, VAR19);
    VAR16 = FUN2(&VAR10->VAR25, VAR7, VAR4, VAR19);
    if (!FUN3(VAR10->VAR14, ""))
        VAR18 += FUN4(VAR14 + VAR18, sizeof(VAR14) - VAR18, "", VAR26);
    if (!FUN3(VAR10->VAR14, ""))
        VAR18 += FUN5(VAR14 + VAR18, "", sizeof(VAR14) - VAR18);
    if (!FUN3(VAR10->VAR14, "") && !VAR12)
        VAR18 += FUN4(VAR14 + VAR18, sizeof(VAR14) - VAR18, "" VAR27 "", VAR10->VAR17);
    if (!FUN3(VAR10->VAR14, ""))
    {
        if (VAR10->VAR28)
        {
            VAR18 += FUN5(VAR14 + VAR18, "", sizeof(VAR14) - VAR18);
        }
        else
        {
            VAR18 += FUN5(VAR14 + VAR18, "", sizeof(VAR14) - VAR18);
        }
    }
    if (!FUN3(VAR10->VAR14, ""))
        VAR18 += FUN4(VAR14 + VAR18, sizeof(VAR14) - VAR18, "", VAR5);
    if (!FUN3(VAR10->VAR14, "") && VAR10->VAR22)
        VAR18 += FUN4(VAR14 + VAR18, sizeof(VAR14) - VAR18, "", VAR10->VAR29);
    if (VAR10->VAR14)
        FUN5(VAR14 + VAR18, VAR10->VAR14, sizeof(VAR14) - VAR18);
    snprintf(VAR10->VAR30, sizeof(VAR10->VAR30), ""
                                           ""
                                           ""
                                           ""
                                           ""
                                           "",
             VAR19, VAR3, VAR12 && VAR10->VAR23 ? "" : "", VAR14, VAR15 ? VAR15 : "", VAR16 ? "" : "", VAR16 ? VAR16 : "");
    FUN6(&VAR15);
    FUN6(&VAR16);
    if ((VAR13 = FUN7(VAR10->VAR31, VAR10->VAR30, strlen(VAR10->VAR30))) < 0)
        return VAR13;
    if (VAR10->VAR22)
        if ((VAR13 = FUN7(VAR10->VAR31, VAR10->VAR22, VAR10->VAR29)) < 0)
            return VAR13;
    VAR10->VAR32 = VAR10->VAR30;
    VAR10->VAR33 = VAR10->VAR30;
    VAR10->VAR34 = 0;
    VAR10->VAR17 = 0;
    VAR10->VAR35 = -1;
    VAR10->VAR36 = 0;
    VAR10->VAR37 = 0;
    VAR10->VAR38 = 0;
    if (VAR12 && !VAR10->VAR22)
    {
        VAR10->VAR39 = 200;
        return 0;
    }
    VAR13 = FUN8(VAR2, VAR8);
    if (VAR13 < 0)
        return VAR13;
    return (VAR17 == VAR10->VAR17) ? 0 : -1;
}