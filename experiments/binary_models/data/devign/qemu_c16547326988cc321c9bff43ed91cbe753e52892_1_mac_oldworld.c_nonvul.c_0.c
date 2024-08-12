static void FUN1(VAR1 *VAR2)
{
    ram_addr_t VAR3 = VAR2->VAR3;
    const char *VAR4 = VAR2->VAR4;
    const char *VAR5 = VAR2->VAR5;
    const char *VAR6 = VAR2->VAR6;
    const char *VAR7 = VAR2->VAR7;
    const char *VAR8 = VAR2->VAR9;
    VAR10 *VAR11 = FUN2();
    VAR12 *VAR13 = NULL;
    VAR14 *VAR15 = NULL;
    char *VAR16;
    VAR17 *VAR18, **VAR19;
    int VAR20, VAR21;
    VAR10 *VAR22 = FUN3(VAR10, 1);
    VAR10 *VAR23 = FUN3(VAR10, 1);
    VAR10 *VAR24 = FUN3(VAR10, 1);
    uint32_t VAR25, VAR26, VAR27 = 0;
    int32_t VAR28, VAR29;
    VAR30 *VAR31;
    VAR32 *VAR33;
    VAR34 *VAR35;
    VAR36 *VAR37;
    VAR38 *VAR39;
    int VAR40;
    VAR10 *VAR41;
    VAR10 *VAR42, *VAR43 = FUN3(VAR10, 1);
    uint16_t VAR44;
    VAR45 *VAR46[VAR47 * VAR48];
    void *VAR49;
    VAR20 = (VAR5 != NULL);
    if (VAR4 == NULL)
        VAR4 = "";
    for (VAR21 = 0; VAR21 < VAR50; VAR21++)
    {
        VAR13 = FUN4(VAR4);
        if (VAR13 == NULL)
        {
            fprintf(VAR51, "");
            FUN5(1);
        }
        VAR15 = &VAR13->VAR15;
        FUN6(VAR15, VAR52);
        FUN7(VAR53, VAR13);
    }
    if (VAR3 > (2047 << 20))
    {
        fprintf(VAR51, "", ((unsigned int)VAR3 / (1 << 20)));
        FUN5(1);
    }
    FUN8(VAR22, NULL, "", VAR3);
    FUN9(VAR22);
    FUN10(VAR11, 0, VAR22);
    FUN8(VAR23, NULL, "", VAR54);
    FUN9(VAR23);
    if (VAR55 == NULL)
        VAR55 = VAR56;
    VAR16 = FUN11(VAR57, VAR55);
    FUN12(VAR23, true);
    FUN10(VAR11, VAR58, VAR23);
    if (VAR16)
    {
        VAR40 = FUN13(VAR16, 0, NULL, NULL, NULL, NULL, 1, VAR59, 0);
        FUN14(VAR16);
    }
    else
    {
        VAR40 = -1;
    }
    if (VAR40 < 0 || VAR40 > VAR54)
    {
        FUN15("", VAR55);
        FUN5(1);
    }
    if (VAR20)
    {
        uint64_t VAR60 = 0;
        int VAR61;
        VAR61 = 1;
        VAR61 = 0;
        VAR25 = VAR62;
        VAR28 = FUN13(VAR5, VAR63, NULL, NULL, &VAR60, NULL, 1, VAR59, 0);
        if (VAR28 < 0)
            VAR28 = FUN16(VAR5, VAR25, VAR3 - VAR25, VAR61, VAR64);
        if (VAR28 < 0)
            VAR28 = FUN17(VAR5, VAR25, VAR3 - VAR25);
        if (VAR28 < 0)
        {
            FUN15("", VAR5);
            FUN5(1);
        }
        if (VAR7)
        {
            VAR26 = FUN18(VAR25 + VAR28 + VAR65);
            VAR29 = FUN17(VAR7, VAR26, VAR3 - VAR26);
            if (VAR29 < 0)
            {
                FUN15("", VAR7);
                FUN5(1);
            }
            VAR27 = FUN18(VAR26 + VAR29);
        }
        else
        {
            VAR26 = 0;
            VAR29 = 0;
            VAR27 = FUN18(VAR25 + VAR28 + VAR65);
        }
        VAR44 = '';
    }
    else
    {
        VAR25 = 0;
        VAR28 = 0;
        VAR26 = 0;
        VAR29 = 0;
        VAR44 = '';
        for (VAR21 = 0; VAR8[VAR21] != ''; VAR21++)
        {
            if (VAR8[VAR21] >= '' && VAR8[VAR21] <= '')
            {
                VAR44 = VAR8[VAR21];
                break;
            }
            if (VAR8[VAR21] >= '' && VAR8[VAR21] <= '')
            {
                VAR44 = VAR8[VAR21];
                break;
            }
        }
        if (VAR44 == '')
        {
            fprintf(VAR51, "");
            FUN5(1);
        }
    }
    FUN19(VAR24, NULL, "", FUN20(), 0, 0x00200000);
    FUN10(VAR11, 0xfe000000, VAR24);
    VAR19 = FUN21(VAR50 * sizeof(VAR17 *));
    VAR19[0] = FUN21(VAR50 * sizeof(VAR17) * 1);
    for (VAR21 = 0; VAR21 < VAR50; VAR21++)
    {
        switch (FUN22(VAR15))
        {
        case VAR66:
            VAR19[VAR21] = VAR19[0] + (VAR21 * 1);
            VAR19[VAR21][0] = ((VAR17 *)VAR15->VAR67)[VAR68];
            break;
        default:
            FUN15("");
        }
    }
    if (FUN22(VAR15) != VAR66)
    {
        FUN15("");
    }
    VAR18 = FUN23(&VAR41, 1, VAR19);
    VAR31 = FUN24(0xfec00000, VAR18, FUN2(), FUN20());
    FUN25(VAR31);
    VAR42 = FUN26(0, VAR18[0x0f], VAR18[0x10], VAR69[0], VAR69[1], VAR70, 4);
    FUN19(VAR43, NULL, "", VAR42, 0, FUN27(VAR42));
    for (VAR21 = 0; VAR21 < VAR71; VAR21++)
        FUN28(&VAR72[VAR21], VAR31, "", NULL);
    FUN29(VAR46, VAR47);
    VAR33 = FUN30(VAR31, -1, VAR73);
    VAR37 = FUN31(VAR33);
    FUN32(VAR37, 0, VAR18[0x12]);
    FUN32(VAR37, 1, VAR18[0x0D]);
    FUN32(VAR37, 2, VAR18[0x02]);
    FUN32(VAR37, 3, VAR18[0x0E]);
    FUN32(VAR37, 4, VAR18[0x03]);
    FUN33(VAR33, VAR41, VAR43);
    VAR35 = FUN34(FUN35(FUN36(VAR33), ""));
    FUN37(VAR35, VAR46);
    VAR35 = FUN34(FUN35(FUN36(VAR33), ""));
    FUN37(VAR35, &VAR46[VAR48]);
    VAR37 = FUN31(FUN35(FUN36(VAR33), ""));
    VAR39 = FUN38(VAR37, "");
    VAR37 = FUN39(VAR39, VAR74);
    FUN40(VAR37);
    VAR37 = FUN39(VAR39, VAR75);
    FUN40(VAR37);
    if (FUN41(false))
    {
        FUN42(VAR31, -1, "");
    }
    if (VAR76 != 15 && VAR76 != 32 && VAR76 != 8)
        VAR76 = 15;
    VAR49 = FUN43(0, 0, VAR77, VAR77 + 2);
    FUN44(VAR49, VAR78, (VAR79)VAR80);
    FUN45(VAR49, VAR81, 1);
    FUN46(VAR49, VAR82, (VAR83)VAR3);
    FUN44(VAR49, VAR84, VAR85);
    FUN45(VAR49, VAR86, VAR25);
    FUN45(VAR49, VAR87, VAR28);
    if (VAR6)
    {
        FUN45(VAR49, VAR88, VAR27);
        FUN47("", VAR27, VAR64, VAR6);
    }
    else
    {
        FUN45(VAR49, VAR88, 0);
    }
    FUN45(VAR49, VAR89, VAR26);
    FUN45(VAR49, VAR90, VAR29);
    FUN44(VAR49, VAR91, VAR44);
    FUN44(VAR49, VAR92, VAR93);
    FUN44(VAR49, VAR94, VAR95);
    FUN44(VAR49, VAR96, VAR76);
    FUN45(VAR49, VAR97, FUN48());
    if (FUN48())
    {
        VAR98 *VAR99;
        FUN45(VAR49, VAR100, FUN49());
        VAR99 = FUN50(16);
        FUN51(VAR15, VAR99, 16);
        FUN52(VAR49, VAR101, VAR99, 16);
        FUN45(VAR49, VAR102, FUN53());
    }
    else
    {
        FUN45(VAR49, VAR100, VAR52);
    }
    FUN45(VAR49, VAR103, 266000000);
    FUN54(VAR104, VAR49);
}