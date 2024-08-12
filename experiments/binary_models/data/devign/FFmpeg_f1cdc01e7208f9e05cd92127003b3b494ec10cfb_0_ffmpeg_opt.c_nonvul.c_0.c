static VAR1 *FUN1(VAR2 *VAR3, VAR4 *VAR5, enum AVMediaType VAR6, int VAR7)
{
    VAR1 *VAR8;
    VAR9 *VAR10 = FUN2(VAR5, NULL);
    int VAR11 = VAR5->VAR12 - 1, VAR13 = 0;
    const char *VAR14 = NULL, *VAR15 = NULL;
    char *VAR16, *VAR17 = NULL;
    double VAR18 = -1;
    int VAR19;
    if (!VAR10)
    {
        FUN3(NULL, VAR20, "");
        FUN4(1);
    }
    if (VAR5->VAR12 - 1 < VAR3->VAR21)
        VAR10->VAR22 = VAR3->VAR23[VAR5->VAR12 - 1];
    FUN5(VAR24, VAR25);
    if (!(VAR8 = FUN6(sizeof(*VAR8))))
        FUN4(1);
    VAR24[VAR25 - 1] = VAR8;
    VAR8->VAR26 = VAR27 - 1;
    VAR8->VAR28 = VAR11;
    VAR8->VAR10 = VAR10;
    VAR10->VAR29->VAR30 = VAR6;
    VAR13 = FUN7(VAR3, VAR5, VAR8);
    if (VAR13 < 0)
    {
        FUN3(NULL, VAR20, ""
                                   "",
               VAR8->VAR26, VAR8->VAR28);
        FUN4(1);
    }
    VAR8->VAR31 = FUN8(VAR8->VAR32);
    if (!VAR8->VAR31)
    {
        FUN3(NULL, VAR33, "");
        FUN4(1);
    }
    VAR8->VAR31->VAR30 = VAR6;
    VAR8->VAR34 = FUN9();
    if (!VAR8->VAR34)
    {
        FUN3(NULL, VAR33, "");
        FUN4(1);
    }
    if (VAR8->VAR32)
    {
        VAR35 *VAR36 = NULL;
        char *VAR37 = NULL, *VAR38 = NULL, *VAR39 = NULL;
        VAR8->VAR40 = FUN10(VAR3->VAR41->VAR42, VAR8->VAR32->VAR22, VAR5, VAR10, VAR8->VAR32);
        FUN11(VAR43, VAR44, VAR39, VAR5, VAR10);
        if (VAR39 && (!(VAR13 = FUN12(VAR39, VAR8->VAR32->VAR45, &VAR36))))
        {
            do
            {
                VAR37 = FUN13(VAR36);
                if (!VAR37[0] || VAR37[0] == '')
                {
                    FUN14(VAR37);
                    continue;
                }
                if (!(VAR38 = strchr(VAR37, '')))
                {
                    FUN3(NULL, VAR20, "");
                    FUN4(1);
                }
                *VAR38++ = 0;
                FUN15(&VAR8->VAR40, VAR37, VAR38, VAR46);
                FUN14(VAR37);
            } while (!VAR36->VAR47);
            FUN16(&VAR36);
        }
        if (VAR13)
        {
            FUN3(NULL, VAR20, "", VAR39, VAR8->VAR26, VAR8->VAR28);
            FUN4(1);
        }
    }
    else
    {
        VAR8->VAR40 = FUN10(VAR3->VAR41->VAR42, VAR48, VAR5, VAR10, NULL);
    }
    FUN11(VAR49, VAR44, VAR15, VAR5, VAR10);
    if (VAR15)
    {
        AVRational VAR50;
        if (FUN17(&VAR50, VAR15, VAR51, 0, NULL) < 0 || VAR50.VAR52 <= 0 || VAR50.VAR53 <= 0)
        {
            FUN3(NULL, VAR20, "", VAR15);
            FUN4(1);
        }
        VAR10->VAR15 = VAR50;
    }
    FUN11(VAR54, VAR44, VAR15, VAR5, VAR10);
    if (VAR15)
    {
        AVRational VAR50;
        if (FUN17(&VAR50, VAR15, VAR51, 0, NULL) < 0 || VAR50.VAR53 <= 0)
        {
            FUN3(NULL, VAR20, "", VAR15);
            FUN4(1);
        }
        VAR8->VAR55 = VAR50;
    }
    VAR8->VAR56 = VAR57;
    FUN11(VAR56, VAR58, VAR8->VAR56, VAR5, VAR10);
    for (VAR19 = 0; VAR19 < VAR3->VAR59; VAR19++)
    {
        char *VAR60 = VAR3->VAR56[VAR19].VAR61;
        if (!*VAR60 && VAR6 != VAR62)
        {
            FUN3(NULL, VAR63, "");
            break;
        }
    }
    VAR8->VAR64 = -1;
    FUN11(VAR64, VAR19, VAR8->VAR64, VAR5, VAR10);
    FUN11(VAR65, VAR44, VAR14, VAR5, VAR10);
    while (VAR14 && *VAR14)
    {
        const VAR66 *VAR67;
        char *VAR68, *VAR69, *VAR70;
        VAR68 = FUN18(&VAR14, "");
        if (!VAR68)
            FUN4(1);
        VAR70 = FUN19(VAR68, "", &VAR69);
        if (!VAR70)
            FUN4(1);
        VAR67 = FUN20(VAR70);
        if (!VAR67)
        {
            FUN3(NULL, VAR20, "", VAR70);
            FUN4(1);
        }
        VAR8->VAR71 = FUN21(VAR8->VAR71, VAR8->VAR72 + 1, sizeof(*VAR8->VAR71));
        if (!VAR8->VAR71)
            FUN4(1);
        VAR13 = FUN22(VAR67, &VAR8->VAR71[VAR8->VAR72]);
        if (VAR13 < 0)
        {
            FUN3(NULL, VAR33, "");
            FUN4(1);
        }
        VAR8->VAR72++;
        if (VAR69 && VAR67->VAR73)
        {
            const VAR74 *VAR75 = FUN23(VAR8->VAR71[VAR8->VAR72 - 1]->VAR76, NULL);
            const char *VAR77[2] = {NULL};
            if (VAR75)
                VAR77[0] = VAR75->VAR45;
            VAR13 = FUN24(VAR8->VAR71[VAR8->VAR72 - 1]->VAR76, VAR69, VAR77, "", "");
            if (VAR13 < 0)
            {
                FUN3(NULL, VAR33, "", VAR70);
                FUN4(1);
            }
        }
        FUN25(&VAR68);
        if (*VAR14)
            VAR14++;
    }
    FUN11(VAR78, VAR44, VAR17, VAR5, VAR10);
    if (VAR17)
    {
        uint32_t VAR79 = FUN26(VAR17, &VAR16, 0);
        if (*VAR16)
            VAR79 = FUN27(VAR17);
        VAR8->VAR10->VAR29->VAR17 = VAR8->VAR31->VAR17 = VAR79;
    }
    FUN11(VAR18, VAR80, VAR18, VAR5, VAR10);
    if (VAR18 >= 0)
    {
        VAR8->VAR31->VAR81 |= VAR82;
        VAR8->VAR31->VAR83 = VAR84 * VAR18;
    }
    FUN11(VAR85, VAR44, VAR8->VAR85, VAR5, VAR10);
    VAR8->VAR85 = FUN28(VAR8->VAR85);
    VAR8->VAR86 = 128;
    FUN11(VAR86, VAR19, VAR8->VAR86, VAR5, VAR10);
    VAR8->VAR86 *= sizeof(VAR87);
    if (VAR5->VAR88->VAR81 & VAR89)
        VAR8->VAR31->VAR81 |= VAR90;
    FUN29(&VAR8->VAR91, VAR3->VAR41->VAR91, 0);
    FUN29(&VAR8->VAR92, VAR3->VAR41->VAR92, 0);
    if (VAR8->VAR32 && FUN30(VAR8->VAR32->VAR22) == 24)
        FUN15(&VAR8->VAR92, "", "", 0);
    FUN29(&VAR8->VAR93, VAR3->VAR41->VAR93, 0);
    VAR8->VAR7 = VAR7;
    if (VAR7 >= 0)
    {
        VAR8->VAR94 = VAR95[VAR7];
        VAR95[VAR7]->VAR96 = 0;
        VAR95[VAR7]->VAR10->VAR96 = VAR95[VAR7]->VAR97;
    }
    VAR8->VAR98 = VAR99;
    VAR8->VAR100 = FUN31(8 * sizeof(VAR87));
    if (!VAR8->VAR100)
        FUN4(1);
    return VAR8;
}