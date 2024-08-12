static void FUN1(VAR1 *VAR2)
{
    const char *VAR3 = VAR2->VAR3;
    const char *VAR4 = VAR2->VAR4;
    const char *VAR5 = VAR2->VAR5;
    const char *VAR6 = VAR2->VAR6;
    VAR7 *VAR8 = FUN2();
    struct VAR9 *VAR10;
    int VAR11 = 0x00800000;
    int VAR12 = VAR13.VAR14;
    static uint32_t VAR15 = 0xffffffff;
    static uint32_t VAR16 = 0x0000e1a0;
    static uint32_t VAR17 = 0x0000e1a0;
    static uint32_t VAR18 = 0xe1a0e1a0;
    int VAR19, VAR20 = 0;
    VAR7 *VAR21 = FUN3(VAR7, 1);
    VAR7 *VAR22 = FUN3(VAR7, 4);
    VAR10 = FUN4(VAR8, VAR12, VAR3);
    FUN5(VAR21, NULL, "", VAR11, &VAR23);
    FUN6(VAR21);
    FUN7(VAR21, true);
    FUN8(VAR8, VAR24, VAR21);
    FUN9(&VAR22[0], NULL, &VAR25, &VAR15, "", VAR26 - VAR11);
    FUN8(VAR8, VAR24 + VAR11, &VAR22[0]);
    FUN9(&VAR22[1], NULL, &VAR25, &VAR16, "", VAR27);
    FUN8(VAR8, VAR28, &VAR22[1]);
    FUN9(&VAR22[2], NULL, &VAR25, &VAR17, "", VAR29);
    FUN8(VAR8, VAR30, &VAR22[2]);
    FUN9(&VAR22[3], NULL, &VAR25, &VAR18, "", VAR31);
    FUN8(VAR8, VAR32, &VAR22[3]);
    FUN10(VAR10);
    FUN11(VAR33, VAR10);
    FUN12(VAR10);
    if (VAR34)
    {
        VAR19 = FUN13(VAR35[0].VAR36);
        if (VAR19 > VAR11)
        {
            fprintf(VAR37, "", VAR38, VAR19, VAR11);
            VAR19 = 0;
        }
        if (VAR19 > 0)
        {
            VAR19 = FUN14(VAR35[0].VAR36, VAR24, VAR11);
            VAR20 = 1;
        }
        if (VAR19 < 0)
        {
            fprintf(VAR37, "", VAR38, VAR35[0].VAR36);
        }
    }
    if (!VAR20 && !VAR4 && !FUN15())
    {
        fprintf(VAR37, "");
        FUN16(1);
    }
    VAR13.VAR4 = VAR4;
    VAR13.VAR5 = VAR5;
    VAR13.VAR6 = VAR6;
    FUN17(VAR10->VAR39, &VAR13);
}