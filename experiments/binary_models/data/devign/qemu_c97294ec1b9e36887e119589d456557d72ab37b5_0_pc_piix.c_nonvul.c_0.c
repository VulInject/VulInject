static void FUN1(VAR1 *VAR2, int VAR3, int VAR4)
{
    VAR5 *VAR6 = FUN2();
    VAR5 *VAR7 = FUN3();
    int VAR8;
    ram_addr_t VAR9, VAR10;
    VAR11 *VAR12;
    VAR13 *VAR14;
    VAR15 *VAR16;
    int VAR17 = -1;
    VAR18 *VAR19;
    VAR18 *VAR20;
    VAR18 *VAR21;
    VAR18 *VAR22;
    VAR23 *VAR24;
    VAR25 *VAR26[VAR27 * VAR28];
    VAR29 *VAR30[VAR27];
    VAR31 *VAR32;
    VAR31 *VAR33;
    VAR5 *VAR34;
    VAR5 *VAR35;
    VAR5 *VAR36;
    VAR37 *VAR38;
    VAR39 *VAR40 = NULL;
    VAR41 *VAR42;
    if (FUN4() && FUN5(&VAR34) != 0)
    {
        fprintf(VAR43, "");
        FUN6(1);
    }
    VAR38 = FUN7(NULL, VAR44);
    FUN8(FUN9(), "", FUN10(VAR38), NULL);
    FUN11(VAR2->VAR45, VAR38);
    if (FUN12() && VAR4)
    {
        FUN13();
    }
    if (VAR2->VAR46 >= 0xe0000000)
    {
        ram_addr_t VAR47 = VAR48 ? 0xc0000000 : 0xe0000000;
        VAR10 = VAR2->VAR46 - VAR47;
        VAR9 = VAR47;
    }
    else
    {
        VAR10 = 0;
        VAR9 = VAR2->VAR46;
    }
    if (VAR3)
    {
        VAR35 = FUN14(VAR5, 1);
        FUN15(VAR35, NULL, "", VAR49);
        VAR36 = VAR35;
    }
    else
    {
        VAR35 = NULL;
        VAR36 = VAR6;
    }
    VAR42 = FUN16(VAR9, VAR10);
    VAR42->VAR50 = VAR50;
    VAR42->VAR51 = VAR51;
    VAR42->VAR52 = !VAR3;
    if (VAR53)
    {
        FUN17("", "", VAR2->VAR54->VAR55, VAR56);
    }
    if (!FUN4())
    {
        VAR40 = FUN18(VAR6, VAR2->VAR57, VAR2->VAR58, VAR2->VAR59, VAR9, VAR10, VAR36, &VAR34, VAR42);
    }
    VAR24 = FUN19(sizeof(*VAR24));
    if (FUN20())
    {
        FUN21(VAR3);
        VAR20 = FUN22(VAR60, VAR24, VAR61);
    }
    else
    {
        VAR20 = FUN22(VAR62, VAR24, VAR61);
    }
    if (VAR3)
    {
        VAR12 = FUN23(&VAR16, &VAR17, &VAR14, VAR20, VAR6, VAR7, VAR2->VAR46, VAR9, VAR10, VAR35, VAR34);
    }
    else
    {
        VAR12 = NULL;
        VAR16 = NULL;
        VAR14 = FUN24(NULL, VAR7);
        VAR63 = 1;
    }
    FUN25(VAR14, VAR20);
    if (FUN20())
    {
        VAR21 = FUN26(VAR14);
    }
    else if (FUN4())
    {
        VAR21 = FUN27();
    }
    else
    {
        VAR19 = FUN28();
        VAR21 = FUN29(VAR14, VAR19[0]);
    }
    for (VAR8 = 0; VAR8 < VAR64; VAR8++)
    {
        VAR24->VAR65[VAR8] = VAR21[VAR8];
    }
    if (VAR3)
    {
        FUN30(VAR24, "");
    }
    FUN31(VAR38);
    FUN32(VAR20[13]);
    FUN33(VAR14, VAR3 ? VAR12 : NULL);
    FUN34(VAR14, VAR20, &VAR32, &VAR33, FUN4(), 0x4);
    FUN35(VAR14, VAR12);
    FUN36(VAR26, VAR27);
    if (VAR3)
    {
        VAR66 *VAR67;
        if (FUN4())
        {
            VAR67 = FUN37(VAR12, VAR26, VAR17 + 1);
        }
        else
        {
            VAR67 = FUN38(VAR12, VAR26, VAR17 + 1);
        }
        VAR30[0] = FUN39(&VAR67->VAR68, "");
        VAR30[1] = FUN39(&VAR67->VAR68, "");
    }
    else
    {
        for (VAR8 = 0; VAR8 < VAR27; VAR8++)
        {
            VAR31 *VAR67;
            char VAR69[] = "";
            VAR67 = FUN40(VAR14, VAR70[VAR8], VAR71[VAR8], VAR72[VAR8], VAR26[VAR28 * VAR8], VAR26[VAR28 * VAR8 + 1]);
            VAR69[4] = '' + VAR8;
            VAR30[VAR8] = FUN39(FUN41(VAR67), VAR69);
        }
    }
    FUN42(VAR9, VAR10, VAR2->VAR73, VAR33, VAR30[0], VAR30[1], VAR32);
    if (VAR3 && FUN43(false))
    {
        FUN44(VAR12, VAR17 + 2, "");
    }
    if (VAR3 && VAR74)
    {
        VAR75 *VAR76;
        VAR22 = FUN22(VAR77, VAR78, 1);
        VAR76 = FUN45(VAR12, VAR17 + 3, 0xb100, VAR20[9], *VAR22, FUN12(), VAR40);
        FUN46(VAR76, 8, NULL, 0);
    }
    if (VAR3)
    {
        FUN47(VAR12);
    }
}