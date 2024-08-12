static void FUN1(VAR1 *VAR2)
{
    ram_addr_t VAR3 = VAR2->VAR3;
    const char *VAR4 = VAR2->VAR4;
    const char *VAR5 = VAR2->VAR5;
    const char *VAR6 = VAR2->VAR6;
    const char *VAR7 = VAR2->VAR8;
    VAR9 *VAR10 = NULL;
    VAR11 *VAR12 = NULL;
    char *VAR13;
    VAR14 *VAR15, **VAR16;
    VAR17 *VAR18 = FUN2(VAR17, 1);
    VAR17 *VAR19 = FUN2(VAR17, 1);
    VAR17 *VAR20 = FUN2(VAR17, 1);
    int VAR21, VAR22, VAR23, VAR24;
    VAR17 *VAR25 = FUN2(VAR17, 1), *VAR26 = FUN2(VAR17, 1);
    hwaddr VAR27, VAR28, VAR29 = 0;
    long VAR30, VAR31;
    VAR32 *VAR33;
    VAR34 *VAR35;
    VAR36 *VAR37;
    VAR38 *VAR39;
    VAR40 *VAR41;
    int VAR42, VAR43;
    VAR44 *VAR45;
    VAR17 *VAR46, *VAR47;
    VAR17 *VAR48 = FUN2(VAR17, 1);
    int VAR49;
    VAR50 *VAR51[VAR52 * VAR53];
    void *VAR54;
    int VAR55;
    VAR56 *VAR57;
    VAR58 *VAR59;
    int *VAR60 = FUN2(int, 1);
    hwaddr VAR61 = 0xFFF04000;
    uint64_t VAR62;
    VAR21 = (VAR4 != NULL);
    if (VAR2->VAR63 == NULL)
    {
        VAR2->VAR63 = "";
        VAR2->VAR63 = "";
    }
    for (VAR22 = 0; VAR22 < VAR64; VAR22++)
    {
        VAR10 = FUN3(FUN4(VAR65, VAR2->VAR63));
        if (VAR10 == NULL)
        {
            fprintf(VAR66, "");
            FUN5(1);
        }
        VAR12 = &VAR10->VAR12;
        FUN6(VAR12, VAR67);
        FUN7(VAR68, VAR10);
    }
    FUN8(VAR25, NULL, "", VAR3);
    FUN9(FUN10(), 0, VAR25);
    FUN11(VAR26, NULL, "", VAR69, &VAR70);
    if (VAR71 == NULL)
        VAR71 = VAR72;
    VAR13 = FUN12(VAR73, VAR71);
    FUN13(VAR26, true);
    FUN9(FUN10(), VAR74, VAR26);
    if (VAR13)
    {
        VAR42 = FUN14(VAR13, NULL, NULL, NULL, NULL, NULL, 1, VAR75, 0, 0);
        FUN15(VAR13);
    }
    else
    {
        VAR42 = -1;
    }
    if (VAR42 < 0 || VAR42 > VAR69)
    {
        FUN16("", VAR71);
        FUN5(1);
    }
    if (VAR21)
    {
        uint64_t VAR76 = 0;
        int VAR77;
        VAR77 = 1;
        VAR77 = 0;
        VAR27 = VAR78;
        VAR30 = FUN14(VAR4, VAR79, NULL, NULL, &VAR76, NULL, 1, VAR75, 0, 0);
        if (VAR30 < 0)
            VAR30 = FUN17(VAR4, VAR27, VAR3 - VAR27, VAR77, VAR80);
        if (VAR30 < 0)
            VAR30 = FUN18(VAR4, VAR27, VAR3 - VAR27);
        if (VAR30 < 0)
        {
            FUN16("", VAR4);
            FUN5(1);
        }
        if (VAR6)
        {
            VAR28 = FUN19(VAR27 + VAR30 + VAR81);
            VAR31 = FUN18(VAR6, VAR28, VAR3 - VAR28);
            if (VAR31 < 0)
            {
                FUN16("", VAR6);
                FUN5(1);
            }
            VAR29 = FUN19(VAR28 + VAR31);
        }
        else
        {
            VAR28 = 0;
            VAR31 = 0;
            VAR29 = FUN19(VAR27 + VAR30 + VAR81);
        }
        VAR49 = '';
    }
    else
    {
        VAR27 = 0;
        VAR30 = 0;
        VAR28 = 0;
        VAR31 = 0;
        VAR49 = '';
        for (VAR22 = 0; VAR7[VAR22] != ''; VAR22++)
        {
            if (VAR7[VAR22] >= '' && VAR7[VAR22] <= '')
            {
                VAR49 = VAR7[VAR22];
                break;
            }
        }
        if (VAR49 == '')
        {
            fprintf(VAR66, "");
            FUN5(1);
        }
    }
    FUN20(VAR18, NULL, "", FUN21(), 0, 0x00800000);
    FUN9(FUN10(), 0xf2000000, VAR18);
    FUN22(VAR19, NULL, &VAR82, VAR60, "", 0x1000);
    FUN9(FUN10(), 0xf8000000, VAR19);
    FUN22(VAR20, NULL, &VAR82, VAR60, "", 0x1000);
    FUN9(FUN10(), 0xf3000000, VAR20);
    VAR16 = FUN23(VAR64 * sizeof(VAR14 *));
    VAR16[0] = FUN23(VAR64 * sizeof(VAR14) * VAR83);
    for (VAR22 = 0; VAR22 < VAR64; VAR22++)
    {
        switch (FUN24(VAR12))
        {
        case VAR84:
            VAR16[VAR22] = VAR16[0] + (VAR22 * VAR83);
            VAR16[VAR22][VAR85] = ((VAR14 *)VAR12->VAR86)[VAR87];
            VAR16[VAR22][VAR88] = ((VAR14 *)VAR12->VAR86)[VAR87];
            VAR16[VAR22][VAR89] = ((VAR14 *)VAR12->VAR86)[VAR90];
            VAR16[VAR22][VAR91] = NULL;
            VAR16[VAR22][VAR92] = ((VAR14 *)VAR12->VAR86)[VAR93];
            break;
        case VAR94:
            VAR16[VAR22] = VAR16[0] + (VAR22 * VAR83);
            VAR16[VAR22][VAR85] = ((VAR14 *)VAR12->VAR86)[VAR95];
            VAR16[VAR22][VAR88] = ((VAR14 *)VAR12->VAR86)[VAR95];
            VAR16[VAR22][VAR89] = ((VAR14 *)VAR12->VAR86)[VAR96];
            VAR16[VAR22][VAR91] = NULL;
            VAR16[VAR22][VAR92] = ((VAR14 *)VAR12->VAR86)[VAR97];
            break;
        default:
            FUN16("");
            FUN5(1);
        }
    }
    VAR15 = FUN25(VAR14, 64);
    VAR59 = FUN26(NULL, VAR98);
    FUN27(VAR59, "", VAR99);
    FUN28(VAR59);
    VAR57 = FUN29(VAR59);
    VAR46 = VAR57->VAR100[0].VAR101;
    VAR24 = 0;
    for (VAR22 = 0; VAR22 < VAR64; VAR22++)
    {
        for (VAR23 = 0; VAR23 < VAR83; VAR23++)
        {
            FUN30(VAR57, VAR24++, VAR16[VAR22][VAR23]);
        }
    }
    for (VAR22 = 0; VAR22 < 64; VAR22++)
    {
        VAR15[VAR22] = FUN31(VAR59, VAR22);
    }
    if (FUN24(VAR12) == VAR94)
    {
        VAR33 = FUN32(VAR15, FUN10(), FUN21());
        VAR55 = VAR102;
    }
    else
    {
        VAR33 = FUN33(VAR15, FUN10(), FUN21());
        VAR55 = VAR103;
    }
    FUN34(FUN35(VAR33), true, "", &VAR104);
    VAR2->VAR105 |= FUN36() && !VAR2->VAR106;
    if (FUN37())
    {
        VAR62 = FUN38();
    }
    else
    {
        VAR62 = VAR67;
    }
    VAR47 = FUN39(0, VAR15[0x25], VAR15[0x24], VAR107[0], VAR107[1], VAR108, 4);
    FUN20(VAR48, NULL, "", VAR47, 0, FUN40(VAR47));
    VAR35 = FUN41(VAR33, -1, VAR109);
    VAR59 = FUN42(VAR35);
    FUN43(VAR59, 0, VAR15[0x19]);
    FUN43(VAR59, 1, VAR15[0x0d]);
    FUN43(VAR59, 2, VAR15[0x02]);
    FUN43(VAR59, 3, VAR15[0x0e]);
    FUN43(VAR59, 4, VAR15[0x03]);
    FUN44(VAR59, "", VAR62);
    FUN45(VAR35, VAR46, VAR48);
    FUN46(VAR51, FUN47(VAR51));
    VAR37 = FUN48(FUN49(FUN35(VAR35), ""));
    FUN50(VAR37, VAR51);
    VAR37 = FUN48(FUN49(FUN35(VAR35), ""));
    FUN50(VAR37, &VAR51[VAR53]);
    VAR59 = FUN42(FUN49(FUN35(VAR35), ""));
    VAR39 = FUN51(VAR59, "");
    VAR59 = FUN26(VAR39, VAR110);
    FUN28(VAR59);
    VAR59 = FUN26(VAR39, VAR111);
    FUN28(VAR59);
    if (VAR2->VAR105)
    {
        FUN52(VAR33, -1, "");
        if (VAR55 == VAR102)
        {
            VAR112 *VAR113 = FUN53(-1);
            FUN54(VAR113, "");
            FUN54(VAR113, "");
        }
    }
    FUN55(VAR33);
    if (VAR114 != 15 && VAR114 != 32 && VAR114 != 8)
    {
        VAR114 = 15;
    }
    for (VAR22 = 0; VAR22 < VAR115; VAR22++)
    {
        FUN56(&VAR116[VAR22], VAR33, "", NULL);
    }
    if (FUN37() && FUN57() > 4096)
    {
        VAR61 = 0xFFE00000;
    }
    VAR59 = FUN26(NULL, VAR117);
    FUN27(VAR59, "", 0x2000);
    FUN27(VAR59, "", 1);
    FUN28(VAR59);
    FUN58(FUN29(VAR59), 0, VAR61);
    VAR41 = FUN59(VAR59);
    FUN60(VAR41, 0x2000);
    VAR54 = FUN61(VAR118, VAR118 + 2);
    FUN62(VAR54, VAR119, (VAR120)VAR64);
    FUN62(VAR54, VAR121, (VAR120)VAR122);
    FUN63(VAR54, VAR123, (VAR124)VAR3);
    FUN62(VAR54, VAR125, VAR55);
    FUN64(VAR54, VAR126, VAR27);
    FUN64(VAR54, VAR127, VAR30);
    if (VAR5)
    {
        FUN64(VAR54, VAR128, VAR29);
        FUN65("", VAR29, VAR80, VAR5);
    }
    else
    {
        FUN64(VAR54, VAR128, 0);
    }
    FUN64(VAR54, VAR129, VAR28);
    FUN64(VAR54, VAR130, VAR31);
    FUN62(VAR54, VAR131, VAR49);
    FUN62(VAR54, VAR132, VAR133);
    FUN62(VAR54, VAR134, VAR135);
    FUN62(VAR54, VAR136, VAR114);
    FUN64(VAR54, VAR137, FUN37());
    if (FUN37())
    {
        VAR44 *VAR138;
        VAR138 = FUN66(16);
        FUN67(VAR12, VAR138, 16);
        FUN68(VAR54, VAR139, VAR138, 16);
        FUN64(VAR54, VAR140, FUN69());
    }
    FUN64(VAR54, VAR141, VAR62);
    FUN64(VAR54, VAR142, VAR143);
    FUN64(VAR54, VAR144, VAR145);
    FUN64(VAR54, VAR146, VAR61);
    VAR13 = FUN12(VAR73, VAR147);
    if (VAR13)
    {
        VAR43 = FUN70(VAR13);
        if (VAR43 != -1)
        {
            VAR45 = FUN66(VAR43);
            VAR43 = FUN71(VAR13, VAR45);
            FUN72(VAR54, "", VAR45, VAR43);
        }
        FUN15(VAR13);
    }
    FUN73(VAR148, VAR54);
}