static void FUN1(VAR1 *VAR2)
{
    ram_addr_t VAR3 = VAR2->VAR3;
    const char *VAR4 = VAR2->VAR4;
    const char *VAR5 = VAR2->VAR5;
    const char *VAR6 = VAR2->VAR6;
    const char *VAR7 = VAR2->VAR8;
    VAR9 *VAR10 = FUN2();
    VAR11 *VAR12 = NULL;
    VAR13 *VAR14 = NULL;
    VAR15 *VAR16;
    VAR9 *VAR17 = FUN3(VAR9, 1);
    int VAR18, VAR19, VAR20;
    VAR9 *VAR21 = FUN3(VAR9, 1);
    uint32_t VAR22, VAR23;
    long VAR24, VAR25;
    VAR26 *VAR27;
    VAR28 *VAR29;
    VAR30 *VAR31;
    VAR32 *VAR33;
    VAR34 *VAR35;
    VAR36 *VAR37;
    int VAR38;
    VAR39 *VAR40[VAR41 * VAR42];
    VAR43 = FUN4(sizeof(VAR44));
    VAR18 = (VAR4 != NULL);
    if (VAR2->VAR45 == NULL)
        VAR2->VAR45 = "";
    for (VAR19 = 0; VAR19 < VAR46; VAR19++)
    {
        VAR12 = FUN5(FUN6(VAR47, VAR2->VAR45));
        if (VAR12 == NULL)
        {
            fprintf(VAR48, "");
            FUN7(1);
        }
        VAR14 = &VAR12->VAR14;
        if (VAR14->VAR49 & VAR50)
        {
            FUN8(VAR14, 7812500UL);
        }
        else
        {
            FUN8(VAR14, 100UL * 1000UL * 1000UL);
        }
        FUN9(VAR51, VAR12);
    }
    FUN10(VAR21, NULL, "", VAR3);
    FUN11(VAR10, 0, VAR21);
    if (VAR18)
    {
        VAR22 = VAR52;
        VAR24 = FUN12(VAR4, VAR22, VAR3 - VAR22);
        if (VAR24 < 0)
        {
            FUN13("", VAR4);
            FUN7(1);
        }
        if (VAR6)
        {
            VAR23 = VAR53;
            VAR25 = FUN12(VAR6, VAR23, VAR3 - VAR23);
            if (VAR25 < 0)
            {
                FUN13("", VAR6);
                FUN7(1);
            }
        }
        else
        {
            VAR23 = 0;
            VAR25 = 0;
        }
        VAR38 = '';
    }
    else
    {
        VAR22 = 0;
        VAR24 = 0;
        VAR23 = 0;
        VAR25 = 0;
        VAR38 = '';
        for (VAR19 = 0; VAR7[VAR19] != ''; VAR19++)
        {
            if (VAR7[VAR19] >= '' && VAR7[VAR19] <= '')
            {
                VAR38 = VAR7[VAR19];
                break;
            }
        }
        if (VAR38 == '')
        {
            fprintf(VAR48, "");
            FUN7(1);
        }
    }
    if (FUN14(VAR14) != VAR54)
    {
        FUN13("");
        FUN7(1);
    }
    VAR27 = FUN15(NULL, "");
    if (VAR55 == NULL)
    {
        VAR55 = VAR56;
    }
    FUN16(VAR27, "", VAR55);
    FUN17(VAR27, "", VAR57);
    VAR29 = FUN18(VAR27);
    FUN19(FUN20(), "", FUN21(VAR27), NULL);
    FUN22(VAR27);
    VAR31 = (VAR30 *)FUN23(VAR27, "");
    if (VAR31 == NULL)
    {
        fprintf(VAR48, "");
        FUN7(1);
    }
    VAR43->VAR58 = FUN24(VAR27, 0);
    VAR33 = FUN25(VAR31, FUN26(1, 0), "");
    VAR12 = FUN5(VAR59);
    FUN27(&VAR33->VAR60, 0, VAR12->VAR14.VAR61[VAR62]);
    FUN28(&VAR29->VAR63, 0, FUN24(&VAR33->VAR60, 9));
    FUN28(&VAR29->VAR63, 1, FUN24(&VAR33->VAR60, 11));
    FUN28(&VAR29->VAR63, 2, FUN24(&VAR33->VAR60, 9));
    FUN28(&VAR29->VAR63, 3, FUN24(&VAR33->VAR60, 11));
    VAR35 = FUN29(FUN23(FUN30(VAR33), ""));
    VAR37 = FUN31(VAR35, VAR64);
    VAR27 = FUN30(VAR37);
    FUN32(VAR27, "", 13);
    FUN22(VAR27);
    FUN33(VAR31);
    VAR20 = VAR65;
    if (VAR20 > VAR66)
        VAR20 = VAR66;
    for (VAR19 = 0; VAR19 < VAR20; VAR19++)
    {
        if (VAR67[VAR19].VAR68 == NULL)
        {
            VAR67[VAR19].VAR68 = FUN34("");
        }
        if (strcmp(VAR67[VAR19].VAR68, "") == 0)
        {
            FUN35(VAR35, VAR69[VAR19], VAR70[VAR19], &VAR67[VAR19]);
        }
        else
        {
            FUN36(&VAR67[VAR19], VAR31, "", NULL);
        }
    }
    FUN37(VAR40, FUN38(VAR40));
    for (VAR19 = 0; VAR19 < VAR41; VAR19++)
    {
        FUN39(VAR35, VAR71[VAR19], VAR72[VAR19], VAR73[VAR19], VAR40[2 * VAR19], VAR40[2 * VAR19 + 1]);
    }
    FUN40(VAR35, "");
    VAR12 = FUN5(VAR59);
    VAR43->VAR74 = VAR12->VAR14.VAR61[VAR75];
    FUN41(&VAR76, NULL, VAR77, VAR43, "");
    FUN42(&VAR76, FUN43(VAR37), 0x0);
    FUN44(VAR17, NULL, &VAR78, NULL, "", 0x1000);
    FUN11(VAR10, 0xFEFF0000, VAR17);
    if (FUN45(VAR2))
    {
        FUN25(VAR31, -1, "");
    }
    VAR16 = FUN46(VAR35, 0x0074, VAR79, 2000, 59);
    if (VAR16 == NULL)
        return;
    VAR43->VAR80 = VAR16;
    FUN47(VAR16, VAR79, "", VAR3, VAR38, VAR22, VAR24, VAR5, VAR23, VAR25, 0, VAR81, VAR82, VAR83);
}