FUN1(VAR1 *VAR2, VAR1 *VAR3, VAR4 *VAR5, VAR6 *VAR7, VAR8 *VAR9, VAR10 *VAR11)
{
    VAR12 *VAR13;
    VAR14 *VAR15, *VAR16, *VAR17, *VAR18, *VAR19, *VAR20, *VAR21, *VAR22;
    VAR23 *VAR24 = FUN2(VAR25);
    VAR23 *VAR26 = FUN2(VAR25);
    VAR27 *VAR28 = FUN3(VAR11);
    uint32_t VAR29 = VAR11->VAR30;
    int VAR31 = 0xFF;
    VAR32 *VAR33 = NULL;
    int VAR34;
    VAR15 = FUN4();
    FUN5(VAR15->VAR35, sizeof(VAR36));
    FUN6(VAR15);
    if (VAR7->VAR37)
    {
        VAR16 = FUN7("");
        VAR18 = FUN8("");
        FUN9(VAR18, FUN10("", FUN11("")));
        FUN9(VAR18, FUN10("", FUN12(0)));
        FUN9(VAR18, FUN10("", FUN12(1)));
        FUN9(VAR16, VAR18);
        FUN9(VAR15, VAR16);
        FUN13(VAR15);
        FUN14(VAR15);
        FUN15(VAR15);
        FUN16(VAR15);
        FUN17(VAR15);
        FUN18(VAR15);
    }
    else
    {
        VAR16 = FUN7("");
        FUN9(VAR16, FUN19("", VAR38, FUN12(0xae00), 0x0c));
        FUN9(VAR16, FUN19("", VAR38, FUN12(0xae0c), 0x01));
        VAR20 = FUN20("", VAR39, VAR40, VAR41);
        FUN9(VAR20, FUN21("", 8));
        FUN9(VAR16, VAR20);
        FUN9(VAR15, VAR16);
        VAR16 = FUN7("");
        VAR18 = FUN8("");
        FUN9(VAR18, FUN10("", FUN11("")));
        FUN9(VAR18, FUN10("", FUN11("")));
        FUN9(VAR18, FUN10("", FUN12(0)));
        FUN9(VAR18, FUN10("", FUN12(1)));
        FUN9(VAR18, FUN10("", FUN12(0)));
        FUN9(VAR18, FUN10("", FUN12(0)));
        FUN9(VAR18, FUN22());
        FUN9(VAR16, VAR18);
        FUN9(VAR15, VAR16);
        FUN13(VAR15);
        FUN23(VAR15);
        FUN16(VAR15);
        FUN24(VAR15);
        FUN25(VAR15);
        FUN26(VAR15, VAR29, VAR5->VAR42, VAR5->VAR43);
        VAR17 = FUN7("");
        {
            FUN9(VAR17, FUN10("", FUN27("")));
            FUN9(VAR17, FUN28("", 0, VAR44));
            if (VAR7->VAR37)
            {
                VAR19 = FUN28("", 0, VAR44);
                FUN9(VAR19, FUN29(FUN30(""), 0xFFFF));
                FUN9(VAR19, FUN31(""));
                FUN9(VAR19, FUN32(FUN30("")));
                FUN9(VAR17, VAR19);
            }
            else
            {
                FUN9(VAR17, FUN28("", 0, VAR44));
                VAR19 = FUN28("", 0, VAR44);
                FUN9(VAR19, FUN31("" VAR45));
                FUN9(VAR17, VAR19);
                VAR19 = FUN28("", 0, VAR44);
                FUN9(VAR19, FUN31(VAR46));
                FUN9(VAR17, VAR19);
                FUN9(VAR17, FUN28("", 0, VAR44));
                FUN9(VAR17, FUN28("", 0, VAR44));
                FUN9(VAR17, FUN28("", 0, VAR44));
                FUN9(VAR17, FUN28("", 0, VAR44));
                FUN9(VAR17, FUN28("", 0, VAR44));
                FUN9(VAR17, FUN28("", 0, VAR44));
                FUN9(VAR17, FUN28("", 0, VAR44));
                FUN9(VAR17, FUN28("", 0, VAR44));
                FUN9(VAR17, FUN28("", 0, VAR44));
                FUN9(VAR17, FUN28("", 0, VAR44));
                FUN9(VAR17, FUN28("", 0, VAR44));
                FUN9(VAR17, FUN28("", 0, VAR44));
                FUN9(VAR15, VAR17);
                VAR33 = FUN3(VAR11)->VAR33;
                if (VAR33)
                {
                    FUN33(VAR33, &VAR33->VAR47, VAR48)
                    {
                        uint8_t VAR49 = FUN34(VAR33);
                        uint8_t VAR50 = FUN35(VAR33);
                        if (!FUN36(VAR33))
                        {
                            continue;
                            if (VAR49 < VAR31)
                            {
                                VAR31 = VAR49 - 1;
                                VAR17 = FUN7("");
                                VAR18 = FUN8("", VAR49);
                                FUN9(VAR18, FUN10("", FUN12(VAR49)));
                                FUN9(VAR18, FUN10("", FUN11("")));
                                FUN9(VAR18, FUN10("", FUN12(VAR49)));
                                if (VAR50 != VAR51)
                                {
                                    FUN9(VAR18, FUN10("", FUN12(VAR50)));
                                    FUN9(VAR18, FUN37(false));
                                    VAR22 = FUN38(FUN39(FUN40(VAR33)->VAR52), VAR26, VAR24);
                                    FUN9(VAR18, FUN10("", VAR22));
                                    FUN9(VAR17, VAR18);
                                    FUN9(VAR15, VAR17);
                                    VAR17 = FUN7("");
                                    VAR22 = FUN41();
                                    FUN9(VAR22, FUN42(VAR53, VAR54, VAR55, 0x0000, 0x0, VAR31, 0x0000, VAR31 + 1));
                                    FUN9(VAR22, FUN43(VAR56, 0x0CF8, 0x0CF8, 0x01, 0x08));
                                    FUN9(VAR22, FUN44(VAR53, VAR54, VAR55, VAR57, 0x0000, 0x0000, 0x0CF7, 0x0000, 0x0CF8));
                                    FUN45(VAR26, 0x0D00, 0xFFFF);
                                    for (VAR34 = 0; VAR34 < VAR26->VAR58; VAR34++)
                                    {
                                        VAR13 = FUN46(VAR26, VAR34);
                                        FUN9(VAR22, FUN44(VAR53, VAR54, VAR55, VAR57, 0x0000, VAR13->VAR59, VAR13->VAR60, 0x0000, VAR13->VAR60 - VAR13->VAR59 + 1));
                                        FUN9(VAR22, FUN47(VAR55, VAR53, VAR54, VAR61, VAR62, 0, 0x000A0000, 0x000BFFFF, 0, 0x00020000));
                                        FUN45(VAR24, VAR9->VAR63.VAR64, VAR9->VAR63.VAR65 - 1);
                                        for (VAR34 = 0; VAR34 < VAR24->VAR58; VAR34++)
                                        {
                                            VAR13 = FUN46(VAR24, VAR34);
                                            FUN9(VAR22, FUN47(VAR55, VAR53, VAR54, VAR66, VAR62, 0, VAR13->VAR59, VAR13->VAR60, 0, VAR13->VAR60 - VAR13->VAR59 + 1));
                                            if (VAR9->VAR67.VAR64)
                                            {
                                                FUN9(VAR22, FUN48(VAR55, VAR53, VAR54, VAR61, VAR62, 0, VAR9->VAR67.VAR64, VAR9->VAR67.VAR65 - 1, 0, VAR9->VAR67.VAR65 - VAR9->VAR67.VAR64));
                                                FUN9(VAR17, FUN10("", VAR22));
                                                VAR18 = FUN8("");
                                                FUN9(VAR18, FUN10("", FUN27("")));
                                                FUN9(VAR18, FUN10("", FUN27("")));
                                                FUN9(VAR18, FUN10("", FUN12(0xB)));
                                                VAR22 = FUN41();
                                                FUN9(VAR22, FUN43(VAR56, VAR5->VAR68, VAR5->VAR68, 1, VAR5->VAR69));
                                                FUN9(VAR18, FUN10("", VAR22));
                                                FUN9(VAR17, VAR18);
                                                FUN49(VAR26, true);
                                                FUN49(VAR24, true);
                                                if (VAR5->VAR70)
                                                {
                                                    VAR18 = FUN8("");
                                                    FUN9(VAR18, FUN10("", FUN27("")));
                                                    FUN9(VAR18, FUN10("", FUN27("")));
                                                    FUN9(VAR18, FUN10("", FUN12(0xB)));
                                                    VAR22 = FUN41();
                                                    FUN9(VAR22, FUN43(VAR56, VAR5->VAR71, VAR5->VAR71, 1, VAR5->VAR70));
                                                    FUN9(VAR18, FUN10("", VAR22));
                                                    FUN9(VAR17, VAR18);
                                                    FUN9(VAR15, VAR17);
                                                    VAR17 = FUN7("");
                                                    if (!VAR5->VAR72)
                                                    {
                                                        VAR21 = FUN50(4);
                                                        FUN9(VAR21, FUN12(1));
                                                        FUN9(VAR21, FUN12(1));
                                                        FUN9(VAR21, FUN12(0));
                                                        FUN9(VAR21, FUN12(0));
                                                        FUN9(VAR17, FUN10("", VAR21));
                                                        if (!VAR5->VAR73)
                                                        {
                                                            VAR21 = FUN50(4);
                                                            FUN9(VAR21, FUN12(VAR5->VAR74));
                                                            FUN9(VAR21, FUN12(VAR5->VAR74));
                                                            FUN9(VAR21, FUN12(0));
                                                            FUN9(VAR21, FUN12(0));
                                                            FUN9(VAR17, FUN10("", VAR21));
                                                            VAR21 = FUN50(4);
                                                            FUN9(VAR21, FUN12(0));
                                                            FUN9(VAR21, FUN12(0));
                                                            FUN9(VAR21, FUN12(0));
                                                            FUN9(VAR21, FUN12(0));
                                                            FUN9(VAR17, FUN10("", VAR21));
                                                            FUN9(VAR15, VAR17);
                                                            {
                                                                uint8_t VAR75 = FUN51(FUN52(VAR28->VAR76), "", NULL) ? FUN53(VAR77, 4) + sizeof(VAR78) : VAR77;
                                                                VAR17 = FUN7("");
                                                                VAR18 = FUN8("");
                                                                FUN9(VAR18, FUN10("", FUN27("")));
                                                                FUN9(VAR18, FUN10("", FUN12(0xB)));
                                                                VAR22 = FUN41();
                                                                FUN9(VAR22, FUN43(VAR56, VAR79, VAR79, 0x01, VAR75));
                                                                FUN9(VAR18, FUN10("", VAR22));
                                                                FUN9(VAR17, VAR18);
                                                                FUN9(VAR15, VAR17);
                                                                if (VAR7->VAR80)
                                                                {
                                                                    VAR17 = FUN7("");
                                                                    VAR18 = FUN8("");
                                                                    FUN9(VAR18, FUN10("", FUN11("")));
                                                                    FUN9(VAR18, FUN10("", FUN12(0xB)));
                                                                    VAR22 = FUN41();
                                                                    FUN9(VAR22, FUN43(VAR56, VAR7->VAR80, VAR7->VAR80, 0x01, VAR81));
                                                                    FUN9(VAR22, FUN54(6));
                                                                    FUN9(VAR18, FUN10("", VAR22));
                                                                    FUN9(VAR17, VAR18);
                                                                    FUN9(VAR15, VAR17);
                                                                    if (VAR7->VAR82)
                                                                    {
                                                                        VAR17 = FUN7("");
                                                                        VAR18 = FUN8("");
                                                                        FUN9(VAR18, FUN10("", FUN27("")));
                                                                        VAR22 = FUN41();
                                                                        FUN9(VAR22, FUN43(VAR56, VAR7->VAR82, VAR7->VAR82, 1, 1));
                                                                        FUN9(VAR18, FUN10("", VAR22));
                                                                        FUN9(VAR18, FUN19("", VAR38, FUN12(VAR7->VAR82), 1));
                                                                        VAR20 = FUN20("", VAR83, VAR40, VAR84);
                                                                        FUN9(VAR20, FUN21("", 8));
                                                                        FUN9(VAR18, VAR20);
                                                                        FUN9(VAR18, FUN10("", FUN12(0xF)));
                                                                        VAR19 = FUN28("", 0, VAR44);
                                                                        FUN9(VAR19, FUN55(FUN30(""), FUN56(0)));
                                                                        FUN9(VAR19, FUN57(FUN56(0)));
                                                                        FUN9(VAR18, VAR19);
                                                                        VAR19 = FUN28("", 1, VAR44);
                                                                        FUN9(VAR19, FUN55(FUN58(0), FUN30("")));
                                                                        FUN9(VAR18, VAR19);
                                                                        FUN9(VAR17, VAR18);
                                                                        FUN9(VAR15, VAR17);
                                                                        VAR16 = FUN7("");
                                                                        {
                                                                            FUN59(VAR16, VAR11, VAR5);
                                                                            FUN60(VAR16, VAR29, VAR5->VAR42, VAR5->VAR43);
                                                                            {
                                                                                VAR85 *VAR86;
                                                                                VAR32 *VAR33 = NULL;
                                                                                VAR86 = FUN61();
                                                                                if (VAR86)
                                                                                {
                                                                                    VAR33 = FUN39(VAR86)->VAR33;
                                                                                    if (VAR33)
                                                                                    {
                                                                                        VAR14 *VAR17 = FUN7("");
                                                                                        FUN62(VAR17, VAR33, VAR5->VAR87);
                                                                                        VAR18 = FUN8("");
                                                                                        FUN9(VAR18, FUN10("", FUN11("")));
                                                                                        FUN9(VAR18, FUN10("", FUN12(0xF)));
                                                                                        VAR22 = FUN41();
                                                                                        FUN9(VAR22, FUN54(VAR88));
                                                                                        FUN9(VAR18, FUN10("", VAR22));
                                                                                        FUN9(VAR17, VAR18);
                                                                                        FUN9(VAR16, VAR17);
                                                                                        FUN9(VAR15, VAR16);
                                                                                        FUN63(VAR2, VAR15->VAR35->VAR89, VAR15->VAR35->VAR58);
                                                                                        FUN64(VAR3, VAR2, (void *)(VAR2->VAR89 + VAR2->VAR58 - VAR15->VAR35->VAR58), "", VAR15->VAR35->VAR58, 1, NULL, NULL);
                                                                                        FUN65()