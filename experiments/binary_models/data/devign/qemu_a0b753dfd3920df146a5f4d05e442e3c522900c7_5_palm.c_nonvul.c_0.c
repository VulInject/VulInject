static void FUN1(ram_addr_t VAR1, int VAR2, const char *VAR3, const char *VAR4, const char *VAR5, const char *VAR6, const char *VAR7)
{
    struct VAR8 *VAR9;
    int VAR10 = 0x00800000;
    int VAR11 = VAR12.VAR1;
    int VAR13;
    static uint32_t VAR14 = 0xffffffff;
    static uint32_t VAR15 = 0x0000e1a0;
    static uint32_t VAR16 = 0x0000e1a0;
    static uint32_t VAR17 = 0xe1a0e1a0;
    ram_addr_t VAR18;
    int VAR19, VAR20 = 0;
    VAR21 *VAR22 = FUN2();
    VAR9 = FUN3(VAR11, VAR7);
    FUN4(VAR23, VAR10, (VAR18 = FUN5(VAR10)) | VAR24);
    VAR13 = FUN6(0, VAR25, VAR26, &VAR14);
    FUN4(VAR23 + VAR10, VAR27 - VAR10, VAR13);
    VAR13 = FUN6(0, VAR25, VAR26, &VAR15);
    FUN4(VAR28, VAR29, VAR13);
    VAR13 = FUN6(0, VAR25, VAR26, &VAR16);
    FUN4(VAR30, VAR31, VAR13);
    VAR13 = FUN6(0, VAR25, VAR26, &VAR17);
    FUN4(VAR32, VAR33, VAR13);
    FUN7(VAR9);
    FUN8(VAR34, VAR9);
    FUN9(VAR9);
    if (VAR35)
    {
        VAR19 = FUN10(VAR36[0]);
        if (VAR19 > VAR10)
        {
            fprintf(VAR37, "", VAR38, VAR19, VAR10);
            VAR19 = 0;
        }
        if (VAR19 > 0)
        {
            VAR19 = FUN11(VAR36[0], VAR23, VAR10);
            VAR20 = 1;
            VAR9->VAR39->VAR40[15] = 0x00000000;
        }
        if (VAR19 < 0)
        {
            fprintf(VAR37, "", VAR38, VAR36[0]);
        }
    }
    if (!VAR20 && !VAR4)
    {
        fprintf(VAR37, "");
        FUN12(1);
    }
    if (VAR4)
    {
        VAR9->VAR39->VAR40[15] = VAR12.VAR41;
        VAR12.VAR4 = VAR4;
        VAR12.VAR5 = VAR5;
        VAR12.VAR6 = VAR6;
        FUN13(VAR9->VAR39, &VAR12);
    }
    VAR22->VAR42 = FUN14(VAR22, 320, 320);
    FUN15(VAR22);
}