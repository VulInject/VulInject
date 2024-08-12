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
    void *VAR38;
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
    for (VAR11 = 0; VAR11 < VAR39; VAR11++)
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
    if (VAR40 == NULL)
        VAR40 = VAR41;
    VAR8 = FUN7(VAR42, VAR40);
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
        goto VAR43;
    }
    VAR13 = FUN4(VAR17);
    VAR9 = FUN9(VAR40, (VAR44)(-VAR17));
    if (VAR9 != 0)
    {
    VAR43:
        fprintf(VAR45, "", VAR40);
        FUN10(1);
    }
    if (VAR8)
    {
        FUN11(VAR8);
    }
    VAR18 = VAR17;
    if (VAR18 > (128 * 1024))
        VAR18 = 128 * 1024;
    FUN5(0x100000 - VAR18, VAR18, (VAR13 + VAR17 - VAR18) | VAR46);
    VAR47 = 1;
    VAR14 = FUN4(VAR48);
    FUN5(VAR49, VAR48, VAR14);
    FUN5((VAR44)(-VAR17), VAR17, VAR13 | VAR46);
    VAR38 = FUN12();
    FUN13(VAR38);
    if (VAR10)
    {
        FUN14(VAR38, VAR3, VAR5, VAR4, VAR15);
    }
    for (VAR11 = 0; VAR11 < VAR50; VAR11++)
    {
        FUN15(VAR51[VAR11]);
    }
    VAR27 = FUN16(VAR52, NULL, 1);
    VAR29 = FUN17(VAR27[0]);
    VAR31 = FUN18(sizeof(*VAR31));
    VAR31->VAR29 = VAR29;
    VAR28 = FUN16(VAR53, VAR31, 24);
    if (VAR7)
    {
        VAR20 = FUN19(&VAR54, &VAR23, VAR28);
    }
    else
    {
        VAR20 = NULL;
        FUN20(NULL);
    }
    FUN21(VAR28);
    VAR55 = FUN22(13);
    FUN23(0x80, 1, 1, VAR56, NULL);
    FUN23(0xf0, 1, 1, VAR57, NULL);
    if (VAR58)
    {
        if (VAR7)
        {
            FUN24(VAR20);
        }
        else
        {
            FUN25();
        }
    }
    else if (VAR59)
    {
        if (VAR7)
            FUN26(VAR20);
        else
            fprintf(VAR45, "", VAR60);
    }
    else if (VAR61)
    {
        if (VAR7)
        {
            FUN27(VAR20, 0, 0);
        }
        else
        {
            FUN28();
        }
    }
    VAR62 = FUN29(2000);
    FUN30(VAR63, VAR62);
    FUN31(0x92, 1, 1, VAR64, NULL);
    FUN23(0x92, 1, 1, VAR65, NULL);
    if (VAR7)
    {
        VAR31->VAR66 = FUN32();
    }
    VAR67 = FUN33(0x40, FUN22(0));
    FUN34(VAR67);
    if (!VAR68)
    {
        FUN35(VAR28);
    }
    for (VAR11 = 0; VAR11 < VAR69; VAR11++)
    {
        if (VAR70[VAR11])
        {
            FUN36(VAR11, VAR70[VAR11]);
        }
    }
    for (VAR11 = 0; VAR11 < VAR71; VAR11++)
    {
        if (VAR72[VAR11])
        {
            FUN37(VAR11, VAR72[VAR11]);
        }
    }
    for (VAR11 = 0; VAR11 < VAR73; VAR11++)
    {
        VAR74 *VAR75 = &VAR76[VAR11];
        if (!VAR7 || (VAR75->VAR77 && strcmp(VAR75->VAR77, "") == 0))
            FUN38(VAR75);
        else
            FUN39(VAR75, "", NULL);
    }
    if (FUN40(VAR78) >= VAR34)
    {
        fprintf(VAR45, "");
        FUN10(1);
    }
    for (VAR11 = 0; VAR11 < VAR34 * VAR35; VAR11++)
    {
        VAR33[VAR11] = FUN41(VAR78, VAR11 / VAR35, VAR11 % VAR35);
    }
    if (VAR7)
    {
        FUN42(VAR20, VAR33, VAR23 + 1);
    }
    else
    {
        for (VAR11 = 0; VAR11 < VAR34; VAR11++)
        {
            FUN43(VAR79[VAR11], VAR80[VAR11], VAR81[VAR11], VAR33[VAR35 * VAR11], VAR33[VAR35 * VAR11 + 1]);
        }
    }
    VAR22 = FUN44("");
    FUN45(0);
    FUN46(VAR7 ? VAR20 : NULL, VAR28);
    for (VAR11 = 0; VAR11 < VAR37; VAR11++)
    {
        VAR36[VAR11] = FUN41(VAR82, 0, VAR11);
    }
    VAR83 = FUN47(VAR36);
    FUN48(VAR15, VAR16, VAR2, VAR33);
    if (VAR7 && VAR84)
    {
        FUN49(VAR20, VAR23 + 2);
    }
    if (VAR7 && VAR85)
    {
        VAR86 *VAR87 = FUN18(8 * 256);
        VAR88 *VAR89;
        VAR89 = FUN50(VAR20, VAR23 + 3, 0xb100, FUN22(9));
        for (VAR11 = 0; VAR11 < 8; VAR11++)
        {
            VAR90 *VAR91;
            VAR91 = FUN51((VAR92 *)VAR89, "");
            FUN52(VAR91, "", 0x50 + VAR11);
            FUN53(VAR91, "", VAR87 + (VAR11 * 256));
            FUN54(VAR91);
        }
        FUN55(VAR20);
    }
    if (VAR54)
    {
        FUN56(VAR54);
    }
    if (VAR7)
    {
        int VAR93;
        int VAR94;
        VAR93 = FUN40(VAR95);
        for (VAR94 = 0; VAR94 <= VAR93; VAR94++)
        {
            FUN57(VAR20, -1, "");
        }
    }
    if (VAR7)
    {
        for (VAR11 = 0; VAR11 < VAR96; VAR11++)
        {
            if (VAR97[VAR11])
            {
                FUN57(VAR20, -1, "");
            }
        }
    }
}