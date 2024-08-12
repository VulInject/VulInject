static int FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5 = &VAR2->VAR5;
    unsigned VAR6;
    int VAR7;
    uint8_t VAR8[18];
    VAR9 *VAR10 = NULL;
    VAR9 *VAR11;
    FUN2(VAR2);
    for (VAR7 = 0; VAR7 < 4; VAR7++)
    {
        int VAR12, VAR13, VAR14;
        int VAR15 = VAR16[VAR7];
        VAR12 = VAR2->VAR17[VAR15 - 1];
        VAR13 = VAR2->VAR17[VAR15 - 3];
        VAR14 = FUN3(VAR12, VAR13);
        if (VAR14 == VAR18)
            VAR14 = VAR19;
        if (!FUN4(VAR5))
        {
            int VAR20 = FUN5(VAR5, 2);
            VAR14 = VAR20 + (VAR20 >= VAR14);
        }
        VAR2->VAR17[VAR15] = VAR14;
    }
    VAR6 = FUN6(VAR5);
    if (VAR6 > 6)
    {
        FUN7(VAR2->VAR21, VAR22, "");
        return VAR23;
    }
    FUN8(VAR2, &VAR6);
    if (VAR2->VAR24.VAR25->VAR26 == VAR27)
        VAR3 = FUN6(VAR5);
    if (VAR3 > 63 || VAR3 < 0)
    {
        FUN7(VAR2->VAR21, VAR22, "");
        return VAR23;
    }
    VAR2->VAR28 = VAR29[VAR3][0];
    if (VAR2->VAR28 && !VAR2->VAR30)
        VAR2->VAR31 = (VAR2->VAR31 + FUN9(VAR5)) & 63;
    for (VAR7 = 0; VAR7 < 4; VAR7++)
    {
        VAR11 = VAR2->VAR32 + VAR2->VAR33[VAR7];
        FUN10(VAR2, VAR8, &VAR10, VAR7);
        VAR2->VAR34[VAR2->VAR17[VAR16[VAR7]]](VAR11, VAR8, VAR10, VAR2->VAR35);
        if (VAR2->VAR28 & (1 << VAR7))
            FUN11(VAR2, VAR5, VAR36, 1, VAR2->VAR31, VAR11, VAR2->VAR35);
    }
    FUN12(VAR2);
    VAR2->VAR37[VAR6](VAR2->VAR38, &VAR2->VAR39[VAR2->VAR40 * 10], VAR2->VAR41, VAR2->VAR42);
    VAR2->VAR37[VAR6](VAR2->VAR43, &VAR2->VAR44[VAR2->VAR40 * 10], VAR2->VAR45, VAR2->VAR42);
    FUN13(VAR2);
    FUN14(VAR2, VAR46);
    FUN15(VAR2);
    return 0;
}