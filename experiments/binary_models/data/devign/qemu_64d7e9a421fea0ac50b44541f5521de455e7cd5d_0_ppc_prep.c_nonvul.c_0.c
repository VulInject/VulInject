static void FUN1(ram_addr_t VAR1, const char *VAR2, const char *VAR3, const char *VAR4, const char *VAR5, const char *VAR6)
{
    VAR7 *VAR8 = NULL;
    char *VAR9;
    nvram_t VAR10;
    VAR11 *VAR12;
    int VAR13;
    int VAR14, VAR15, VAR16, VAR17;
    ram_addr_t VAR18, VAR19;
    uint32_t VAR20, VAR21;
    long VAR22, VAR23;
    VAR24 *VAR25;
    VAR26 *VAR27;
    VAR26 *VAR28;
    int VAR29;
    VAR30 *VAR31[VAR32 * VAR33];
    VAR30 *VAR34[VAR35];
    VAR36 = FUN2(sizeof(VAR37));
    VAR14 = (VAR3 != NULL);
    if (VAR6 == NULL)
        VAR6 = "";
    for (VAR15 = 0; VAR15 < VAR38; VAR15++)
    {
        VAR8 = FUN3(VAR6);
        if (!VAR8)
        {
            fprintf(VAR39, "");
            FUN4(1);
        }
        if (VAR8->VAR40 & VAR41)
        {
            FUN5(VAR8, 7812500UL);
        }
        else
        {
            FUN5(VAR8, 100UL * 1000UL * 1000UL);
        }
        FUN6((VAR42 *)&VAR43, VAR8);
    }
    VAR18 = FUN7(NULL, "", VAR1);
    FUN8(0, VAR1, VAR18);
    VAR19 = FUN7(NULL, "", VAR44);
    if (VAR45 == NULL)
        VAR45 = VAR46;
    VAR9 = FUN9(VAR47, VAR45);
    if (VAR9)
    {
        VAR17 = FUN10(VAR9);
    }
    else
    {
        VAR17 = -1;
    }
    if (VAR17 > 0 && VAR17 <= VAR44)
    {
        target_phys_addr_t VAR48;
        VAR17 = (VAR17 + 0xfff) & ~0xfff;
        VAR48 = (VAR49)(-VAR17);
        FUN8(VAR48, VAR17, VAR19 | VAR50);
        VAR17 = FUN11(VAR9, VAR48, VAR17);
    }
    if (VAR17 < 0 || VAR17 > VAR44)
    {
        FUN12("", VAR45);
    }
    if (VAR9)
    {
        FUN13(VAR9);
    }
    if (VAR14)
    {
        VAR20 = VAR51;
        VAR22 = FUN11(VAR3, VAR20, VAR1 - VAR20);
        if (VAR22 < 0)
        {
            FUN12("", VAR3);
            FUN4(1);
        }
        if (VAR5)
        {
            VAR21 = VAR52;
            VAR23 = FUN11(VAR5, VAR21, VAR1 - VAR21);
            if (VAR23 < 0)
            {
                FUN12("", VAR5);
            }
        }
        else
        {
            VAR21 = 0;
            VAR23 = 0;
        }
        VAR29 = '';
    }
    else
    {
        VAR20 = 0;
        VAR22 = 0;
        VAR21 = 0;
        VAR23 = 0;
        VAR29 = '';
        for (VAR15 = 0; VAR2[VAR15] != ''; VAR15++)
        {
            if (VAR2[VAR15] >= '' && VAR2[VAR15] <= '')
            {
                VAR29 = VAR2[VAR15];
                break;
            }
        }
        if (VAR29 == '')
        {
            fprintf(VAR39, "");
            FUN4(1);
        }
    }
    VAR53 = 0xc0000000;
    if (FUN14(VAR8) != VAR54)
    {
        FUN12("");
    }
    VAR27 = FUN15(VAR55->VAR56[VAR57]);
    VAR25 = FUN16(VAR27);
    FUN17(NULL);
    FUN18(VAR27);
    VAR13 = FUN19(VAR58, VAR59, VAR36, VAR60);
    FUN8(0x80000000, 0x00800000, VAR13);
    FUN20(VAR25);
    FUN21(2000, NULL);
    if (VAR61[0])
        FUN22(0, VAR61[0]);
    VAR16 = VAR62;
    if (VAR16 > VAR63)
        VAR16 = VAR63;
    for (VAR15 = 0; VAR15 < VAR16; VAR15++)
    {
        if (VAR64[VAR15].VAR65 == NULL)
        {
            VAR64[VAR15].VAR65 = FUN23("");
        }
        if (strcmp(VAR64[VAR15].VAR65, "") == 0)
        {
            FUN24(VAR66[VAR15], VAR67[VAR15], &VAR64[VAR15]);
        }
        else
        {
            FUN25(&VAR64[VAR15], "", NULL);
        }
    }
    if (FUN26(VAR68) >= VAR32)
    {
        fprintf(VAR39, "");
        FUN4(1);
    }
    for (VAR15 = 0; VAR15 < VAR32 * VAR33; VAR15++)
    {
        VAR31[VAR15] = FUN27(VAR68, VAR15 / VAR33, VAR15 % VAR33);
    }
    for (VAR15 = 0; VAR15 < 1; VAR15++)
    {
        FUN28(VAR69[VAR15], VAR70[VAR15], VAR71[VAR15], VAR31[2 * VAR15], VAR31[2 * VAR15 + 1]);
    }
    FUN29("");
    VAR28 = FUN30(VAR72, NULL, 1);
    FUN31(1, VAR28);
    for (VAR15 = 0; VAR15 < VAR35; VAR15++)
    {
        VAR34[VAR15] = FUN27(VAR73, 0, VAR15);
    }
    FUN32(VAR34);
    FUN33(0x61, 1, 1, VAR74, NULL);
    FUN34(0x61, 1, 1, VAR75, NULL);
    VAR36->VAR76 = VAR55->VAR56[VAR77];
    FUN33(0x398, 2, 1, &VAR78, VAR36);
    FUN34(0x398, 2, 1, &VAR79, VAR36);
    FUN33(0x0092, 0x01, 1, &VAR80, VAR36);
    FUN34(0x0092, 0x01, 1, &VAR81, VAR36);
    FUN33(0x0800, 0x52, 1, &VAR80, VAR36);
    FUN34(0x0800, 0x52, 1, &VAR81, VAR36);
    VAR13 = FUN19(VAR82, VAR83, NULL, VAR60);
    FUN8(0xBFFFFFF0, 0x4, VAR13);
    VAR13 = FUN19(VAR84, VAR85, NULL, VAR60);
    FUN8(0xFEFF0000, 0x1000, VAR13);
    if (VAR86)
    {
        FUN35(VAR25, -1);
    }
    VAR12 = FUN36(VAR27[8], 0, 0x0074, VAR87, 59);
    if (VAR12 == NULL)
        return;
    VAR36->VAR10 = VAR12;
    VAR10.VAR88 = VAR12;
    VAR10.VAR89 = &VAR90;
    VAR10.VAR91 = &VAR92;
    FUN37(&VAR10, VAR87, "", VAR1, VAR29, VAR20, VAR22, VAR4, VAR21, VAR23, 0, VAR93, VAR94, VAR95);
    FUN34(0x0F00, 4, 1, &VAR96, NULL);
}