void FUN1(ram_addr_t VAR1, int VAR2, const char *VAR3, VAR4 *VAR5, const char *VAR6, const char *VAR7, const char *VAR8, const char *VAR9)
{
    char VAR10[1024];
    unsigned long VAR11;
    int VAR12;
    VAR13 *VAR14;
    VAR15 *VAR16;
    int VAR17;
    VAR18 *VAR19;
    int VAR20;
    VAR21 *VAR22[VAR23 * VAR24];
    if (VAR9 == NULL)
    {
        VAR9 = "";
        VAR9 = "";
    }
    VAR14 = FUN2(VAR9);
    if (!VAR14)
    {
        fprintf(VAR25, "");
        FUN3(1);
    }
    FUN4(VAR26, VAR14);
    FUN5(0, VAR1, VAR27);
    if (!VAR28)
    {
        VAR28 = FUN6(0, VAR29, VAR30, NULL);
    }
    FUN5(0x1fbf0000, 0x10000, VAR28);
    VAR11 = VAR1 + VAR2;
    if (VAR31 == NULL)
        VAR31 = VAR32;
    snprintf(VAR10, sizeof(VAR10), "", VAR33, VAR31);
    VAR12 = FUN7(VAR10, VAR34 + VAR11);
    if ((VAR12 > 0) && (VAR12 <= VAR35))
    {
        FUN5(0x1fc00000, VAR35, VAR11 | VAR36);
    }
    else if ((VAR20 = FUN8(VAR37, 0, 0)) > -1)
    {
        uint32_t VAR38 = 0x00400000;
        FUN5(0x1fc00000, VAR38, FUN9(VAR38) | VAR36);
        if (!FUN10(0x1fc00000, FUN9(VAR38), VAR39[VAR20].VAR40, VAR41, VAR38 / VAR41, 4, 0, 0, 0, 0))
        {
            fprintf(VAR25, "");
        }
    }
    else
    {
        fprintf(VAR25, "", VAR10);
    }
    if (VAR6)
    {
        VAR42.VAR1 = VAR1;
        VAR42.VAR6 = VAR6;
        VAR42.VAR7 = VAR7;
        VAR42.VAR8 = VAR8;
        FUN11(VAR14);
    }
    FUN12(VAR14);
    FUN13(VAR14);
    VAR19 = FUN14(VAR14->VAR43[2]);
    VAR16 = FUN15(0x70, VAR19[8]);
    FUN16(0x14000000, 0x00010000);
    VAR44 = 0x10000000;
    VAR45 = FUN17(0x40, VAR19[0]);
    for (VAR17 = 0; VAR17 < VAR46; VAR17++)
    {
        if (VAR47[VAR17])
        {
            FUN18(VAR48[VAR17], VAR19[VAR49[VAR17]], 115200, VAR47[VAR17]);
        }
    }
    FUN19(VAR5, VAR34 + VAR1, VAR1, VAR2);
    if (VAR50[0].VAR51)
        FUN20(0x300, VAR19[9], &VAR50[0]);
    if (FUN21(VAR52) >= VAR23)
    {
        fprintf(VAR25, "");
        FUN3(1);
    }
    for (VAR17 = 0; VAR17 < VAR23 * VAR24; VAR17++)
    {
        VAR20 = FUN8(VAR52, VAR17 / VAR24, VAR17 % VAR24);
        if (VAR20 != -1)
            VAR22[VAR17] = VAR39[VAR20].VAR40;
        else
            VAR22[VAR17] = NULL;
    }
    for (VAR17 = 0; VAR17 < VAR23; VAR17++)
        FUN22(VAR53[VAR17], VAR54[VAR17], VAR19[VAR55[VAR17]], VAR22[VAR24 * VAR17], VAR22[VAR24 * VAR17 + 1]);
    FUN23(VAR19[1], VAR19[12], 0x60);
}