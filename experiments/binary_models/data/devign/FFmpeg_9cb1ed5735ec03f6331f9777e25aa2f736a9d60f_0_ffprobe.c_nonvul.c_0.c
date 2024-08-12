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
    FUN11(VAR16, sizeof(VAR16), VAR13->VAR38);
    FUN6("", VAR16);
    FUN12("", "", VAR13->VAR38);
    switch (VAR13->VAR36)
    {
    case VAR39:
        FUN4("", VAR13->VAR40);
        FUN4("", VAR13->VAR41);
        if (VAR15)
        {
            FUN4("", VAR15->VAR42);
            FUN4("", VAR15->VAR43);
        }
        FUN4("", VAR13->VAR44);
        VAR18 = FUN13(VAR4, VAR10, NULL);
        if (VAR18.VAR45)
        {
            FUN10("", VAR18, '');
            FUN14(&VAR19.VAR46, &VAR19.VAR45, VAR13->VAR40 * VAR18.VAR46, VAR13->VAR41 * VAR18.VAR45, 1024 * 1024);
            FUN10("", VAR19, '');
        }
        else
        {
            FUN7("", "");
            FUN7("", "");
        }
        VAR17 = FUN15(VAR13->VAR47);
        if (VAR17)
            FUN6("", VAR17);
        else
            FUN7("", "");
        FUN4("", VAR13->VAR48);
        if (VAR13->VAR49 != VAR50)
            FUN6("", FUN16(VAR13->VAR49));
        else
            FUN7("", "");
        VAR17 = FUN17(VAR13->VAR51);
        if (VAR17)
            FUN6("", VAR17);
        else
            FUN7("", "");
        if (VAR13->VAR52 != VAR53)
            FUN6("", FUN18(VAR13->VAR52));
        else
            FUN7("", FUN18(VAR13->VAR52));
        if (VAR13->VAR54 != VAR55)
            FUN6("", FUN19(VAR13->VAR54));
        else
            FUN7("", FUN19(VAR13->VAR54));
        if (VAR13->VAR56 != VAR57)
            FUN6("", FUN20(VAR13->VAR56));
        else
            FUN7("", FUN20(VAR13->VAR56));
        if (VAR15 && VAR15->VAR58 >= 0)
        {
            char VAR59[VAR60];
            FUN21(VAR59, VAR15->VAR58);
            FUN6("", VAR59);
        }
        else
        {
            FUN7("", "");
        }
        if (VAR15)
            FUN4("", VAR15->VAR61);
        break;
    case VAR62:
        VAR17 = FUN22(VAR13->VAR47);
        if (VAR17)
            FUN6("", VAR17);
        else
            FUN7("", "");
        FUN23("", VAR13->VAR63, VAR64);
        FUN4("", VAR13->VAR65);
        if (VAR13->VAR66)
        {
            FUN24(&VAR20);
            FUN25(&VAR20, VAR13->VAR65, VAR13->VAR66);
            FUN6("", VAR20.VAR67);
        }
        else
        {
            FUN7("", "");
        }
        FUN4("", FUN26(VAR13->VAR30));
        break;
    case VAR68:
        if (VAR13->VAR40)
            FUN4("", VAR13->VAR40);
        else
            FUN7("", "");
        if (VAR13->VAR41)
            FUN4("", VAR13->VAR41);
        else
            FUN7("", "");
        break;
    }
    if (VAR15 && VAR15->VAR69 && VAR15->VAR69->VAR70 && VAR71)
    {
        const VAR72 *VAR73 = NULL;
        while (VAR73 = FUN27(VAR15->VAR74, VAR73))
        {
            VAR75 *VAR67;
            if (VAR73->VAR76)
                continue;
            if (FUN28(VAR15->VAR74, VAR73->VAR31, 0, &VAR67) >= 0)
            {
                FUN6(VAR73->VAR31, VAR67);
                FUN29(VAR67);
            }
        }
    }
    if (VAR4->VAR77->VAR76 & VAR78)
        FUN12("", "", VAR10->VAR79);
    else
        FUN7("", "");
    FUN10("", VAR10->VAR80, '');
    FUN10("", VAR10->VAR81, '');
    FUN10("", VAR10->VAR37, '');
    FUN30("", VAR10->VAR82);
    FUN31("", VAR10->VAR82, &VAR10->VAR37);
    FUN30("", VAR10->VAR83);
    FUN31("", VAR10->VAR83, &VAR10->VAR37);
    if (VAR13->VAR84 > 0)
        FUN23("", VAR13->VAR84, VAR85);
    else
        FUN7("", "");
    if (VAR10->VAR69->VAR86 > 0)
        FUN23("", VAR10->VAR69->VAR86, VAR85);
    else
        FUN7("", "");
    if (VAR15 && VAR15->VAR87 > 0)
        FUN12("", "", VAR15->VAR87);
    else
        FUN7("", "");
    if (VAR10->VAR88)
        FUN12("", "" VAR89, VAR10->VAR88);
    else
        FUN7("", "");
    if (VAR90[VAR5])
        FUN12("", "" VAR91, VAR90[VAR5]);
    else
        FUN7("", "");
    if (VAR92[VAR5])
        FUN12("", "" VAR91, VAR92[VAR5]);
    else
        FUN7("", "");
    if (VAR93)
        FUN32(VAR2, "", VAR13->VAR94, VAR13->VAR95);
    FUN33(VAR2, "", VAR13->VAR94, VAR13->VAR95);
    FUN4(VAR31, !!(VAR10->VAR96 & VAR97##VAR98));
}
while (0)
    if (VAR99)
    {
        FUN3(VAR2, VAR8 ? VAR100 : VAR101);
        FUN34(VAR102, "");
        FUN34(VAR103, "");
        FUN34(VAR104, "");
        FUN34(VAR105, "");
        FUN34(VAR106, "");
        FUN34(VAR107, "");
        FUN34(VAR108, "");
        FUN34(VAR109, "");
        FUN34(VAR110, "");
        FUN34(VAR111, "");
        FUN34(VAR112, "");
        FUN35(VAR2);
    }
if (VAR113)
    VAR23 = FUN36(VAR2, VAR10->VAR114, VAR8 ? VAR115 : VAR116);
if (VAR10->VAR117)
{
    int VAR118;
    FUN3(VAR2, VAR119);
    for (VAR118 = 0; VAR118 < VAR10->VAR117; VAR118++)
    {
        VAR120 *VAR121 = &VAR10->VAR122[VAR118];
        const char *VAR31 = FUN37(VAR121->VAR123);
        FUN3(VAR2, VAR124);
        FUN6("", VAR31 ? VAR31 : "");
        FUN4("", VAR121->VAR125);
        if (VAR121->VAR123 == VAR126 && VAR121->VAR125 >= 9 * 4)
        {
            FUN38(VAR2, "", VAR121->VAR127, 9, "", 3, 4, 1);
            FUN4("", FUN39((VAR128 *)VAR121->VAR127));
        }
        FUN35(VAR2);
    }
    FUN35(VAR2);
}
FUN35(VAR2);
FUN40(&VAR20, NULL);
FUN41(VAR129);
return VAR23;
}