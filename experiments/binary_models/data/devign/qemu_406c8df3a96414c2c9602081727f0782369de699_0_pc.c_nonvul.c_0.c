static void FUN1(ram_addr_t VAR1, const char *VAR2, const char *VAR3, const char *VAR4, const char *VAR5, int VAR6, const char *VAR7)
{
    char *VAR8;
    int VAR9, VAR10, VAR11;
    ram_addr_t VAR12, VAR13, VAR14;
    ram_addr_t VAR15, VAR16 = 0;
    int VAR17, VAR18, VAR19;
    VAR20 *VAR21;
    int VAR22 = -1;
    VAR23 *VAR24;
    VAR25 *VAR26;
    VAR25 *VAR27;
    int VAR28;
    VAR29 *VAR30[VAR31 * VAR32];
    VAR29 *VAR33[VAR34];
    int VAR35 = VAR36 || VAR37 || VAR38;
    if (VAR1 >= 0xe0000000)
    {
        VAR16 = VAR1 - 0xe0000000;
        VAR15 = 0xe0000000;
    }
    else
    {
        VAR15 = VAR1;
    }
    VAR10 = (VAR3 != NULL);
    if (VAR7 == NULL)
    {
        VAR7 = "";
        VAR7 = "";
    }
    for (VAR11 = 0; VAR11 < VAR39; VAR11++)
    {
        VAR24 = FUN2(VAR7);
        if (!VAR24)
        {
            fprintf(VAR40, "");
            FUN3(1);
        }
        if ((VAR24->VAR41 & VAR42) || VAR39 > 1)
        {
            VAR24->VAR43 = VAR24->VAR44;
            FUN4(VAR24);
        }
        FUN5(VAR45, 0, VAR24);
    }
    FUN6();
    VAR12 = FUN7(0xa0000);
    FUN8(0, 0xa0000, VAR12);
    VAR12 = FUN7(0x100000 - 0xa0000);
    VAR12 = FUN7(VAR15 - 0x100000);
    FUN8(0x100000, VAR15 - 0x100000, VAR12);
    if (VAR16 > 0)
    {
        FUN9("");
        VAR12 = FUN7(VAR16);
        FUN8(0x100000000ULL, VAR16, VAR12);
    }
    if (VAR46 == NULL)
        VAR46 = VAR47;
    VAR8 = FUN10(VAR48, VAR46);
    if (VAR8)
    {
        VAR17 = FUN11(VAR8);
    }
    else
    {
        VAR17 = -1;
    }
    if (VAR17 <= 0 || (VAR17 % 65536) != 0)
    {
        goto VAR49;
    }
    VAR13 = FUN7(VAR17);
    VAR9 = FUN12(VAR8, FUN13(VAR13));
    if (VAR9 != VAR17)
    {
    VAR49:
        fprintf(VAR40, "", VAR46);
        FUN3(1);
    }
    if (VAR8)
    {
        FUN14(VAR8);
    }
    VAR18 = VAR17;
    if (VAR18 > (128 * 1024))
        VAR18 = 128 * 1024;
    FUN8(0x100000 - VAR18, VAR18, (VAR13 + VAR17 - VAR18) | VAR50);
    VAR14 = FUN7(0x20000);
    VAR19 = 0;
    FUN8(0xc0000, 0x20000, VAR14);
    if (VAR35)
    {
        const char *VAR51;
        if (VAR36)
        {
            VAR51 = VAR52;
        }
        else
        {
            VAR51 = VAR53;
        }
        VAR19 = FUN15(VAR51, 0xc0000, 0xe0000);
    }
    if (VAR19 < 0x8000)
        VAR19 = 0x8000;
    if (VAR10)
    {
        FUN16(0xc0000 + VAR19, VAR3, VAR5, VAR4, VAR15);
        VAR19 += 2048;
    }
    for (VAR11 = 0; VAR11 < VAR54; VAR11++)
    {
        VAR19 += FUN15(VAR55[VAR11], 0xc0000 + VAR19, 0xe0000);
    }
    for (VAR11 = 0; VAR11 < VAR56; VAR11++)
    {
        char VAR57[1024];
        const char *VAR58 = VAR59[VAR11].VAR58;
        if (!VAR59[VAR11].VAR60)
            continue;
        if (VAR58 == NULL)
            VAR58 = "";
        snprintf(VAR57, sizeof(VAR57), "", VAR58);
        VAR19 += FUN15(VAR57, 0xc0000 + VAR19, 0xe0000);
    }
    FUN8((VAR61)(-VAR17), VAR17, VAR13 | VAR50);
    FUN17();
    VAR26 = FUN18(VAR62, NULL, 1);
    VAR27 = FUN19(VAR26[0]);
    VAR63 = VAR27[13];
    if (VAR6)
    {
        VAR21 = FUN20(&VAR64, VAR27);
        VAR22 = FUN21(VAR21, -1);
    }
    else
    {
        VAR21 = NULL;
    }
    FUN22(0x80, 1, 1, VAR65, NULL);
    FUN22(0xf0, 1, 1, VAR66, NULL);
    if (VAR36)
    {
        if (VAR6)
        {
            FUN23(VAR21);
        }
        else
        {
            FUN24();
        }
    }
    else if (VAR38)
    {
        if (VAR6)
            FUN25(VAR21);
        else
            fprintf(VAR40, "", VAR67);
    }
    else if (VAR37)
    {
        if (VAR6)
        {
            FUN26(VAR21, 0, 0);
        }
        else
        {
            FUN27();
        }
    }
    VAR68 = FUN28(0x70, VAR27[8], 2000);
    FUN29(VAR69, VAR68);
    FUN30(0x92, 1, 1, VAR70, NULL);
    FUN22(0x92, 1, 1, VAR71, NULL);
    if (VAR6)
    {
        VAR72 = FUN31();
    }
    VAR73 = FUN32(0x40, VAR27[0]);
    FUN33(VAR73);
    if (!VAR74)
    {
        FUN34(VAR27);
    }
    if (VAR6)
    {
        FUN35(VAR75, VAR76, VAR72);
    }
    for (VAR11 = 0; VAR11 < VAR77; VAR11++)
    {
        if (VAR78[VAR11])
        {
            FUN36(VAR79[VAR11], VAR27[VAR80[VAR11]], 115200, VAR78[VAR11]);
        }
    }
    for (VAR11 = 0; VAR11 < VAR81; VAR11++)
    {
        if (VAR82[VAR11])
        {
            FUN37(VAR83[VAR11], VAR27[VAR84[VAR11]], VAR82[VAR11]);
        }
    }
    FUN38(VAR21);
    for (VAR11 = 0; VAR11 < VAR56; VAR11++)
    {
        VAR85 *VAR86 = &VAR59[VAR11];
        if (!VAR6 || (VAR86->VAR58 && strcmp(VAR86->VAR58, "") == 0))
            FUN39(VAR86, VAR27);
        else
            FUN40(VAR21, VAR86, -1, "");
    }
    FUN41();
    if (FUN42(VAR87) >= VAR31)
    {
        fprintf(VAR40, "");
        FUN3(1);
    }
    for (VAR11 = 0; VAR11 < VAR31 * VAR32; VAR11++)
    {
        VAR28 = FUN43(VAR87, VAR11 / VAR32, VAR11 % VAR32);
        if (VAR28 != -1)
            VAR30[VAR11] = VAR88[VAR28].VAR89;
        else
            VAR30[VAR11] = NULL;
    }
    if (VAR6)
    {
        FUN44(VAR21, VAR30, VAR22 + 1, VAR27);
    }
    else
    {
        for (VAR11 = 0; VAR11 < VAR31; VAR11++)
        {
            FUN45(VAR90[VAR11], VAR91[VAR11], VAR27[VAR92[VAR11]], VAR30[VAR32 * VAR11], VAR30[VAR32 * VAR11 + 1]);
        }
    }
    FUN46(VAR27[1], VAR27[12], 0x60);
    FUN47(0);
    FUN48(VAR6 ? VAR21 : NULL, VAR27);
    for (VAR11 = 0; VAR11 < VAR34; VAR11++)
    {
        VAR28 = FUN43(VAR93, 0, VAR11);
        if (VAR28 != -1)
            VAR33[VAR11] = VAR88[VAR28].VAR89;
        else
            VAR33[VAR11] = NULL;
    }
    VAR94 = FUN49(VAR27[6], 2, 0, 0x3f0, VAR33);
    FUN50(VAR15, VAR16, VAR2, VAR30);
    if (VAR6 && VAR95)
    {
        FUN51(VAR21, VAR22 + 2);
    }
    if (VAR6 && VAR96)
    {
        VAR97 *VAR98 = FUN52(8 * 256);
        VAR99 *VAR100;
        VAR100 = FUN53(VAR21, VAR22 + 3, 0xb100, VAR27[9]);
        for (VAR11 = 0; VAR11 < 8; VAR11++)
        {
            VAR101 *VAR102;
            VAR102 = FUN54((VAR103 *)VAR100, "");
            FUN55(VAR102, "", 0x50 + VAR11);
            FUN56(VAR102, "", VAR98 + (VAR11 * 256));
            FUN57(VAR102);
        }
    }
    if (VAR64)
    {
        FUN58(VAR64);
    }
    if (VAR6)
    {
        int VAR104;
        int VAR105;
        VAR104 = FUN42(VAR106);
        for (VAR105 = 0; VAR105 <= VAR104; VAR105++)
        {
            FUN59(VAR21, -1, "");
        }
    }
    if (VAR6)
    {
        int VAR28;
        int VAR107 = 0;
        while ((VAR28 = FUN43(VAR108, 0, VAR107)) != -1)
        {
            FUN59(VAR21, -1, "");
            VAR107++;
        }
    }
    if (VAR6 && !VAR109)
    {
        FUN59(VAR21, -1, "");
    }
    if (VAR6)
    {
        for (VAR11 = 0; VAR11 < VAR110; VAR11++)
        {
            if (VAR111[VAR11])
            {
                FUN59(VAR21, -1, "");
            }
        }
    }
}