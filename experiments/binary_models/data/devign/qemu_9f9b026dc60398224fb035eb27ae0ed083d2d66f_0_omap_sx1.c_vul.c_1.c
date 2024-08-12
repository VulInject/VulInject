static void FUN1(VAR1 *VAR2, const int VAR3)
{
    struct VAR4 *VAR5;
    VAR6 *VAR7 = FUN2();
    VAR6 *VAR8 = FUN3(VAR6, 1);
    VAR6 *VAR9 = FUN3(VAR6, 1);
    VAR6 *VAR10 = FUN3(VAR6, 4);
    static uint32_t VAR11 = 0x00213090;
    static uint32_t VAR12 = 0x00215070;
    static uint32_t VAR13 = 0x00001139;
    static uint32_t VAR14 = 0x00001139;
    VAR15 *VAR16;
    int VAR17;
    uint32_t VAR18 = VAR19;
    int VAR20;
    if (VAR3 == 2)
    {
        VAR18 = VAR21;
    }
    VAR5 = FUN4(VAR7, VAR22.VAR23, VAR2->VAR24);
    FUN5(VAR8, NULL, "", VAR18, &VAR25);
    FUN6(VAR8);
    FUN7(VAR8, true);
    FUN8(VAR7, VAR26, VAR8);
    FUN9(&VAR10[0], NULL, &VAR27, &VAR11, "", VAR28 - VAR18);
    FUN8(VAR7, VAR26 + VAR18, &VAR10[0]);
    FUN9(&VAR10[2], NULL, &VAR27, &VAR13, "", VAR29);
    FUN8(VAR7, VAR30, &VAR10[2]);
    FUN9(&VAR10[3], NULL, &VAR27, &VAR14, "", VAR31);
    FUN8(VAR7, VAR30, &VAR10[3]);
    VAR17 = 0;
    VAR20 = 1;
    VAR20 = 0;
    if ((VAR16 = FUN10(VAR32, 0, VAR17)) != NULL)
    {
        if (!FUN11(VAR26, NULL, "", VAR18, FUN12(VAR16), VAR33, VAR18 / VAR33, 4, 0, 0, 0, 0, VAR20))
        {
            fprintf(VAR34, "", VAR17);
        }
        VAR17++;
    }
    if ((VAR3 == 1) && (VAR16 = FUN10(VAR32, 0, VAR17)) != NULL)
    {
        FUN5(VAR9, NULL, "", VAR35, &VAR25);
        FUN6(VAR9);
        FUN7(VAR9, true);
        FUN8(VAR7, VAR36, VAR9);
        FUN9(&VAR10[1], NULL, &VAR27, &VAR12, "", VAR37 - VAR35);
        FUN8(VAR7, VAR36 + VAR35, &VAR10[1]);
        if (!FUN11(VAR36, NULL, "", VAR35, FUN12(VAR16), VAR33, VAR35 / VAR33, 4, 0, 0, 0, 0, VAR20))
        {
            fprintf(VAR34, "", VAR17);
        }
        VAR17++;
    }
    else
    {
        FUN9(&VAR10[1], NULL, &VAR27, &VAR12, "", VAR37);
        FUN8(VAR7, VAR36, &VAR10[1]);
    }
    if (!VAR2->VAR38 && !VAR17 && !FUN13())
    {
        fprintf(VAR34, "");
        FUN14(1);
    }
    VAR22.VAR38 = VAR2->VAR38;
    VAR22.VAR39 = VAR2->VAR39;
    VAR22.VAR40 = VAR2->VAR40;
    FUN15(VAR5->VAR41, &VAR22);
}