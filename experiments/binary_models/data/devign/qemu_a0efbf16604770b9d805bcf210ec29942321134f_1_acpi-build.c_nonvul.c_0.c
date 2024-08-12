FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR7 *VAR8, VAR9 *VAR10, VAR9 *VAR11, VAR12 *VAR13)
{
    VAR14 *VAR15;
    VAR16 *VAR17, *VAR18, *VAR19, *VAR20, *VAR21, *VAR22, *VAR23, *VAR24;
    VAR25 *VAR26 = FUN2(VAR27);
    VAR25 *VAR28 = FUN2(VAR27);
    VAR29 *VAR30 = FUN3(VAR13);
    VAR31 *VAR32 = FUN4(VAR13);
    uint32_t VAR33 = VAR13->VAR34;
    int VAR35 = 0xFF;
    VAR36 *VAR37 = NULL;
    int VAR38;
    VAR17 = FUN5();
    FUN6(VAR17->VAR39, sizeof(VAR40));
    FUN7(VAR17);
    if (VAR8->VAR41)
    {
        VAR18 = FUN8("");
        VAR20 = FUN9("");
        FUN10(VAR20, FUN11("", FUN12("")));
        FUN10(VAR20, FUN11("", FUN13(0)));
        FUN10(VAR20, FUN11("", FUN13(1)));
        FUN10(VAR18, VAR20);
        FUN10(VAR17, VAR18);
        FUN14(VAR17);
        FUN15(VAR17);
        FUN16(VAR17);
        FUN17(VAR17);
        FUN18(VAR17);
        FUN19(VAR17);
    }
    else
    {
        VAR18 = FUN8("");
        FUN10(VAR18, FUN20("", VAR42, FUN13(0xae00), 0x0c));
        FUN10(VAR18, FUN20("", VAR42, FUN13(0xae0c), 0x01));
        VAR22 = FUN21("", VAR43, VAR44, VAR45);
        FUN10(VAR22, FUN22("", 8));
        FUN10(VAR18, VAR22);
        FUN10(VAR17, VAR18);
        VAR18 = FUN8("");
        VAR20 = FUN9("");
        FUN10(VAR20, FUN11("", FUN12("")));
        FUN10(VAR20, FUN11("", FUN12("")));
        FUN10(VAR20, FUN11("", FUN13(0)));
        FUN10(VAR20, FUN11("", FUN13(1)));
        FUN10(VAR20, FUN11("", FUN13(0)));
        FUN10(VAR20, FUN11("", FUN13(0)));
        FUN10(VAR20, FUN23());
        FUN10(VAR18, VAR20);
        FUN10(VAR17, VAR18);
        FUN14(VAR17);
        FUN24(VAR17);
        FUN17(VAR17);
        FUN25(VAR17);
    }
    if (VAR32->VAR46)
    {
        FUN26(VAR17, VAR13, VAR6->VAR47);
    }
    else
    {
        CPUHotplugFeatures VAR48 = {.VAR49 = true, .VAR50 = true};
        FUN27(VAR17, VAR13, VAR48, VAR6->VAR47, "", "");
    }
    FUN28(VAR17, VAR33, VAR6->VAR51, VAR6->VAR52);
    VAR19 = FUN8("");
    {
        FUN10(VAR19, FUN11("", FUN29("")));
        if (VAR8->VAR41)
        {
            VAR21 = FUN30("", 0, VAR53);
            FUN10(VAR21, FUN31(FUN32(""), 0xFFFF));
            FUN10(VAR21, FUN33(""));
            FUN10(VAR21, FUN34(FUN32("")));
            FUN10(VAR19, VAR21);
        }
        VAR21 = FUN30("", 0, VAR53);
        FUN10(VAR21, FUN33(VAR54));
        FUN10(VAR19, VAR21);
    }
    FUN10(VAR17, VAR19);
    VAR37 = FUN3(VAR13)->VAR37;
    if (VAR37)
    {
        FUN35(VAR37, &VAR37->VAR55, VAR56)
        {
            uint8_t VAR57 = FUN36(VAR37);
            uint8_t VAR58 = FUN37(VAR37);
            if (!FUN38(VAR37))
            {
                continue;
            }
            if (VAR57 < VAR35)
            {
                VAR35 = VAR57 - 1;
            }
            VAR19 = FUN8("");
            VAR20 = FUN9("", VAR57);
            FUN10(VAR20, FUN11("", FUN13(VAR57)));
            FUN10(VAR20, FUN11("", FUN12("")));
            FUN10(VAR20, FUN11("", FUN13(VAR57)));
            if (VAR58 != VAR59)
            {
                FUN10(VAR20, FUN11("", FUN13(VAR58)));
            }
            FUN10(VAR20, FUN39(false));
            VAR24 = FUN40(FUN41(FUN42(VAR37)->VAR60), VAR28, VAR26);
            FUN10(VAR20, FUN11("", VAR24));
            FUN10(VAR19, VAR20);
            FUN10(VAR17, VAR19);
        }
    }
    VAR19 = FUN8("");
    VAR24 = FUN43();
    FUN10(VAR24, FUN44(VAR61, VAR62, VAR63, 0x0000, 0x0, VAR35, 0x0000, VAR35 + 1));
    FUN10(VAR24, FUN45(VAR64, 0x0CF8, 0x0CF8, 0x01, 0x08));
    FUN10(VAR24, FUN46(VAR61, VAR62, VAR63, VAR65, 0x0000, 0x0000, 0x0CF7, 0x0000, 0x0CF8));
    FUN47(VAR28, 0x0D00, 0xFFFF);
    for (VAR38 = 0; VAR38 < VAR28->VAR66; VAR38++)
    {
        VAR15 = FUN48(VAR28, VAR38);
        FUN10(VAR24, FUN46(VAR61, VAR62, VAR63, VAR65, 0x0000, VAR15->VAR67, VAR15->VAR68, 0x0000, VAR15->VAR68 - VAR15->VAR67 + 1));
    }
    FUN10(VAR24, FUN49(VAR63, VAR61, VAR62, VAR69, VAR70, 0, 0x000A0000, 0x000BFFFF, 0, 0x00020000));
    FUN47(VAR26, FUN50(VAR10), FUN51(VAR10));
    for (VAR38 = 0; VAR38 < VAR26->VAR66; VAR38++)
    {
        VAR15 = FUN48(VAR26, VAR38);
        FUN10(VAR24, FUN49(VAR63, VAR61, VAR62, VAR71, VAR70, 0, VAR15->VAR67, VAR15->VAR68, 0, VAR15->VAR68 - VAR15->VAR67 + 1));
    }
    if (!FUN52(VAR11))
    {
        FUN10(VAR24, FUN53(VAR63, VAR61, VAR62, VAR69, VAR70, 0, FUN50(VAR11), FUN51(VAR11), 0, FUN51(VAR11) + 1 - FUN50(VAR11)));
    }
    if (VAR8->VAR72 != VAR73)
    {
        FUN10(VAR24, FUN54(VAR74, VAR75, VAR70));
    }
    FUN10(VAR19, FUN11("", VAR24));
    VAR20 = FUN9("");
    FUN10(VAR20, FUN11("", FUN29("")));
    FUN10(VAR20, FUN11("", FUN29("")));
    FUN10(VAR20, FUN11("", FUN13(0xB)));
    VAR24 = FUN43();
    FUN10(VAR24, FUN45(VAR64, VAR6->VAR76, VAR6->VAR76, 1, VAR6->VAR77));
    FUN10(VAR20, FUN11("", VAR24));
    FUN10(VAR19, VAR20);
    FUN55(VAR28, true);
    FUN55(VAR26, true);
    if (VAR6->VAR78)
    {
        VAR20 = FUN9("");
        FUN10(VAR20, FUN11("", FUN29("")));
        FUN10(VAR20, FUN11("", FUN29("")));
        FUN10(VAR20, FUN11("", FUN13(0xB)));
        VAR24 = FUN43();
        FUN10(VAR24, FUN45(VAR64, VAR6->VAR79, VAR6->VAR79, 1, VAR6->VAR78));
        FUN10(VAR20, FUN11("", VAR24));
        FUN10(VAR19, VAR20);
    }
    FUN10(VAR17, VAR19);
    VAR19 = FUN8("");
    if (!VAR6->VAR80)
    {
        VAR23 = FUN56(4);
        FUN10(VAR23, FUN13(1));
        FUN10(VAR23, FUN13(1));
        FUN10(VAR23, FUN13(0));
        FUN10(VAR23, FUN13(0));
        FUN10(VAR19, FUN11("", VAR23));
    }
    if (!VAR6->VAR81)
    {
        VAR23 = FUN56(4);
        FUN10(VAR23, FUN13(VAR6->VAR82));
        FUN10(VAR23, FUN13(VAR6->VAR82));
        FUN10(VAR23, FUN13(0));
        FUN10(VAR23, FUN13(0));
        FUN10(VAR19, FUN11("", VAR23));
    }
    VAR23 = FUN56(4);
    FUN10(VAR23, FUN13(0));
    FUN10(VAR23, FUN13(0));
    FUN10(VAR23, FUN13(0));
    FUN10(VAR23, FUN13(0));
    FUN10(VAR19, FUN11("", VAR23));
    FUN10(VAR17, VAR19);
    {
        uint8_t VAR83 = FUN57(FUN58(VAR30->VAR84), "", NULL) ? FUN59(VAR85, 4) + sizeof(VAR86) : VAR85;
        VAR19 = FUN8("");
        VAR20 = FUN9("");
        FUN10(VAR20, FUN11("", FUN29("")));
        FUN10(VAR20, FUN11("", FUN13(0xB)));
        VAR24 = FUN43();
        FUN10(VAR24, FUN45(VAR64, VAR87, VAR87, 0x01, VAR83));
        FUN10(VAR20, FUN11("", VAR24));
        FUN10(VAR19, VAR20);
        FUN10(VAR17, VAR19);
    }
    if (VAR8->VAR88)
    {
        VAR19 = FUN8("");
        VAR20 = FUN9("");
        FUN10(VAR20, FUN11("", FUN12("")));
        FUN10(VAR20, FUN11("", FUN13(0xB)));
        VAR24 = FUN43();
        FUN10(VAR24, FUN45(VAR64, VAR8->VAR88, VAR8->VAR88, 0x01, VAR89));
        FUN10(VAR24, FUN60(6));
        FUN10(VAR20, FUN11("", VAR24));
        FUN10(VAR19, VAR20);
        FUN10(VAR17, VAR19);
    }
    if (VAR8->VAR90)
    {
        VAR19 = FUN8("");
        VAR20 = FUN9("");
        FUN10(VAR20, FUN11("", FUN29("")));
        VAR24 = FUN43();
        FUN10(VAR24, FUN45(VAR64, VAR8->VAR90, VAR8->VAR90, 1, 1));
        FUN10(VAR20, FUN11("", VAR24));
        FUN10(VAR20, FUN20("", VAR42, FUN13(VAR8->VAR90), 1));
        VAR22 = FUN21("", VAR91, VAR44, VAR92);
        FUN10(VAR22, FUN22("", 8));
        FUN10(VAR20, VAR22);
        FUN10(VAR20, FUN11("", FUN13(0xF)));
        VAR21 = FUN30("", 0, VAR53);
        FUN10(VAR21, FUN61(FUN32(""), FUN62(0)));
        FUN10(VAR21, FUN63(FUN62(0)));
        FUN10(VAR20, VAR21);
        VAR21 = FUN30("", 1, VAR53);
        FUN10(VAR21, FUN61(FUN64(0), FUN32("")));
        FUN10(VAR20, VAR21);
        FUN10(VAR19, VAR20);
        FUN10(VAR17, VAR19);
    }
    VAR18 = FUN8("");
    {
        FUN65(VAR18, VAR33, VAR6->VAR51, VAR6->VAR52);
        {
            VAR93 *VAR94;
            VAR36 *VAR37 = NULL;
            VAR94 = FUN66();
            if (VAR94)
            {
                VAR37 = FUN41(VAR94)->VAR37;
            }
            if (VAR37)
            {
                VAR16 *VAR19 = FUN8("");
                FUN67(VAR19, VAR37, VAR6->VAR95);
                if (VAR8->VAR72 != VAR73)
                {
                    VAR20 = FUN9("");
                    FUN10(VAR20, FUN11("", FUN12("")));
                    FUN10(VAR20, FUN11("", FUN13(0xF)));
                    VAR24 = FUN43();
                    FUN10(VAR24, FUN54(VAR74, VAR75, VAR70));
                    FUN10(VAR20, FUN11("", VAR24));
                    FUN10(VAR19, VAR20);
                }
                FUN10(VAR18, VAR19);
            }
        }
        FUN10(VAR17, VAR18);
    }
    FUN68(VAR2, VAR17->VAR39->VAR96, VAR17->VAR39->VAR66);
    FUN69(VAR4, VAR2, (void *)(VAR2->VAR96 + VAR2->VAR66 - VAR17->VAR39->VAR66), "", VAR17->VAR39->VAR66, 1, NULL, NULL);
    FUN70();
}