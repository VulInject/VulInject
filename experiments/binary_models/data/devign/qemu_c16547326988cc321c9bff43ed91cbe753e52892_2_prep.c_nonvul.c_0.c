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
    nvram_t VAR17;
    VAR18 *VAR19;
    VAR10 *VAR20 = FUN3(VAR10, 1);
    VAR21 *VAR22 = FUN3(VAR21, 1);
    VAR10 *VAR23 = FUN3(VAR10, 1);
    int VAR24, VAR25, VAR26, VAR27;
    VAR10 *VAR28 = FUN3(VAR10, 1);
    VAR10 *VAR29 = FUN3(VAR10, 1);
    uint32_t VAR30, VAR31;
    long VAR32, VAR33;
    VAR34 *VAR35;
    VAR36 *VAR37;
    VAR38 *VAR39;
    VAR40 *VAR41;
    VAR42 *VAR43;
    VAR44 *VAR45;
    VAR46 *VAR47;
    int VAR48;
    VAR49 *VAR50[VAR51 * VAR52];
    VAR53 = FUN4(sizeof(VAR54));
    VAR24 = (VAR5 != NULL);
    if (VAR4 == NULL)
        VAR4 = "";
    for (VAR25 = 0; VAR25 < VAR55; VAR25++)
    {
        VAR13 = FUN5(VAR4);
        if (VAR13 == NULL)
        {
            fprintf(VAR56, "");
            FUN6(1);
        }
        VAR15 = &VAR13->VAR15;
        if (VAR15->VAR57 & VAR58)
        {
            FUN7(VAR15, 7812500UL);
        }
        else
        {
            FUN7(VAR15, 100UL * 1000UL * 1000UL);
        }
        FUN8(VAR59, VAR13);
    }
    FUN9(VAR28, NULL, "", VAR3);
    FUN10(VAR28);
    FUN11(VAR11, 0, VAR28);
    FUN9(VAR29, NULL, "", VAR60);
    FUN12(VAR29, true);
    FUN11(VAR11, (VAR61)(-VAR60), VAR29);
    FUN10(VAR29);
    if (VAR62 == NULL)
        VAR62 = VAR63;
    VAR16 = FUN13(VAR64, VAR62);
    if (VAR16)
    {
        VAR27 = FUN14(VAR16, NULL, NULL, NULL, NULL, NULL, 1, VAR65, 0);
        if (VAR27 < 0)
        {
            VAR27 = FUN15(VAR16);
            if (VAR27 > 0 && VAR27 <= VAR60)
            {
                hwaddr VAR66;
                VAR27 = (VAR27 + 0xfff) & ~0xfff;
                VAR66 = (VAR61)(-VAR27);
                VAR27 = FUN16(VAR16, VAR66, VAR27);
            }
            if (VAR27 > VAR60)
            {
                fprintf(VAR56, "", VAR62, VAR27);
                FUN6(1);
            }
        }
    }
    else
    {
        VAR27 = -1;
    }
    if (VAR27 < 0 && !FUN17())
    {
        fprintf(VAR56, "", VAR62);
        FUN6(1);
    }
    if (VAR16)
    {
        FUN18(VAR16);
    }
    if (VAR24)
    {
        VAR30 = VAR67;
        VAR32 = FUN16(VAR5, VAR30, VAR3 - VAR30);
        if (VAR32 < 0)
        {
            FUN19("", VAR5);
            FUN6(1);
        }
        if (VAR7)
        {
            VAR31 = VAR68;
            VAR33 = FUN16(VAR7, VAR31, VAR3 - VAR31);
            if (VAR33 < 0)
            {
                FUN19("", VAR7);
            }
        }
        else
        {
            VAR31 = 0;
            VAR33 = 0;
        }
        VAR48 = '';
    }
    else
    {
        VAR30 = 0;
        VAR32 = 0;
        VAR31 = 0;
        VAR33 = 0;
        VAR48 = '';
        for (VAR25 = 0; VAR8[VAR25] != ''; VAR25++)
        {
            if (VAR8[VAR25] >= '' && VAR8[VAR25] <= '')
            {
                VAR48 = VAR8[VAR25];
                break;
            }
        }
        if (VAR48 == '')
        {
            fprintf(VAR56, "");
            FUN6(1);
        }
    }
    if (FUN20(VAR15) != VAR69)
    {
        FUN19("");
    }
    VAR35 = FUN21(NULL, "");
    VAR37 = FUN22(VAR35);
    FUN23(FUN24(), "", FUN25(VAR35), NULL);
    FUN26(VAR35);
    VAR39 = (VAR38 *)FUN27(VAR35, "");
    if (VAR39 == NULL)
    {
        fprintf(VAR56, "");
        FUN6(1);
    }
    VAR41 = FUN28(VAR39, FUN29(1, 0), "");
    VAR47 = FUN30(VAR70, NULL, 1);
    VAR13 = FUN31(VAR71);
    FUN32(&VAR41->VAR72, 0, VAR13->VAR15.VAR73[VAR74]);
    FUN32(&VAR41->VAR72, 1, *VAR47);
    FUN33(&VAR37->VAR75, 0, FUN34(&VAR41->VAR72, 9));
    FUN33(&VAR37->VAR75, 1, FUN34(&VAR41->VAR72, 11));
    FUN33(&VAR37->VAR75, 2, FUN34(&VAR41->VAR72, 9));
    FUN33(&VAR37->VAR75, 3, FUN34(&VAR41->VAR72, 11));
    VAR43 = FUN35(FUN27(FUN36(VAR41), ""));
    VAR45 = FUN37(VAR43, VAR76);
    VAR35 = FUN36(VAR45);
    FUN38(VAR35, "", 13);
    FUN26(VAR35);
    FUN39(VAR20, NULL, &VAR77, VAR53, "", 0x00800000);
    FUN11(VAR11, 0x80000000, VAR20);
    FUN40(VAR39);
    VAR26 = VAR78;
    if (VAR26 > VAR79)
        VAR26 = VAR79;
    for (VAR25 = 0; VAR25 < VAR26; VAR25++)
    {
        if (VAR80[VAR25].VAR81 == NULL)
        {
            VAR80[VAR25].VAR81 = FUN41("");
        }
        if (strcmp(VAR80[VAR25].VAR81, "") == 0)
        {
            FUN42(VAR43, VAR82[VAR25], VAR83[VAR25], &VAR80[VAR25]);
        }
        else
        {
            FUN43(&VAR80[VAR25], VAR39, "", NULL);
        }
    }
    FUN44(VAR50, VAR51);
    for (VAR25 = 0; VAR25 < VAR51; VAR25++)
    {
        FUN45(VAR43, VAR84[VAR25], VAR85[VAR25], VAR86[VAR25], VAR50[2 * VAR25], VAR50[2 * VAR25 + 1]);
    }
    FUN46(VAR43, "");
    VAR13 = FUN31(VAR71);
    VAR53->VAR87 = VAR13->VAR15.VAR73[VAR88];
    FUN47(VAR22, NULL, VAR89, VAR53, "");
    FUN48(VAR22, FUN49(), 0x0);
    FUN39(VAR23, NULL, &VAR90, NULL, "", 0x1000);
    FUN11(VAR11, 0xFEFF0000, VAR23);
    if (FUN50(false))
    {
        FUN28(VAR39, -1, "");
    }
    VAR19 = FUN51(VAR43, 0x0074, VAR91, 59);
    if (VAR19 == NULL)
        return;
    VAR53->VAR17 = VAR19;
    VAR17.VAR92 = VAR19;
    VAR17.VAR93 = &VAR94;
    VAR17.VAR95 = &VAR96;
    FUN52(&VAR17, VAR91, "", VAR3, VAR48, VAR30, VAR32, VAR6, VAR31, VAR33, 0, VAR97, VAR98, VAR99);
}