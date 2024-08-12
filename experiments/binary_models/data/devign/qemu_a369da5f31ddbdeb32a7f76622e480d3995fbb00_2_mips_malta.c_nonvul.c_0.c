void FUN1(ram_addr_t VAR1, const char *VAR2, const char *VAR3, const char *VAR4, const char *VAR5, const char *VAR6)
{
    char *VAR7;
    VAR8 *VAR9;
    VAR10 *VAR11 = FUN2();
    VAR10 *VAR12 = FUN3(VAR10, 1);
    VAR10 *VAR13, *VAR14 = FUN3(VAR10, 1);
    target_long VAR15;
    int64_t VAR16;
    VAR17 *VAR18;
    VAR19 *VAR20;
    VAR21 *VAR22;
    VAR23 *VAR24;
    VAR23 *VAR25;
    int VAR26;
    VAR27 *VAR28;
    int VAR29;
    VAR30 *VAR31;
    VAR30 *VAR32[VAR33 * VAR34];
    VAR30 *VAR35[VAR36];
    int VAR37 = 0;
    int VAR38 = 0;
    int VAR39;
    VAR40 *VAR41 = FUN4(NULL, "");
    VAR42 *VAR43 = FUN5(VAR42, VAR44.VAR45, VAR41);
    FUN6(VAR41);
    for (VAR29 = 0; VAR29 < 3; VAR29++)
    {
        if (!VAR46[VAR29])
        {
            char VAR47[32];
            snprintf(VAR47, sizeof(VAR47), "", VAR29);
            VAR46[VAR29] = FUN7(VAR47, "", NULL);
        }
    }
    if (VAR6 == NULL)
    {
        VAR6 = "";
        VAR6 = "";
    }
    for (VAR29 = 0; VAR29 < VAR48; VAR29++)
    {
        VAR22 = FUN8(VAR6);
        if (!VAR22)
        {
            fprintf(VAR49, "");
            FUN9(1);
        }
        FUN10(VAR22);
        FUN11(VAR22);
        FUN12(VAR50, VAR22);
    }
    VAR22 = VAR51;
    if (VAR1 > (256 << 20))
    {
        fprintf(VAR49, "", ((unsigned int)VAR1 / (1 << 20)));
        FUN9(1);
    }
    FUN13(VAR12, "", VAR1);
    FUN14(VAR12);
    FUN15(VAR11, 0, VAR12);
    VAR39 = 1;
    VAR39 = 0;
    FUN16(VAR11, 0x1f000000LL, VAR22->VAR52[2], VAR46[2]);
    if (VAR3)
    {
        VAR13 = FUN3(VAR10, 1);
        FUN13(VAR13, "", VAR53);
        FUN14(VAR13);
        FUN17(VAR13, true);
        FUN18(VAR14, "", VAR13, 0, VAR53);
        FUN15(VAR11, 0x1e000000LL, VAR13);
        FUN15(VAR11, 0x1fc00000LL, VAR14);
        VAR54.VAR1 = VAR1;
        VAR54.VAR3 = VAR3;
        VAR54.VAR4 = VAR4;
        VAR54.VAR5 = VAR5;
        VAR16 = FUN19();
        FUN20(VAR22, FUN21(VAR13), VAR16);
    }
    else
    {
        VAR31 = FUN22(VAR55, 0, VAR37);
        if (VAR31)
        {
            VAR15 = 0x400000;
            VAR38 = VAR15 >> 16;
            FUN23("" VAR56 ""
                   "",
                   VAR37, VAR15, 0x1e000000LL, FUN24(VAR31->VAR57), VAR38);
            VAR9 = FUN25(0x1e000000LL, NULL, "", VAR53, VAR31->VAR57, 65536, VAR38, 4, 0x0000, 0x0000, 0x0000, 0x0000, VAR39);
            VAR13 = FUN26(VAR9);
            FUN18(VAR14, "", VAR13, 0, VAR53);
            FUN15(VAR11, 0x1fc00000LL, VAR14);
            VAR37++;
        }
        else
        {
            VAR13 = FUN3(VAR10, 1);
            FUN13(VAR13, "", VAR53);
            FUN14(VAR13);
            FUN17(VAR13, true);
            FUN18(VAR14, "", VAR13, 0, VAR53);
            FUN15(VAR11, 0x1e000000LL, VAR13);
            FUN15(VAR11, 0x1fc00000LL, VAR14);
            if (VAR58 == NULL)
                VAR58 = VAR59;
            VAR7 = FUN27(VAR60, VAR58);
            if (VAR7)
            {
                VAR15 = FUN28(VAR7, 0x1fc00000LL, VAR53);
                FUN29(VAR7);
            }
            else
            {
                VAR15 = -1;
            }
            if ((VAR15 < 0 || VAR15 > VAR53) && !VAR3)
            {
                fprintf(VAR49, "", VAR58);
                FUN9(1);
            }
        }
        {
            VAR61 *VAR62 = FUN21(VAR13);
            VAR61 *VAR63 = VAR62 + VAR15;
            while (VAR62 < VAR63)
            {
                FUN30(VAR62);
                VAR62++;
            }
        }
    }
    FUN31(FUN21(VAR13) + 0x10, 0x00000420);
    FUN10(VAR22);
    FUN11(VAR22);
    VAR24 = FUN32(&VAR43->VAR64, 16);
    VAR18 = FUN33(VAR24);
    FUN34(VAR32, VAR33);
    VAR26 = FUN35(VAR18, &VAR20, 80);
    VAR43->VAR64 = FUN36(VAR20, VAR22->VAR52[2]);
    FUN37(VAR20, VAR43->VAR64);
    FUN38(VAR18, VAR32, VAR26 + 1);
    FUN39(VAR18, VAR26 + 2);
    VAR28 = FUN40(VAR18, VAR26 + 3, 0x1100, FUN41(NULL, 9), NULL, NULL, 0);
    FUN42(VAR28, 8, NULL, 0);
    VAR65 = FUN43(VAR20, 0x40, 0);
    VAR25 = FUN44(VAR66, NULL, 1);
    FUN45(0, VAR25);
    FUN46(VAR20, "");
    FUN47(VAR20, 2000, NULL);
    FUN48(VAR20, 0, VAR46[0]);
    FUN48(VAR20, 1, VAR46[1]);
    if (VAR67[0])
        FUN49(VAR20, 0, VAR67[0]);
    for (VAR29 = 0; VAR29 < VAR36; VAR29++)
    {
        VAR35[VAR29] = FUN22(VAR68, 0, VAR29);
    }
    FUN50(VAR20, VAR35);
    FUN51(VAR20, VAR18);
    FUN52();
    if (VAR69)
    {
        FUN53(VAR18);
    }
    else if (VAR70)
    {
        FUN54(VAR18);
    }
    else if (VAR71)
    {
        FUN55(VAR18);
    }
}