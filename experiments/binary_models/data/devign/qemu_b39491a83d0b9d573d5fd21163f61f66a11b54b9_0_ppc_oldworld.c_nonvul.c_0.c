static void FUN1(ram_addr_t VAR1, const char *VAR2, const char *VAR3, const char *VAR4, const char *VAR5, const char *VAR6)
{
    VAR7 *VAR8 = NULL;
    char *VAR9;
    VAR10 *VAR11, **VAR12;
    int VAR13, VAR14;
    ram_addr_t VAR15, VAR16;
    uint32_t VAR17, VAR18, VAR19 = 0;
    int32_t VAR20, VAR21;
    VAR22 *VAR23;
    VAR24 *VAR25;
    int VAR26;
    VAR27 *VAR28, *VAR29, *VAR30;
    VAR27 *VAR31, *VAR32 = FUN2(VAR27, 1), *VAR33[2];
    uint16_t VAR34;
    VAR35 *VAR36[VAR37 * VAR38];
    void *VAR39;
    void *VAR40;
    VAR13 = (VAR3 != NULL);
    if (VAR6 == NULL)
        VAR6 = "";
    for (VAR14 = 0; VAR14 < VAR41; VAR14++)
    {
        VAR8 = FUN3(VAR6);
        if (!VAR8)
        {
            fprintf(VAR42, "");
            FUN4(1);
        }
        FUN5(VAR8, 16600000UL);
        FUN6((VAR43 *)&VAR44, VAR8);
    }
    if (VAR1 > (2047 << 20))
    {
        fprintf(VAR42, "", ((unsigned int)VAR1 / (1 << 20)));
        FUN4(1);
    }
    VAR15 = FUN7(NULL, "", VAR1);
    FUN8(0, VAR1, VAR15);
    VAR16 = FUN7(NULL, "", VAR45);
    if (VAR46 == NULL)
        VAR46 = VAR47;
    VAR9 = FUN9(VAR48, VAR46);
    FUN8(VAR49, VAR45, VAR16 | VAR50);
    if (VAR9)
    {
        VAR26 = FUN10(VAR9, 0, NULL, NULL, NULL, NULL, 1, VAR51, 0);
        FUN11(VAR9);
    }
    else
    {
        VAR26 = -1;
    }
    if (VAR26 < 0 || VAR26 > VAR45)
    {
        FUN12("", VAR46);
        FUN4(1);
    }
    if (VAR13)
    {
        uint64_t VAR52 = 0;
        int VAR53;
        VAR53 = 1;
        VAR53 = 0;
        VAR17 = VAR54;
        VAR20 = FUN10(VAR3, VAR55, NULL, NULL, &VAR52, NULL, 1, VAR51, 0);
        if (VAR20 < 0)
            VAR20 = FUN13(VAR3, VAR17, VAR1 - VAR17, VAR53, VAR56);
        if (VAR20 < 0)
            VAR20 = FUN14(VAR3, VAR17, VAR1 - VAR17);
        if (VAR20 < 0)
        {
            FUN12("", VAR3);
            FUN4(1);
        }
        if (VAR5)
        {
            VAR18 = FUN15(VAR17 + VAR20 + VAR57);
            VAR21 = FUN14(VAR5, VAR18, VAR1 - VAR18);
            if (VAR21 < 0)
            {
                FUN12("", VAR5);
                FUN4(1);
            }
            VAR19 = FUN15(VAR18 + VAR21);
        }
        else
        {
            VAR18 = 0;
            VAR21 = 0;
            VAR19 = FUN15(VAR17 + VAR20 + VAR57);
        }
        VAR34 = '';
    }
    else
    {
        VAR17 = 0;
        VAR20 = 0;
        VAR18 = 0;
        VAR21 = 0;
        VAR34 = '';
        for (VAR14 = 0; VAR2[VAR14] != ''; VAR14++)
        {
            if (VAR2[VAR14] >= '' && VAR2[VAR14] <= '')
            {
                VAR34 = VAR2[VAR14];
                break;
            }
            if (VAR2[VAR14] >= '' && VAR2[VAR14] <= '')
            {
                VAR34 = VAR2[VAR14];
                break;
            }
        }
        if (VAR34 == '')
        {
            fprintf(VAR42, "");
            FUN4(1);
        }
    }
    FUN16(0xfe000000, 0x00200000);
    VAR12 = FUN17(VAR41 * sizeof(VAR10 *));
    VAR12[0] = FUN17(VAR41 * sizeof(VAR10) * 1);
    for (VAR14 = 0; VAR14 < VAR41; VAR14++)
    {
        switch (FUN18(VAR8))
        {
        case VAR58:
            VAR12[VAR14] = VAR12[0] + (VAR14 * 1);
            VAR12[VAR14][0] = ((VAR10 *)VAR8->VAR59)[VAR60];
            break;
        default:
            FUN12("");
        }
    }
    if (FUN18(VAR8) != VAR58)
    {
        FUN12("");
    }
    VAR11 = FUN19(&VAR28, 1, VAR12);
    VAR23 = FUN20(0xfec00000, VAR11, FUN21(), FUN22());
    FUN23(VAR23);
    VAR31 = FUN24(0, VAR11[0x0f], VAR11[0x10], VAR61[0], VAR61[1], VAR62, 4);
    FUN25(VAR32, "", VAR31, 0, FUN26(VAR31));
    for (VAR14 = 0; VAR14 < VAR63; VAR14++)
        FUN27(&VAR64[VAR14], "", NULL);
    FUN28(VAR36, VAR37);
    VAR40 = FUN29(&VAR29);
    VAR33[0] = NULL;
    VAR33[1] = FUN30(VAR36, VAR11[0x0D], VAR40, 0x16, VAR11[0x02]);
    VAR36[0] = VAR36[VAR38];
    VAR36[1] = VAR36[VAR38 + 1];
    VAR36[3] = VAR36[2] = NULL;
    FUN31(VAR23, VAR36, 0);
    FUN32(&VAR30, VAR11[0x12]);
    FUN33(&VAR65);
    FUN34(&VAR65);
    VAR25 = FUN35(0x2000, 4);
    FUN36(VAR25, 0x2000);
    FUN37(VAR23, VAR66, 1, VAR28, VAR29, VAR30, VAR25, 2, VAR33, VAR32);
    if (VAR67)
    {
        FUN38(VAR23, -1);
    }
    if (VAR68 != 15 && VAR68 != 32 && VAR68 != 8)
        VAR68 = 15;
    VAR39 = FUN39(0, 0, VAR69, VAR69 + 2);
    FUN40(VAR39, VAR70, 1);
    FUN41(VAR39, VAR71, (VAR72)VAR1);
    FUN42(VAR39, VAR73, VAR74);
    FUN40(VAR39, VAR75, VAR17);
    FUN40(VAR39, VAR76, VAR20);
    if (VAR4)
    {
        FUN40(VAR39, VAR77, VAR19);
        FUN43("", VAR19, VAR56, VAR4);
    }
    else
    {
        FUN40(VAR39, VAR77, 0);
    }
    FUN40(VAR39, VAR78, VAR18);
    FUN40(VAR39, VAR79, VAR21);
    FUN42(VAR39, VAR80, VAR34);
    FUN42(VAR39, VAR81, VAR82);
    FUN42(VAR39, VAR83, VAR84);
    FUN42(VAR39, VAR85, VAR68);
    FUN40(VAR39, VAR86, FUN44());
    if (FUN44())
    {
        VAR87 *VAR88;
        FUN40(VAR39, VAR89, FUN45());
        VAR88 = FUN46(16);
        FUN47(VAR8, VAR88, 16);
        FUN48(VAR39, VAR90, VAR88, 16);
        FUN40(VAR39, VAR91, FUN49());
    }
    else
    {
        FUN40(VAR39, VAR89, FUN50());
    }
    FUN51(VAR92, VAR39);
}