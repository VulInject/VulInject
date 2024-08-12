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
        VAR12 = FUN5(VAR2->VAR45);
        if (VAR12 == NULL)
        {
            fprintf(VAR47, "");
            FUN6(1);
        }
        VAR14 = &VAR12->VAR14;
        if (VAR14->VAR48 & VAR49)
        {
            FUN7(VAR14, 7812500UL);
        }
        else
        {
            FUN7(VAR14, 100UL * 1000UL * 1000UL);
        }
        FUN8(VAR50, VAR12);
    }
    FUN9(VAR21, NULL, "", VAR3);
    FUN10(VAR10, 0, VAR21);
    if (VAR18)
    {
        VAR22 = VAR51;
        VAR24 = FUN11(VAR4, VAR22, VAR3 - VAR22);
        if (VAR24 < 0)
        {
            FUN12("", VAR4);
            FUN6(1);
        }
        if (VAR6)
        {
            VAR23 = VAR52;
            VAR25 = FUN11(VAR6, VAR23, VAR3 - VAR23);
            if (VAR25 < 0)
            {
                FUN12("", VAR6);
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
            fprintf(VAR47, "");
            FUN6(1);
        }
    }
    if (FUN13(VAR14) != VAR53)
    {
        FUN12("");
    }
    VAR27 = FUN14(NULL, "");
    if (VAR54 == NULL)
    {
        VAR54 = VAR55;
    }
    FUN15(VAR27, "", VAR54);
    FUN16(VAR27, "", VAR56);
    VAR29 = FUN17(VAR27);
    FUN18(FUN19(), "", FUN20(VAR27), NULL);
    FUN21(VAR27);
    VAR31 = (VAR30 *)FUN22(VAR27, "");
    if (VAR31 == NULL)
    {
        fprintf(VAR47, "");
        FUN6(1);
    }
    VAR43->VAR57 = FUN23(VAR27, 0);
    VAR33 = FUN24(VAR31, FUN25(1, 0), "");
    VAR12 = FUN26(VAR58);
    FUN27(&VAR33->VAR59, 0, VAR12->VAR14.VAR60[VAR61]);
    FUN28(&VAR29->VAR62, 0, FUN23(&VAR33->VAR59, 9));
    FUN28(&VAR29->VAR62, 1, FUN23(&VAR33->VAR59, 11));
    FUN28(&VAR29->VAR62, 2, FUN23(&VAR33->VAR59, 9));
    FUN28(&VAR29->VAR62, 3, FUN23(&VAR33->VAR59, 11));
    VAR35 = FUN29(FUN22(FUN30(VAR33), ""));
    VAR37 = FUN31(VAR35, VAR63);
    VAR27 = FUN30(VAR37);
    FUN32(VAR27, "", 13);
    FUN21(VAR27);
    FUN33(VAR31);
    VAR20 = VAR64;
    if (VAR20 > VAR65)
        VAR20 = VAR65;
    for (VAR19 = 0; VAR19 < VAR20; VAR19++)
    {
        if (VAR66[VAR19].VAR67 == NULL)
        {
            VAR66[VAR19].VAR67 = FUN34("");
        }
        if (strcmp(VAR66[VAR19].VAR67, "") == 0)
        {
            FUN35(VAR35, VAR68[VAR19], VAR69[VAR19], &VAR66[VAR19]);
        }
        else
        {
            FUN36(&VAR66[VAR19], VAR31, "", NULL);
        }
    }
    FUN37(VAR40, FUN38(VAR40));
    for (VAR19 = 0; VAR19 < VAR41; VAR19++)
    {
        FUN39(VAR35, VAR70[VAR19], VAR71[VAR19], VAR72[VAR19], VAR40[2 * VAR19], VAR40[2 * VAR19 + 1]);
    }
    FUN40(VAR35, "");
    VAR12 = FUN26(VAR58);
    VAR43->VAR73 = VAR12->VAR14.VAR60[VAR74];
    FUN41(&VAR75, NULL, VAR76, VAR43, "");
    FUN42(&VAR75, FUN43(VAR37), 0x0);
    FUN44(VAR17, NULL, &VAR77, NULL, "", 0x1000);
    FUN10(VAR10, 0xFEFF0000, VAR17);
    if (FUN45())
    {
        FUN24(VAR31, -1, "");
    }
    VAR16 = FUN46(VAR35, 0x0074, VAR78, 2000, 59);
    if (VAR16 == NULL)
        return;
    VAR43->VAR79 = VAR16;
    FUN47(VAR16, VAR78, "", VAR3, VAR38, VAR22, VAR24, VAR5, VAR23, VAR25, 0, VAR80, VAR81, VAR82);
}