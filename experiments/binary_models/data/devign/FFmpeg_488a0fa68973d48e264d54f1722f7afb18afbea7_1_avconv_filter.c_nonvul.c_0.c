static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8;
    const VAR9 *VAR10 = FUN2("");
    VAR11 *VAR12 = VAR4->VAR12;
    VAR13 *VAR14 = VAR15[VAR12->VAR16];
    char VAR17[255], VAR18[255];
    int VAR19, VAR20 = 0;
    snprintf(VAR17, sizeof(VAR17), ""
                                 "" VAR21,
             1, VAR12->VAR22->VAR23->VAR24, VAR12->VAR22->VAR23->VAR24, FUN3(VAR12->VAR22->VAR23->VAR25), VAR12->VAR22->VAR23->VAR26);
    snprintf(VAR18, sizeof(VAR18), "", VAR2->VAR27, VAR12->VAR16, VAR12->VAR22->VAR27);
    if ((VAR19 = FUN4(&VAR4->VAR28, VAR10, VAR18, VAR17, NULL, VAR2->VAR29)) < 0)
        return VAR19;
    VAR8 = VAR4->VAR28;
    if (VAR30 > 0)
    {
        VAR7 *VAR31;
        int VAR32 = 0;
        FUN5(NULL, VAR33, ""
                                     "");
        if (VAR30 > 1)
            VAR32 += snprintf(VAR17 + VAR32, sizeof(VAR17) - VAR32, ""
                                                            "",
                            VAR30);
        snprintf(VAR17 + VAR32, sizeof(VAR17) - VAR32, "", VAR34);
        snprintf(VAR18, sizeof(VAR18), "", VAR2->VAR27, VAR12->VAR16, VAR12->VAR22->VAR27);
        VAR19 = FUN4(&VAR31, FUN2(""), VAR18, VAR17, NULL, VAR2->VAR29);
        if (VAR19 < 0)
            return VAR19;
        VAR19 = FUN6(VAR8, 0, VAR31, 0);
        if (VAR19 < 0)
            return VAR19;
        VAR8 = VAR31;
    }
    if (VAR35 != 256)
    {
        VAR7 *VAR36;
        FUN5(NULL, VAR33, ""
                                     "");
        snprintf(VAR17, sizeof(VAR17), "", VAR35 / 256.0);
        snprintf(VAR18, sizeof(VAR18), "", VAR2->VAR27, VAR12->VAR16, VAR12->VAR22->VAR27);
        VAR19 = FUN4(&VAR36, FUN2(""), VAR18, VAR17, NULL, VAR2->VAR29);
        if (VAR19 < 0)
            return VAR19;
        VAR19 = FUN6(VAR8, 0, VAR36, 0);
        if (VAR19 < 0)
            return VAR19;
        VAR8 = VAR36;
    }
    snprintf(VAR18, sizeof(VAR18), "", VAR12->VAR16, VAR12->VAR22->VAR27);
    VAR19 = FUN7(((VAR14->VAR37 == VAR38) || !VAR14->VAR39) ? VAR38 : 0, VAR14->VAR40, &VAR8, &VAR20, VAR18);
    if (VAR19 < 0)
        return VAR19;
    if ((VAR19 = FUN6(VAR8, 0, VAR6->VAR41, VAR6->VAR20)) < 0)
        return VAR19;
    return 0;
}