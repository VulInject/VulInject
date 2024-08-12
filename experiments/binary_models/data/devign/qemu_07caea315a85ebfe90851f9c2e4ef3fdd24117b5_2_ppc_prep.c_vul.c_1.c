static void FUN1(ram_addr_t VAR1, const char *VAR2, const char *VAR3, const char *VAR4, const char *VAR5, const char *VAR6)
{
    VAR7 *VAR8 = NULL, *VAR9[VAR10];
    char *VAR11;
    nvram_t VAR12;
    VAR13 *VAR14;
    int VAR15;
    int VAR16, VAR17, VAR18, VAR19;
    ram_addr_t VAR20, VAR21;
    uint32_t VAR22, VAR23, VAR24, VAR25;
    VAR26 *VAR27;
    VAR28 *VAR29;
    int VAR30;
    VAR31 *VAR32[VAR33 * VAR34];
    VAR31 *VAR35[VAR36];
    VAR37 = FUN2(sizeof(VAR38));
    VAR16 = (VAR3 != NULL);
    if (VAR6 == NULL)
        VAR6 = "";
    for (VAR17 = 0; VAR17 < VAR39; VAR17++)
    {
        VAR8 = FUN3(VAR6);
        if (!VAR8)
        {
            fprintf(VAR40, "");
            FUN4(1);
        }
        if (VAR8->VAR41 & VAR42)
        {
            FUN5(VAR8, 7812500UL);
        }
        else
        {
            FUN5(VAR8, 100UL * 1000UL * 1000UL);
        }
        FUN6(&VAR43, VAR8);
        VAR9[VAR17] = VAR8;
    }
    VAR20 = FUN7(VAR1);
    FUN8(0, VAR1, VAR20);
    VAR21 = FUN7(VAR44);
    if (VAR45 == NULL)
        VAR45 = VAR46;
    VAR11 = FUN9(VAR47, VAR45);
    if (VAR11)
    {
        VAR19 = FUN10(VAR11);
    }
    else
    {
        VAR19 = -1;
    }
    if (VAR19 > 0 && VAR19 <= VAR44)
    {
        target_phys_addr_t VAR48;
        VAR19 = (VAR19 + 0xfff) & ~0xfff;
        VAR48 = (VAR49)(-VAR19);
        FUN8(VAR48, VAR19, VAR21 | VAR50);
        VAR19 = FUN11(VAR11, VAR48, VAR19);
    }
    if (VAR19 < 0 || VAR19 > VAR44)
    {
        FUN12("", VAR45);
    }
    if (VAR11)
    {
        FUN13(VAR11);
    }
    if (VAR8->VAR51 < 0xFFF80000 && VAR19 < 0x00100000)
    {
        FUN12("");
    }
    if (VAR16)
    {
        VAR22 = VAR52;
        VAR23 = FUN11(VAR3, VAR22, VAR1 - VAR22);
        if (VAR23 < 0)
        {
            FUN12("", VAR3);
            FUN4(1);
        }
        if (VAR5)
        {
            VAR24 = VAR53;
            VAR25 = FUN11(VAR5, VAR24, VAR1 - VAR24);
            if (VAR25 < 0)
            {
                FUN12("", VAR5);
            }
        }
        else
        {
            VAR24 = 0;
            VAR25 = 0;
        }
        VAR30 = '';
    }
    else
    {
        VAR22 = 0;
        VAR23 = 0;
        VAR24 = 0;
        VAR25 = 0;
        VAR30 = '';
        for (VAR17 = 0; VAR2[VAR17] != ''; VAR17++)
        {
            if (VAR2[VAR17] >= '' && VAR2[VAR17] <= '')
            {
                VAR30 = VAR2[VAR17];
                break;
            }
        }
        if (VAR30 == '')
        {
            fprintf(VAR40, "");
            FUN4(1);
        }
    }
    VAR54 = 0xc0000000;
    if (FUN14(VAR8) != VAR55)
    {
        FUN12("");
    }
    VAR29 = FUN15(VAR56->VAR57[VAR58]);
    VAR27 = FUN16(VAR29);
    FUN17(NULL);
    FUN18(VAR29);
    VAR15 = FUN19(VAR59, VAR60, VAR37);
    FUN8(0x80000000, 0x00800000, VAR15);
    FUN20(VAR27, 0, 0);
    FUN21(2000);
    if (VAR61[0])
        FUN22(0, VAR61[0]);
    VAR18 = VAR62;
    if (VAR18 > VAR63)
        VAR18 = VAR63;
    for (VAR17 = 0; VAR17 < VAR18; VAR17++)
    {
        if (VAR64[VAR17].VAR65 == NULL)
        {
            VAR64[VAR17].VAR65 = "";
        }
        if (strcmp(VAR64[VAR17].VAR65, "") == 0)
        {
            FUN23(VAR66[VAR17], VAR67[VAR17], &VAR64[VAR17]);
        }
        else
        {
            FUN24(&VAR64[VAR17], "", NULL);
        }
    }
    if (FUN25(VAR68) >= VAR33)
    {
        fprintf(VAR40, "");
        FUN4(1);
    }
    for (VAR17 = 0; VAR17 < VAR33 * VAR34; VAR17++)
    {
        VAR32[VAR17] = FUN26(VAR68, VAR17 / VAR34, VAR17 % VAR34);
    }
    for (VAR17 = 0; VAR17 < VAR33; VAR17++)
    {
        FUN27(VAR69[VAR17], VAR70[VAR17], VAR71[VAR17], VAR32[2 * VAR17], VAR32[2 * VAR17 + 1]);
    }
    FUN28("");
    FUN29(1);
    for (VAR17 = 0; VAR17 < VAR36; VAR17++)
    {
        VAR35[VAR17] = FUN26(VAR72, 0, VAR17);
    }
    FUN30(VAR35);
    FUN31(0x61, 1, 1, VAR73, NULL);
    FUN32(0x61, 1, 1, VAR74, NULL);
    VAR37->VAR75 = VAR56->VAR57[VAR76];
    FUN31(0x398, 2, 1, &VAR77, VAR37);
    FUN32(0x398, 2, 1, &VAR78, VAR37);
    FUN31(0x0092, 0x01, 1, &VAR79, VAR37);
    FUN32(0x0092, 0x01, 1, &VAR80, VAR37);
    FUN31(0x0800, 0x52, 1, &VAR79, VAR37);
    FUN32(0x0800, 0x52, 1, &VAR80, VAR37);
    VAR15 = FUN19(VAR81, VAR82, NULL);
    FUN8(0xBFFFFFF0, 0x4, VAR15);
    VAR15 = FUN19(VAR83, VAR84, NULL);
    FUN8(0xFEFF0000, 0x1000, VAR15);
    if (VAR85)
    {
        FUN33(VAR27, -1);
    }
    VAR14 = FUN34(VAR29[8], 0, 0x0074, VAR86, 59);
    if (VAR14 == NULL)
        return;
    VAR37->VAR12 = VAR14;
    VAR12.VAR87 = VAR14;
    VAR12.VAR88 = &VAR89;
    VAR12.VAR90 = &VAR91;
    FUN35(&VAR12, VAR86, "", VAR1, VAR30, VAR22, VAR23, VAR4, VAR24, VAR25, 0, VAR92, VAR93, VAR94);
    FUN32(0x0F00, 4, 1, &VAR95, NULL);
}