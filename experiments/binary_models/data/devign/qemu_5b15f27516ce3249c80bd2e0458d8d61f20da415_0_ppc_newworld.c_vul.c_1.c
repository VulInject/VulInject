static void FUN1(ram_addr_t VAR1, const char *VAR2, const char *VAR3, const char *VAR4, const char *VAR5, const char *VAR6)
{
    VAR7 *VAR8 = NULL;
    char *VAR9;
    VAR10 *VAR11, **VAR12;
    int VAR13;
    int VAR14, VAR15;
    ram_addr_t VAR16, VAR17;
    target_phys_addr_t VAR18, VAR19, VAR20 = 0;
    long VAR21, VAR22;
    VAR23 *VAR24;
    VAR25 *VAR26;
    int VAR27;
    VAR28 *VAR29, *VAR30, *VAR31, *VAR32;
    VAR28 *VAR33[3];
    int VAR34;
    VAR35 *VAR36[VAR37 * VAR38];
    void *VAR39;
    void *VAR40;
    int VAR41;
    VAR14 = (VAR3 != NULL);
    if (VAR6 == NULL)
        VAR6 = "";
    VAR6 = "";
    for (VAR15 = 0; VAR15 < VAR42; VAR15++)
    {
        VAR8 = FUN2(VAR6);
        if (!VAR8)
        {
            fprintf(VAR43, "");
            FUN3(1);
        }
        FUN4(VAR8, 100UL * 1000UL * 1000UL);
        FUN5((VAR44 *)&VAR45, VAR8);
    }
    VAR16 = FUN6(NULL, "", VAR1);
    FUN7(0, VAR1, VAR16);
    VAR17 = FUN6(NULL, "", VAR46);
    if (VAR47 == NULL)
        VAR47 = VAR48;
    VAR9 = FUN8(VAR49, VAR47);
    FUN7(VAR50, VAR46, VAR17 | VAR51);
    if (VAR9)
    {
        VAR27 = FUN9(VAR9, NULL, NULL, NULL, NULL, NULL, 1, VAR52, 0);
        FUN10(VAR9);
    }
    else
    {
        VAR27 = -1;
    }
    if (VAR27 < 0 || VAR27 > VAR46)
    {
        FUN11("", VAR47);
        FUN3(1);
    }
    if (VAR14)
    {
        uint64_t VAR53 = 0;
        int VAR54;
        VAR54 = 1;
        VAR54 = 0;
        VAR18 = VAR55;
        VAR21 = FUN9(VAR3, VAR56, NULL, NULL, &VAR53, NULL, 1, VAR52, 0);
        if (VAR21 < 0)
            VAR21 = FUN12(VAR3, VAR18, VAR1 - VAR18, VAR54, VAR57);
        if (VAR21 < 0)
            VAR21 = FUN13(VAR3, VAR18, VAR1 - VAR18);
        if (VAR21 < 0)
        {
            FUN11("", VAR3);
            FUN3(1);
        }
        if (VAR5)
        {
            VAR19 = FUN14(VAR18 + VAR21 + VAR58);
            VAR22 = FUN13(VAR5, VAR19, VAR1 - VAR19);
            if (VAR22 < 0)
            {
                FUN11("", VAR5);
                FUN3(1);
            }
            VAR20 = FUN14(VAR19 + VAR22);
        }
        else
        {
            VAR19 = 0;
            VAR22 = 0;
            VAR20 = FUN14(VAR18 + VAR21 + VAR58);
        }
        VAR34 = '';
    }
    else
    {
        VAR18 = 0;
        VAR21 = 0;
        VAR19 = 0;
        VAR22 = 0;
        VAR34 = '';
        for (VAR15 = 0; VAR2[VAR15] != ''; VAR15++)
        {
            if (VAR2[VAR15] >= '' && VAR2[VAR15] <= '')
            {
                VAR34 = VAR2[VAR15];
                break;
            }
        }
        if (VAR34 == '')
        {
            fprintf(VAR43, "");
            FUN3(1);
        }
    }
    VAR59 = 0x80000000;
    FUN15(0xf2000000, 0x00800000);
    VAR13 = FUN16(VAR60, VAR61, NULL, VAR62);
    FUN7(0xf8000000, 0x00001000, VAR13);
    VAR12 = FUN17(VAR42 * sizeof(VAR10 *));
    VAR12[0] = FUN17(VAR42 * sizeof(VAR10) * VAR63);
    for (VAR15 = 0; VAR15 < VAR42; VAR15++)
    {
        switch (FUN18(VAR8))
        {
        case VAR64:
            VAR12[VAR15] = VAR12[0] + (VAR15 * VAR63);
            VAR12[VAR15][VAR65] = ((VAR10 *)VAR8->VAR66)[VAR67];
            VAR12[VAR15][VAR68] = ((VAR10 *)VAR8->VAR66)[VAR67];
            VAR12[VAR15][VAR69] = ((VAR10 *)VAR8->VAR66)[VAR70];
            VAR12[VAR15][VAR71] = NULL;
            VAR12[VAR15][VAR72] = ((VAR10 *)VAR8->VAR66)[VAR73];
            break;
        case VAR74:
            VAR12[VAR15] = VAR12[0] + (VAR15 * VAR63);
            VAR12[VAR15][VAR65] = ((VAR10 *)VAR8->VAR66)[VAR75];
            VAR12[VAR15][VAR68] = ((VAR10 *)VAR8->VAR66)[VAR75];
            VAR12[VAR15][VAR69] = ((VAR10 *)VAR8->VAR66)[VAR76];
            VAR12[VAR15][VAR71] = NULL;
            VAR12[VAR15][VAR72] = ((VAR10 *)VAR8->VAR66)[VAR77];
            break;
        default:
            FUN11("");
            FUN3(1);
        }
    }
    VAR11 = FUN19(NULL, &VAR29, VAR42, VAR12, NULL);
    if (FUN18(VAR8) == VAR74)
    {
        VAR24 = FUN20(VAR11, FUN21(), FUN22());
        VAR41 = VAR78;
    }
    else
    {
        VAR24 = FUN23(VAR11, FUN21(), FUN22());
        VAR41 = VAR79;
    }
    FUN24(VAR24);
    VAR32 = FUN25(0x80013000, VAR11[0x25], VAR11[0x24], VAR80[0], VAR80[1], VAR81, 4);
    for (VAR15 = 0; VAR15 < VAR82; VAR15++)
        FUN26(&VAR83[VAR15], "", NULL);
    FUN27(VAR36, VAR37);
    VAR40 = FUN28(&VAR30);
    VAR33[0] = NULL;
    VAR33[1] = FUN29(VAR36, VAR11[0x0d], VAR40, 0x16, VAR11[0x02]);
    VAR33[2] = FUN29(&VAR36[VAR38], VAR11[0x0e], VAR40, 0x1a, VAR11[0x02]);
    if (VAR41 == VAR78)
    {
        VAR84 = 1;
    }
    FUN30(&VAR31, VAR11[0x19]);
    FUN31(&VAR85);
    FUN32(&VAR85);
    FUN33(VAR24, VAR86, 0, VAR29, VAR30, VAR31, NULL, 3, VAR33, VAR32);
    if (VAR84)
    {
        FUN34(VAR24, -1);
    }
    if (VAR41 == VAR78)
    {
        FUN35("");
        FUN35("");
    }
    if (VAR87 != 15 && VAR87 != 32 && VAR87 != 8)
        VAR87 = 15;
    VAR26 = FUN36(0x2000, 1);
    FUN37(VAR26, 0x2000);
    FUN38(VAR26, FUN21(), 0xFFF04000);
    VAR39 = FUN39(0, 0, VAR88, VAR88 + 2);
    FUN40(VAR39, VAR89, 1);
    FUN41(VAR39, VAR90, (VAR91)VAR1);
    FUN42(VAR39, VAR92, VAR41);
    FUN40(VAR39, VAR93, VAR18);
    FUN40(VAR39, VAR94, VAR21);
    if (VAR4)
    {
        FUN40(VAR39, VAR95, VAR20);
        FUN43("", VAR20, VAR57, VAR4);
    }
    else
    {
        FUN40(VAR39, VAR95, 0);
    }
    FUN40(VAR39, VAR96, VAR19);
    FUN40(VAR39, VAR97, VAR22);
    FUN42(VAR39, VAR98, VAR34);
    FUN42(VAR39, VAR99, VAR100);
    FUN42(VAR39, VAR101, VAR102);
    FUN42(VAR39, VAR103, VAR87);
    FUN40(VAR39, VAR104, FUN44());
    if (FUN44())
    {
        VAR105 *VAR106;
        FUN40(VAR39, VAR107, FUN45());
        VAR106 = FUN46(16);
        FUN47(VAR8, VAR106, 16);
        FUN48(VAR39, VAR108, VAR106, 16);
        FUN40(VAR39, VAR109, FUN49());
    }
    else
    {
        FUN40(VAR39, VAR107, FUN50());
    }
    FUN51(VAR110, VAR39);
}