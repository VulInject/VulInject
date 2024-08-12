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
    nvram_t VAR16;
    VAR17 *VAR18;
    VAR19 *VAR20 = FUN3(VAR19, 1);
    VAR10 *VAR21 = FUN3(VAR10, 1);
    int VAR22, VAR23, VAR24;
    VAR10 *VAR25 = FUN3(VAR10, 1);
    VAR10 *VAR26 = FUN3(VAR10, 1);
    uint32_t VAR27, VAR28;
    long VAR29, VAR30;
    VAR31 *VAR32;
    VAR33 *VAR34;
    VAR35 *VAR36;
    VAR37 *VAR38;
    VAR39 *VAR40;
    VAR41 *VAR42;
    VAR43 *VAR44;
    int VAR45;
    VAR46 *VAR47[VAR48 * VAR49];
    VAR50 = FUN4(sizeof(VAR51));
    VAR22 = (VAR5 != NULL);
    if (VAR4 == NULL)
        VAR4 = "";
    for (VAR23 = 0; VAR23 < VAR52; VAR23++)
    {
        VAR13 = FUN5(VAR4);
        if (VAR13 == NULL)
        {
            fprintf(VAR53, "");
            FUN6(1);
        }
        VAR15 = &VAR13->VAR15;
        if (VAR15->VAR54 & VAR55)
        {
            FUN7(VAR15, 7812500UL);
        }
        else
        {
            FUN7(VAR15, 100UL * 1000UL * 1000UL);
        }
        FUN8(VAR56, VAR13);
    }
    FUN9(VAR25, NULL, "", VAR3);
    FUN10(VAR25);
    FUN11(VAR11, 0, VAR25);
    if (VAR22)
    {
        VAR27 = VAR57;
        VAR29 = FUN12(VAR5, VAR27, VAR3 - VAR27);
        if (VAR29 < 0)
        {
            FUN13("", VAR5);
            FUN6(1);
        }
        if (VAR7)
        {
            VAR28 = VAR58;
            VAR30 = FUN12(VAR7, VAR28, VAR3 - VAR28);
            if (VAR30 < 0)
            {
                FUN13("", VAR7);
            }
        }
        else
        {
            VAR28 = 0;
            VAR30 = 0;
        }
        VAR45 = '';
    }
    else
    {
        VAR27 = 0;
        VAR29 = 0;
        VAR28 = 0;
        VAR30 = 0;
        VAR45 = '';
        for (VAR23 = 0; VAR8[VAR23] != ''; VAR23++)
        {
            if (VAR8[VAR23] >= '' && VAR8[VAR23] <= '')
            {
                VAR45 = VAR8[VAR23];
                break;
            }
        }
        if (VAR45 == '')
        {
            fprintf(VAR53, "");
            FUN6(1);
        }
    }
    if (FUN14(VAR15) != VAR59)
    {
        FUN13("");
    }
    VAR32 = FUN15(NULL, "");
    if (VAR60 == NULL)
    {
        VAR60 = VAR61;
    }
    FUN16(VAR32, "", VAR60);
    FUN17(VAR32, "", VAR62);
    VAR34 = FUN18(VAR32);
    FUN19(FUN20(), "", FUN21(VAR32), NULL);
    FUN22(VAR32);
    VAR36 = (VAR35 *)FUN23(VAR32, "");
    if (VAR36 == NULL)
    {
        fprintf(VAR53, "");
        FUN6(1);
    }
    VAR50->VAR63 = FUN24(VAR32, 0);
    VAR38 = FUN25(VAR36, FUN26(1, 0), "");
    VAR44 = FUN27(VAR64, NULL, 1);
    VAR13 = FUN28(VAR65);
    FUN29(&VAR38->VAR66, 0, VAR13->VAR15.VAR67[VAR68]);
    FUN29(&VAR38->VAR66, 1, *VAR44);
    FUN30(&VAR34->VAR69, 0, FUN24(&VAR38->VAR66, 9));
    FUN30(&VAR34->VAR69, 1, FUN24(&VAR38->VAR66, 11));
    FUN30(&VAR34->VAR69, 2, FUN24(&VAR38->VAR66, 9));
    FUN30(&VAR34->VAR69, 3, FUN24(&VAR38->VAR66, 11));
    VAR40 = FUN31(FUN23(FUN32(VAR38), ""));
    VAR42 = FUN33(VAR40, VAR70);
    VAR32 = FUN32(VAR42);
    FUN34(VAR32, "", 13);
    FUN22(VAR32);
    FUN35(VAR36);
    FUN36(VAR26, NULL, "", FUN37(VAR38), 0xf0000000, 0x1000000);
    FUN38(VAR11, 0xf0000000, VAR26, 10);
    VAR24 = VAR71;
    if (VAR24 > VAR72)
        VAR24 = VAR72;
    for (VAR23 = 0; VAR23 < VAR24; VAR23++)
    {
        if (VAR73[VAR23].VAR74 == NULL)
        {
            VAR73[VAR23].VAR74 = FUN39("");
        }
        if (strcmp(VAR73[VAR23].VAR74, "") == 0)
        {
            FUN40(VAR40, VAR75[VAR23], VAR76[VAR23], &VAR73[VAR23]);
        }
        else
        {
            FUN41(&VAR73[VAR23], VAR36, "", NULL);
        }
    }
    FUN42(VAR47, VAR48);
    for (VAR23 = 0; VAR23 < VAR48; VAR23++)
    {
        FUN43(VAR40, VAR77[VAR23], VAR78[VAR23], VAR79[VAR23], VAR47[2 * VAR23], VAR47[2 * VAR23 + 1]);
    }
    FUN44(VAR40, "");
    VAR13 = FUN28(VAR65);
    VAR50->VAR80 = VAR13->VAR15.VAR67[VAR81];
    FUN45(VAR20, NULL, VAR82, VAR50, "");
    FUN46(VAR20, FUN47(VAR42), 0x0);
    FUN48(VAR21, NULL, &VAR83, NULL, "", 0x1000);
    FUN11(VAR11, 0xFEFF0000, VAR21);
    if (FUN49(false))
    {
        FUN25(VAR36, -1, "");
    }
    VAR18 = FUN50(VAR40, 0x0074, VAR84, 59);
    if (VAR18 == NULL)
        return;
    VAR50->VAR16 = VAR18;
    VAR16.VAR85 = VAR18;
    VAR16.VAR86 = &VAR87;
    VAR16.VAR88 = &VAR89;
    FUN51(&VAR16, VAR84, "", VAR3, VAR45, VAR27, VAR29, VAR6, VAR28, VAR30, 0, VAR90, VAR91, VAR92);
}