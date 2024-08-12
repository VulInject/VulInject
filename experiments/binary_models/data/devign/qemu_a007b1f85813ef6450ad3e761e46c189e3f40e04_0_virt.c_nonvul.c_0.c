static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6;
    VAR7 *VAR8;
    const char *VAR9;
    int VAR10;
    VAR9 = FUN2();
    VAR6 = FUN3(NULL, VAR9);
    FUN4(VAR6, "", 2);
    FUN4(VAR6, "", VAR11);
    FUN4(VAR6, "", VAR12 + 32);
    FUN5(VAR6);
    VAR8 = FUN6(VAR6);
    FUN7(VAR8, 0, VAR2->VAR13[VAR14].VAR15);
    FUN7(VAR8, 1, VAR2->VAR13[VAR16].VAR15);
    for (VAR10 = 0; VAR10 < VAR11; VAR10++)
    {
        VAR5 *VAR17 = FUN8(FUN9(VAR10));
        int VAR18 = VAR12 + VAR10 * VAR19 + VAR20;
        int VAR21;
        const int VAR22[] = {
            [VAR23] = VAR24,
            [VAR25] = VAR26,
            [VAR27] = VAR28,
            [VAR29] = VAR30,
        };
        for (VAR21 = 0; VAR21 < FUN10(VAR22); VAR21++)
        {
            FUN11(VAR17, VAR21, FUN12(VAR6, VAR18 + VAR22[VAR21]));
        }
        FUN13(VAR8, VAR10, FUN12(VAR17, VAR31));
        FUN13(VAR8, VAR10 + VAR11, FUN12(VAR17, VAR32));
    }
    for (VAR10 = 0; VAR10 < VAR12; VAR10++)
    {
        VAR4[VAR10] = FUN12(VAR6, VAR10);
    }
    FUN14(VAR2);
    FUN15(VAR2, VAR4);
}