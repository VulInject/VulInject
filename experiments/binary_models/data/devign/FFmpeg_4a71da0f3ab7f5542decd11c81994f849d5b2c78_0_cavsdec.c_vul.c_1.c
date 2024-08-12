static int FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5 = &VAR2->VAR6.VAR5;
    int VAR7, VAR8;
    uint8_t VAR9[18];
    VAR10 *VAR11 = NULL;
    VAR10 *VAR12;
    FUN2(VAR2);
    for (VAR7 = 0; VAR7 < 4; VAR7++)
    {
        int VAR13, VAR14, VAR15;
        int VAR16 = VAR17[VAR7];
        VAR13 = VAR2->VAR18[VAR16 - 1];
        VAR14 = VAR2->VAR18[VAR16 - 3];
        VAR15 = FUN3(VAR13, VAR14);
        if (VAR15 == VAR19)
            VAR15 = VAR20;
        if (!FUN4(VAR5))
        {
            int VAR21 = FUN5(VAR5, 2);
            VAR15 = VAR21 + (VAR21 >= VAR15);
        }
        VAR2->VAR18[VAR16] = VAR15;
    }
    VAR8 = FUN6(VAR5);
    if (VAR8 > 6)
    {
        FUN7(VAR2->VAR6.VAR22, VAR23, "");
        return -1;
    }
    FUN8(VAR2, &VAR8);
    if (VAR2->VAR24 == VAR25)
        VAR3 = FUN6(VAR5);
    if (VAR3 > 63)
    {
        FUN7(VAR2->VAR6.VAR22, VAR23, "");
        return -1;
    }
    VAR2->VAR26 = VAR27[VAR3][0];
    if (VAR2->VAR26 && !VAR2->VAR28)
        VAR2->VAR29 = (VAR2->VAR29 + FUN9(VAR5)) & 63;
    for (VAR7 = 0; VAR7 < 4; VAR7++)
    {
        VAR12 = VAR2->VAR30 + VAR2->VAR31[VAR7];
        FUN10(VAR2, VAR9, &VAR11, VAR7);
        VAR2->VAR32[VAR2->VAR18[VAR17[VAR7]]](VAR12, VAR9, VAR11, VAR2->VAR33);
        if (VAR2->VAR26 & (1 << VAR7))
            FUN11(VAR2, VAR5, VAR34, 1, VAR2->VAR29, VAR12, VAR2->VAR33);
    }
    FUN12(VAR2);
    VAR2->VAR35[VAR8](VAR2->VAR36, &VAR2->VAR37[VAR2->VAR38 * 10], VAR2->VAR39, VAR2->VAR40);
    VAR2->VAR35[VAR8](VAR2->VAR41, &VAR2->VAR42[VAR2->VAR38 * 10], VAR2->VAR43, VAR2->VAR40);
    FUN13(VAR2);
    FUN14(VAR2, VAR44);
    FUN15(VAR2);
    return 0;
}