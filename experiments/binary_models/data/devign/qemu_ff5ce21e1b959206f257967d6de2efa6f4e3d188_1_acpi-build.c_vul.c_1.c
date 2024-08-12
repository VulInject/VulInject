FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR7 *VAR8, VAR9 *VAR10, VAR9 *VAR11, VAR12 *VAR13)
{
    VAR14 *VAR15;
    VAR16 *VAR17, *VAR18, *VAR19, *VAR20, *VAR21, *VAR22, *VAR23, *VAR24;
    CrsRangeSet VAR25;
    VAR26 *VAR27 = FUN2(VAR13);
    VAR28 *VAR29 = FUN3(VAR13);
    uint32_t VAR30 = VAR13->VAR31;
    int VAR32 = 0xFF;
    VAR33 *VAR34 = NULL;
    int VAR35;
    VAR17 = FUN4();
    FUN5(VAR17->VAR36, sizeof(VAR37));
    FUN6(VAR17);
    if (VAR8->VAR38)
    {
        VAR18 = FUN7("");
        VAR20 = FUN8("");
        FUN9(VAR20, FUN10("", FUN11("")));
        FUN9(VAR20, FUN10("", FUN12(0)));
        FUN9(VAR20, FUN10("", FUN12(1)));
        FUN9(VAR18, VAR20);
        FUN9(VAR17, VAR18);
        FUN13(VAR17);
        FUN14(VAR17);
        FUN15(VAR17);
        FUN16(VAR17);
        FUN17(VAR17);
        FUN18(VAR17);
    }
    else
    {
        VAR18 = FUN7("");
        VAR20 = FUN8("");
        FUN9(VAR20, FUN10("", FUN11("")));
        FUN9(VAR20, FUN10("", FUN11("")));
        FUN9(VAR20, FUN10("", FUN12(0)));
        FUN9(VAR20, FUN10("", FUN12(1)));
        FUN9(VAR20, FUN19());
        FUN9(VAR18, VAR20);
        FUN9(VAR17, VAR18);
        FUN13(VAR17);
        FUN20(VAR17);
        FUN16(VAR17);
        FUN21(VAR17);
    }
    if (VAR29->VAR39)
    {
        FUN22(VAR17, VAR13, VAR6->VAR40);
    }
    else
    {
        CPUHotplugFeatures VAR41 = {.VAR42 = true, .VAR43 = true};
        FUN23(VAR17, VAR13, VAR41, VAR6->VAR40, "", "");
    }
    FUN24(VAR17, VAR30, "", "");
    VAR19 = FUN7("");
    {
        FUN9(VAR19, FUN10("", FUN25("")));
        if (VAR8->VAR38)
        {
            VAR21 = FUN26("", 0, VAR44);
            FUN9(VAR21, FUN27(FUN28(""), 0xFFFF));
            FUN9(VAR21, FUN29(""));
            FUN9(VAR21, FUN30(FUN28("")));
            FUN9(VAR19, VAR21);
        }
        if (VAR27->VAR45.VAR46)
        {
            VAR21 = FUN26("", 0, VAR44);
            FUN9(VAR21, FUN31(FUN28(""), FUN12(0x80)));
            FUN9(VAR19, VAR21);
        }
    }
    FUN9(VAR17, VAR19);
    FUN32(&VAR25);
    VAR34 = FUN2(VAR13)->VAR34;
    if (VAR34)
    {
        FUN33(VAR34, &VAR34->VAR47, VAR48)
        {
            uint8_t VAR49 = FUN34(VAR34);
            uint8_t VAR50 = FUN35(VAR34);
            if (!FUN36(VAR34))
            {
                continue;
            }
            if (VAR49 < VAR32)
            {
                VAR32 = VAR49 - 1;
            }
            VAR19 = FUN7("");
            VAR20 = FUN8("", VAR49);
            FUN9(VAR20, FUN10("", FUN12(VAR49)));
            FUN9(VAR20, FUN10("", FUN11("")));
            FUN9(VAR20, FUN10("", FUN12(VAR49)));
            if (FUN37(VAR34))
            {
                FUN9(VAR20, FUN19());
            }
            if (VAR50 != VAR51)
            {
                FUN9(VAR20, FUN10("", FUN12(VAR50)));
            }
            FUN9(VAR20, FUN38(false));
            VAR24 = FUN39(FUN40(FUN41(VAR34)->VAR52), &VAR25);
            FUN9(VAR20, FUN10("", VAR24));
            FUN9(VAR19, VAR20);
            FUN9(VAR17, VAR19);
        }
    }
    VAR19 = FUN7("");
    VAR24 = FUN42();
    FUN9(VAR24, FUN43(VAR53, VAR54, VAR55, 0x0000, 0x0, VAR32, 0x0000, VAR32 + 1));
    FUN9(VAR24, FUN44(VAR56, 0x0CF8, 0x0CF8, 0x01, 0x08));
    FUN9(VAR24, FUN45(VAR53, VAR54, VAR55, VAR57, 0x0000, 0x0000, 0x0CF7, 0x0000, 0x0CF8));
    FUN46(VAR25.VAR58, 0x0D00, 0xFFFF);
    for (VAR35 = 0; VAR35 < VAR25.VAR58->VAR59; VAR35++)
    {
        VAR15 = FUN47(VAR25.VAR58, VAR35);
        FUN9(VAR24, FUN45(VAR53, VAR54, VAR55, VAR57, 0x0000, VAR15->VAR60, VAR15->VAR61, 0x0000, VAR15->VAR61 - VAR15->VAR60 + 1));
    }
    FUN9(VAR24, FUN48(VAR55, VAR53, VAR54, VAR62, VAR63, 0, 0x000A0000, 0x000BFFFF, 0, 0x00020000));
    FUN46(VAR25.VAR64, FUN49(VAR10), FUN50(VAR10));
    for (VAR35 = 0; VAR35 < VAR25.VAR64->VAR59; VAR35++)
    {
        VAR15 = FUN47(VAR25.VAR64, VAR35);
        FUN9(VAR24, FUN48(VAR55, VAR53, VAR54, VAR65, VAR63, 0, VAR15->VAR60, VAR15->VAR61, 0, VAR15->VAR61 - VAR15->VAR60 + 1));
    }
    if (!FUN51(VAR11))
    {
        FUN46(VAR25.VAR66, FUN49(VAR11), FUN50(VAR11));
        for (VAR35 = 0; VAR35 < VAR25.VAR66->VAR59; VAR35++)
        {
            VAR15 = FUN47(VAR25.VAR66, VAR35);
            FUN9(VAR24, FUN52(VAR55, VAR53, VAR54, VAR62, VAR63, 0, VAR15->VAR60, VAR15->VAR61, 0, VAR15->VAR61 - VAR15->VAR60 + 1));
        }
    }
    if (VAR8->VAR67 != VAR68)
    {
        FUN9(VAR24, FUN53(VAR69, VAR70, VAR63));
    }
    FUN9(VAR19, FUN10("", VAR24));
    VAR20 = FUN8("");
    FUN9(VAR20, FUN10("", FUN25("")));
    FUN9(VAR20, FUN10("", FUN25("")));
    FUN9(VAR20, FUN10("", FUN12(0xB)));
    VAR24 = FUN42();
    FUN9(VAR24, FUN44(VAR56, VAR6->VAR71, VAR6->VAR71, 1, VAR6->VAR72));
    FUN9(VAR20, FUN10("", VAR24));
    FUN9(VAR19, VAR20);
    FUN54(&VAR25);
    if (VAR6->VAR73)
    {
        VAR20 = FUN8("");
        FUN9(VAR20, FUN10("", FUN25("")));
        FUN9(VAR20, FUN10("", FUN25("")));
        FUN9(VAR20, FUN10("", FUN12(0xB)));
        VAR24 = FUN42();
        FUN9(VAR24, FUN44(VAR56, VAR6->VAR74, VAR6->VAR74, 1, VAR6->VAR73));
        FUN9(VAR20, FUN10("", VAR24));
        FUN9(VAR19, VAR20);
    }
    FUN9(VAR17, VAR19);
    VAR19 = FUN7("");
    if (!VAR6->VAR75)
    {
        VAR23 = FUN55(4);
        FUN9(VAR23, FUN12(1));
        FUN9(VAR23, FUN12(1));
        FUN9(VAR23, FUN12(0));
        FUN9(VAR23, FUN12(0));
        FUN9(VAR19, FUN10("", VAR23));
    }
    if (!VAR6->VAR76)
    {
        VAR23 = FUN55(4);
        FUN9(VAR23, FUN12(VAR6->VAR77));
        FUN9(VAR23, FUN12(VAR6->VAR77));
        FUN9(VAR23, FUN12(0));
        FUN9(VAR23, FUN12(0));
        FUN9(VAR19, FUN10("", VAR23));
    }
    VAR23 = FUN55(4);
    FUN9(VAR23, FUN12(0));
    FUN9(VAR23, FUN12(0));
    FUN9(VAR23, FUN12(0));
    FUN9(VAR23, FUN12(0));
    FUN9(VAR19, FUN10("", VAR23));
    FUN9(VAR17, VAR19);
    {
        uint8_t VAR78 = FUN56(FUN57(VAR27->VAR79), "", NULL) ? FUN58(VAR80, 4) + sizeof(VAR81) : VAR80;
        VAR19 = FUN7("");
        VAR20 = FUN8("");
        FUN9(VAR20, FUN10("", FUN25("")));
        FUN9(VAR20, FUN10("", FUN12(0xB)));
        VAR24 = FUN42();
        FUN9(VAR24, FUN44(VAR56, VAR82, VAR82, 0x01, VAR78));
        FUN9(VAR20, FUN10("", VAR24));
        FUN9(VAR19, VAR20);
        FUN9(VAR17, VAR19);
    }
    if (VAR8->VAR83)
    {
        VAR19 = FUN7("");
        VAR20 = FUN8("");
        FUN9(VAR20, FUN10("", FUN11("")));
        FUN9(VAR20, FUN10("", FUN12(0xB)));
        VAR24 = FUN42();
        FUN9(VAR24, FUN44(VAR56, VAR8->VAR83, VAR8->VAR83, 0x01, VAR84));
        FUN9(VAR24, FUN59(6));
        FUN9(VAR20, FUN10("", VAR24));
        FUN9(VAR19, VAR20);
        FUN9(VAR17, VAR19);
    }
    if (VAR8->VAR85)
    {
        VAR19 = FUN7("");
        VAR20 = FUN8("");
        FUN9(VAR20, FUN10("", FUN25("")));
        VAR24 = FUN42();
        FUN9(VAR24, FUN44(VAR56, VAR8->VAR85, VAR8->VAR85, 1, 1));
        FUN9(VAR20, FUN10("", VAR24));
        FUN9(VAR20, FUN60("", VAR86, FUN12(VAR8->VAR85), 1));
        VAR22 = FUN61("", VAR87, VAR88, VAR89);
        FUN9(VAR22, FUN62("", 8));
        FUN9(VAR20, VAR22);
        FUN9(VAR20, FUN10("", FUN12(0xF)));
        VAR21 = FUN26("", 0, VAR44);
        FUN9(VAR21, FUN63(FUN28(""), FUN64(0)));
        FUN9(VAR21, FUN65(FUN64(0)));
        FUN9(VAR20, VAR21);
        VAR21 = FUN26("", 1, VAR44);
        FUN9(VAR21, FUN63(FUN66(0), FUN28("")));
        FUN9(VAR20, VAR21);
        FUN9(VAR19, VAR20);
        FUN9(VAR17, VAR19);
    }
    VAR18 = FUN7("");
    {
        VAR90 *VAR91;
        VAR33 *VAR34 = NULL;
        VAR91 = FUN67();
        if (VAR91)
        {
            VAR34 = FUN40(VAR91)->VAR34;
        }
        if (VAR34)
        {
            VAR16 *VAR19 = FUN7("");
            FUN68(VAR19, VAR34, VAR6->VAR92);
            if (VAR8->VAR67 != VAR68)
            {
                VAR20 = FUN8("");
                FUN9(VAR20, FUN10("", FUN11("")));
                FUN9(VAR20, FUN10("", FUN12(0xF)));
                VAR24 = FUN42();
                FUN9(VAR24, FUN53(VAR69, VAR70, VAR63));
                FUN9(VAR20, FUN10("", VAR24));
                FUN9(VAR19, VAR20);
            }
            FUN9(VAR18, VAR19);
        }
    }
    FUN9(VAR17, VAR18);
    FUN69(VAR2, VAR17->VAR36->VAR93, VAR17->VAR36->VAR59);
    FUN70(VAR4, VAR2, (void *)(VAR2->VAR93 + VAR2->VAR59 - VAR17->VAR36->VAR59), "", VAR17->VAR36->VAR59, 1, NULL, NULL);
    FUN71();
}