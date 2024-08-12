static void FUN1(int VAR1, int VAR2, const char *VAR3, VAR4 *VAR5, const char *VAR6, const char *VAR7, const char *VAR8, const char *VAR9)
{
    VAR10 *VAR11 = NULL, *VAR12[VAR13];
    char VAR14[1024];
    nvram_t VAR15;
    VAR16 *VAR17;
    int VAR18;
    int VAR19, VAR20, VAR21, VAR22;
    unsigned long VAR23;
    uint32_t VAR24, VAR25, VAR26, VAR27;
    VAR28 *VAR29;
    VAR30 *VAR31;
    int VAR32;
    VAR33 = FUN2(sizeof(VAR34));
    if (VAR33 == NULL)
        return;
    VAR19 = (VAR6 != NULL);
    if (VAR9 == NULL)
        VAR9 = "";
    for (VAR20 = 0; VAR20 < VAR35; VAR20++)
    {
        VAR11 = FUN3(VAR9);
        if (!VAR11)
        {
            fprintf(VAR36, "");
            FUN4(1);
        }
        if (VAR11->VAR37 & VAR38)
        {
            FUN5(VAR11, 7812500UL);
        }
        else
        {
            FUN5(VAR11, 100UL * 1000UL * 1000UL);
        }
        FUN6(&VAR39, VAR11);
        FUN7("", 0, 3, VAR40, VAR41, VAR11);
        VAR12[VAR20] = VAR11;
    }
    FUN8(0, VAR1, VAR42);
    VAR23 = VAR1 + VAR2;
    if (VAR43 == NULL)
        VAR43 = VAR44;
    snprintf(VAR14, sizeof(VAR14), "", VAR45, VAR43);
    VAR22 = FUN9(VAR14, VAR46 + VAR23);
    if (VAR22 < 0 || VAR22 > VAR47)
    {
        FUN10(VAR11, "", VAR14);
        FUN4(1);
    }
    if (VAR11->VAR48 < 0xFFF80000 && VAR22 < 0x00100000)
    {
        FUN10(VAR11, "");
    }
    VAR22 = (VAR22 + 0xfff) & ~0xfff;
    FUN8((VAR49)(-VAR22), VAR22, VAR23 | VAR50);
    if (VAR19)
    {
        VAR24 = VAR51;
        VAR25 = FUN9(VAR6, VAR46 + VAR24);
        if (VAR25 < 0)
        {
            FUN10(VAR11, "", VAR6);
            FUN4(1);
        }
        if (VAR8)
        {
            VAR26 = VAR52;
            VAR27 = FUN9(VAR8, VAR46 + VAR26);
            if (VAR27 < 0)
            {
                FUN10(VAR11, "", VAR8);
                FUN4(1);
            }
        }
        else
        {
            VAR26 = 0;
            VAR27 = 0;
        }
        VAR32 = '';
    }
    else
    {
        VAR24 = 0;
        VAR25 = 0;
        VAR26 = 0;
        VAR27 = 0;
        VAR32 = '';
        for (VAR20 = 0; VAR3[VAR20] != ''; VAR20++)
        {
            if (VAR3[VAR20] >= '' && VAR3[VAR20] <= '')
            {
                VAR32 = VAR3[VAR20];
                break;
            }
        }
        if (VAR32 == '')
        {
            fprintf(VAR36, "");
            FUN4(1);
        }
    }
    VAR53 = 0xc0000000;
    if (FUN11(VAR11) != VAR54)
    {
        FUN10(VAR11, "");
        FUN4(1);
    }
    VAR31 = FUN12(VAR55->VAR56[VAR57]);
    VAR29 = FUN13(VAR31);
    VAR18 = FUN14(0, VAR58, VAR59, VAR33);
    FUN8(0x80000000, 0x00800000, VAR18);
    FUN15(VAR29, VAR5, VAR46 + VAR1, VAR1, VAR2, 0, 0);
    FUN16(0x70, VAR31[8]);
    FUN17(0x3f8, VAR31[4], VAR60[0]);
    VAR21 = VAR61;
    if (VAR21 > VAR62)
        VAR21 = VAR62;
    for (VAR20 = 0; VAR20 < VAR21; VAR20++)
    {
        if (VAR63[VAR20].VAR64 == NULL || strcmp(VAR63[VAR20].VAR64, "") == 0)
        {
            FUN18(VAR65[VAR20], VAR31[VAR66[VAR20]], &VAR63[VAR20]);
        }
        else
        {
            FUN19(VAR29, &VAR63[VAR20], -1);
        }
    }
    for (VAR20 = 0; VAR20 < 2; VAR20++)
    {
        FUN20(VAR67[VAR20], VAR68[VAR20], VAR31[VAR69[VAR20]], VAR70[2 * VAR20], VAR70[2 * VAR20 + 1]);
    }
    FUN21(VAR31[1], VAR31[12], 0x60);
    FUN22(1);
    FUN23(VAR31[6], 2, 0, 0x3f0, VAR71);
    FUN24(0x61, 1, 1, VAR72, NULL);
    FUN25(0x61, 1, 1, VAR73, NULL);
    VAR33->VAR74 = VAR55->VAR56[VAR75];
    FUN24(0x398, 2, 1, &VAR76, VAR33);
    FUN25(0x398, 2, 1, &VAR77, VAR33);
    FUN24(0x0092, 0x01, 1, &VAR78, VAR33);
    FUN25(0x0092, 0x01, 1, &VAR79, VAR33);
    FUN24(0x0800, 0x52, 1, &VAR78, VAR33);
    FUN25(0x0800, 0x52, 1, &VAR79, VAR33);
    VAR18 = FUN14(0, VAR80, VAR81, NULL);
    FUN8(0xBFFFFFF0, 0x4, VAR18);
    VAR18 = FUN14(0, VAR82, VAR83, NULL);
    FUN8(0xFEFF0000, 0x1000, VAR18);
    if (VAR84)
    {
        FUN26(VAR29, 3, -1);
    }
    VAR17 = FUN27(VAR31[8], 0, 0x0074, VAR85, 59);
    if (VAR17 == NULL)
        return;
    VAR33->VAR15 = VAR17;
    VAR15.VAR86 = VAR17;
    VAR15.VAR87 = &VAR88;
    VAR15.VAR89 = &VAR90;
    FUN28(&VAR15, VAR85, "", VAR1, VAR32, VAR24, VAR25, VAR7, VAR26, VAR27, 0, VAR91, VAR92, VAR93);
    FUN25(0x0F00, 4, 1, &VAR94, NULL);
}