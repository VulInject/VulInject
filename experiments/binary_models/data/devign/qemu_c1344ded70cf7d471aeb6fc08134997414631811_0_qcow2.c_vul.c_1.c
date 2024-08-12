static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, VAR6 **VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    VAR11 *VAR12 = NULL;
    const char *VAR13, *VAR14;
    int VAR15 = 0;
    uint64_t VAR16, VAR17;
    VAR18 *VAR19;
    VAR18 *VAR20;
    uint64_t VAR21;
    bool VAR22;
    int VAR23;
    VAR6 *VAR24 = NULL;
    int VAR25;
    VAR12 = FUN2(&VAR26, NULL, 0, &VAR27);
    FUN3(VAR12, VAR4, &VAR24);
    if (VAR24)
    {
        FUN4(VAR7, VAR24);
        VAR25 = -VAR28;
        goto VAR29;
    }
    FUN5(VAR2, VAR12, &VAR16, &VAR17, &VAR24);
    if (VAR24)
    {
        FUN4(VAR7, VAR24);
        VAR25 = -VAR28;
        goto VAR29;
    }
    VAR16 /= VAR9->VAR30;
    if (VAR16 < VAR31)
    {
        VAR16 = VAR31;
    }
    if (VAR16 > VAR32)
    {
        FUN6(VAR7, "");
        VAR25 = -VAR28;
        goto VAR29;
    }
    VAR17 /= VAR9->VAR30;
    if (VAR17 < VAR33)
    {
        VAR17 = VAR33;
    }
    if (VAR17 > VAR32)
    {
        FUN6(VAR7, "");
        VAR25 = -VAR28;
        goto VAR29;
    }
    VAR19 = FUN7(VAR2, VAR16);
    VAR20 = FUN7(VAR2, VAR17);
    if (VAR19 == NULL || VAR20 == NULL)
    {
        FUN6(VAR7, "");
        VAR25 = -VAR34;
        goto VAR29;
    }
    VAR21 = FUN8(VAR12, VAR35, 0);
    if (VAR21 > VAR36)
    {
        FUN6(VAR7, "");
        VAR25 = -VAR28;
        goto VAR29;
    }
    VAR22 = FUN9(VAR12, VAR37, (VAR9->VAR38 & VAR39));
    if (VAR22 && VAR9->VAR40 < 3)
    {
        FUN6(VAR7, ""
                         "");
        VAR25 = -VAR28;
        goto VAR29;
    }
    VAR13 = FUN10(VAR12, VAR41);
    VAR14 = FUN10(VAR12, VAR42);
    if (VAR14 && VAR13 && strcmp(VAR14, VAR13))
    {
        FUN6(VAR7, "" VAR41 "" VAR42 "", VAR13, VAR14);
        VAR25 = -VAR28;
        goto VAR29;
    }
    if (!VAR13)
    {
        VAR13 = VAR14 ?: "";
    }
    if (!strcmp(VAR13, ""))
    {
        VAR15 = 0;
    }
    else if (!strcmp(VAR13, ""))
    {
        VAR15 = VAR43;
    }
    else if (!strcmp(VAR13, ""))
    {
        VAR15 = VAR44;
    }
    else if (!strcmp(VAR13, ""))
    {
        VAR15 = VAR45;
    }
    else
    {
        FUN6(VAR7, ""
                         ""
                         "",
                   VAR13);
        VAR25 = -VAR28;
        goto VAR29;
    }
    VAR9->VAR46 = 0;
    for (VAR23 = 0; VAR23 < VAR47; VAR23++)
    {
        VAR9->VAR46 |= FUN9(VAR12, VAR48[VAR23], VAR15 & (1 << VAR23)) << VAR23;
    }
    VAR9->VAR19 = VAR19;
    VAR9->VAR20 = VAR20;
    VAR9->VAR22 = VAR22;
    VAR9->VAR49[VAR50] = false;
    VAR9->VAR49[VAR51] = true;
    VAR9->VAR49[VAR52] = FUN9(VAR12, VAR53, VAR5 & VAR54);
    VAR9->VAR49[VAR55] = FUN9(VAR12, VAR56, true);
    VAR9->VAR49[VAR57] = FUN9(VAR12, VAR58, false);
    VAR9->VAR21 = VAR21;
    FUN11(VAR2, FUN12(VAR2));
    VAR25 = 0;
VAR29:
    FUN13(VAR12);
    VAR12 = NULL;
    return VAR25;
}