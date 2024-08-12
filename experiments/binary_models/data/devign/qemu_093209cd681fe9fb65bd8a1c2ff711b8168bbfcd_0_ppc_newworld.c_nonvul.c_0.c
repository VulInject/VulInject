static void FUN1(ram_addr_t VAR1, const char *VAR2, const char *VAR3, const char *VAR4, const char *VAR5, const char *VAR6)
{
    VAR7 *VAR8 = NULL, *VAR9[VAR10];
    char *VAR11;
    VAR12 *VAR13, **VAR14;
    int VAR15;
    int VAR16, VAR17;
    ram_addr_t VAR18, VAR19, VAR20;
    uint32_t VAR21, VAR22;
    long VAR23, VAR24;
    VAR25 *VAR26;
    VAR27 *VAR28;
    int VAR29;
    int VAR30, VAR31;
    int VAR32, VAR33, VAR34, VAR35;
    int VAR36[3];
    int VAR37;
    VAR38 *VAR39[VAR40 * VAR41];
    void *VAR42;
    void *VAR43;
    VAR44 *VAR45;
    int VAR46;
    VAR16 = (VAR3 != NULL);
    if (VAR6 == NULL)
        VAR6 = "";
    VAR6 = "";
    for (VAR17 = 0; VAR17 < VAR47; VAR17++)
    {
        VAR8 = FUN2(VAR6);
        if (!VAR8)
        {
            fprintf(VAR48, "");
            FUN3(1);
        }
        FUN4(VAR8, 100UL * 1000UL * 1000UL);
        VAR8->VAR49 = VAR50;
        FUN5((VAR51 *)&VAR52, VAR8);
        VAR9[VAR17] = VAR8;
    }
    VAR18 = FUN6(NULL, "", VAR1);
    FUN7(0, VAR1, VAR18);
    VAR19 = FUN6(NULL, "", VAR53);
    if (VAR54 == NULL)
        VAR54 = VAR55;
    VAR11 = FUN8(VAR56, VAR54);
    FUN7(VAR57, VAR53, VAR19 | VAR58);
    if (VAR11)
    {
        VAR31 = FUN9(VAR11, NULL, NULL, NULL, NULL, NULL, 1, VAR59, 0);
        FUN10(VAR11);
    }
    else
    {
        VAR31 = -1;
    }
    if (VAR31 < 0 || VAR31 > VAR53)
    {
        FUN11("", VAR54);
        FUN3(1);
    }
    VAR20 = FUN6(NULL, "", VAR60);
    VAR45 = FUN12(VAR20);
    VAR11 = FUN8(VAR56, VAR61);
    if (VAR11)
    {
        VAR30 = FUN13(VAR11, VAR45 + 8);
        FUN10(VAR11);
    }
    else
    {
        VAR30 = -1;
    }
    if (VAR30 < 0)
    {
        fprintf(VAR48, "", VAR61);
        VAR30 = 0;
    }
    else
    {
        VAR45[0] = '';
        VAR45[1] = '';
        VAR45[2] = '';
        VAR45[3] = '';
        FUN14((VAR62 *)(VAR45 + 4), VAR30);
        VAR30 += 8;
        VAR30 = (VAR30 + VAR63 - 1) & VAR64;
    }
    if (VAR16)
    {
        uint64_t VAR65 = 0;
        int VAR66;
        VAR66 = 1;
        VAR66 = 0;
        VAR21 = VAR67;
        VAR23 = FUN9(VAR3, VAR68, NULL, NULL, &VAR65, NULL, 1, VAR59, 0);
        if (VAR23 < 0)
            VAR23 = FUN15(VAR3, VAR21, VAR1 - VAR21, VAR66, VAR63);
        if (VAR23 < 0)
            VAR23 = FUN16(VAR3, VAR21, VAR1 - VAR21);
        if (VAR23 < 0)
        {
            FUN11("", VAR3);
            FUN3(1);
        }
        if (VAR5)
        {
            VAR22 = VAR69;
            VAR24 = FUN16(VAR5, VAR22, VAR1 - VAR22);
            if (VAR24 < 0)
            {
                FUN11("", VAR5);
                FUN3(1);
            }
        }
        else
        {
            VAR22 = 0;
            VAR24 = 0;
        }
        VAR37 = '';
    }
    else
    {
        VAR21 = 0;
        VAR23 = 0;
        VAR22 = 0;
        VAR24 = 0;
        VAR37 = '';
        for (VAR17 = 0; VAR2[VAR17] != ''; VAR17++)
        {
            if (VAR2[VAR17] >= '' && VAR2[VAR17] <= '')
            {
                VAR37 = VAR2[VAR17];
                break;
            }
        }
        if (VAR37 == '')
        {
            fprintf(VAR48, "");
            FUN3(1);
        }
    }
    VAR70 = 0x80000000;
    FUN17(0xf2000000, 0x00800000, 1);
    VAR15 = FUN18(VAR71, VAR72, NULL);
    FUN7(0xf8000000, 0x00001000, VAR15);
    VAR14 = FUN19(VAR47 * sizeof(VAR12 *));
    VAR14[0] = FUN19(VAR47 * sizeof(VAR12) * VAR73);
    for (VAR17 = 0; VAR17 < VAR47; VAR17++)
    {
        switch (FUN20(VAR8))
        {
        case VAR74:
            VAR14[VAR17] = VAR14[0] + (VAR17 * VAR73);
            VAR14[VAR17][VAR75] = ((VAR12 *)VAR8->VAR76)[VAR77];
            VAR14[VAR17][VAR78] = ((VAR12 *)VAR8->VAR76)[VAR77];
            VAR14[VAR17][VAR79] = ((VAR12 *)VAR8->VAR76)[VAR80];
            VAR14[VAR17][VAR81] = NULL;
            VAR14[VAR17][VAR82] = ((VAR12 *)VAR8->VAR76)[VAR83];
            break;
        case VAR84:
            VAR14[VAR17] = VAR14[0] + (VAR17 * VAR73);
            VAR14[VAR17][VAR75] = ((VAR12 *)VAR8->VAR76)[VAR85];
            VAR14[VAR17][VAR78] = ((VAR12 *)VAR8->VAR76)[VAR85];
            VAR14[VAR17][VAR79] = ((VAR12 *)VAR8->VAR76)[VAR86];
            VAR14[VAR17][VAR81] = NULL;
            VAR14[VAR17][VAR82] = ((VAR12 *)VAR8->VAR76)[VAR87];
            break;
        default:
            FUN11("");
            FUN3(1);
        }
    }
    VAR13 = FUN21(NULL, &VAR32, VAR47, VAR14, NULL);
    if (FUN20(VAR8) == VAR84)
    {
        VAR26 = FUN22(VAR13);
        VAR46 = VAR88;
    }
    else
    {
        VAR26 = FUN23(VAR13);
        VAR46 = VAR89;
    }
    FUN24(VAR26, VAR20, VAR30);
    VAR35 = FUN25(0x80013000, VAR13[0x25], VAR13[0x24], VAR90[0], VAR90[1], VAR91, 4);
    for (VAR17 = 0; VAR17 < VAR92; VAR17++)
        FUN26(&VAR93[VAR17], "", NULL);
    if (FUN27(VAR94) >= VAR40)
    {
        fprintf(VAR48, "");
        FUN3(1);
    }
    VAR43 = FUN28(&VAR33);
    VAR36[0] = -1;
    VAR39[0] = FUN29(VAR94, 0, 0);
    VAR39[1] = FUN29(VAR94, 0, 1);
    VAR36[1] = FUN30(VAR39, VAR13[0x0d], VAR43, 0x16, VAR13[0x02]);
    VAR39[0] = FUN29(VAR94, 1, 0);
    VAR39[1] = FUN29(VAR94, 1, 1);
    VAR36[2] = FUN30(VAR39, VAR13[0x0e], VAR43, 0x1a, VAR13[0x02]);
    if (VAR46 == VAR88)
    {
        VAR95 = 1;
    }
    FUN31(&VAR34, VAR13[0x19]);
    FUN32(&VAR96);
    FUN33(&VAR96);
    FUN34(VAR26, VAR97, 0, VAR32, VAR33, VAR34, NULL, 3, VAR36, VAR35);
    if (VAR95)
    {
        FUN35(VAR26, -1);
    }
    if (VAR46 == VAR88)
    {
        FUN36("");
        FUN36("");
    }
    if (VAR98 != 15 && VAR98 != 32 && VAR98 != 8)
        VAR98 = 15;
    VAR28 = FUN37(&VAR29, 0x2000, 1);
    FUN38(VAR28, 0x2000);
    FUN39(VAR28, 0xFFF04000);
    VAR42 = FUN40(0, 0, VAR99, VAR99 + 2);
    FUN41(VAR42, VAR100, 1);
    FUN42(VAR42, VAR101, (VAR102)VAR1);
    FUN43(VAR42, VAR103, VAR46);
    FUN41(VAR42, VAR104, VAR21);
    FUN41(VAR42, VAR105, VAR23);
    if (VAR4)
    {
        FUN41(VAR42, VAR106, VAR107);
        FUN44("", VAR107, VAR63, VAR4);
    }
    else
    {
        FUN41(VAR42, VAR106, 0);
    }
    FUN41(VAR42, VAR108, VAR22);
    FUN41(VAR42, VAR109, VAR24);
    FUN43(VAR42, VAR110, VAR37);
    FUN43(VAR42, VAR111, VAR112);
    FUN43(VAR42, VAR113, VAR114);
    FUN43(VAR42, VAR115, VAR98);
    FUN41(VAR42, VAR116, FUN45());
    if (FUN45())
    {
        VAR44 *VAR117;
        FUN41(VAR42, VAR118, FUN46());
        VAR117 = FUN47(16);
        FUN48(VAR8, VAR117, 16);
        FUN49(VAR42, VAR119, VAR117, 16);
        FUN41(VAR42, VAR120, FUN50());
    }
    else
    {
        FUN41(VAR42, VAR118, FUN51());
    }
    FUN52(VAR121, VAR42);
}