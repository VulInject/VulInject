static void FUN1(int VAR1, int VAR2, const char *VAR3, VAR4 *VAR5, const char **VAR6, int VAR7, const char *VAR8, const char *VAR9, const char *VAR10, const char *VAR11)
{
    VAR12 *VAR13 = NULL, *VAR14[VAR15];
    char VAR16[1024];
    VAR17 *VAR18, **VAR19;
    nvram_t VAR20;
    VAR21 *VAR22;
    int VAR23, VAR24;
    unsigned long VAR25, VAR26;
    uint32_t VAR27, VAR28, VAR29, VAR30;
    VAR31 *VAR32;
    VAR33 *VAR34;
    int VAR35, VAR36;
    VAR17 *VAR37;
    int VAR38, VAR39, VAR40, VAR41;
    int VAR42;
    VAR23 = (VAR8 != NULL);
    if (VAR11 == NULL)
        VAR11 = "";
    for (VAR24 = 0; VAR24 < VAR43; VAR24++)
    {
        VAR13 = FUN2(VAR11);
        if (!VAR13)
        {
            fprintf(VAR44, "");
            FUN3(1);
        }
        FUN4(VAR13, 100UL * 1000UL * 1000UL);
        VAR13->VAR45 = VAR46;
        FUN5(&VAR47, VAR13);
        FUN6("", 0, 3, VAR48, VAR49, VAR13);
        VAR14[VAR24] = VAR13;
    }
    if (VAR13->VAR50 < 0xFFF80000)
    {
        FUN7(VAR13, "");
    }
    FUN8(0, VAR1, VAR51);
    VAR25 = VAR1 + VAR2;
    if (VAR52 == NULL)
        VAR52 = VAR53;
    snprintf(VAR16, sizeof(VAR16), "", VAR54, VAR52);
    VAR36 = FUN9(VAR16, VAR55 + VAR25);
    if (VAR36 < 0 || VAR36 > VAR56)
    {
        FUN7(VAR13, "", VAR16);
        FUN3(1);
    }
    VAR36 = (VAR36 + 0xfff) & ~0xfff;
    if (VAR36 > 0x00080000)
    {
        FUN7(VAR13, "");
    }
    FUN8((VAR57)(-VAR36), VAR36, VAR25 | VAR58);
    VAR26 = VAR25 + VAR36;
    snprintf(VAR16, sizeof(VAR16), "", VAR54, VAR59);
    VAR35 = FUN9(VAR16, VAR55 + VAR26 + 8);
    if (VAR35 < 0)
    {
        fprintf(VAR44, "", VAR16);
        VAR35 = 0;
    }
    else
    {
        VAR55[VAR26] = '';
        VAR55[VAR26 + 1] = '';
        VAR55[VAR26 + 2] = '';
        VAR55[VAR26 + 3] = '';
        FUN10((VAR57 *)(VAR55 + VAR26 + 4), VAR35);
        VAR35 += 8;
    }
    VAR35 = (VAR35 + 0xfff) & ~0xfff;
    if (VAR23)
    {
        VAR27 = VAR60;
        VAR28 = FUN9(VAR8, VAR55 + VAR27);
        if (VAR28 < 0)
        {
            FUN7(VAR13, "", VAR8);
            FUN3(1);
        }
        if (VAR10)
        {
            VAR29 = VAR61;
            VAR30 = FUN9(VAR10, VAR55 + VAR29);
            if (VAR30 < 0)
            {
                FUN7(VAR13, "", VAR10);
                FUN3(1);
            }
        }
        else
        {
            VAR29 = 0;
            VAR30 = 0;
        }
        VAR42 = '';
    }
    else
    {
        VAR27 = 0;
        VAR28 = 0;
        VAR29 = 0;
        VAR30 = 0;
        VAR42 = '';
        for (VAR24 = 0; VAR24 < VAR3[VAR24] != ''; VAR24++)
        {
            VAR42 = VAR3[VAR24];
            if (VAR42 >= '' && VAR42 <= '')
                break;
            if (VAR42 >= '' && VAR42 <= '')
                break;
        }
        if (VAR42 == '')
        {
            fprintf(VAR44, "");
            FUN3(1);
        }
    }
    VAR62 = 0x80000000;
    FUN11(0xfe000000, 0x00200000);
    VAR19 = FUN12(VAR43 * sizeof(VAR17 *));
    VAR19[0] = FUN12(VAR43 * sizeof(VAR17) * 1);
    for (VAR24 = 0; VAR24 < VAR43; VAR24++)
    {
        switch (FUN13(VAR13))
        {
        case VAR63:
            VAR19[VAR24] = VAR19[0] + (VAR24 * 1);
            VAR19[VAR24][0] = ((VAR17 *)VAR13->VAR64)[VAR65];
            break;
        default:
            FUN7(VAR13, "");
            FUN3(1);
        }
    }
    if (FUN13(VAR13) != VAR63)
    {
        FUN7(VAR13, "");
        FUN3(1);
    }
    VAR18 = FUN14(&VAR38, 1, VAR19);
    VAR32 = FUN15(0xfec00000, VAR18);
    FUN16(VAR32, VAR5, VAR55 + VAR1, VAR1, VAR2, VAR26, VAR35);
    VAR37 = FUN17(NULL);
    FUN18(0x3f8, VAR37[4], VAR66[0]);
    for (VAR24 = 0; VAR24 < VAR67; VAR24++)
    {
        if (!VAR68[VAR24].VAR69)
            VAR68[VAR24].VAR69 = "";
        FUN19(VAR32, &VAR68[VAR24], -1);
    }
    FUN20(VAR32, &VAR70[0], 0);
    FUN21(&VAR41, VAR18[0x12]);
    FUN22(&VAR71);
    FUN23(&VAR71);
    VAR34 = FUN24(&VAR39, 0x2000);
    FUN25(VAR34, 0x2000);
    FUN26(&VAR40);
    FUN27(VAR32, 0x0017, 1, VAR38, VAR40, VAR41, VAR34, 0, NULL);
    if (VAR72)
    {
        FUN28(VAR32, 3, -1);
    }
    if (VAR73 != 15 && VAR73 != 32 && VAR73 != 8)
        VAR73 = 15;
    VAR22 = FUN29(VAR37[8], 0xFFF04000, 0x0074, VAR74, 59);
    VAR20.VAR75 = VAR22;
    VAR20.VAR76 = &VAR77;
    VAR20.VAR78 = &VAR79;
    FUN30(&VAR20, VAR74, "", VAR1, VAR42, VAR27, VAR28, VAR9, VAR29, VAR30, 0, VAR80, VAR81, VAR73);
    FUN31(0x0F00, 4, 1, &VAR82, NULL);
}