static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, VAR6 *VAR7, int VAR8)
{
    VAR9 *VAR10 = VAR7->VAR11;
    VAR12 *VAR13;
    VAR14 *VAR15;
    char VAR16[128];
    const char *VAR17;
    AVRational VAR18, VAR19;
    AVBPrint VAR20;
    const VAR21 *VAR22;
    int VAR23 = 0;
    const char *VAR24 = NULL;
    FUN2(&VAR20, 1, VAR25);
    FUN3(VAR2, VAR8 ? VAR26 : VAR27);
    FUN4("", VAR10->VAR28);
    VAR13 = VAR10->VAR29;
    VAR15 = VAR7->VAR15;
    if (VAR22 = FUN5(VAR13->VAR30))
    {
        FUN6("", VAR22->VAR31);
        if (!VAR32)
        {
            FUN6("", VAR22->VAR33 ? VAR22->VAR33 : "");
        }
    }
    else
    {
        FUN7("", "");
        if (!VAR32)
        {
            FUN7("", "");
        }
    }
    if (!VAR32 && (VAR24 = FUN8(VAR13->VAR30, VAR13->VAR24)))
        FUN6("", VAR24);
    else
    {
        if (VAR13->VAR24 != VAR34)
        {
            char VAR35[12];
            snprintf(VAR35, sizeof(VAR35), "", VAR13->VAR24);
            FUN6("", VAR35);
        }
        else
            FUN7("", "");
    }
    VAR17 = FUN9(VAR13->VAR36);
    if (VAR17)
        FUN6("", VAR17);
    else
        FUN7("", "");
    if (VAR15)
        FUN10("", VAR15->VAR37, '');
    FUN6("", FUN11(VAR13->VAR38));
    FUN12("", "" VAR39, VAR13->VAR38);
    switch (VAR13->VAR36)
    {
    case VAR40:
        FUN4("", VAR13->VAR41);
        FUN4("", VAR13->VAR42);
        if (VAR15)
        {
            FUN4("", VAR15->VAR43);
            FUN4("", VAR15->VAR44);
        }
        FUN4("", VAR13->VAR45);
        VAR18 = FUN13(VAR4, VAR10, NULL);
        if (VAR18.VAR46)
        {
            FUN10("", VAR18, '');
            FUN14(&VAR19.VAR47, &VAR19.VAR46, VAR13->VAR41 * VAR18.VAR47, VAR13->VAR42 * VAR18.VAR46, 1024 * 1024);
            FUN10("", VAR19, '');
        }
        else
        {
            FUN7("", "");
            FUN7("", "");
        }
        VAR17 = FUN15(VAR13->VAR48);
        if (VAR17)
            FUN6("", VAR17);
        else
            FUN7("", "");
        FUN4("", VAR13->VAR49);
        if (VAR13->VAR50 != VAR51)
            FUN6("", FUN16(VAR13->VAR50));
        else
            FUN7("", "");
        if (VAR13->VAR52 != VAR53)
            FUN6("", FUN17(VAR13->VAR52));
        else
            FUN7("", FUN17(VAR13->VAR52));
        if (VAR13->VAR54 != VAR55)
            FUN6("", FUN18(VAR13->VAR54));
        else
            FUN7("", FUN18(VAR13->VAR54));
        if (VAR13->VAR56 != VAR57)
            FUN6("", FUN19(VAR13->VAR56));
        else
            FUN7("", FUN19(VAR13->VAR56));
        if (VAR13->VAR58 != VAR59)
            FUN6("", FUN20(VAR13->VAR58));
        else
            FUN7("", FUN20(VAR13->VAR58));
        if (VAR13->VAR60 == VAR61)
            FUN6("", "");
        else if (VAR13->VAR60 == VAR62)
            FUN6("", "");
        else if (VAR13->VAR60 == VAR63)
            FUN6("", "");
        else if (VAR13->VAR60 == VAR64)
            FUN6("", "");
        else if (VAR13->VAR60 == VAR65)
            FUN6("", "");
        else
            FUN7("", "");
        if (VAR15 && VAR15->VAR66 >= 0)
        {
            char VAR67[VAR68];
            FUN21(VAR67, VAR15->VAR66);
            FUN6("", VAR67);
        }
        else
        {
            FUN7("", "");
        }
        if (VAR15)
            FUN4("", VAR15->VAR69);
        break;
    case VAR70:
        VAR17 = FUN22(VAR13->VAR48);
        if (VAR17)
            FUN6("", VAR17);
        else
            FUN7("", "");
        FUN23("", VAR13->VAR71, VAR72);
        FUN4("", VAR13->VAR73);
        if (VAR13->VAR74)
        {
            FUN24(&VAR20);
            FUN25(&VAR20, VAR13->VAR73, VAR13->VAR74);
            FUN6("", VAR20.VAR75);
        }
        else
        {
            FUN7("", "");
        }
        FUN4("", FUN26(VAR13->VAR30));
        break;
    case VAR76:
        if (VAR13->VAR41)
            FUN4("", VAR13->VAR41);
        else
            FUN7("", "");
        if (VAR13->VAR42)
            FUN4("", VAR13->VAR42);
        else
            FUN7("", "");
        break;
    }
    if (VAR15 && VAR15->VAR77 && VAR15->VAR77->VAR78 && VAR79)
    {
        const VAR80 *VAR81 = NULL;
        while (VAR81 = FUN27(VAR15->VAR82, VAR81))
        {
            VAR83 *VAR75;
            if (VAR81->VAR84)
                continue;
            if (FUN28(VAR15->VAR82, VAR81->VAR31, 0, &VAR75) >= 0)
            {
                FUN6(VAR81->VAR31, VAR75);
                FUN29(VAR75);
            }
        }
    }
    if (VAR4->VAR85->VAR84 & VAR86)
        FUN12("", "", VAR10->VAR87);
    else
        FUN7("", "");
    FUN10("", VAR10->VAR88, '');
    FUN10("", VAR10->VAR89, '');
    FUN10("", VAR10->VAR37, '');
    FUN30("", VAR10->VAR90);
    FUN31("", VAR10->VAR90, &VAR10->VAR37);
    FUN30("", VAR10->VAR91);
    FUN31("", VAR10->VAR91, &VAR10->VAR37);
    if (VAR13->VAR92 > 0)
        FUN23("", VAR13->VAR92, VAR93);
    else
        FUN7("", "");
    if (VAR10->VAR77->VAR94 > 0)
        FUN23("", VAR10->VAR77->VAR94, VAR93);
    else
        FUN7("", "");
    if (VAR15 && VAR15->VAR95 > 0)
        FUN12("", "", VAR15->VAR95);
    else
        FUN7("", "");
    if (VAR10->VAR96)
        FUN12("", "" VAR97, VAR10->VAR96);
    else
        FUN7("", "");
    if (VAR98[VAR5])
        FUN12("", "" VAR99, VAR98[VAR5]);
    else
        FUN7("", "");
    if (VAR100[VAR5])
        FUN12("", "" VAR99, VAR100[VAR5]);
    else
        FUN7("", "");
    if (VAR101)
        FUN32(VAR2, "", VAR13->VAR102, VAR13->VAR103);
    FUN33(VAR2, "", VAR13->VAR102, VAR13->VAR103);
    FUN4(VAR31, !!(VAR10->VAR104 & VAR105##VAR106));
}
while (0)
    if (VAR107)
    {
        FUN3(VAR2, VAR8 ? VAR108 : VAR109);
        FUN34(VAR110, "");
        FUN34(VAR111, "");
        FUN34(VAR112, "");
        FUN34(VAR113, "");
        FUN34(VAR114, "");
        FUN34(VAR115, "");
        FUN34(VAR116, "");
        FUN34(VAR117, "");
        FUN34(VAR118, "");
        FUN34(VAR119, "");
        FUN34(VAR120, "");
        FUN34(VAR121, "");
        FUN35(VAR2);
    }
if (VAR122)
    VAR23 = FUN36(VAR2, VAR10->VAR123, VAR8 ? VAR124 : VAR125);
if (VAR10->VAR126)
{
    FUN37(VAR2, VAR10->VAR29, VAR10->VAR127, VAR10->VAR126, VAR128, VAR129);
}
FUN35(VAR2);
FUN38(&VAR20, NULL);
FUN39(VAR130);
return VAR23;
}