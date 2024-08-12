static VAR1 *FUN1(VAR2 *VAR3, VAR4 *VAR5, enum AVMediaType VAR6)
{
    VAR1 *VAR7;
    VAR8 *VAR9 = FUN2(VAR5, NULL);
    int VAR10 = VAR5->VAR11 - 1, VAR12 = 0;
    int64_t VAR13 = VAR14;
    char *VAR15 = NULL, *VAR16, *VAR17 = NULL;
    VAR18 *VAR19, *VAR20 = NULL;
    double VAR21 = -1;
    char *VAR22 = NULL, *VAR23 = NULL, *VAR24 = NULL;
    VAR25 *VAR26 = NULL;
    if (!VAR9)
    {
        FUN3(NULL, VAR27, "");
        FUN4(1);
    }
    if (VAR5->VAR11 - 1 < VAR3->VAR28)
        VAR9->VAR29 = VAR3->VAR30[VAR5->VAR11 - 1];
    VAR31 = FUN5(VAR31, sizeof(*VAR31), &VAR32, VAR32 + 1);
    VAR7 = &VAR31[VAR32 - 1];
    VAR7->VAR33 = VAR34;
    VAR7->VAR35 = VAR10;
    VAR7->VAR9 = VAR9;
    VAR9->VAR36->VAR37 = VAR6;
    FUN6(VAR3, VAR5, VAR7);
    if (VAR7->VAR38)
    {
        VAR7->VAR39 = FUN7(VAR40, VAR7->VAR38->VAR29, VAR5, VAR9);
    }
    FUN8(VAR9->VAR36, VAR7->VAR38);
    VAR9->VAR36->VAR37 = VAR6;
    FUN9(VAR41, VAR42, VAR24, VAR5, VAR9);
    if (VAR24 && (!(VAR12 = FUN10(VAR24, VAR7->VAR38->VAR43, &VAR26))))
    {
        do
        {
            VAR22 = FUN11(VAR26);
            if (!VAR22[0] || VAR22[0] == '')
            {
                FUN12(VAR22);
                continue;
            }
            if (!(VAR23 = strchr(VAR22, '')))
            {
                FUN3(NULL, VAR27, "");
                FUN4(1);
            }
            *VAR23++ = 0;
            FUN13(&VAR7->VAR39, VAR22, VAR23, VAR44);
            FUN12(VAR22);
        } while (!VAR26->VAR45);
        FUN14(VAR26);
    }
    if (VAR12)
    {
        FUN3(NULL, VAR27, "", VAR24, VAR7->VAR33, VAR7->VAR35);
        FUN4(1);
    }
    FUN9(VAR13, VAR46, VAR13, VAR5, VAR9);
    VAR7->VAR13 = VAR13;
    FUN9(VAR47, VAR42, VAR15, VAR5, VAR9);
    while (VAR15)
    {
        if (VAR16 = strchr(VAR15, ''))
            *VAR16++ = 0;
        if (!(VAR19 = FUN15(VAR15)))
        {
            FUN3(NULL, VAR27, "", VAR15);
            FUN4(1);
        }
        if (VAR20)
            VAR20->VAR16 = VAR19;
        else
            VAR7->VAR47 = VAR19;
        VAR20 = VAR19;
        VAR15 = VAR16;
    }
    FUN9(VAR48, VAR42, VAR17, VAR5, VAR9);
    if (VAR17)
    {
        uint32_t VAR49 = FUN16(VAR17, &VAR16, 0);
        if (*VAR16)
            VAR49 = FUN17(VAR17);
        VAR9->VAR36->VAR17 = VAR49;
    }
    FUN9(VAR21, VAR50, VAR21, VAR5, VAR9);
    if (VAR21 >= 0 || VAR51)
    {
        VAR9->VAR36->VAR52 |= VAR53;
        VAR9->VAR36->VAR54 = VAR55 * VAR21;
    }
    if (VAR5->VAR56->VAR52 & VAR57)
        VAR9->VAR36->VAR52 |= VAR58;
    FUN18(VAR59, "", 0, &VAR7->VAR60);
    return VAR7;
}