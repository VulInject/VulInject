static void FUN1(ram_addr_t VAR1, int VAR2, const char *VAR3, VAR4 *VAR5, const char *VAR6, const char *VAR7, const char *VAR8, int VAR9, const char *VAR10)
{
    char VAR11[1024];
    int VAR12, VAR13, VAR14;
    ram_addr_t VAR15, VAR16, VAR17, VAR18;
    ram_addr_t VAR19, VAR20 = 0;
    int VAR21, VAR22, VAR23;
    VAR24 *VAR25;
    int VAR26 = -1;
    VAR27 *VAR28;
    VAR29 *VAR30;
    VAR29 *VAR31;
    int VAR32;
    VAR33 *VAR34[VAR35 * VAR36];
    VAR33 *VAR37[VAR38];
    if (VAR1 >= 0xe0000000)
    {
        VAR20 = VAR1 - 0xe0000000;
        VAR19 = 0xe0000000;
    }
    else
    {
        VAR19 = VAR1;
    }
    VAR13 = (VAR6 != NULL);
    if (VAR10 == NULL)
    {
        VAR10 = "";
        VAR10 = "";
    }
    for (VAR14 = 0; VAR14 < VAR39; VAR14++)
    {
        VAR28 = FUN2(VAR10);
        if (!VAR28)
        {
            fprintf(VAR40, "");
            FUN3(1);
        }
        if (VAR14 != 0)
            VAR28->VAR41 = 1;
        if (VAR39 > 1)
        {
            VAR28->VAR42 |= VAR43;
        }
        FUN4(VAR44, VAR28);
        if (VAR9)
        {
            FUN5(VAR28);
        }
    }
    FUN6();
    VAR15 = FUN7(0xa0000);
    FUN8(0, 0xa0000, VAR15);
    VAR15 = FUN7(0x100000 - 0xa0000);
    VAR15 = FUN7(VAR19 - 0x100000);
    FUN8(0x100000, VAR19 - 0x100000, VAR15);
    if (VAR20 > 0)
    {
        VAR15 = FUN7(VAR20);
        FUN8(0x100000000ULL, VAR20, VAR15);
    }
    VAR16 = FUN7(VAR2);
    if (VAR45 == NULL)
        VAR45 = VAR46;
    snprintf(VAR11, sizeof(VAR11), "", VAR47, VAR45);
    VAR21 = FUN9(VAR11);
    if (VAR21 <= 0 || (VAR21 % 65536) != 0)
    {
        goto VAR48;
    }
    VAR17 = FUN7(VAR21);
    VAR12 = FUN10(VAR11, VAR49 + VAR17);
    if (VAR12 != VAR21)
    {
    VAR48:
        fprintf(VAR40, "", VAR11);
        FUN3(1);
    }
    if (VAR50 || VAR51 || VAR52)
    {
        if (VAR50)
        {
            snprintf(VAR11, sizeof(VAR11), "", VAR47, VAR53);
        }
        else
        {
            snprintf(VAR11, sizeof(VAR11), "", VAR47, VAR54);
        }
        VAR23 = FUN9(VAR11);
        if (VAR23 <= 0 || VAR23 > 65536)
            goto VAR55;
        VAR18 = FUN7(65536);
        VAR12 = FUN10(VAR11, VAR49 + VAR18);
        if (VAR12 != VAR23)
        {
        VAR55:
            fprintf(VAR40, "", VAR11);
            FUN3(1);
        }
    }
    FUN8(0xc0000, 0x10000, VAR18 | VAR56);
    VAR22 = VAR21;
    if (VAR22 > (128 * 1024))
        VAR22 = 128 * 1024;
    FUN8(0x100000 - VAR22, VAR22, (VAR17 + VAR21 - VAR22) | VAR56);
    {
        ram_addr_t VAR57;
        int VAR58, VAR59;
        VAR59 = 0;
        if (VAR13)
        {
            VAR57 = FUN7(VAR60);
            FUN11(VAR49 + VAR57, VAR6, VAR8, VAR7);
            FUN8(0xd0000, VAR60, VAR57 | VAR56);
            VAR59 = VAR60;
        }
        for (VAR14 = 0; VAR14 < VAR61; VAR14++)
        {
            VAR58 = FUN9(VAR62[VAR14]);
            if (VAR58 < 0)
            {
                fprintf(VAR40, "", VAR62[VAR14]);
                FUN3(1);
            }
            if (VAR58 > (0x10000 - VAR59))
                goto VAR63;
            VAR57 = FUN7(VAR58);
            VAR12 = FUN10(VAR62[VAR14], VAR49 + VAR57);
            if (VAR12 != VAR58)
            {
            VAR63:
                fprintf(VAR40, "");
                FUN3(1);
            }
            VAR58 = (VAR58 + 4095) & ~4095;
            FUN8(0xd0000 + VAR59, VAR58, VAR57 | VAR56);
            VAR59 += VAR58;
        }
    }
    FUN8((VAR64)(-VAR21), VAR21, VAR17 | VAR56);
    FUN12();
    VAR30 = FUN13(VAR65, NULL, 1);
    VAR31 = FUN14(VAR30[0]);
    VAR66 = VAR31[13];
    if (VAR9)
    {
        VAR25 = FUN15(&VAR67, VAR31);
        VAR26 = FUN16(VAR25, -1);
    }
    else
    {
        VAR25 = NULL;
    }
    FUN17(0x80, 1, 1, VAR68, NULL);
    FUN17(0xf0, 1, 1, VAR69, NULL);
    if (VAR50)
    {
        if (VAR9)
        {
            FUN18(VAR25, VAR5, VAR49 + VAR16, VAR16, VAR2);
        }
        else
        {
            FUN19(VAR5, VAR49 + VAR16, VAR16, VAR2);
        }
    }
    else if (VAR52)
    {
        if (VAR9)
            FUN20(VAR25, VAR5, VAR49 + VAR16, VAR16, VAR2);
        else
            fprintf(VAR40, "", VAR70);
    }
    else if (VAR51)
    {
        if (VAR9)
        {
            FUN21(VAR25, VAR5, VAR49 + VAR16, VAR16, VAR2, 0, 0);
        }
        else
        {
            FUN22(VAR5, VAR49 + VAR16, VAR16, VAR2);
        }
    }
    VAR71 = FUN23(0x70, VAR31[8]);
    FUN24(VAR72, VAR71);
    FUN25(0x92, 1, 1, VAR73, NULL);
    FUN17(0x92, 1, 1, VAR74, NULL);
    if (VAR9)
    {
        VAR75 = FUN26();
    }
    VAR76 = FUN27(0x40, VAR31[0]);
    FUN28(VAR76);
    if (!VAR77)
    {
        FUN29(VAR31);
    }
    if (VAR9)
    {
        FUN30(VAR78, VAR79, VAR75);
    }
    for (VAR14 = 0; VAR14 < VAR80; VAR14++)
    {
        if (VAR81[VAR14])
        {
            FUN31(VAR82[VAR14], VAR31[VAR83[VAR14]], 115200, VAR81[VAR14]);
        }
    }
    for (VAR14 = 0; VAR14 < VAR84; VAR14++)
    {
        if (VAR85[VAR14])
        {
            FUN32(VAR86[VAR14], VAR31[VAR87[VAR14]], VAR85[VAR14]);
        }
    }
    for (VAR14 = 0; VAR14 < VAR88; VAR14++)
    {
        VAR89 *VAR90 = &VAR91[VAR14];
        if (!VAR9 || (VAR90->VAR92 && strcmp(VAR90->VAR92, "") == 0))
            FUN33(VAR90, VAR31);
        else
            FUN34(VAR25, VAR90, -1, "");
    }
    if (FUN35(VAR93) >= VAR35)
    {
        fprintf(VAR40, "");
        FUN3(1);
    }
    for (VAR14 = 0; VAR14 < VAR35 * VAR36; VAR14++)
    {
        VAR32 = FUN36(VAR93, VAR14 / VAR36, VAR14 % VAR36);
        if (VAR32 != -1)
            VAR34[VAR14] = VAR94[VAR32].VAR95;
        else
            VAR34[VAR14] = NULL;
    }
    if (VAR9)
    {
        FUN37(VAR25, VAR34, VAR26 + 1, VAR31);
    }
    else
    {
        for (VAR14 = 0; VAR14 < VAR35; VAR14++)
        {
            FUN38(VAR96[VAR14], VAR97[VAR14], VAR31[VAR98[VAR14]], VAR34[VAR36 * VAR14], VAR34[VAR36 * VAR14 + 1]);
        }
    }
    FUN39(VAR31[1], VAR31[12], 0x60);
    FUN40(0);
    FUN41(VAR9 ? VAR25 : NULL, VAR31);
    for (VAR14 = 0; VAR14 < VAR38; VAR14++)
    {
        VAR32 = FUN36(VAR99, 0, VAR14);
        if (VAR32 != -1)
            VAR37[VAR14] = VAR94[VAR32].VAR95;
        else
            VAR37[VAR14] = NULL;
    }
    VAR100 = FUN42(VAR31[6], 2, 0, 0x3f0, VAR37);
    FUN43(VAR19, VAR20, VAR3, VAR34);
    if (VAR9 && VAR101)
    {
        FUN44(VAR25, VAR26 + 2);
    }
    if (VAR9 && VAR102)
    {
        VAR103 *VAR104 = FUN45(8 * 256);
        VAR105 *VAR106;
        VAR106 = FUN46(VAR25, VAR26 + 3, 0xb100, VAR31[9]);
        for (VAR14 = 0; VAR14 < 8; VAR14++)
        {
            FUN47(VAR106, 0x50 + VAR14, VAR104 + (VAR14 * 256));
        }
    }
    if (VAR67)
    {
        FUN48(VAR67);
    }
    if (VAR9)
    {
        int VAR107;
        int VAR108, VAR109;
        void *VAR110;
        VAR107 = FUN35(VAR111);
        for (VAR108 = 0; VAR108 <= VAR107; VAR108++)
        {
            VAR110 = FUN49(VAR25, -1);
            for (VAR109 = 0; VAR109 < VAR112; VAR109++)
            {
                VAR32 = FUN36(VAR111, VAR108, VAR109);
                if (VAR32 == -1)
                    continue;
                FUN50(VAR110, VAR94[VAR32].VAR95, VAR109);
            }
        }
    }
    if (VAR9)
    {
        int VAR32;
        int VAR113 = 0;
        while ((VAR32 = FUN36(VAR114, 0, VAR113)) != -1)
        {
            FUN51(VAR25, VAR94[VAR32].VAR95);
            VAR113++;
        }
    }
    if (VAR9)
        FUN52(VAR25);
    if (VAR9)
    {
        for (VAR14 = 0; VAR14 < VAR115; VAR14++)
        {
            if (VAR116[VAR14])
                FUN53(VAR25, VAR116[VAR14]);
        }
    }
}