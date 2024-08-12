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
    if (FUN2() && FUN3() != 0)
    {
        fprintf(VAR45, "");
        FUN4(1);
    }
    VAR42 = FUN5(NULL, VAR46);
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
        FUN14(VAR39, "", VAR47);
        VAR40 = VAR39;
    }
    else
    {
        VAR39 = NULL;
        VAR40 = VAR2;
    }
    if (!FUN2())
    {
        VAR44 = FUN15(VAR2, VAR6, VAR7, VAR8, VAR13, VAR14, VAR40, &VAR38);
    }
    VAR28 = FUN16(sizeof(*VAR28));
    if (FUN17())
    {
        FUN18(VAR10);
        VAR24 = FUN19(VAR48, VAR28, VAR49);
    }
    else
    {
        VAR24 = FUN19(VAR50, VAR28, VAR49);
    }
    if (VAR10)
    {
        VAR16 = FUN20(&VAR20, &VAR21, &VAR18, VAR24, VAR2, VAR3, VAR4, VAR13, 0x100000000ULL - VAR13, 0x100000000ULL + VAR14, (sizeof(VAR51) == 4 ? 0 : ((VAR52)1 << 62)), VAR39, VAR38);
    }
    else
    {
        VAR16 = NULL;
        VAR20 = NULL;
        VAR18 = FUN21(NULL, VAR3);
        VAR53 = 1;
    }
    FUN22(VAR18, VAR24);
    if (FUN17())
    {
        VAR25 = FUN23(VAR18);
    }
    else if (FUN2())
    {
        VAR25 = FUN24();
    }
    else
    {
        VAR23 = FUN25();
        VAR25 = FUN26(VAR18, VAR23[0]);
    }
    for (VAR12 = 0; VAR12 < VAR54; VAR12++)
    {
        VAR28->VAR55[VAR12] = VAR25[VAR12];
    }
    if (VAR10)
    {
        FUN27(VAR28, "");
    }
    FUN28(VAR42);
    FUN29(VAR24[13]);
    FUN30(VAR18, VAR10 ? VAR16 : NULL);
    FUN31(VAR18, VAR24, &VAR36, &VAR37, FUN2());
    FUN32(VAR18, VAR16);
    FUN33(VAR30, VAR31);
    if (VAR10)
    {
        VAR56 *VAR57;
        if (FUN2())
        {
            VAR57 = FUN34(VAR16, VAR30, VAR21 + 1);
        }
        else
        {
            VAR57 = FUN35(VAR16, VAR30, VAR21 + 1);
        }
        VAR34[0] = FUN36(&VAR57->VAR58, "");
        VAR34[1] = FUN36(&VAR57->VAR58, "");
    }
    else
    {
        for (VAR12 = 0; VAR12 < VAR31; VAR12++)
        {
            VAR35 *VAR57;
            VAR57 = FUN37(VAR18, VAR59[VAR12], VAR60[VAR12], VAR61[VAR12], VAR30[VAR32 * VAR12], VAR30[VAR32 * VAR12 + 1]);
            VAR34[VAR12] = FUN36(FUN38(VAR57), "");
        }
    }
    FUN39(VAR13, VAR14, VAR5, VAR37, VAR34[0], VAR34[1], VAR36);
    if (VAR10 && FUN40(false))
    {
        FUN41(VAR16, VAR21 + 2, "");
    }
    if (VAR10 && VAR62)
    {
        VAR63 *VAR64;
        VAR26 = FUN19(VAR65, FUN42(VAR66), 1);
        VAR64 = FUN43(VAR16, VAR21 + 3, 0xb100, VAR24[9], *VAR26, FUN11(), VAR44);
        FUN44(VAR64, 8, NULL, 0);
    }
    if (VAR10)
    {
        FUN45(VAR16);
    }
    if (VAR67)
    {
        FUN46(VAR18);
    }
}