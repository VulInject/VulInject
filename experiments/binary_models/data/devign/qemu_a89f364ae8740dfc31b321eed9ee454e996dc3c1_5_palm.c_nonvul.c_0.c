static void FUN1(VAR1 *VAR2)
{
    const char *VAR3 = VAR2->VAR3;
    const char *VAR4 = VAR2->VAR4;
    const char *VAR5 = VAR2->VAR5;
    VAR6 *VAR7 = FUN2();
    struct VAR8 *VAR9;
    int VAR10 = 0x00800000;
    int VAR11 = VAR12.VAR13;
    static uint32_t VAR14 = 0xffffffff;
    static uint32_t VAR15 = 0x0000e1a0;
    static uint32_t VAR16 = 0x0000e1a0;
    static uint32_t VAR17 = 0xe1a0e1a0;
    int VAR18, VAR19 = 0;
    VAR6 *VAR20 = FUN3(VAR6, 1);
    VAR6 *VAR21 = FUN3(VAR6, 4);
    VAR9 = FUN4(VAR7, VAR11, VAR2->VAR22);
    FUN5(VAR20, NULL, "", VAR10, &VAR23);
    FUN6(VAR20, true);
    FUN7(VAR7, VAR24, VAR20);
    FUN8(&VAR21[0], NULL, &VAR25, &VAR14, "", VAR26 - VAR10);
    FUN7(VAR7, VAR24 + VAR10, &VAR21[0]);
    FUN8(&VAR21[1], NULL, &VAR25, &VAR15, "", VAR27);
    FUN7(VAR7, VAR28, &VAR21[1]);
    FUN8(&VAR21[2], NULL, &VAR25, &VAR16, "", VAR29);
    FUN7(VAR7, VAR30, &VAR21[2]);
    FUN8(&VAR21[3], NULL, &VAR25, &VAR17, "", VAR31);
    FUN7(VAR7, VAR32, &VAR21[3]);
    FUN9(VAR9);
    FUN10(VAR33, VAR9);
    FUN11(VAR9);
    if (VAR34)
    {
        VAR18 = FUN12(VAR35[0].VAR36);
        if (VAR18 > VAR10)
        {
            fprintf(VAR37, "", VAR38, VAR18, VAR10);
            VAR18 = 0;
        }
        if (VAR18 > 0)
        {
            VAR18 = FUN13(VAR35[0].VAR36, VAR24, VAR10);
            VAR19 = 1;
        }
        if (VAR18 < 0)
        {
            fprintf(VAR37, "", VAR38, VAR35[0].VAR36);
        }
    }
    if (!VAR19 && !VAR3 && !FUN14())
    {
        fprintf(VAR37, "");
        FUN15(1);
    }
    VAR12.VAR3 = VAR3;
    VAR12.VAR4 = VAR4;
    VAR12.VAR5 = VAR5;
    FUN16(VAR9->VAR39, &VAR12);
}