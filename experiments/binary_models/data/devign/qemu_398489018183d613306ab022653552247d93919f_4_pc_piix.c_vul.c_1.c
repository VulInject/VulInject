static void FUN1(VAR1 *VAR2, VAR1 *VAR3, ram_addr_t VAR4, const char *VAR5, const char *VAR6, const char *VAR7, const char *VAR8, const char *VAR9, int VAR10, int VAR11)
{
    int VAR12;
    ram_addr_t VAR13, VAR14;
    VAR15 *VAR16;
    VAR17 *VAR18;
    VAR19 *VAR20;
    int VAR21 = -1;
    VAR22 *VAR23;
    VAR22 *VAR24;
    VAR22 *VAR25;
    VAR22 *VAR26;
    VAR27 *VAR28;
    VAR29 *VAR30[VAR31 * VAR32];
    VAR33 *VAR34[VAR31];
    VAR35 *VAR36;
    VAR35 *VAR37;
    VAR1 *VAR38;
    VAR1 *VAR39;
    VAR1 *VAR40;
    VAR41 *VAR42;
    VAR43 *VAR44 = NULL;
    VAR45 *VAR46;
    if (FUN2() && FUN3() != 0)
    {
        fprintf(VAR47, "");
        FUN4(1);
    }
    VAR42 = FUN5(NULL, VAR48);
    FUN6(FUN7(), "", FUN8(VAR42), NULL);
    FUN9(VAR9, VAR42);
    FUN10("");
    if (FUN11() && VAR11)
    {
        FUN12();
    }
    if (VAR4 >= 0xe0000000)
    {
        VAR14 = VAR4 - 0xe0000000;
        VAR13 = 0xe0000000;
    }
    else
    {
        VAR14 = 0;
        VAR13 = VAR4;
    }
    if (VAR10)
    {
        VAR39 = FUN13(VAR1, 1);
        FUN14(VAR39, NULL, "", VAR49);
        VAR40 = VAR39;
    }
    else
    {
        VAR39 = NULL;
        VAR40 = VAR2;
    }
    VAR46 = FUN15(VAR13, VAR14);
    VAR46->VAR50 = VAR50;
    if (VAR4 <= 0x80000000)
        VAR46->VAR51.VAR52.VAR53 = 0x80000000;
    else if (VAR4 <= 0xc0000000)
        VAR46->VAR51.VAR52.VAR53 = 0xc0000000;
    else
        VAR46->VAR51.VAR52.VAR53 = 0xe0000000;
    if (!FUN2())
    {
        VAR44 = FUN16(VAR2, VAR6, VAR7, VAR8, VAR13, VAR14, VAR40, &VAR38, VAR46);
    }
    VAR28 = FUN17(sizeof(*VAR28));
    if (FUN18())
    {
        FUN19(VAR10);
        VAR24 = FUN20(VAR54, VAR28, VAR55);
    }
    else
    {
        VAR24 = FUN20(VAR56, VAR28, VAR55);
    }
    if (VAR10)
    {
        VAR16 = FUN21(&VAR20, &VAR21, &VAR18, VAR24, VAR2, VAR3, VAR4, VAR13, 0x100000000ULL - VAR13, 0x100000000ULL + VAR14, (sizeof(VAR57) == 4 ? 0 : ((VAR58)1 << 62)), VAR39, VAR38);
    }
    else
    {
        VAR16 = NULL;
        VAR20 = NULL;
        VAR18 = FUN22(NULL, VAR3);
        VAR59 = 1;
    }
    FUN23(VAR18, VAR24);
    if (FUN18())
    {
        VAR25 = FUN24(VAR18);
    }
    else if (FUN2())
    {
        VAR25 = FUN25();
    }
    else
    {
        VAR23 = FUN26();
        VAR25 = FUN27(VAR18, VAR23[0]);
    }
    for (VAR12 = 0; VAR12 < VAR60; VAR12++)
    {
        VAR28->VAR61[VAR12] = VAR25[VAR12];
    }
    if (VAR10)
    {
        FUN28(VAR28, "");
    }
    FUN29(VAR42);
    FUN30(VAR24[13]);
    FUN31(VAR18, VAR10 ? VAR16 : NULL);
    FUN32(VAR18, VAR24, &VAR36, &VAR37, FUN2());
    FUN33(VAR18, VAR16);
    FUN34(VAR30, VAR31);
    if (VAR10)
    {
        VAR62 *VAR63;
        if (FUN2())
        {
            VAR63 = FUN35(VAR16, VAR30, VAR21 + 1);
        }
        else
        {
            VAR63 = FUN36(VAR16, VAR30, VAR21 + 1);
        }
        VAR34[0] = FUN37(&VAR63->VAR64, "");
        VAR34[1] = FUN37(&VAR63->VAR64, "");
    }
    else
    {
        for (VAR12 = 0; VAR12 < VAR31; VAR12++)
        {
            VAR35 *VAR63;
            VAR63 = FUN38(VAR18, VAR65[VAR12], VAR66[VAR12], VAR67[VAR12], VAR30[VAR32 * VAR12], VAR30[VAR32 * VAR12 + 1]);
            VAR34[VAR12] = FUN37(FUN39(VAR63), "");
        }
    }
    FUN40(VAR13, VAR14, VAR5, VAR37, VAR34[0], VAR34[1], VAR36);
    if (VAR10 && FUN41(false))
    {
        FUN42(VAR16, VAR21 + 2, "");
    }
    if (VAR10 && VAR68)
    {
        VAR69 *VAR70;
        VAR26 = FUN20(VAR71, VAR72, 1);
        VAR70 = FUN43(VAR16, VAR21 + 3, 0xb100, VAR24[9], *VAR26, FUN11(), VAR44);
        FUN44(VAR70, 8, NULL, 0);
    }
    if (VAR10)
    {
        FUN45(VAR16);
    }
    if (VAR73)
    {
        FUN46(VAR18);
    }
}