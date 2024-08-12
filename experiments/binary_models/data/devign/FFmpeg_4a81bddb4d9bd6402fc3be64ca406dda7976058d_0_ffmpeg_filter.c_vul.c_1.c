static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8;
    const VAR9 *VAR10 = FUN2("");
    VAR11 *VAR12 = VAR4->VAR12;
    VAR13 *VAR14 = VAR15[VAR12->VAR16];
    AVRational VAR17 = VAR12->VAR18.VAR19 ? FUN3(VAR12->VAR18) : VAR12->VAR20->VAR21;
    AVRational VAR22 = VAR12->VAR18;
    AVRational VAR23;
    AVBPrint VAR24;
    char VAR25[255];
    int VAR26, VAR27 = 0;
    int64_t VAR28 = 0;
    VAR29 *VAR30 = FUN4();
    if (!VAR30)
        return FUN5(VAR31);
    memset(VAR30, 0, sizeof(*VAR30));
    VAR30->VAR32 = VAR33;
    if (VAR12->VAR34->VAR35 == VAR36)
    {
        FUN6(NULL, VAR37, "");
        return FUN5(VAR38);
    }
    if (!VAR22.VAR19)
        VAR22 = FUN7(VAR15[VAR12->VAR16]->VAR39, VAR12->VAR20, NULL);
    if (VAR12->VAR34->VAR35 == VAR40)
    {
        VAR26 = FUN8(VAR12);
        if (VAR26 < 0)
            return VAR26;
    }
    VAR23 = VAR12->VAR20->VAR41.VAR19 ? VAR12->VAR20->VAR41 : VAR12->VAR34->VAR41;
    if (!VAR23.VAR42)
        VAR23 = (VAR43){0, 1};
    FUN9(&VAR24, 0, 1);
    FUN10(&VAR24, ""
                      "",
               VAR12->VAR44, VAR12->VAR45, VAR12->VAR46 ? VAR12->VAR47 : VAR12->VAR48, VAR17.VAR19, VAR17.VAR42, VAR23.VAR19, VAR23.VAR42, VAR49 + ((VAR12->VAR34->VAR50 & VAR51) ? VAR52 : 0));
    if (VAR22.VAR19 && VAR22.VAR42)
        FUN10(&VAR24, "", VAR22.VAR19, VAR22.VAR42);
    snprintf(VAR25, sizeof(VAR25), "", VAR2->VAR53, VAR12->VAR16, VAR12->VAR20->VAR53);
    if ((VAR26 = FUN11(&VAR4->VAR54, VAR10, VAR25, VAR24.VAR55, NULL, VAR2->VAR56)) < 0)
        return VAR26;
    VAR30->VAR57 = VAR12->VAR57;
    VAR26 = FUN12(VAR4->VAR54, VAR30);
    if (VAR26 < 0)
        return VAR26;
    FUN13(&VAR30);
    VAR8 = VAR4->VAR54;
    if (VAR12->VAR58)
    {
        double VAR59 = FUN14(VAR12->VAR20);
        if (FUN15(VAR59 - 90) < 1.0)
        {
            VAR26 = FUN16(&VAR8, &VAR27, "", "");
        }
        else if (FUN15(VAR59 - 180) < 1.0)
        {
            VAR26 = FUN16(&VAR8, &VAR27, "", NULL);
            if (VAR26 < 0)
                return VAR26;
            VAR26 = FUN16(&VAR8, &VAR27, "", NULL);
        }
        else if (FUN15(VAR59 - 270) < 1.0)
        {
            VAR26 = FUN16(&VAR8, &VAR27, "", "");
        }
        else if (FUN15(VAR59) > 1.0)
        {
            char VAR60[64];
            snprintf(VAR60, sizeof(VAR60), "", VAR59);
            VAR26 = FUN16(&VAR8, &VAR27, "", VAR60);
        }
        if (VAR26 < 0)
            return VAR26;
    }
    if (VAR12->VAR18.VAR19)
    {
        VAR7 *VAR61;
        snprintf(VAR25, sizeof(VAR25), "", VAR12->VAR16, VAR12->VAR20->VAR53);
        if ((VAR26 = FUN11(&VAR61, FUN2(""), VAR25, "", NULL, VAR2->VAR56)) < 0)
            return VAR26;
        if ((VAR26 = FUN17(VAR8, 0, VAR61, 0)) < 0)
            return VAR26;
        VAR8 = VAR61;
    }
    if (VAR62)
    {
        VAR7 *VAR63;
        snprintf(VAR25, sizeof(VAR25), "", VAR12->VAR16, VAR12->VAR20->VAR53);
        if ((VAR26 = FUN11(&VAR63, FUN2(""), VAR25, "", NULL, VAR2->VAR56)) < 0)
            return VAR26;
        if ((VAR26 = FUN17(VAR8, 0, VAR63, 0)) < 0)
            return VAR26;
        VAR8 = VAR63;
    }
    snprintf(VAR25, sizeof(VAR25), "", VAR12->VAR16, VAR12->VAR20->VAR53);
    if (VAR64)
    {
        VAR28 = VAR14->VAR65 == VAR66 ? 0 : VAR14->VAR65;
        if (!VAR67 && VAR14->VAR39->VAR65 != VAR66)
            VAR28 += VAR14->VAR39->VAR65;
    }
    VAR26 = FUN18(((VAR14->VAR65 == VAR66) || !VAR14->VAR68) ? VAR66 : VAR28, VAR14->VAR69, &VAR8, &VAR27, VAR25);
    if (VAR26 < 0)
        return VAR26;
    if ((VAR26 = FUN17(VAR8, 0, VAR6->VAR70, VAR6->VAR27)) < 0)
        return VAR26;
    return 0;
}