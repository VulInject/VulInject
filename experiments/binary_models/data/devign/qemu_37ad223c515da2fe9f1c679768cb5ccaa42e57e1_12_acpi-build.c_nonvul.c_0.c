FUN1(VAR1 *VAR2, VAR1 *VAR3, VAR4 *VAR5, VAR6 *VAR7, VAR8 *VAR9, VAR10 *VAR11)
{
    VAR12 *VAR13;
    VAR14 *VAR15, *VAR16, *VAR17, *VAR18, *VAR19, *VAR20, *VAR21, *VAR22;
    VAR23 *VAR24 = FUN2(VAR25);
    VAR23 *VAR26 = FUN2(VAR25);
    VAR27 *VAR28 = FUN3(FUN4());
    VAR29 *VAR30 = FUN5(VAR28);
    uint32_t VAR31 = VAR28->VAR32;
    int VAR33 = 0xFF;
    VAR34 *VAR35 = NULL;
    int VAR36;
    VAR15 = FUN6();
    FUN7(VAR15->VAR37, sizeof(VAR38));
    FUN8(VAR15);
    if (VAR9->VAR39)
    {
        VAR16 = FUN9("");
        VAR18 = FUN10("");
        FUN11(VAR18, FUN12("", FUN13("")));
        FUN11(VAR18, FUN12("", FUN14(0)));
        FUN11(VAR18, FUN12("", FUN14(1)));
        FUN11(VAR16, VAR18);
        FUN11(VAR15, VAR16);
        FUN15(VAR15);
        FUN16(VAR15);
        FUN17(VAR15);
        FUN18(VAR15);
        FUN19(VAR15);
        FUN20(VAR15);
    }
    else
    {
        VAR16 = FUN9("");
        FUN11(VAR16, FUN21("", VAR40, 0xae00, 0x0c));
        FUN11(VAR16, FUN21("", VAR40, 0xae0c, 0x01));
        VAR20 = FUN22("", VAR41, VAR42, VAR43);
        FUN11(VAR20, FUN23("", 8));
        FUN11(VAR16, VAR20);
        FUN11(VAR15, VAR16);
        VAR16 = FUN9("");
        VAR18 = FUN10("");
        FUN11(VAR18, FUN12("", FUN13("")));
        FUN11(VAR18, FUN12("", FUN13("")));
        FUN11(VAR18, FUN12("", FUN14(0)));
        FUN11(VAR18, FUN12("", FUN14(1)));
        FUN11(VAR18, FUN12("", FUN14(0)));
        FUN11(VAR18, FUN12("", FUN14(0)));
        FUN11(VAR18, FUN24());
        FUN11(VAR16, VAR18);
        FUN11(VAR15, VAR16);
        FUN15(VAR15);
        FUN25(VAR15);
        FUN18(VAR15);
        FUN26(VAR15);
    }
    FUN27(VAR15);
    FUN28(VAR15, VAR31, VAR7->VAR44, VAR7->VAR45);
    VAR17 = FUN9("");
    {
        FUN11(VAR17, FUN12("", FUN29("")));
        FUN11(VAR17, FUN30("", 0, VAR46));
        if (VAR9->VAR39)
        {
            VAR19 = FUN30("", 0, VAR46);
            FUN11(VAR19, FUN31(FUN32(""), 0xFFFF));
            FUN11(VAR19, FUN33(""));
            FUN11(VAR19, FUN34(FUN32("")));
            FUN11(VAR17, VAR19);
        }
        else
        {
            FUN11(VAR17, FUN30("", 0, VAR46));
        }
        VAR19 = FUN30("", 0, VAR46);
        FUN11(VAR19, FUN33("" VAR47));
        FUN11(VAR17, VAR19);
        VAR19 = FUN30("", 0, VAR46);
        FUN11(VAR19, FUN33(VAR48));
        FUN11(VAR17, VAR19);
        FUN11(VAR17, FUN30("", 0, VAR46));
        FUN11(VAR17, FUN30("", 0, VAR46));
        FUN11(VAR17, FUN30("", 0, VAR46));
        FUN11(VAR17, FUN30("", 0, VAR46));
        FUN11(VAR17, FUN30("", 0, VAR46));
        FUN11(VAR17, FUN30("", 0, VAR46));
        FUN11(VAR17, FUN30("", 0, VAR46));
        FUN11(VAR17, FUN30("", 0, VAR46));
        FUN11(VAR17, FUN30("", 0, VAR46));
        FUN11(VAR17, FUN30("", 0, VAR46));
        FUN11(VAR17, FUN30("", 0, VAR46));
        FUN11(VAR17, FUN30("", 0, VAR46));
    }
    FUN11(VAR15, VAR17);
    VAR35 = FUN5(VAR28)->VAR35;
    if (VAR35)
    {
        FUN35(VAR35, &VAR35->VAR49, VAR50)
        {
            uint8_t VAR51 = FUN36(VAR35);
            uint8_t VAR52 = FUN37(VAR35);
            if (!FUN38(VAR35))
            {
                continue;
            }
            if (VAR51 < VAR33)
            {
                VAR33 = VAR51 - 1;
            }
            VAR17 = FUN9("");
            VAR18 = FUN10("", VAR51);
            FUN11(VAR18, FUN12("", FUN14(VAR51)));
            FUN11(VAR18, FUN12("", FUN13("")));
            FUN11(VAR18, FUN12("", FUN14(VAR51)));
            if (VAR52 != VAR53)
            {
                FUN11(VAR18, FUN12("", FUN14(VAR52)));
            }
            FUN11(VAR18, FUN39(false));
            VAR22 = FUN40(FUN41(FUN42(VAR35)->VAR54), VAR26, VAR24);
            FUN11(VAR18, FUN12("", VAR22));
            FUN11(VAR17, VAR18);
            FUN11(VAR15, VAR17);
        }
    }
    VAR17 = FUN9("");
    VAR22 = FUN43();
    FUN11(VAR22, FUN44(VAR55, VAR56, VAR57, 0x0000, 0x0, VAR33, 0x0000, VAR33 + 1));
    FUN11(VAR22, FUN45(VAR58, 0x0CF8, 0x0CF8, 0x01, 0x08));
    FUN11(VAR22, FUN46(VAR55, VAR56, VAR57, VAR59, 0x0000, 0x0000, 0x0CF7, 0x0000, 0x0CF8));
    FUN47(VAR26, 0x0D00, 0xFFFF);
    for (VAR36 = 0; VAR36 < VAR26->VAR60; VAR36++)
    {
        VAR13 = FUN48(VAR26, VAR36);
        FUN11(VAR22, FUN46(VAR55, VAR56, VAR57, VAR59, 0x0000, VAR13->VAR61, VAR13->VAR62, 0x0000, VAR13->VAR62 - VAR13->VAR61 + 1));
    }
    FUN11(VAR22, FUN49(VAR57, VAR55, VAR56, VAR63, VAR64, 0, 0x000A0000, 0x000BFFFF, 0, 0x00020000));
    FUN47(VAR24, VAR11->VAR65.VAR66, VAR11->VAR65.VAR67 - 1);
    for (VAR36 = 0; VAR36 < VAR24->VAR60; VAR36++)
    {
        VAR13 = FUN48(VAR24, VAR36);
        FUN11(VAR22, FUN49(VAR57, VAR55, VAR56, VAR68, VAR64, 0, VAR13->VAR61, VAR13->VAR62, 0, VAR13->VAR62 - VAR13->VAR61 + 1));
    }
    if (VAR11->VAR69.VAR66)
    {
        FUN11(VAR22, FUN50(VAR57, VAR55, VAR56, VAR63, VAR64, 0, VAR11->VAR69.VAR66, VAR11->VAR69.VAR67 - 1, 0, VAR11->VAR69.VAR67 - VAR11->VAR69.VAR66));
    }
    FUN11(VAR17, FUN12("", VAR22));
    VAR18 = FUN10("");
    FUN11(VAR18, FUN12("", FUN29("")));
    FUN11(VAR18, FUN12("", FUN29("")));
    FUN11(VAR18, FUN12("", FUN14(0xB)));
    VAR22 = FUN43();
    FUN11(VAR22, FUN45(VAR58, VAR7->VAR70, VAR7->VAR70, 1, VAR7->VAR71));
    FUN11(VAR18, FUN12("", VAR22));
    FUN11(VAR17, VAR18);
    FUN51(VAR26, true);
    FUN51(VAR24, true);
    if (VAR7->VAR72)
    {
        VAR18 = FUN10("");
        FUN11(VAR18, FUN12("", FUN29("")));
        FUN11(VAR18, FUN12("", FUN29("")));
        FUN11(VAR18, FUN12("", FUN14(0xB)));
        VAR22 = FUN43();
        FUN11(VAR22, FUN45(VAR58, VAR7->VAR73, VAR7->VAR73, 1, VAR7->VAR72));
        FUN11(VAR18, FUN12("", VAR22));
        FUN11(VAR17, VAR18);
    }
    FUN11(VAR15, VAR17);
    VAR17 = FUN9("");
    if (!VAR7->VAR74)
    {
        VAR21 = FUN52(4);
        FUN11(VAR21, FUN14(1));
        FUN11(VAR21, FUN14(1));
        FUN11(VAR21, FUN14(0));
        FUN11(VAR21, FUN14(0));
        FUN11(VAR17, FUN12("", VAR21));
    }
    if (!VAR7->VAR75)
    {
        VAR21 = FUN52(4);
        FUN11(VAR21, FUN14(VAR7->VAR76));
        FUN11(VAR21, FUN14(VAR7->VAR76));
        FUN11(VAR21, FUN14(0));
        FUN11(VAR21, FUN14(0));
        FUN11(VAR17, FUN12("", VAR21));
    }
    VAR21 = FUN52(4);
    FUN11(VAR21, FUN14(0));
    FUN11(VAR21, FUN14(0));
    FUN11(VAR21, FUN14(0));
    FUN11(VAR21, FUN14(0));
    FUN11(VAR17, FUN12("", VAR21));
    FUN11(VAR15, VAR17);
    if (VAR9->VAR77)
    {
        VAR17 = FUN9("");
        VAR18 = FUN10("");
        FUN11(VAR18, FUN12("", FUN13("")));
        FUN11(VAR18, FUN12("", FUN14(0xB)));
        VAR22 = FUN43();
        FUN11(VAR22, FUN45(VAR58, VAR9->VAR77, VAR9->VAR77, 0x01, VAR78));
        FUN11(VAR22, FUN53(6));
        FUN11(VAR18, FUN12("", VAR22));
        FUN11(VAR17, VAR18);
        FUN11(VAR15, VAR17);
    }
    if (VAR9->VAR79)
    {
        VAR17 = FUN9("");
        VAR18 = FUN10("");
        FUN11(VAR18, FUN12("", FUN29("")));
        VAR22 = FUN43();
        FUN11(VAR22, FUN45(VAR58, VAR9->VAR79, VAR9->VAR79, 1, 1));
        FUN11(VAR18, FUN12("", VAR22));
        FUN11(VAR18, FUN21("", VAR40, VAR9->VAR79, 1));
        VAR20 = FUN22("", VAR80, VAR42, VAR81);
        FUN11(VAR20, FUN23("", 8));
        FUN11(VAR18, VAR20);
        FUN11(VAR18, FUN12("", FUN14(0xF)));
        VAR19 = FUN30("", 0, VAR46);
        FUN11(VAR19, FUN54(FUN32(""), FUN55(0)));
        FUN11(VAR19, FUN56(FUN55(0)));
        FUN11(VAR18, VAR19);
        VAR19 = FUN30("", 1, VAR46);
        FUN11(VAR19, FUN54(FUN57(0), FUN32("")));
        FUN11(VAR18, VAR19);
        FUN11(VAR17, VAR18);
        FUN11(VAR15, VAR17);
    }
    VAR16 = FUN9("");
    {
        FUN58(VAR16, VAR30->VAR82, VAR5, VAR7);
        FUN59(VAR16, VAR31, VAR7->VAR44, VAR7->VAR45);
        {
            VAR83 *VAR84;
            VAR34 *VAR35 = NULL;
            VAR84 = FUN60();
            if (VAR84)
            {
                VAR35 = FUN41(VAR84)->VAR35;
            }
            if (VAR35)
            {
                VAR14 *VAR17 = FUN9("");
                FUN61(VAR17, VAR35, VAR7->VAR85);
                if (VAR9->VAR86 != VAR87)
                {
                    VAR18 = FUN10("");
                    FUN11(VAR18, FUN12("", FUN13("")));
                    FUN11(VAR18, FUN12("", FUN14(0xF)));
                    VAR22 = FUN43();
                    FUN11(VAR22, FUN62(VAR88, VAR89, VAR64));
                    FUN11(VAR22, FUN53(VAR90));
                    FUN11(VAR18, FUN12("", VAR22));
                    FUN11(VAR17, VAR18);
                }
                FUN11(VAR16, VAR17);
            }
        }
        FUN11(VAR15, VAR16);
    }
    FUN63(VAR2, VAR15->VAR37->VAR91, VAR15->VAR37->VAR60);
    FUN64(VAR3, VAR2, (void *)(VAR2->VAR91 + VAR2->VAR60 - VAR15->VAR37->VAR60), "", VAR15->VAR37->VAR60, 1, NULL, NULL);
    FUN65();
}