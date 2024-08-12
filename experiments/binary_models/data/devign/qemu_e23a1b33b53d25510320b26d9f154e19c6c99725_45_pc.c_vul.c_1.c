static void FUN1(ram_addr_t VAR1, const char *VAR2, const char *VAR3, const char *VAR4, const char *VAR5, const char *VAR6, int VAR7)
{
    char *VAR8;
    int VAR9, VAR10, VAR11;
    ram_addr_t VAR12, VAR13, VAR14;
    ram_addr_t VAR15, VAR16 = 0;
    int VAR17, VAR18;
    VAR19 *VAR20;
    VAR21 *VAR22;
    int VAR23 = -1;
    VAR24 *VAR25;
    VAR26 *VAR27;
    VAR26 *VAR28;
    VAR26 *VAR29;
    VAR30 *VAR31;
    VAR32 *VAR33[VAR34 * VAR35];
    VAR32 *VAR36[VAR37];
    int VAR38 = VAR39 || VAR40 || VAR41;
    void *VAR42;
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
    if (VAR6 == NULL)
    {
        VAR6 = "";
        VAR6 = "";
    }
    for (VAR11 = 0; VAR11 < VAR43; VAR11++)
    {
        VAR25 = FUN2(VAR6);
    }
    FUN3();
    VAR12 = FUN4(0xa0000);
    FUN5(0, 0xa0000, VAR12);
    VAR12 = FUN4(0x100000 - 0xa0000);
    VAR12 = FUN4(VAR15 - 0x100000);
    FUN5(0x100000, VAR15 - 0x100000, VAR12);
    if (VAR16 > 0)
    {
        FUN6("");
        VAR12 = FUN4(VAR16);
        FUN5(0x100000000ULL, VAR16, VAR12);
    }
    if (VAR44 == NULL)
        VAR44 = VAR45;
    VAR8 = FUN7(VAR46, VAR44);
    if (VAR8)
    {
        VAR17 = FUN8(VAR8);
    }
    else
    {
        VAR17 = -1;
    }
    if (VAR17 <= 0 || (VAR17 % 65536) != 0)
    {
        goto VAR47;
    }
    VAR13 = FUN4(VAR17);
    VAR9 = FUN9(VAR8, FUN10(VAR13));
    if (VAR9 != VAR17)
    {
    VAR47:
        fprintf(VAR48, "", VAR44);
        FUN11(1);
    }
    if (VAR8)
    {
        FUN12(VAR8);
    }
    VAR18 = VAR17;
    if (VAR18 > (128 * 1024))
        VAR18 = 128 * 1024;
    FUN5(0x100000 - VAR18, VAR18, (VAR13 + VAR17 - VAR18) | VAR49);
    VAR14 = FUN4(VAR50);
    FUN5(VAR51, VAR50, VAR14);
    if (VAR38)
    {
        if (VAR39)
        {
            FUN13(VAR52);
        }
        else
        {
            FUN13(VAR53);
        }
    }
    FUN5((VAR54)(-VAR17), VAR17, VAR13 | VAR49);
    VAR42 = FUN14();
    if (VAR10)
    {
        FUN15(VAR42, VAR3, VAR5, VAR4, VAR15);
    }
    for (VAR11 = 0; VAR11 < VAR55; VAR11++)
    {
        FUN16(VAR56[VAR11]);
    }
    for (VAR11 = 0; VAR11 < VAR57; VAR11++)
    {
        char VAR58[1024];
        const char *VAR59 = VAR60[VAR11].VAR59;
        if (!VAR60[VAR11].VAR61)
            continue;
        if (VAR59 == NULL)
            VAR59 = "";
        snprintf(VAR58, sizeof(VAR58), "", VAR59);
        FUN16(VAR58);
    }
    VAR27 = FUN17(VAR62, NULL, 1);
    VAR29 = FUN18(VAR27[0]);
    VAR31 = FUN19(sizeof(*VAR31));
    VAR31->VAR29 = VAR29;
    VAR28 = FUN17(VAR63, VAR31, 24);
    if (VAR7)
    {
        VAR20 = FUN20(&VAR64, &VAR23, VAR28);
    }
    else
    {
        VAR20 = NULL;
        FUN21(NULL);
    }
    FUN22(VAR28);
    VAR65 = FUN23(13);
    FUN24(0x80, 1, 1, VAR66, NULL);
    FUN24(0xf0, 1, 1, VAR67, NULL);
    if (VAR39)
    {
        if (VAR7)
        {
            FUN25(VAR20);
        }
        else
        {
            FUN26();
        }
    }
    else if (VAR41)
    {
        if (VAR7)
            FUN27(VAR20);
        else
            fprintf(VAR48, "", VAR68);
    }
    else if (VAR40)
    {
        if (VAR7)
        {
            FUN28(VAR20, 0, 0);
        }
        else
        {
            FUN29();
        }
    }
    VAR69 = FUN30(2000);
    FUN31(VAR70, VAR69);
    FUN32(0x92, 1, 1, VAR71, NULL);
    FUN24(0x92, 1, 1, VAR72, NULL);
    if (VAR7)
    {
        VAR31->VAR73 = FUN33();
    }
    VAR74 = FUN34(0x40, FUN23(0));
    FUN35(VAR74);
    if (!VAR75)
    {
        FUN36(VAR28);
    }
    for (VAR11 = 0; VAR11 < VAR76; VAR11++)
    {
        if (VAR77[VAR11])
        {
            FUN37(VAR11, VAR77[VAR11]);
        }
    }
    for (VAR11 = 0; VAR11 < VAR78; VAR11++)
    {
        if (VAR79[VAR11])
        {
            FUN38(VAR11, VAR79[VAR11]);
        }
    }
    for (VAR11 = 0; VAR11 < VAR57; VAR11++)
    {
        VAR80 *VAR81 = &VAR60[VAR11];
        if (!VAR7 || (VAR81->VAR59 && strcmp(VAR81->VAR59, "") == 0))
            FUN39(VAR81);
        else
            FUN40(VAR81, "", NULL);
    }
    if (FUN41(VAR82) >= VAR34)
    {
        fprintf(VAR48, "");
        FUN11(1);
    }
    for (VAR11 = 0; VAR11 < VAR34 * VAR35; VAR11++)
    {
        VAR33[VAR11] = FUN42(VAR82, VAR11 / VAR35, VAR11 % VAR35);
    }
    if (VAR7)
    {
        FUN43(VAR20, VAR33, VAR23 + 1);
    }
    else
    {
        for (VAR11 = 0; VAR11 < VAR34; VAR11++)
        {
            FUN44(VAR83[VAR11], VAR84[VAR11], VAR85[VAR11], VAR33[VAR35 * VAR11], VAR33[VAR35 * VAR11 + 1]);
        }
    }
    VAR22 = FUN45("");
    FUN46(0);
    FUN47(VAR7 ? VAR20 : NULL, VAR28);
    for (VAR11 = 0; VAR11 < VAR37; VAR11++)
    {
        VAR36[VAR11] = FUN42(VAR86, 0, VAR11);
    }
    VAR87 = FUN48(VAR36);
    FUN49(VAR15, VAR16, VAR2, VAR33);
    if (VAR7 && VAR88)
    {
        FUN50(VAR20, VAR23 + 2);
    }
    if (VAR7 && VAR89)
    {
        VAR90 *VAR91 = FUN19(8 * 256);
        VAR92 *VAR93;
        VAR93 = FUN51(VAR20, VAR23 + 3, 0xb100, FUN23(9));
        for (VAR11 = 0; VAR11 < 8; VAR11++)
        {
            VAR94 *VAR95;
            VAR95 = FUN52((VAR96 *)VAR93, "");
            FUN53(VAR95, "", 0x50 + VAR11);
            FUN54(VAR95, "", VAR91 + (VAR11 * 256));
            FUN55(VAR95);
        }
        FUN56(VAR20);
    }
    if (VAR64)
    {
        FUN57(VAR64);
    }
    if (VAR7)
    {
        int VAR97;
        int VAR98;
        VAR97 = FUN41(VAR99);
        for (VAR98 = 0; VAR98 <= VAR97; VAR98++)
        {
            FUN58(VAR20, -1, "");
        }
    }
    if (VAR7)
    {
        for (VAR11 = 0; VAR11 < VAR100; VAR11++)
        {
            if (VAR101[VAR11])
            {
                FUN58(VAR20, -1, "");
            }
        }
    }
}