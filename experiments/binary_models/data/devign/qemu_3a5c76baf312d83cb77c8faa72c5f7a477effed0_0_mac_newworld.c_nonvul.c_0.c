static void FUN1(VAR1 *VAR2)
{
    ram_addr_t VAR3 = VAR2->VAR3;
    const char *VAR4 = VAR2->VAR4;
    const char *VAR5 = VAR2->VAR5;
    const char *VAR6 = VAR2->VAR6;
    const char *VAR7 = VAR2->VAR7;
    const char *VAR8 = VAR2->VAR9;
    VAR10 *VAR11 = NULL;
    VAR12 *VAR13 = NULL;
    char *VAR14;
    VAR15 *VAR16, **VAR17;
    VAR18 *VAR19 = FUN2(VAR18, 1);
    VAR18 *VAR20 = FUN2(VAR18, 1);
    VAR18 *VAR21 = FUN2(VAR18, 1);
    int VAR22, VAR23, VAR24, VAR25;
    VAR18 *VAR26 = FUN2(VAR18, 1), *VAR27 = FUN2(VAR18, 1);
    hwaddr VAR28, VAR29, VAR30 = 0;
    long VAR31, VAR32;
    VAR33 *VAR34;
    VAR35 *VAR36;
    VAR37 *VAR38;
    VAR39 *VAR40;
    VAR41 *VAR42;
    int VAR43;
    VAR18 *VAR44, *VAR45;
    VAR18 *VAR46 = FUN2(VAR18, 1);
    int VAR47;
    VAR48 *VAR49[VAR50 * VAR51];
    void *VAR52;
    int VAR53;
    VAR54 *VAR55;
    VAR56 *VAR57;
    int *VAR58 = FUN2(int, 1);
    hwaddr VAR59 = 0xFFF04000;
    uint64_t VAR60;
    VAR22 = (VAR5 != NULL);
    if (VAR4 == NULL)
        VAR4 = "";
    VAR4 = "";
    for (VAR23 = 0; VAR23 < VAR61; VAR23++)
    {
        VAR11 = FUN3(VAR4);
        if (VAR11 == NULL)
        {
            fprintf(VAR62, "");
            FUN4(1);
        }
        VAR13 = &VAR11->VAR13;
        FUN5(VAR13, VAR63);
        FUN6(VAR64, VAR11);
    }
    FUN7(VAR26, NULL, "", VAR3);
    FUN8(FUN9(), 0, VAR26);
    FUN10(VAR27, NULL, "", VAR65, &VAR66);
    FUN11(VAR27);
    if (VAR67 == NULL)
        VAR67 = VAR68;
    VAR14 = FUN12(VAR69, VAR67);
    FUN13(VAR27, true);
    FUN8(FUN9(), VAR70, VAR27);
    if (VAR14)
    {
        VAR43 = FUN14(VAR14, NULL, NULL, NULL, NULL, NULL, 1, VAR71, 0);
        FUN15(VAR14);
    }
    else
    {
        VAR43 = -1;
    }
    if (VAR43 < 0 || VAR43 > VAR65)
    {
        FUN16("", VAR67);
        FUN4(1);
    }
    if (VAR22)
    {
        uint64_t VAR72 = 0;
        int VAR73;
        VAR73 = 1;
        VAR73 = 0;
        VAR28 = VAR74;
        VAR31 = FUN14(VAR5, VAR75, NULL, NULL, &VAR72, NULL, 1, VAR71, 0);
        if (VAR31 < 0)
            VAR31 = FUN17(VAR5, VAR28, VAR3 - VAR28, VAR73, VAR76);
        if (VAR31 < 0)
            VAR31 = FUN18(VAR5, VAR28, VAR3 - VAR28);
        if (VAR31 < 0)
        {
            FUN16("", VAR5);
            FUN4(1);
        }
        if (VAR7)
        {
            VAR29 = FUN19(VAR28 + VAR31 + VAR77);
            VAR32 = FUN18(VAR7, VAR29, VAR3 - VAR29);
            if (VAR32 < 0)
            {
                FUN16("", VAR7);
                FUN4(1);
            }
            VAR30 = FUN19(VAR29 + VAR32);
        }
        else
        {
            VAR29 = 0;
            VAR32 = 0;
            VAR30 = FUN19(VAR28 + VAR31 + VAR77);
        }
        VAR47 = '';
    }
    else
    {
        VAR28 = 0;
        VAR31 = 0;
        VAR29 = 0;
        VAR32 = 0;
        VAR47 = '';
        for (VAR23 = 0; VAR8[VAR23] != ''; VAR23++)
        {
            if (VAR8[VAR23] >= '' && VAR8[VAR23] <= '')
            {
                VAR47 = VAR8[VAR23];
                break;
            }
        }
        if (VAR47 == '')
        {
            fprintf(VAR62, "");
            FUN4(1);
        }
    }
    FUN20(VAR19, NULL, "", FUN21(), 0, 0x00800000);
    FUN8(FUN9(), 0xf2000000, VAR19);
    FUN22(VAR20, NULL, &VAR78, VAR58, "", 0x1000);
    FUN8(FUN9(), 0xf8000000, VAR20);
    FUN22(VAR21, NULL, &VAR78, VAR58, "", 0x1000);
    FUN8(FUN9(), 0xf3000000, VAR21);
    VAR17 = FUN23(VAR61 * sizeof(VAR15 *));
    VAR17[0] = FUN23(VAR61 * sizeof(VAR15) * VAR79);
    for (VAR23 = 0; VAR23 < VAR61; VAR23++)
    {
        switch (FUN24(VAR13))
        {
        case VAR80:
            VAR17[VAR23] = VAR17[0] + (VAR23 * VAR79);
            VAR17[VAR23][VAR81] = ((VAR15 *)VAR13->VAR82)[VAR83];
            VAR17[VAR23][VAR84] = ((VAR15 *)VAR13->VAR82)[VAR83];
            VAR17[VAR23][VAR85] = ((VAR15 *)VAR13->VAR82)[VAR86];
            VAR17[VAR23][VAR87] = NULL;
            VAR17[VAR23][VAR88] = ((VAR15 *)VAR13->VAR82)[VAR89];
            break;
        case VAR90:
            VAR17[VAR23] = VAR17[0] + (VAR23 * VAR79);
            VAR17[VAR23][VAR81] = ((VAR15 *)VAR13->VAR82)[VAR91];
            VAR17[VAR23][VAR84] = ((VAR15 *)VAR13->VAR82)[VAR91];
            VAR17[VAR23][VAR85] = ((VAR15 *)VAR13->VAR82)[VAR92];
            VAR17[VAR23][VAR87] = NULL;
            VAR17[VAR23][VAR88] = ((VAR15 *)VAR13->VAR82)[VAR93];
            break;
        default:
            FUN16("");
            FUN4(1);
        }
    }
    VAR16 = FUN25(VAR15, 64);
    VAR57 = FUN26(NULL, VAR94);
    FUN27(VAR57, "", VAR95);
    FUN28(VAR57);
    VAR55 = FUN29(VAR57);
    VAR44 = VAR55->VAR96[0].VAR97;
    VAR25 = 0;
    for (VAR23 = 0; VAR23 < VAR61; VAR23++)
    {
        for (VAR24 = 0; VAR24 < VAR79; VAR24++)
        {
            FUN30(VAR55, VAR25++, VAR17[VAR23][VAR24]);
        }
    }
    for (VAR23 = 0; VAR23 < 64; VAR23++)
    {
        VAR16[VAR23] = FUN31(VAR57, VAR23);
    }
    if (FUN24(VAR13) == VAR90)
    {
        VAR34 = FUN32(VAR16, FUN9(), FUN21());
        VAR53 = VAR98;
        VAR2->VAR99 |= FUN33();
    }
    else
    {
        VAR34 = FUN34(VAR16, FUN9(), FUN21());
        VAR53 = VAR100;
    }
    if (FUN35())
    {
        VAR60 = FUN36();
    }
    else
    {
        VAR60 = VAR63;
    }
    VAR45 = FUN37(0, VAR16[0x25], VAR16[0x24], VAR101[0], VAR101[1], VAR102, 4);
    FUN20(VAR46, NULL, "", VAR45, 0, FUN38(VAR45));
    VAR36 = FUN39(VAR34, -1, VAR103);
    VAR57 = FUN40(VAR36);
    FUN41(VAR57, 0, VAR16[0x19]);
    FUN41(VAR57, 1, VAR16[0x0d]);
    FUN41(VAR57, 2, VAR16[0x02]);
    FUN41(VAR57, 3, VAR16[0x0e]);
    FUN41(VAR57, 4, VAR16[0x03]);
    FUN42(VAR57, "", VAR60);
    FUN43(VAR36, VAR44, VAR46);
    FUN44(VAR49, FUN45(VAR49));
    VAR38 = FUN46(FUN47(FUN48(VAR36), ""));
    FUN49(VAR38, VAR49);
    VAR38 = FUN46(FUN47(FUN48(VAR36), ""));
    FUN49(VAR38, &VAR49[VAR51]);
    VAR57 = FUN40(FUN47(FUN48(VAR36), ""));
    VAR40 = FUN50(VAR57, "");
    VAR57 = FUN26(VAR40, VAR104);
    FUN28(VAR57);
    VAR57 = FUN26(VAR40, VAR105);
    FUN28(VAR57);
    if (VAR2->VAR99)
    {
        FUN51(VAR34, -1, "");
        if (VAR53 == VAR98)
        {
            VAR106 *VAR107 = FUN52(-1);
            FUN53(VAR107, "");
            FUN53(VAR107, "");
        }
    }
    FUN54(VAR34);
    if (VAR108 != 15 && VAR108 != 32 && VAR108 != 8)
    {
        VAR108 = 15;
    }
    for (VAR23 = 0; VAR23 < VAR109; VAR23++)
    {
        FUN55(&VAR110[VAR23], VAR34, "", NULL);
    }
    if (FUN35() && FUN56() > 4096)
    {
        VAR59 = 0xFFE00000;
    }
    VAR57 = FUN26(NULL, VAR111);
    FUN27(VAR57, "", 0x2000);
    FUN27(VAR57, "", 1);
    FUN28(VAR57);
    FUN57(FUN29(VAR57), 0, VAR59);
    VAR42 = FUN58(VAR57);
    FUN59(VAR42, 0x2000);
    VAR52 = FUN60(VAR112, VAR112 + 2);
    FUN61(VAR52, VAR113, (VAR114)VAR115);
    FUN62(VAR52, VAR116, (VAR117)VAR3);
    FUN61(VAR52, VAR118, VAR53);
    FUN63(VAR52, VAR119, VAR28);
    FUN63(VAR52, VAR120, VAR31);
    if (VAR6)
    {
        FUN63(VAR52, VAR121, VAR30);
        FUN64("", VAR30, VAR76, VAR6);
    }
    else
    {
        FUN63(VAR52, VAR121, 0);
    }
    FUN63(VAR52, VAR122, VAR29);
    FUN63(VAR52, VAR123, VAR32);
    FUN61(VAR52, VAR124, VAR47);
    FUN61(VAR52, VAR125, VAR126);
    FUN61(VAR52, VAR127, VAR128);
    FUN61(VAR52, VAR129, VAR108);
    FUN63(VAR52, VAR130, FUN35());
    if (FUN35())
    {
        VAR131 *VAR132;
        VAR132 = FUN65(16);
        FUN66(VAR13, VAR132, 16);
        FUN67(VAR52, VAR133, VAR132, 16);
        FUN63(VAR52, VAR134, FUN68());
    }
    FUN63(VAR52, VAR135, VAR60);
    FUN63(VAR52, VAR136, VAR137);
    FUN63(VAR52, VAR138, VAR139);
    FUN63(VAR52, VAR140, VAR59);
    FUN69(VAR141, VAR52);
}