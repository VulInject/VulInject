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
        VAR10 = VAR2->VAR46 - 0xe0000000;
        VAR9 = 0xe0000000;
    }
    else
    {
        VAR10 = 0;
        VAR9 = VAR2->VAR46;
    }
    if (VAR3)
    {
        VAR35 = FUN14(VAR5, 1);
        FUN15(VAR35, NULL, "", VAR47);
        VAR36 = VAR35;
    }
    else
    {
        VAR35 = NULL;
        VAR36 = VAR6;
    }
    VAR42 = FUN16(VAR9, VAR10);
    VAR42->VAR48 = VAR48;
    VAR42->VAR49 = VAR49;
    VAR42->VAR50 = !VAR3;
    if (!FUN4())
    {
        VAR40 = FUN17(VAR6, VAR2->VAR51, VAR2->VAR52, VAR2->VAR53, VAR9, VAR10, VAR36, &VAR34, VAR42);
    }
    VAR24 = FUN18(sizeof(*VAR24));
    if (FUN19())
    {
        FUN20(VAR3);
        VAR20 = FUN21(VAR54, VAR24, VAR55);
    }
    else
    {
        VAR20 = FUN21(VAR56, VAR24, VAR55);
    }
    if (VAR3)
    {
        VAR12 = FUN22(&VAR16, &VAR17, &VAR14, VAR20, VAR6, VAR7, VAR2->VAR46, VAR9, 0x100000000ULL - VAR9, VAR10, VAR35, VAR34);
    }
    else
    {
        VAR12 = NULL;
        VAR16 = NULL;
        VAR14 = FUN23(NULL, VAR7);
        VAR57 = 1;
    }
    FUN24(VAR14, VAR20);
    if (FUN19())
    {
        VAR21 = FUN25(VAR14);
    }
    else if (FUN4())
    {
        VAR21 = FUN26();
    }
    else
    {
        VAR19 = FUN27();
        VAR21 = FUN28(VAR14, VAR19[0]);
    }
    for (VAR8 = 0; VAR8 < VAR58; VAR8++)
    {
        VAR24->VAR59[VAR8] = VAR21[VAR8];
    }
    if (VAR3)
    {
        FUN29(VAR24, "");
    }
    FUN30(VAR38);
    FUN31(VAR20[13]);
    FUN32(VAR14, VAR3 ? VAR12 : NULL);
    FUN33(VAR14, VAR20, &VAR32, &VAR33, FUN4());
    FUN34(VAR14, VAR12);
    FUN35(VAR26, VAR27);
    if (VAR3)
    {
        VAR60 *VAR61;
        if (FUN4())
        {
            VAR61 = FUN36(VAR12, VAR26, VAR17 + 1);
        }
        else
        {
            VAR61 = FUN37(VAR12, VAR26, VAR17 + 1);
        }
        VAR30[0] = FUN38(&VAR61->VAR62, "");
        VAR30[1] = FUN38(&VAR61->VAR62, "");
    }
    else
    {
        for (VAR8 = 0; VAR8 < VAR27; VAR8++)
        {
            VAR31 *VAR61;
            VAR61 = FUN39(VAR14, VAR63[VAR8], VAR64[VAR8], VAR65[VAR8], VAR26[VAR28 * VAR8], VAR26[VAR28 * VAR8 + 1]);
            VAR30[VAR8] = FUN38(FUN40(VAR61), "");
        }
    }
    FUN41(VAR9, VAR10, VAR2->VAR66, VAR33, VAR30[0], VAR30[1], VAR32);
    if (VAR3 && FUN42(false))
    {
        FUN43(VAR12, VAR17 + 2, "");
    }
    if (VAR3 && VAR67)
    {
        VAR68 *VAR69;
        VAR22 = FUN21(VAR70, VAR71, 1);
        VAR69 = FUN44(VAR12, VAR17 + 3, 0xb100, VAR20[9], *VAR22, FUN12(), VAR40);
        FUN45(VAR69, 8, NULL, 0);
    }
    if (VAR3)
    {
        FUN46(VAR12);
    }
    if (VAR72)
    {
        FUN47(VAR14);
    }
}