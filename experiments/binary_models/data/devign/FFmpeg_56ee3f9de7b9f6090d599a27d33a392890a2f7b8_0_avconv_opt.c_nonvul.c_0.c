static int FUN1(VAR1 *VAR2, const char *VAR3)
{
    VAR4 *VAR5;
    VAR6 *VAR7;
    VAR8 *VAR9 = NULL;
    int VAR10, VAR11, VAR12;
    int64_t VAR13;
    uint8_t VAR14[128];
    VAR15 **VAR16;
    VAR15 *VAR17 = NULL;
    VAR18 *VAR19 = NULL;
    int VAR20;
    if (VAR2->VAR21)
    {
        if (!(VAR9 = FUN2(VAR2->VAR21)))
        {
            FUN3(NULL, VAR22, "", VAR2->VAR21);
            FUN4(1);
        }
    }
    if (!strcmp(VAR3, ""))
        VAR3 = "";
    VAR23 |= !FUN5(VAR3, "", 5) || !strcmp(VAR3, "");
    VAR7 = FUN6();
    if (!VAR7)
    {
        FUN7(VAR3, FUN8(VAR24));
        FUN4(1);
    }
    if (VAR2->VAR25)
    {
        snprintf(VAR14, sizeof(VAR14), "", VAR2->VAR26[VAR2->VAR25 - 1].VAR27.VAR11);
        FUN9(&VAR2->VAR28->VAR29, "", VAR14, 0);
    }
    if (VAR2->VAR30)
    {
        if (VAR9 && VAR9->VAR31 && FUN10(&VAR9->VAR31, "", NULL, 0, VAR32))
        {
            snprintf(VAR14, sizeof(VAR14), "", VAR2->VAR33[VAR2->VAR30 - 1].VAR27.VAR11);
            FUN9(&VAR2->VAR28->VAR29, "", VAR14, 0);
        }
    }
    if (VAR2->VAR34)
    {
        if (VAR9 && VAR9->VAR31 && FUN10(&VAR9->VAR31, "", NULL, 0, VAR32))
        {
            FUN9(&VAR2->VAR28->VAR29, "", VAR2->VAR35[VAR2->VAR34 - 1].VAR27.VAR36, 0);
        }
    }
    if (VAR2->VAR37)
    {
        FUN9(&VAR2->VAR28->VAR29, "", VAR2->VAR38[VAR2->VAR37 - 1].VAR27.VAR36, 0);
    }
    if (VAR2->VAR39)
        FUN9(&VAR2->VAR28->VAR29, "", VAR2->VAR40[VAR2->VAR39 - 1].VAR27.VAR36, 0);
    VAR7->VAR41 |= VAR42;
    VAR7->VAR43 = VAR44;
    VAR10 = FUN11(&VAR7, VAR3, VAR9, &VAR2->VAR28->VAR29);
    if (VAR10 < 0)
    {
        FUN7(VAR3, VAR10);
        FUN4(1);
    }
    FUN12(VAR2->VAR28->VAR29);
    for (VAR11 = 0; VAR11 < VAR7->VAR45; VAR11++)
        FUN13(VAR2, VAR7, VAR7->VAR46[VAR11]);
    VAR16 = FUN14(VAR7, VAR2->VAR28->VAR47);
    VAR20 = VAR7->VAR45;
    VAR12 = FUN15(VAR7, VAR16);
    if (VAR12 < 0)
    {
        FUN3(NULL, VAR22, "", VAR3);
        FUN16(&VAR7);
        FUN4(1);
    }
    VAR13 = (VAR2->VAR48 == VAR49) ? 0 : VAR2->VAR48;
    if (VAR7->VAR48 != VAR49)
        VAR13 += VAR7->VAR48;
    if (VAR2->VAR48 != VAR49)
    {
        VAR12 = FUN17(VAR7, -1, VAR13, VAR50);
        if (VAR12 < 0)
        {
            FUN3(NULL, VAR51, "", VAR3, (double)VAR13 / VAR52);
        }
    }
    FUN18(VAR2, VAR7);
    FUN19(VAR7, VAR53, VAR3, 0);
    FUN20(VAR54, VAR53);
    VAR5 = FUN21(sizeof(*VAR5));
    if (!VAR5)
        FUN4(1);
    VAR54[VAR53 - 1] = VAR5;
    VAR5->VAR55 = VAR7;
    VAR5->VAR56 = VAR57 - VAR7->VAR45;
    VAR5->VAR58 = VAR2->VAR59 - (VAR60 ? 0 : VAR13);
    VAR5->VAR45 = VAR7->VAR45;
    VAR5->VAR61 = VAR2->VAR61;
    VAR17 = FUN22(VAR2->VAR28->VAR47);
    for (VAR11 = VAR5->VAR56; VAR11 < VAR57; VAR11++)
    {
        VAR19 = NULL;
        while ((VAR19 = FUN23(VAR62[VAR11]->VAR16, "", VAR19, VAR63)))
            FUN9(&VAR17, VAR19->VAR64, NULL, 0);
    }
    VAR19 = NULL;
    while ((VAR19 = FUN23(VAR17, "", VAR19, VAR63)))
    {
        const VAR65 *class = FUN24();
        const VAR66 *VAR67 = FUN10(&class, VAR19->VAR64, NULL, 0, VAR68 | VAR32);
        if (!VAR67)
            continue;
        if (!(VAR67->VAR41 & VAR69))
        {
            FUN3(NULL, VAR70, ""
                                       "",
                   VAR19->VAR64, VAR67->VAR71 ? VAR67->VAR71 : "", VAR53 - 1, VAR3);
            FUN4(1);
        }
        FUN3(NULL, VAR51, ""
                                     ""
                                     ""
                                     ""
                                     "",
               VAR19->VAR64, VAR67->VAR71 ? VAR67->VAR71 : "", VAR53 - 1, VAR3);
    }
    FUN25(&VAR17);
    for (VAR11 = 0; VAR11 < VAR2->VAR72; VAR11++)
    {
        int VAR73;
        for (VAR73 = 0; VAR73 < VAR7->VAR45; VAR73++)
        {
            VAR74 *VAR75 = VAR7->VAR46[VAR73];
            if (FUN26(VAR7, VAR75, VAR2->VAR76[VAR11].VAR77) == 1)
                FUN27(VAR75, VAR2->VAR76[VAR11].VAR27.VAR36);
        }
    }
    for (VAR11 = 0; VAR11 < VAR20; VAR11++)
        FUN25(&VAR16[VAR11]);
    FUN28(&VAR16);
    return 0;
}