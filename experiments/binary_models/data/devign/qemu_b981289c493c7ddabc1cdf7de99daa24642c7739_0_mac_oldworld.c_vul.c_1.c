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
    uint64_t VAR50;
    VAR20 = (VAR5 != NULL);
    if (VAR4 == NULL)
        VAR4 = "";
    for (VAR21 = 0; VAR21 < VAR51; VAR21++)
    {
        VAR13 = FUN4(VAR4);
        if (VAR13 == NULL)
        {
            fprintf(VAR52, "");
            FUN5(1);
        }
        VAR15 = &VAR13->VAR15;
        FUN6(VAR15, VAR53);
        FUN7(VAR54, VAR13);
    }
    if (VAR3 > (2047 << 20))
    {
        fprintf(VAR52, "", ((unsigned int)VAR3 / (1 << 20)));
        FUN5(1);
    }
    FUN8(VAR22, NULL, "", VAR3);
    FUN9(VAR11, 0, VAR22);
    FUN10(VAR23, NULL, "", VAR55);
    FUN11(VAR23);
    if (VAR56 == NULL)
        VAR56 = VAR57;
    VAR16 = FUN12(VAR58, VAR56);
    FUN13(VAR23, true);
    FUN9(VAR11, VAR59, VAR23);
    if (VAR16)
    {
        VAR40 = FUN14(VAR16, 0, NULL, NULL, NULL, NULL, 1, VAR60, 0);
        FUN15(VAR16);
    }
    else
    {
        VAR40 = -1;
    }
    if (VAR40 < 0 || VAR40 > VAR55)
    {
        FUN16("", VAR56);
        FUN5(1);
    }
    if (VAR20)
    {
        uint64_t VAR61 = 0;
        int VAR62;
        VAR62 = 1;
        VAR62 = 0;
        VAR25 = VAR63;
        VAR28 = FUN14(VAR5, VAR64, NULL, NULL, &VAR61, NULL, 1, VAR60, 0);
        if (VAR28 < 0)
            VAR28 = FUN17(VAR5, VAR25, VAR3 - VAR25, VAR62, VAR65);
        if (VAR28 < 0)
            VAR28 = FUN18(VAR5, VAR25, VAR3 - VAR25);
        if (VAR28 < 0)
        {
            FUN16("", VAR5);
            FUN5(1);
        }
        if (VAR7)
        {
            VAR26 = FUN19(VAR25 + VAR28 + VAR66);
            VAR29 = FUN18(VAR7, VAR26, VAR3 - VAR26);
            if (VAR29 < 0)
            {
                FUN16("", VAR7);
                FUN5(1);
            }
            VAR27 = FUN19(VAR26 + VAR29);
        }
        else
        {
            VAR26 = 0;
            VAR29 = 0;
            VAR27 = FUN19(VAR25 + VAR28 + VAR66);
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
            fprintf(VAR52, "");
            FUN5(1);
        }
    }
    FUN20(VAR24, NULL, "", FUN21(), 0, 0x00200000);
    FUN9(VAR11, 0xfe000000, VAR24);
    VAR19 = FUN22(VAR51 * sizeof(VAR17 *));
    VAR19[0] = FUN22(VAR51 * sizeof(VAR17) * 1);
    for (VAR21 = 0; VAR21 < VAR51; VAR21++)
    {
        switch (FUN23(VAR15))
        {
        case VAR67:
            VAR19[VAR21] = VAR19[0] + (VAR21 * 1);
            VAR19[VAR21][0] = ((VAR17 *)VAR15->VAR68)[VAR69];
            break;
        default:
            FUN16("");
        }
    }
    if (FUN24())
    {
        VAR50 = FUN25();
    }
    else
    {
        VAR50 = VAR53;
    }
    if (FUN23(VAR15) != VAR67)
    {
        FUN16("");
    }
    VAR18 = FUN26(&VAR41, 1, VAR19);
    VAR31 = FUN27(0xfec00000, VAR18, FUN2(), FUN21());
    FUN28(VAR31);
    VAR42 = FUN29(0, VAR18[0x0f], VAR18[0x10], VAR70[0], VAR70[1], VAR71, 4);
    FUN20(VAR43, NULL, "", VAR42, 0, FUN30(VAR42));
    for (VAR21 = 0; VAR21 < VAR72; VAR21++)
        FUN31(&VAR73[VAR21], VAR31, "", NULL);
    FUN32(VAR46, VAR47);
    VAR33 = FUN33(VAR31, -1, VAR74);
    VAR37 = FUN34(VAR33);
    FUN35(VAR37, 0, VAR18[0x12]);
    FUN35(VAR37, 1, VAR18[0x0D]);
    FUN35(VAR37, 2, VAR18[0x02]);
    FUN35(VAR37, 3, VAR18[0x0E]);
    FUN35(VAR37, 4, VAR18[0x03]);
    FUN36(VAR33, VAR41, VAR43);
    VAR35 = FUN37(FUN38(FUN39(VAR33), ""));
    FUN40(VAR35, VAR46);
    VAR35 = FUN37(FUN38(FUN39(VAR33), ""));
    FUN40(VAR35, &VAR46[VAR48]);
    VAR37 = FUN34(FUN38(FUN39(VAR33), ""));
    VAR39 = FUN41(VAR37, "");
    VAR37 = FUN42(VAR39, VAR75);
    FUN43(VAR37);
    VAR37 = FUN42(VAR39, VAR76);
    FUN43(VAR37);
    if (FUN44(false))
    {
        FUN45(VAR31, -1, "");
    }
    if (VAR77 != 15 && VAR77 != 32 && VAR77 != 8)
        VAR77 = 15;
    VAR49 = FUN46(0, 0, VAR78, VAR78 + 2);
    FUN47(VAR49, VAR79, (VAR80)VAR81);
    FUN48(VAR49, VAR82, 1);
    FUN49(VAR49, VAR83, (VAR84)VAR3);
    FUN47(VAR49, VAR85, VAR86);
    FUN48(VAR49, VAR87, VAR25);
    FUN48(VAR49, VAR88, VAR28);
    if (VAR6)
    {
        FUN48(VAR49, VAR89, VAR27);
        FUN50("", VAR27, VAR65, VAR6);
    }
    else
    {
        FUN48(VAR49, VAR89, 0);
    }
    FUN48(VAR49, VAR90, VAR26);
    FUN48(VAR49, VAR91, VAR29);
    FUN47(VAR49, VAR92, VAR44);
    FUN47(VAR49, VAR93, VAR94);
    FUN47(VAR49, VAR95, VAR96);
    FUN47(VAR49, VAR97, VAR77);
    FUN48(VAR49, VAR98, FUN24());
    if (FUN24())
    {
        VAR99 *VAR100;
        VAR100 = FUN51(16);
        FUN52(VAR15, VAR100, 16);
        FUN53(VAR49, VAR101, VAR100, 16);
        FUN48(VAR49, VAR102, FUN54());
    }
    FUN48(VAR49, VAR103, VAR50);
    FUN48(VAR49, VAR104, VAR105);
    FUN48(VAR49, VAR106, VAR107);
    FUN55(VAR108, VAR49);