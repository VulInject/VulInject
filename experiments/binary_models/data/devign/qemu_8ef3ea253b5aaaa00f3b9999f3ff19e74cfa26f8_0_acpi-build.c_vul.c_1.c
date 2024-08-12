FUN1(VAR1 *VAR2, VAR1 *VAR3, VAR4 *VAR5, VAR6 *VAR7, VAR8 *VAR9, VAR10 *VAR11, VAR12 *VAR13)
{
    VAR14 *VAR15 = FUN2(FUN3());
    uint32_t VAR16 = VAR15->VAR17;
    unsigned VAR18 = VAR13->VAR19;
    VAR20 *VAR21, *VAR22, *VAR23, *VAR24, *VAR25, *VAR26, *VAR27, *VAR28, *VAR29;
    VAR30 *VAR31 = NULL;
    VAR32 *VAR33 = FUN4(VAR34);
    VAR32 *VAR35 = FUN4(VAR34);
    VAR36 *VAR37;
    int VAR38 = 0xFF;
    int VAR39;
    VAR21 = FUN5();
    FUN6(VAR40 > 256);
    FUN7(VAR18 <= VAR40);
    FUN8(VAR21->VAR41, sizeof(VAR42));
    VAR31 = FUN9();
    if (VAR31)
    {
        FUN10(VAR31, &VAR31->VAR43, VAR44)
        {
            uint8_t VAR45 = FUN11(VAR31);
            uint8_t VAR46 = FUN12(VAR31);
            if (!FUN13(VAR31))
            {
                continue;
            }
            if (VAR45 < VAR38)
            {
                VAR38 = VAR45 - 1;
            }
            VAR23 = FUN14("");
            VAR25 = FUN15("", VAR45);
            FUN16(VAR25, FUN17("", FUN18(VAR45)));
            FUN16(VAR25, FUN17("", FUN19("")));
            FUN16(VAR25, FUN17("", FUN18(VAR45)));
            if (VAR46 != VAR47)
            {
                FUN16(VAR25, FUN17("", FUN18(VAR46)));
            }
            FUN16(VAR25, FUN20());
            VAR27 = FUN21(FUN22(FUN23(VAR31)->VAR48), VAR33, VAR35);
            FUN16(VAR25, FUN17("", VAR27));
            FUN16(VAR23, VAR25);
            FUN16(VAR21, VAR23);
        }
    }
    VAR23 = FUN14("");
    VAR27 = FUN24();
    FUN16(VAR27, FUN25(VAR49, VAR50, VAR51, 0x0000, 0x0, VAR38, 0x0000, VAR38 + 1));
    FUN16(VAR27, FUN26(VAR52, 0x0CF8, 0x0CF8, 0x01, 0x08));
    FUN16(VAR27, FUN27(VAR49, VAR50, VAR51, VAR53, 0x0000, 0x0000, 0x0CF7, 0x0000, 0x0CF8));
    FUN28(VAR33, 0x0D00, 0xFFFF);
    for (VAR39 = 0; VAR39 < VAR33->VAR54; VAR39++)
    {
        VAR37 = FUN29(VAR33, VAR39);
        FUN16(VAR27, FUN27(VAR49, VAR50, VAR51, VAR53, 0x0000, VAR37->VAR55, VAR37->VAR56, 0x0000, VAR37->VAR56 - VAR37->VAR55 + 1));
    }
    FUN16(VAR27, FUN30(VAR51, VAR49, VAR50, VAR57, VAR58, 0, 0x000A0000, 0x000BFFFF, 0, 0x00020000));
    FUN28(VAR35, VAR11->VAR59.VAR60, VAR11->VAR59.VAR61 - 1);
    for (VAR39 = 0; VAR39 < VAR35->VAR54; VAR39++)
    {
        VAR37 = FUN29(VAR35, VAR39);
        FUN16(VAR27, FUN30(VAR51, VAR49, VAR50, VAR62, VAR58, 0, VAR37->VAR55, VAR37->VAR56, 0, VAR37->VAR56 - VAR37->VAR55 + 1));
    }
    if (VAR11->VAR63.VAR60)
    {
        FUN16(VAR27, FUN31(VAR51, VAR49, VAR50, VAR57, VAR58, 0, VAR11->VAR63.VAR60, VAR11->VAR63.VAR61 - 1, 0, VAR11->VAR63.VAR61 - VAR11->VAR63.VAR60));
    }
    FUN16(VAR23, FUN17("", VAR27));
    VAR25 = FUN15("");
    FUN16(VAR25, FUN17("", FUN32("")));
    FUN16(VAR25, FUN17("", FUN32("")));
    FUN16(VAR25, FUN17("", FUN18(0xB)));
    VAR27 = FUN24();
    FUN16(VAR27, FUN26(VAR52, VAR7->VAR64, VAR7->VAR64, 1, VAR7->VAR65));
    FUN16(VAR25, FUN17("", VAR27));
    FUN16(VAR23, VAR25);
    FUN33(VAR33, true);
    FUN33(VAR35, true);
    if (VAR7->VAR66)
    {
        VAR25 = FUN15("");
        FUN16(VAR25, FUN17("", FUN32("")));
        FUN16(VAR25, FUN17("", FUN32("")));
        FUN16(VAR25, FUN17("", FUN18(0xB)));
        VAR27 = FUN24();
        FUN16(VAR27, FUN26(VAR52, VAR7->VAR67, VAR7->VAR67, 1, VAR7->VAR66));
        FUN16(VAR25, FUN17("", VAR27));
        FUN16(VAR23, VAR25);
    }
    FUN16(VAR21, VAR23);
    VAR23 = FUN14("");
    if (!VAR7->VAR68)
    {
        VAR24 = FUN34(4);
        FUN16(VAR24, FUN18(1));
        FUN16(VAR24, FUN18(1));
        FUN16(VAR24, FUN18(0));
        FUN16(VAR24, FUN18(0));
        FUN16(VAR23, FUN17("", VAR24));
    }
    if (!VAR7->VAR69)
    {
        VAR24 = FUN34(4);
        FUN16(VAR24, FUN18(VAR7->VAR70));
        FUN16(VAR24, FUN18(VAR7->VAR70));
        FUN16(VAR24, FUN18(0));
        FUN16(VAR24, FUN18(0));
        FUN16(VAR23, FUN17("", VAR24));
    }
    VAR24 = FUN34(4);
    FUN16(VAR24, FUN18(0));
    FUN16(VAR24, FUN18(0));
    FUN16(VAR24, FUN18(0));
    FUN16(VAR24, FUN18(0));
    FUN16(VAR23, FUN17("", VAR24));
    FUN16(VAR21, VAR23);
    if (VAR9->VAR71)
    {
        VAR23 = FUN14("");
        VAR25 = FUN15("");
        FUN16(VAR25, FUN17("", FUN19("")));
        FUN16(VAR25, FUN17("", FUN18(0xB)));
        VAR27 = FUN24();
        FUN16(VAR27, FUN26(VAR52, VAR9->VAR71, VAR9->VAR71, 0x01, VAR72));
        FUN16(VAR27, FUN35(6));
        FUN16(VAR25, FUN17("", VAR27));
        FUN16(VAR23, VAR25);
        FUN16(VAR21, VAR23);
    }
    if (VAR9->VAR73)
    {
        VAR23 = FUN14("");
        VAR25 = FUN15("");
        FUN16(VAR25, FUN17("", FUN32("")));
        VAR27 = FUN24();
        FUN16(VAR27, FUN26(VAR52, VAR9->VAR73, VAR9->VAR73, 1, 1));
        FUN16(VAR25, FUN17("", VAR27));
        FUN16(VAR25, FUN36("", VAR74, VAR9->VAR73, 1));
        VAR28 = FUN37("", VAR75, VAR76);
        FUN16(VAR28, FUN38("", 8));
        FUN16(VAR25, VAR28);
        FUN16(VAR25, FUN17("", FUN18(0xB)));
        VAR26 = FUN39("", 0);
        FUN16(VAR26, FUN40(FUN41(""), FUN42(0)));
        FUN16(VAR26, FUN43(FUN42(0)));
        FUN16(VAR25, VAR26);
        VAR26 = FUN39("", 1);
        FUN16(VAR26, FUN40(FUN44(0), FUN41("")));
        FUN16(VAR25, VAR26);
        FUN16(VAR23, VAR25);
        FUN16(VAR21, VAR23);
    }
    VAR22 = FUN14("");
    {
        VAR25 = FUN15("" FUN45(VAR77));
        FUN16(VAR25, FUN17("", FUN19("")));
        FUN16(VAR25, FUN17("", FUN32("")));
        FUN16(VAR25, FUN17("", FUN18(0xB)));
        VAR27 = FUN24();
        FUN16(VAR27, FUN26(VAR52, VAR7->VAR78, VAR7->VAR78, 1, VAR7->VAR79));
        FUN16(VAR25, FUN17("", VAR27));
        FUN16(VAR22, VAR25);
        FUN16(VAR22, FUN36("", VAR74, VAR7->VAR78, VAR7->VAR79));
        VAR28 = FUN37("", VAR75, VAR76);
        FUN16(VAR28, FUN38("", 256));
        FUN16(VAR22, VAR28);
        for (VAR39 = 0; VAR39 < VAR18; VAR39++)
        {
            VAR25 = FUN46(VAR39, 0, 0, "", VAR39);
            VAR26 = FUN39("", 0);
            FUN16(VAR26, FUN43(FUN47("", FUN18(VAR39))));
            FUN16(VAR25, VAR26);
            VAR26 = FUN39("", 0);
            FUN16(VAR26, FUN43(FUN47("", FUN18(VAR39))));
            FUN16(VAR25, VAR26);
            VAR26 = FUN39("", 1);
            FUN16(VAR26, FUN43(FUN48("", FUN18(VAR39), FUN44(0))));
            FUN16(VAR25, VAR26);
            FUN16(VAR22, VAR25);
        }
        VAR26 = FUN39("", 2);
        for (VAR39 = 0; VAR39 < VAR18; VAR39++)
        {
            VAR29 = FUN49(FUN50(FUN44(0), FUN18(VAR39)));
            FUN16(VAR29, FUN51(FUN41("", VAR39), FUN44(1)));
            FUN16(VAR26, VAR29);
        }
        FUN16(VAR22, VAR26);
        VAR24 = VAR18 <= 255 ? FUN34(VAR18) : FUN52(VAR18);
        for (VAR39 = 0; VAR39 < VAR18; VAR39++)
        {
            uint8_t VAR80 = FUN53(VAR39, VAR5->VAR81) ? 0x01 : 0x00;
            FUN16(VAR24, FUN18(VAR80));
        }
        FUN16(VAR22, FUN17("", VAR24));
        assert(VAR16 <= VAR82);
        VAR23 = FUN14("" FUN45(VAR83));
        FUN16(VAR23, FUN17(FUN45(VAR84), FUN18(VAR16)));
        VAR27 = FUN24();
        FUN16(VAR27, FUN26(VAR52, VAR7->VAR85, VAR7->VAR85, 0, VAR7->VAR86));
        FUN16(VAR23, FUN17("", VAR27));
        FUN16(VAR23, FUN36(FUN45(VAR87), VAR74, VAR7->VAR85, VAR7->VAR86));
        VAR28 = FUN37(FUN45(VAR87), VAR88, VAR76);
        FUN16(VAR28, FUN38(FUN45(VAR89), 32));
        FUN16(VAR28, FUN38(FUN45(VAR90), 32));
        FUN16(VAR28, FUN38(FUN45(VAR91), 32));
        FUN16(VAR28, FUN38(FUN45(VAR92), 32));
        FUN16(VAR28, FUN38(FUN45(VAR93), 32));
        FUN16(VAR23, VAR28);
        VAR28 = FUN37(FUN45(VAR87), VAR75, VAR94);
        FUN16(VAR28, FUN54(160));
        FUN16(VAR28, FUN38(FUN45(VAR95), 1));
        FUN16(VAR28, FUN38(FUN45(VAR96), 1));
        FUN16(VAR28, FUN38(FUN45(VAR97), 1));
        FUN16(VAR28, FUN38(FUN45(VAR98), 1));
        FUN16(VAR23, VAR28);
        VAR28 = FUN37(FUN45(VAR87), VAR88, VAR76);
        FUN16(VAR28, FUN38(FUN45(VAR99), 32));
        FUN16(VAR28, FUN38(FUN45(VAR100), 32));
        FUN16(VAR28, FUN38(FUN45(VAR101), 32));
        FUN16(VAR23, VAR28);
        FUN16(VAR22, VAR23);
        for (VAR39 = 0; VAR39 < VAR16; VAR39++)
        {
            const char *VAR102;
            VAR25 = FUN15("", VAR39);
            FUN16(VAR25, FUN17("", FUN32("", VAR39)));
            FUN16(VAR25, FUN17("", FUN19("")));
            VAR26 = FUN39("", 0);
            VAR102 = VAR103 FUN45(VAR104);
            FUN16(VAR26, FUN43(FUN47(VAR102, FUN41(""))));
            FUN16(VAR25, VAR26);
            VAR26 = FUN39("", 0);
            VAR102 = VAR103 FUN45(VAR105);
            FUN16(VAR26, FUN43(FUN47(VAR102, FUN41(""))));
            FUN16(VAR25, VAR26);
            VAR26 = FUN39("", 0);
            VAR102 = VAR103 FUN45(VAR106);
            FUN16(VAR26, FUN43(FUN47(VAR102, FUN41(""))));
            FUN16(VAR25, VAR26);
            VAR26 = FUN39("", 3);
            VAR102 = VAR103 FUN45(VAR107);
            FUN16(VAR26, FUN43(FUN55(VAR102, FUN41(""), FUN44(0), FUN44(1), FUN44(2))));
            FUN16(VAR25, VAR26);
            VAR26 = FUN39("", 1);
            VAR102 = VAR103 FUN45(VAR108);
            FUN16(VAR26, FUN43(FUN48(VAR102, FUN41(""), FUN44(0))));
            FUN16(VAR25, VAR26);
            FUN16(VAR22, VAR25);
        }
        VAR26 = FUN39(FUN45(VAR109), 2);
        for (VAR39 = 0; VAR39 < VAR16; VAR39++)
        {
            VAR29 = FUN49(FUN50(FUN44(0), FUN18(VAR39)));
            FUN16(VAR29, FUN51(FUN41("", VAR39), FUN44(1)));
            FUN16(VAR26, VAR29);
        }
        FUN16(VAR22, VAR26);
        {
            VAR110 *VAR111;
            VAR30 *VAR31 = NULL;
            VAR111 = FUN56();
            if (VAR111)
            {
                VAR31 = FUN22(VAR111)->VAR31;
            }
            if (VAR31)
            {
                VAR20 *VAR23 = FUN14("");
                FUN57(VAR23, VAR31, VAR7->VAR112);
                if (VAR9->VAR113 != VAR114)
                {
                    VAR25 = FUN15("");
                    FUN16(VAR25, FUN17("", FUN19("")));
                    FUN16(VAR25, FUN17("", FUN18(0xF)));
                    VAR27 = FUN24();
                    FUN16(VAR27, FUN58(VAR115, VAR116, VAR58));
                    FUN16(VAR27, FUN35(VAR117));
                    FUN16(VAR25, FUN17("", VAR27));
                    FUN16(VAR23, VAR25);
                }
                FUN16(VAR22, VAR23);
            }
        }
        FUN16(VAR21, VAR22);
    }
    FUN59(VAR2, VAR21->VAR41->VAR118, VAR21->VAR41->VAR54);
    FUN60(VAR3, VAR2, (void *)(VAR2->VAR118 + VAR2->VAR54 - VAR21->VAR41->VAR54), "", VAR21->VAR41->VAR54, 1);
    FUN61();
}