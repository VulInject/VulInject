static VAR1 *FUN1(VAR2 *VAR3, VAR4 *VAR5, enum AVMediaType VAR6)
{
    VAR1 *VAR7;
    VAR8 *VAR9 = FUN2(VAR5, NULL);
    int VAR10 = VAR5->VAR11 - 1, VAR12 = 0;
    char *VAR13 = NULL, *VAR14, *VAR15 = NULL;
    VAR16 *VAR17, *VAR18 = NULL;
    double VAR19 = -1;
    char *VAR20 = NULL, *VAR21 = NULL, *VAR22 = NULL;
    VAR23 *VAR24 = NULL;
    if (!VAR9)
    {
        FUN3(NULL, VAR25, "");
        FUN4(1);
    }
    if (VAR5->VAR11 - 1 < VAR3->VAR26)
        VAR9->VAR27 = VAR3->VAR28[VAR5->VAR11 - 1];
    VAR29 = FUN5(VAR29, sizeof(*VAR29), &VAR30, VAR30 + 1);
    if (!(VAR7 = FUN6(sizeof(*VAR7))))
        FUN4(1);
    VAR29[VAR30 - 1] = VAR7;
    VAR7->VAR31 = VAR32;
    VAR7->VAR33 = VAR10;
    VAR7->VAR9 = VAR9;
    VAR9->VAR34->VAR35 = VAR6;
    FUN7(VAR3, VAR5, VAR7);
    if (VAR7->VAR36)
    {
        VAR7->VAR37 = FUN8(VAR38, VAR7->VAR36->VAR27, VAR5, VAR9, VAR7->VAR36);
    }
    FUN9(VAR9->VAR34, VAR7->VAR36);
    VAR9->VAR34->VAR35 = VAR6;
    FUN10(VAR39, VAR40, VAR22, VAR5, VAR9);
    if (VAR22 && (!(VAR12 = FUN11(VAR22, VAR7->VAR36->VAR41, &VAR24))))
    {
        do
        {
            VAR20 = FUN12(VAR24);
            if (!VAR20[0] || VAR20[0] == '')
            {
                FUN13(VAR20);
                continue;
            }
            if (!(VAR21 = strchr(VAR20, '')))
            {
                FUN3(NULL, VAR25, "");
                FUN4(1);
            }
            *VAR21++ = 0;
            FUN14(&VAR7->VAR37, VAR20, VAR21, VAR42);
            FUN13(VAR20);
        } while (!VAR24->VAR43);
        FUN15(VAR24);
    }
    if (VAR12)
    {
        FUN3(NULL, VAR25, "", VAR22, VAR7->VAR31, VAR7->VAR33);
        FUN4(1);
    }
    VAR7->VAR44 = VAR45;
    FUN10(VAR44, VAR46, VAR7->VAR44, VAR5, VAR9);
    FUN10(VAR47, VAR40, VAR13, VAR5, VAR9);
    while (VAR13)
    {
        if (VAR14 = strchr(VAR13, ''))
            *VAR14++ = 0;
        if (!(VAR17 = FUN16(VAR13)))
        {
            FUN3(NULL, VAR25, "", VAR13);
            FUN4(1);
        }
        if (VAR18)
            VAR18->VAR14 = VAR17;
        else
            VAR7->VAR47 = VAR17;
        VAR18 = VAR17;
        VAR13 = VAR14;
    }
    FUN10(VAR48, VAR40, VAR15, VAR5, VAR9);
    if (VAR15)
    {
        uint32_t VAR49 = FUN17(VAR15, &VAR14, 0);
        if (*VAR14)
            VAR49 = FUN18(VAR15);
        VAR9->VAR34->VAR15 = VAR49;
    }
    FUN10(VAR19, VAR50, VAR19, VAR5, VAR9);
    if (VAR19 >= 0)
    {
        VAR9->VAR34->VAR51 |= VAR52;
        VAR9->VAR34->VAR53 = VAR54 * VAR19;
    }
    if (VAR5->VAR55->VAR51 & VAR56)
        VAR9->VAR34->VAR51 |= VAR57;
    FUN19(VAR58, "", 0, &VAR7->VAR59);
    VAR7->VAR60[0] = VAR7->VAR60[1] = VAR61;
    return VAR7;
}