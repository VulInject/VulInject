static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, VAR6 **VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    int VAR11, VAR12, VAR13 = 0;
    QCowHeader VAR14;
    VAR15 *VAR16;
    VAR6 *VAR17 = NULL;
    uint64_t VAR18;
    uint64_t VAR19;
    const char *VAR20;
    int VAR21 = 0;
    VAR13 = FUN2(VAR2->VAR22, 0, &VAR14, sizeof(VAR14));
    if (VAR13 < 0)
    {
        FUN3(VAR7, -VAR13, "");
        goto VAR23;
    }
    FUN4(&VAR14.VAR24);
    FUN4(&VAR14.VAR25);
    FUN5(&VAR14.VAR26);
    FUN4(&VAR14.VAR27);
    FUN5(&VAR14.VAR28);
    FUN4(&VAR14.VAR29);
    FUN4(&VAR14.VAR30);
    FUN5(&VAR14.VAR31);
    FUN4(&VAR14.VAR32);
    FUN5(&VAR14.VAR33);
    FUN4(&VAR14.VAR34);
    FUN5(&VAR14.VAR35);
    FUN4(&VAR14.VAR36);
    if (VAR14.VAR24 != VAR37)
    {
        FUN6(VAR7, "");
        VAR13 = -VAR38;
        goto VAR23;
    }
    if (VAR14.VAR25 < 2 || VAR14.VAR25 > 3)
    {
        FUN7(VAR2, VAR7, "", VAR14.VAR25);
        VAR13 = -VAR39;
        goto VAR23;
    }
    VAR9->VAR40 = VAR14.VAR25;
    if (VAR14.VAR25 == 2)
    {
        VAR14.VAR41 = 0;
        VAR14.VAR42 = 0;
        VAR14.VAR43 = 0;
        VAR14.VAR44 = 4;
        VAR14.VAR45 = 72;
    }
    else
    {
        FUN5(&VAR14.VAR41);
        FUN5(&VAR14.VAR42);
        FUN5(&VAR14.VAR43);
        FUN4(&VAR14.VAR44);
        FUN4(&VAR14.VAR45);
    }
    if (VAR14.VAR45 > sizeof(VAR14))
    {
        VAR9->VAR46 = VAR14.VAR45 - sizeof(VAR14);
        VAR9->VAR47 = FUN8(VAR9->VAR46);
        VAR13 = FUN2(VAR2->VAR22, sizeof(VAR14), VAR9->VAR47, VAR9->VAR46);
        if (VAR13 < 0)
        {
            FUN3(VAR7, -VAR13, ""
                                         "");
            goto VAR23;
        }
    }
    if (VAR14.VAR26)
    {
        VAR18 = VAR14.VAR26;
    }
    else
    {
        VAR18 = 1 << VAR14.VAR29;
    }
    VAR9->VAR41 = VAR14.VAR41;
    VAR9->VAR42 = VAR14.VAR42;
    VAR9->VAR43 = VAR14.VAR43;
    if (VAR9->VAR41 & ~VAR48)
    {
        void *VAR49 = NULL;
        FUN9(VAR2, VAR14.VAR45, VAR18, &VAR49, NULL);
        FUN10(VAR2, VAR7, VAR49, VAR9->VAR41 & ~VAR48);
        VAR13 = -VAR39;
        FUN11(VAR49);
        goto VAR23;
    }
    if (VAR9->VAR41 & VAR50)
    {
        if ((VAR5 & VAR51) && !(VAR5 & VAR52))
        {
            FUN6(VAR7, ""
                             "");
            VAR13 = -VAR53;
            goto VAR23;
        }
    }
    if (VAR14.VAR44 != 4)
    {
        FUN7(VAR2, VAR7, "", 1 << VAR14.VAR44);
        VAR13 = -VAR39;
        goto VAR23;
    }
    VAR9->VAR44 = VAR14.VAR44;
    if (VAR14.VAR29 < VAR54 || VAR14.VAR29 > VAR55)
    {
        FUN6(VAR7, "", VAR14.VAR29);
        VAR13 = -VAR38;
        goto VAR23;
    }
    if (VAR14.VAR30 > VAR56)
    {
        FUN6(VAR7, "", VAR14.VAR30);
        VAR13 = -VAR38;
        goto VAR23;
    }
    VAR9->VAR57 = VAR14.VAR30;
    if (VAR9->VAR57)
    {
        VAR2->VAR58 = 1;
    }
    VAR9->VAR29 = VAR14.VAR29;
    VAR9->VAR59 = 1 << VAR9->VAR29;
    VAR9->VAR60 = 1 << (VAR9->VAR29 - 9);
    VAR9->VAR61 = VAR9->VAR29 - 3;
    VAR9->VAR62 = 1 << VAR9->VAR61;
    VAR2->VAR63 = VAR14.VAR28 / 512;
    VAR9->VAR64 = (62 - (VAR9->VAR29 - 8));
    VAR9->VAR65 = (1 << (VAR9->VAR29 - 8)) - 1;
    VAR9->VAR66 = (1LL << VAR9->VAR64) - 1;
    VAR9->VAR33 = VAR14.VAR33;
    VAR9->VAR67 = VAR14.VAR34 << (VAR9->VAR29 - 3);
    VAR9->VAR35 = VAR14.VAR35;
    VAR9->VAR36 = VAR14.VAR36;
    VAR9->VAR32 = VAR14.VAR32;
    VAR19 = FUN12(VAR9, VAR14.VAR28);
    if (VAR19 > VAR68)
    {
        FUN6(VAR7, "");
        VAR13 = -VAR69;
        goto VAR23;
    }
    VAR9->VAR19 = VAR19;
    if (VAR9->VAR32 < VAR9->VAR19)
    {
        FUN6(VAR7, "");
        VAR13 = -VAR38;
        goto VAR23;
    }
    VAR9->VAR31 = VAR14.VAR31;
    if (VAR9->VAR32 > 0)
    {
        VAR9->VAR70 = FUN13(FUN14(VAR9->VAR32 * sizeof(VAR71), 512));
        VAR13 = FUN2(VAR2->VAR22, VAR9->VAR31, VAR9->VAR70, VAR9->VAR32 * sizeof(VAR71));
        if (VAR13 < 0)
        {
            FUN3(VAR7, -VAR13, "");
            goto VAR23;
        }
        for (VAR12 = 0; VAR12 < VAR9->VAR32; VAR12++)
        {
            FUN5(&VAR9->VAR70[VAR12]);
        }
    }
    VAR9->VAR72 = FUN15(VAR2, VAR73);
    VAR9->VAR74 = FUN15(VAR2, VAR75);
    VAR9->VAR76 = FUN8(VAR9->VAR59);
    VAR9->VAR77 = FUN16(VAR2, VAR78 * VAR9->VAR59 + 512);
    VAR9->VAR79 = -1;
    VAR9->VAR5 = VAR5;
    VAR13 = FUN17(VAR2);
    if (VAR13 != 0)
    {
        FUN3(VAR7, -VAR13, "");
        goto VAR23;
    }
    FUN18(&VAR9->VAR80);
    FUN19(&VAR9->VAR81);
    if (FUN9(VAR2, VAR14.VAR45, VAR18, NULL, &VAR17))
    {
        FUN20(VAR7, VAR17);
        VAR13 = -VAR38;
        goto VAR23;
    }
    if (VAR14.VAR26 != 0)
    {
        VAR11 = VAR14.VAR27;
        if (VAR11 > 1023)
        {
            VAR11 = 1023;
        }
        VAR13 = FUN2(VAR2->VAR22, VAR14.VAR26, VAR2->VAR82, VAR11);
        if (VAR13 < 0)
        {
            FUN3(VAR7, -VAR13, "");
            goto VAR23;
        }
        VAR2->VAR82[VAR11] = '';
    }
    VAR13 = FUN21(VAR2);
    if (VAR13 < 0)
    {
        FUN3(VAR7, -VAR13, "");
        goto VAR23;
    }
    if (!VAR2->VAR83 && !(VAR5 & VAR84) && VAR9->VAR43)
    {
        VAR9->VAR43 = 0;
        VAR13 = FUN22(VAR2);
        if (VAR13 < 0)
        {
            FUN3(VAR7, -VAR13, "");
            goto VAR23;
        }
    }
    FUN23(&VAR9->VAR85);
    if (!(VAR5 & (VAR52 | VAR84)) && !VAR2->VAR83 && (VAR9->VAR41 & VAR86))
    {
        BdrvCheckResult VAR87 = {0};
        VAR13 = FUN24(VAR2, &VAR87, VAR88);
        if (VAR13 < 0)
        {
            FUN3(VAR7, -VAR13, "");
            goto VAR23;
        }
    }
    VAR16 = FUN25(&VAR89, NULL, 0, &VAR90);
    FUN26(VAR16, VAR4, &VAR17);
    if (VAR17)
    {
        FUN20(VAR7, VAR17);
        VAR13 = -VAR38;
        goto VAR23;
    }
    VAR9->VAR91 = FUN27(VAR16, VAR92, (VAR9->VAR42 & VAR93));
    VAR9->VAR94[VAR95] = false;
    VAR9->VAR94[VAR96] = true;
    VAR9->VAR94[VAR97] = FUN27(VAR16, VAR98, VAR5 & VAR99);
    VAR9->VAR94[VAR100] = FUN27(VAR16, VAR101, true);
    VAR9->VAR94[VAR102] = FUN27(VAR16, VAR103, false);
    VAR20 = FUN28(VAR16, "") ?: "";
    if (!strcmp(VAR20, ""))
    {
        VAR21 = 0;
    }
    else if (!strcmp(VAR20, ""))
    {
        VAR21 = VAR104;
    }
    else if (!strcmp(VAR20, ""))
    {
        VAR21 = VAR105;
    }
    else if (!strcmp(VAR20, ""))
    {
        VAR21 = VAR106;
    }
    else
    {
        FUN6(VAR7, ""
                         ""
                         "",
                   VAR20);
        FUN29(VAR16);
        VAR13 = -VAR38;
        goto VAR23;
    }
    VAR9->VAR107 = 0;
    for (VAR12 = 0; VAR12 < VAR108; VAR12++)
    {
        VAR9->VAR107 |= FUN27(VAR16, VAR109[VAR12], VAR21 & (1 << VAR12)) << VAR12;
    }
    FUN29(VAR16);
    if (VAR9->VAR91 && VAR9->VAR40 < 3)
    {
        FUN6(VAR7, ""
                         "");
        VAR13 = -VAR38;
        goto VAR23;
    }
    {
        BdrvCheckResult VAR87 = {0};
        FUN30(VAR2, &VAR87, 0);
    }
    return VAR13;
VAR23:
    FUN11(VAR9->VAR47);
    FUN31(VAR2);
    FUN32(VAR2);
    FUN33(VAR2);
    FUN11(VAR9->VAR70);
    VAR9->VAR70 = NULL;
    if (VAR9->VAR72)
    {
        FUN34(VAR2, VAR9->VAR72);
    }
    if (VAR9->VAR74)
    {
        FUN34(VAR2, VAR9->VAR74);
    }
    FUN11(VAR9->VAR76);
    FUN35(VAR9->VAR77);
    return VAR13;
}