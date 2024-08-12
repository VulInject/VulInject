static void FUN1(int VAR1, int VAR2, const char *VAR3, VAR4 *VAR5, const char **VAR6, int VAR7, const char *VAR8, const char *VAR9, const char *VAR10, const char *VAR11)
{
    VAR12 *VAR13 = NULL, *VAR14[VAR15];
    char VAR16[1024];
    VAR17 *VAR18, **VAR19;
    int VAR20;
    int VAR21, VAR22;
    unsigned long VAR23, VAR24;
    uint32_t VAR25, VAR26, VAR27, VAR28;
    VAR29 *VAR30;
    nvram_t VAR31;
    VAR32 *VAR33;
    int VAR34;
    VAR35 *VAR36;
    int VAR37, VAR38;
    VAR17 *VAR39;
    int VAR40, VAR41, VAR42;
    int VAR43[2];
    int VAR44;
    VAR21 = (VAR8 != NULL);
    if (VAR11 == NULL)
        VAR11 = "";
    for (VAR22 = 0; VAR22 < VAR45; VAR22++)
    {
        VAR13 = FUN2(VAR11);
        if (!VAR13)
        {
            fprintf(VAR46, "");
            FUN3(1);
        }
        FUN4(VAR13, 100UL * 1000UL * 1000UL);
        VAR13->VAR47 = VAR48;
        FUN5(&VAR49, VAR13);
        FUN6("", 0, 3, VAR50, VAR51, VAR13);
        VAR14[VAR22] = VAR13;
    }
    if (VAR13->VAR52 < 0xFFF80000)
    {
        FUN7(VAR13, "");
    }
    FUN8(0, VAR1, VAR53);
    VAR23 = VAR1 + VAR2;
    if (VAR54 == NULL)
        VAR54 = VAR55;
    snprintf(VAR16, sizeof(VAR16), "", VAR56, VAR54);
    VAR38 = FUN9(VAR16, VAR57 + VAR23);
    if (VAR38 < 0 || VAR38 > VAR58)
    {
        FUN7(VAR13, "", VAR16);
        FUN3(1);
    }
    VAR38 = (VAR38 + 0xfff) & ~0xfff;
    if (VAR38 > 0x00080000)
    {
        FUN7(VAR13, "");
    }
    FUN8((VAR59)(-VAR38), VAR38, VAR23 | VAR60);
    VAR24 = VAR23 + VAR38;
    snprintf(VAR16, sizeof(VAR16), "", VAR56, VAR61);
    VAR37 = FUN9(VAR16, VAR57 + VAR24 + 8);
    if (VAR37 < 0)
    {
        fprintf(VAR46, "", VAR16);
        VAR37 = 0;
    }
    else
    {
        VAR57[VAR24] = '';
        VAR57[VAR24 + 1] = '';
        VAR57[VAR24 + 2] = '';
        VAR57[VAR24 + 3] = '';
        FUN10((VAR59 *)(VAR57 + VAR24 + 4), VAR37);
        VAR37 += 8;
    }
    VAR37 = (VAR37 + 0xfff) & ~0xfff;
    if (VAR21)
    {
        VAR25 = VAR62;
        VAR26 = FUN9(VAR8, VAR57 + VAR25);
        if (VAR26 < 0)
        {
            FUN7(VAR13, "", VAR8);
            FUN3(1);
        }
        if (VAR10)
        {
            VAR27 = VAR63;
            VAR28 = FUN9(VAR10, VAR57 + VAR27);
            if (VAR28 < 0)
            {
                FUN7(VAR13, "", VAR10);
                FUN3(1);
            }
        }
        else
        {
            VAR27 = 0;
            VAR28 = 0;
        }
        VAR44 = '';
    }
    else
    {
        VAR25 = 0;
        VAR26 = 0;
        VAR27 = 0;
        VAR28 = 0;
        VAR44 = '';
        for (VAR22 = 0; VAR22 < VAR3[VAR22] != ''; VAR22++)
        {
            VAR44 = VAR3[VAR22];
            if (VAR44 >= '' && VAR44 <= '')
                break;
        }
        if (VAR44 == '')
        {
            fprintf(VAR46, "");
            FUN3(1);
        }
    }
    VAR64 = 0x80000000;
    FUN11(0xf2000000, 0x00800000);
    VAR20 = FUN12(0, VAR65, VAR66, NULL);
    FUN8(0xf8000000, 0x00001000, VAR20);
    VAR19 = FUN13(VAR45 * sizeof(VAR17 *));
    VAR19[0] = FUN13(VAR45 * sizeof(VAR17) * VAR67);
    for (VAR22 = 0; VAR22 < VAR45; VAR22++)
    {
        switch (FUN14(VAR13))
        {
        case VAR68:
            VAR19[VAR22] = VAR19[0] + (VAR22 * VAR67);
            VAR19[VAR22][VAR69] = ((VAR17 *)VAR13->VAR70)[VAR71];
            VAR19[VAR22][VAR72] = ((VAR17 *)VAR13->VAR70)[VAR71];
            VAR19[VAR22][VAR73] = ((VAR17 *)VAR13->VAR70)[VAR74];
            VAR19[VAR22][VAR75] = NULL;
            VAR19[VAR22][VAR76] = ((VAR17 *)VAR13->VAR70)[VAR77];
            break;
        case VAR78:
            VAR19[VAR22] = VAR19[0] + (VAR22 * VAR67);
            VAR19[VAR22][VAR69] = ((VAR17 *)VAR13->VAR70)[VAR79];
            VAR19[VAR22][VAR72] = ((VAR17 *)VAR13->VAR70)[VAR79];
            VAR19[VAR22][VAR73] = ((VAR17 *)VAR13->VAR70)[VAR80];
            VAR19[VAR22][VAR75] = NULL;
            VAR19[VAR22][VAR76] = ((VAR17 *)VAR13->VAR70)[VAR81];
            break;
        default:
            FUN7(VAR13, "");
            FUN3(1);
        }
    }
    VAR18 = FUN15(NULL, &VAR40, VAR45, VAR19, NULL);
    VAR30 = FUN16(VAR18);
    FUN17(VAR30, VAR5, VAR57 + VAR1, VAR1, VAR2, VAR24, VAR37);
    VAR39 = FUN18(NULL);
    FUN19(0x3f8, VAR39[4], VAR82[0]);
    for (VAR22 = 0; VAR22 < VAR83; VAR22++)
    {
        if (!VAR84[VAR22].VAR85)
            VAR84[VAR22].VAR85 = "";
        FUN20(VAR30, &VAR84[VAR22], -1);
    }
    VAR43[0] = FUN21(&VAR86[0], VAR18[0x13]);
    VAR43[1] = FUN21(&VAR86[2], VAR18[0x14]);
    FUN22(VAR30, &VAR86[0], 0);
    FUN23(&VAR42, VAR18[0x19]);
    FUN24(&VAR87);
    FUN25(&VAR87);
    FUN26(&VAR41);
    FUN27(VAR30, 0x0022, 0, VAR40, VAR41, VAR42, NULL, 2, VAR43);
    if (VAR88)
    {
        FUN28(VAR30, 3, -1);
    }
    if (VAR89 != 15 && VAR89 != 32 && VAR89 != 8)
        VAR89 = 15;
    VAR33 = FUN29(&VAR34, 0x2000);
    FUN30(VAR33, 0x2000);
    FUN31(VAR33, 0xFFF04000);
    VAR31.VAR90 = VAR33;
    VAR31.VAR91 = &VAR92;
    VAR31.VAR93 = &VAR94;
    VAR36 = FUN32(VAR39[8], 0xFFF04000, 0x0074, VAR95, 59);
    VAR31.VAR90 = VAR36;
    VAR31.VAR91 = &VAR96;
    VAR31.VAR93 = &VAR97;
    FUN33(&VAR31, VAR95, "", VAR1, VAR44, VAR25, VAR26, VAR9, VAR27, VAR28, 0, VAR98, VAR99, VAR89);
    FUN34(0x0F00, 4, 1, &VAR100, NULL);
}