FUN1(VAR1 *VAR2, VAR1 *VAR3, VAR4 *VAR5, VAR6 *VAR7, VAR8 *VAR9, VAR10 *VAR11, VAR12 *VAR13)
{
    VAR14 *VAR15;
    VAR16 *VAR17, *VAR18, *VAR19, *VAR20, *VAR21, *VAR22, *VAR23, *VAR24;
    VAR25 *VAR26 = FUN2(VAR27);
    VAR25 *VAR28 = FUN2(VAR27);
    VAR29 *VAR30 = FUN3(VAR13);
    uint32_t VAR31 = VAR13->VAR32;
    int VAR33 = 0xFF;
    VAR34 *VAR35 = NULL;
    int VAR36;
    VAR17 = FUN4();
    FUN5(VAR17->VAR37, sizeof(VAR38));
    FUN6(VAR17);
    if (VAR9->VAR39)
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
        FUN9(VAR18, FUN19("", VAR40, FUN12(0xae00), 0x0c));
        FUN9(VAR18, FUN19("", VAR40, FUN12(0xae0c), 0x01));
        VAR22 = FUN20("", VAR41, VAR42, VAR43);
        FUN9(VAR22, FUN21("", 8));
        FUN9(VAR18, VAR22);
        FUN9(VAR17, VAR18);
        VAR18 = FUN7("");
        VAR20 = FUN8("");
        FUN9(VAR20, FUN10("", FUN11("")));
        FUN9(VAR20, FUN10("", FUN11("")));
        FUN9(VAR20, FUN10("", FUN12(0)));
        FUN9(VAR20, FUN10("", FUN12(1)));
        FUN9(VAR20, FUN10("", FUN12(0)));
        FUN9(VAR20, FUN10("", FUN12(0)));
        FUN9(VAR20, FUN22());
        FUN9(VAR18, VAR20);
        FUN9(VAR17, VAR18);
        FUN13(VAR17);
        FUN23(VAR17);
        FUN16(VAR17);
        FUN24(VAR17);
    }
    FUN25(VAR17);
    FUN26(VAR17, VAR31, VAR7->VAR44, VAR7->VAR45);
    VAR19 = FUN7("");
    {
        FUN9(VAR19, FUN10("", FUN27("")));
        FUN9(VAR19, FUN28("", 0, VAR46));
        if (VAR9->VAR39)
        {
            VAR21 = FUN28("", 0, VAR46);
            FUN9(VAR21, FUN29(FUN30(""), 0xFFFF));
            FUN9(VAR21, FUN31(""));
            FUN9(VAR21, FUN32(FUN30("")));
            FUN9(VAR19, VAR21);
        }
        else
        {
            FUN9(VAR19, FUN28("", 0, VAR46));
        }
        VAR21 = FUN28("", 0, VAR46);
        FUN9(VAR21, FUN31("" VAR47));
        FUN9(VAR19, VAR21);
        VAR21 = FUN28("", 0, VAR46);
        FUN9(VAR21, FUN31(VAR48));
        FUN9(VAR19, VAR21);
        FUN9(VAR19, FUN28("", 0, VAR46));
        FUN9(VAR19, FUN28("", 0, VAR46));
        FUN9(VAR19, FUN28("", 0, VAR46));
        FUN9(VAR19, FUN28("", 0, VAR46));
        FUN9(VAR19, FUN28("", 0, VAR46));
        FUN9(VAR19, FUN28("", 0, VAR46));
        FUN9(VAR19, FUN28("", 0, VAR46));
        FUN9(VAR19, FUN28("", 0, VAR46));
        FUN9(VAR19, FUN28("", 0, VAR46));
        FUN9(VAR19, FUN28("", 0, VAR46));
        FUN9(VAR19, FUN28("", 0, VAR46));
        FUN9(VAR19, FUN28("", 0, VAR46));
    }
    FUN9(VAR17, VAR19);
    VAR35 = FUN3(VAR13)->VAR35;
    if (VAR35)
    {
        FUN33(VAR35, &VAR35->VAR49, VAR50)
        {
            uint8_t VAR51 = FUN34(VAR35);
            uint8_t VAR52 = FUN35(VAR35);
            if (!FUN36(VAR35))
            {
                continue;
            }
            if (VAR51 < VAR33)
            {
                VAR33 = VAR51 - 1;
            }
            VAR19 = FUN7("");
            VAR20 = FUN8("", VAR51);
            FUN9(VAR20, FUN10("", FUN12(VAR51)));
            FUN9(VAR20, FUN10("", FUN11("")));
            FUN9(VAR20, FUN10("", FUN12(VAR51)));
            if (VAR52 != VAR53)
            {
                FUN9(VAR20, FUN10("", FUN12(VAR52)));
            }
            FUN9(VAR20, FUN37(false));
            VAR24 = FUN38(FUN39(FUN40(VAR35)->VAR54), VAR28, VAR26);
            FUN9(VAR20, FUN10("", VAR24));
            FUN9(VAR19, VAR20);
            FUN9(VAR17, VAR19);
        }
    }
    VAR19 = FUN7("");
    VAR24 = FUN41();
    FUN9(VAR24, FUN42(VAR55, VAR56, VAR57, 0x0000, 0x0, VAR33, 0x0000, VAR33 + 1));
    FUN9(VAR24, FUN43(VAR58, 0x0CF8, 0x0CF8, 0x01, 0x08));
    FUN9(VAR24, FUN44(VAR55, VAR56, VAR57, VAR59, 0x0000, 0x0000, 0x0CF7, 0x0000, 0x0CF8));
    FUN45(VAR28, 0x0D00, 0xFFFF);
    for (VAR36 = 0; VAR36 < VAR28->VAR60; VAR36++)
    {
        VAR15 = FUN46(VAR28, VAR36);
        FUN9(VAR24, FUN44(VAR55, VAR56, VAR57, VAR59, 0x0000, VAR15->VAR61, VAR15->VAR62, 0x0000, VAR15->VAR62 - VAR15->VAR61 + 1));
    }
    FUN9(VAR24, FUN47(VAR57, VAR55, VAR56, VAR63, VAR64, 0, 0x000A0000, 0x000BFFFF, 0, 0x00020000));
    FUN45(VAR26, VAR11->VAR65.VAR66, VAR11->VAR65.VAR67 - 1);
    for (VAR36 = 0; VAR36 < VAR26->VAR60; VAR36++)
    {
        VAR15 = FUN46(VAR26, VAR36);
        FUN9(VAR24, FUN47(VAR57, VAR55, VAR56, VAR68, VAR64, 0, VAR15->VAR61, VAR15->VAR62, 0, VAR15->VAR62 - VAR15->VAR61 + 1));
    }
    if (VAR11->VAR69.VAR66)
    {
        FUN9(VAR24, FUN48(VAR57, VAR55, VAR56, VAR63, VAR64, 0, VAR11->VAR69.VAR66, VAR11->VAR69.VAR67 - 1, 0, VAR11->VAR69.VAR67 - VAR11->VAR69.VAR66));
    }
    FUN9(VAR19, FUN10("", VAR24));
    VAR20 = FUN8("");
    FUN9(VAR20, FUN10("", FUN27("")));
    FUN9(VAR20, FUN10("", FUN27("")));
    FUN9(VAR20, FUN10("", FUN12(0xB)));
    VAR24 = FUN41();
    FUN9(VAR24, FUN43(VAR58, VAR7->VAR70, VAR7->VAR70, 1, VAR7->VAR71));
    FUN9(VAR20, FUN10("", VAR24));
    FUN9(VAR19, VAR20);
    FUN49(VAR28, true);
    FUN49(VAR26, true);
    if (VAR7->VAR72)
    {
        VAR20 = FUN8("");
        FUN9(VAR20, FUN10("", FUN27("")));
        FUN9(VAR20, FUN10("", FUN27("")));
        FUN9(VAR20, FUN10("", FUN12(0xB)));
        VAR24 = FUN41();
        FUN9(VAR24, FUN43(VAR58, VAR7->VAR73, VAR7->VAR73, 1, VAR7->VAR72));
        FUN9(VAR20, FUN10("", VAR24));
        FUN9(VAR19, VAR20);
    }
    FUN9(VAR17, VAR19);
    VAR19 = FUN7("");
    if (!VAR7->VAR74)
    {
        VAR23 = FUN50(4);
        FUN9(VAR23, FUN12(1));
        FUN9(VAR23, FUN12(1));
        FUN9(VAR23, FUN12(0));
        FUN9(VAR23, FUN12(0));
        FUN9(VAR19, FUN10("", VAR23));
    }
    if (!VAR7->VAR75)
    {
        VAR23 = FUN50(4);
        FUN9(VAR23, FUN12(VAR7->VAR76));
        FUN9(VAR23, FUN12(VAR7->VAR76));
        FUN9(VAR23, FUN12(0));
        FUN9(VAR23, FUN12(0));
        FUN9(VAR19, FUN10("", VAR23));
    }
    VAR23 = FUN50(4);
    FUN9(VAR23, FUN12(0));
    FUN9(VAR23, FUN12(0));
    FUN9(VAR23, FUN12(0));
    FUN9(VAR23, FUN12(0));
    FUN9(VAR19, FUN10("", VAR23));
    FUN9(VAR17, VAR19);
    {
        uint8_t VAR77 = FUN51(FUN52(VAR30->VAR78), "", NULL) ? FUN53(VAR79, 4) + sizeof(VAR80) : VAR79;
        VAR19 = FUN7("");
        VAR20 = FUN8("");
        FUN9(VAR20, FUN10("", FUN27("")));
        FUN9(VAR20, FUN10("", FUN12(0xB)));
        VAR24 = FUN41();
        FUN9(VAR24, FUN43(VAR58, VAR81, VAR81, 0x01, VAR77));
        FUN9(VAR20, FUN10("", VAR24));
        FUN9(VAR19, VAR20);
        FUN9(VAR17, VAR19);
    }
    if (VAR9->VAR82)
    {
        VAR19 = FUN7("");
        VAR20 = FUN8("");
        FUN9(VAR20, FUN10("", FUN11("")));
        FUN9(VAR20, FUN10("", FUN12(0xB)));
        VAR24 = FUN41();
        FUN9(VAR24, FUN43(VAR58, VAR9->VAR82, VAR9->VAR82, 0x01, VAR83));
        FUN9(VAR24, FUN54(6));
        FUN9(VAR20, FUN10("", VAR24));
        FUN9(VAR19, VAR20);
        FUN9(VAR17, VAR19);
    }
    if (VAR9->VAR84)
    {
        VAR19 = FUN7("");
        VAR20 = FUN8("");
        FUN9(VAR20, FUN10("", FUN27("")));
        VAR24 = FUN41();
        FUN9(VAR24, FUN43(VAR58, VAR9->VAR84, VAR9->VAR84, 1, 1));
        FUN9(VAR20, FUN10("", VAR24));
        FUN9(VAR20, FUN19("", VAR40, FUN12(VAR9->VAR84), 1));
        VAR22 = FUN20("", VAR85, VAR42, VAR86);
        FUN9(VAR22, FUN21("", 8));
        FUN9(VAR20, VAR22);
        FUN9(VAR20, FUN10("", FUN12(0xF)));
        VAR21 = FUN28("", 0, VAR46);
        FUN9(VAR21, FUN55(FUN30(""), FUN56(0)));
        FUN9(VAR21, FUN57(FUN56(0)));
        FUN9(VAR20, VAR21);
        VAR21 = FUN28("", 1, VAR46);
        FUN9(VAR21, FUN55(FUN58(0), FUN30("")));
        FUN9(VAR20, VAR21);
        FUN9(VAR19, VAR20);
        FUN9(VAR17, VAR19);
    }
    VAR18 = FUN7("");
    {
        FUN59(VAR18, VAR13, VAR5, VAR7);
        FUN60(VAR18, VAR31, VAR7->VAR44, VAR7->VAR45);
        {
            VAR87 *VAR88;
            VAR34 *VAR35 = NULL;
            VAR88 = FUN61();
            if (VAR88)
            {
                VAR35 = FUN39(VAR88)->VAR35;
            }
            if (VAR35)
            {
                VAR16 *VAR19 = FUN7("");
                FUN62(VAR19, VAR35, VAR7->VAR89);
                if (VAR9->VAR90 != VAR91)
                {
                    VAR20 = FUN8("");
                    FUN9(VAR20, FUN10("", FUN11("")));
                    FUN9(VAR20, FUN10("", FUN12(0xF)));
                    VAR24 = FUN41();
                    FUN9(VAR24, FUN63(VAR92, VAR93, VAR64));
                    FUN9(VAR24, FUN54(VAR94));
                    FUN9(VAR20, FUN10("", VAR24));
                    FUN9(VAR19, VAR20);
                }
                FUN9(VAR18, VAR19);
            }
        }
        FUN9(VAR17, VAR18);
    }
    FUN64(VAR2, VAR17->VAR37->VAR95, VAR17->VAR37->VAR60);
    FUN65(VAR3, VAR2, (void *)(VAR2->VAR95 + VAR2->VAR60 - VAR17->VAR37->VAR60), "", VAR17->VAR37->VAR60, 1, NULL, NULL);
    FUN66();
}