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
    VAR31 *VAR32;
    VAR31 *VAR33;
    int VAR34;
    VAR35 *VAR36[VAR37 * VAR38];
    VAR35 *VAR39[VAR40];
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
    for (VAR14 = 0; VAR14 < VAR41; VAR14++)
    {
        VAR28 = FUN2(VAR10);
        if (!VAR28)
        {
            fprintf(VAR42, "");
            FUN3(1);
        }
        if (VAR14 != 0)
            VAR28->VAR43 = 1;
        if (VAR41 > 1)
        {
            VAR28->VAR44 |= VAR45;
        }
        FUN4(VAR46, VAR28);
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
    if (VAR47 == NULL)
        VAR47 = VAR48;
    snprintf(VAR11, sizeof(VAR11), "", VAR49, VAR47);
    VAR21 = FUN9(VAR11);
    if (VAR21 <= 0 || (VAR21 % 65536) != 0)
    {
        goto VAR50;
    }
    VAR17 = FUN7(VAR21);
    VAR12 = FUN10(VAR11, VAR51 + VAR17);
    if (VAR12 != VAR21)
    {
    VAR50:
        fprintf(VAR42, "", VAR11);
        FUN3(1);
    }
    if (VAR52)
    {
        snprintf(VAR11, sizeof(VAR11), "", VAR49, VAR53);
    }
    else
    {
        snprintf(VAR11, sizeof(VAR11), "", VAR49, VAR54);
    }
    VAR23 = FUN9(VAR11);
    if (VAR23 <= 0 || VAR23 > 65536)
        goto VAR55;
    VAR18 = FUN7(65536);
    VAR12 = FUN10(VAR11, VAR51 + VAR18);
    if (VAR12 != VAR23)
    {
    VAR55:
        fprintf(VAR42, "", VAR11);
        FUN3(1);
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
            FUN11(VAR51 + VAR57, VAR6, VAR8, VAR7);
            FUN8(0xd0000, VAR60, VAR57 | VAR56);
            VAR59 = VAR60;
        }
        for (VAR14 = 0; VAR14 < VAR61; VAR14++)
        {
            VAR58 = FUN9(VAR62[VAR14]);
            if (VAR58 < 0)
            {
                fprintf(VAR42, "", VAR62[VAR14]);
                FUN3(1);
            }
            if (VAR58 > (0x10000 - VAR59))
                goto VAR63;
            VAR57 = FUN7(VAR58);
            VAR12 = FUN10(VAR62[VAR14], VAR51 + VAR57);
            if (VAR12 != VAR58)
            {
            VAR63:
                fprintf(VAR42, "");
                FUN3(1);
            }
            VAR58 = (VAR58 + 4095) & ~4095;
            FUN8(0xd0000 + VAR59, VAR58, VAR57 | VAR56);
            VAR59 += VAR58;
        }
    }
    FUN8((VAR64)(-VAR21), VAR21, VAR17 | VAR56);
    FUN12();
    VAR32 = FUN13(VAR65, NULL, 1);
    VAR33 = FUN14(VAR32[0]);
    VAR66 = VAR33[13];
    if (VAR9)
    {
        VAR25 = FUN15(&VAR67, VAR33);
        VAR26 = FUN16(VAR25, -1);
    }
    else
    {
        VAR25 = NULL;
    }
    FUN17(0x80, 1, 1, VAR68, NULL);
    FUN17(0xf0, 1, 1, VAR69, NULL);
    if (VAR52)
    {
        if (VAR9)
        {
            FUN18(VAR25, VAR5, VAR51 + VAR16, VAR16, VAR2);
        }
        else
        {
            FUN19(VAR5, VAR51 + VAR16, VAR16, VAR2);
        }
    }
    else if (VAR70)
    {
        if (VAR9)
            FUN20(VAR25, VAR5, VAR51 + VAR16, VAR16, VAR2);
        else
            fprintf(VAR42, "", VAR71);
    }
    else
    {
        if (VAR9)
        {
            FUN21(VAR25, VAR5, VAR51 + VAR16, VAR16, VAR2, 0, 0);
        }
        else
        {
            FUN22(VAR5, VAR51 + VAR16, VAR16, VAR2);
        }
    }
    VAR72 = FUN23(0x70, VAR33[8]);
    FUN24(VAR73, VAR72);
    FUN25(0x92, 1, 1, VAR74, NULL);
    FUN17(0x92, 1, 1, VAR75, NULL);
    if (VAR9)
    {
        VAR76 = FUN26();
    }
    VAR77 = FUN27(0x40, VAR33[0]);
    FUN28(VAR77);
    if (VAR9)
    {
        FUN29(VAR78, VAR79, VAR76);
    }
    for (VAR14 = 0; VAR14 < VAR80; VAR14++)
    {
        if (VAR81[VAR14])
        {
            FUN30(VAR82[VAR14], VAR33[VAR83[VAR14]], 115200, VAR81[VAR14]);
        }
    }
    for (VAR14 = 0; VAR14 < VAR84; VAR14++)
    {
        if (VAR85[VAR14])
        {
            FUN31(VAR86[VAR14], VAR33[VAR87[VAR14]], VAR85[VAR14]);
        }
    }
    for (VAR14 = 0; VAR14 < VAR88; VAR14++)
    {
        VAR30 = &VAR89[VAR14];
        if (!VAR30->VAR90)
        {
            if (VAR9)
            {
                VAR30->VAR90 = "";
            }
            else
            {
                VAR30->VAR90 = "";
            }
        }
        if (strcmp(VAR30->VAR90, "") == 0)
        {
            FUN32(VAR30, VAR33);
        }
        else if (VAR9)
        {
            if (strcmp(VAR30->VAR90, "") == 0)
                fprintf(VAR42, "");
            FUN33(VAR25, VAR30, -1);
        }
        else if (strcmp(VAR30->VAR90, "") == 0)
        {
            fprintf(VAR42, "");
            FUN3(1);
        }
        else
        {
            fprintf(VAR42, "", VAR30->VAR90);
            FUN3(1);
        }
    }
    if (FUN34(VAR91) >= VAR37)
    {
        fprintf(VAR42, "");
        FUN3(1);
    }
    for (VAR14 = 0; VAR14 < VAR37 * VAR38; VAR14++)
    {
        VAR34 = FUN35(VAR91, VAR14 / VAR38, VAR14 % VAR38);
        if (VAR34 != -1)
            VAR36[VAR14] = VAR92[VAR34].VAR93;
        else
            VAR36[VAR14] = NULL;
    }
    if (VAR9)
    {
        FUN36(VAR25, VAR36, VAR26 + 1, VAR33);
    }
    else
    {
        for (VAR14 = 0; VAR14 < VAR37; VAR14++)
        {
            FUN37(VAR94[VAR14], VAR95[VAR14], VAR33[VAR96[VAR14]], VAR36[VAR38 * VAR14], VAR36[VAR38 * VAR14 + 1]);
        }
    }
    FUN38(VAR33[1], VAR33[12], 0x60);
    FUN39(0);
    FUN40(VAR9 ? VAR25 : NULL, VAR33);
    for (VAR14 = 0; VAR14 < VAR40; VAR14++)
    {
        VAR34 = FUN35(VAR97, 0, VAR14);
        if (VAR34 != -1)
            VAR39[VAR14] = VAR92[VAR34].VAR93;
        else
            VAR39[VAR14] = NULL;
    }
    VAR98 = FUN41(VAR33[6], 2, 0, 0x3f0, VAR39);
    FUN42(VAR19, VAR20, VAR3, VAR36);
    if (VAR9 && VAR99)
    {
        FUN43(VAR25, VAR26 + 2);
    }
    if (VAR9 && VAR100)
    {
        VAR101 *VAR102 = FUN44(8 * 256);
        VAR103 *VAR104;
        VAR104 = FUN45(VAR25, VAR26 + 3, 0xb100, VAR33[9]);
        for (VAR14 = 0; VAR14 < 8; VAR14++)
        {
            FUN46(VAR104, 0x50 + VAR14, VAR102 + (VAR14 * 256));
        }
    }
    if (VAR67)
    {
        FUN47(VAR67);
    }
    if (VAR9)
    {
        int VAR105;
        int VAR106, VAR107;
        void *VAR108;
        VAR105 = FUN34(VAR109);
        for (VAR106 = 0; VAR106 <= VAR105; VAR106++)
        {
            VAR108 = FUN48(VAR25, -1);
            for (VAR107 = 0; VAR107 < VAR110; VAR107++)
            {
                VAR34 = FUN35(VAR109, VAR106, VAR107);
                if (VAR34 == -1)
                    continue;
                FUN49(VAR108, VAR92[VAR34].VAR93, VAR107);
            }
        }
    }
}