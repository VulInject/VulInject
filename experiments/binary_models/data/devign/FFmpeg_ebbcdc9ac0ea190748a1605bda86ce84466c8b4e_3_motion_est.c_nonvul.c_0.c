int FUN1(VAR1 *VAR2, int VAR3, int VAR4)
{
    int VAR5, VAR6, VAR7, VAR8;
    int VAR9, VAR10, VAR11, VAR12;
    int VAR13, VAR14, VAR15, VAR16;
    int VAR17 = 0, VAR18 = 0;
    int VAR19[10][2];
    const int VAR20 = 1 + VAR2->VAR21;
    VAR22 *const VAR23 = VAR2->VAR24.VAR23[VAR2->VAR25] + VAR26;
    const int VAR27 = VAR2->VAR28 + 2;
    const int VAR29 = VAR3 + 1 + (VAR4 + 1) * VAR27;
    assert(VAR2->VAR21 == 0 || VAR2->VAR21 == 1);
    VAR2->VAR24.VAR30 = FUN2(VAR2, VAR2->VAR31->VAR32);
    FUN3(VAR2, &VAR7, &VAR9, &VAR10, &VAR11, &VAR12);
    VAR13 = VAR9 - VAR3 * 16;
    VAR15 = VAR11 - VAR3 * 16;
    VAR14 = VAR10 - VAR4 * 16;
    VAR16 = VAR12 - VAR4 * 16;
    VAR2->VAR24.VAR33 = 0;
    VAR34[0] = VAR2->VAR35[VAR29 + 1][0];
    VAR34[1] = VAR2->VAR35[VAR29 + 1][1];
    if (VAR34[0] < (VAR13 << VAR20))
        VAR34[0] = (VAR13 << VAR20);
    if (VAR4 == VAR2->VAR36 - 1)
    {
        VAR17 = VAR34[0];
        VAR18 = VAR34[1];
        VAR37[0] = VAR38[0] = VAR39[0] = VAR37[1] = VAR38[1] = VAR39[1] = 0;
    }
    else
    {
        VAR37[0] = VAR2->VAR35[VAR29 + VAR27][0];
        VAR37[1] = VAR2->VAR35[VAR29 + VAR27][1];
        VAR38[0] = VAR2->VAR35[VAR29 + VAR27 - 1][0];
        VAR38[1] = VAR2->VAR35[VAR29 + VAR27 - 1][1];
        if (VAR37[1] < (VAR14 << VAR20))
            VAR37[1] = (VAR14 << VAR20);
        if (VAR38[0] > (VAR15 << VAR20))
            VAR38[0] = (VAR15 << VAR20);
        if (VAR38[1] < (VAR14 << VAR20))
            VAR38[1] = (VAR14 << VAR20);
        VAR39[0] = FUN4(VAR34[0], VAR37[0], VAR38[0]);
        VAR39[1] = FUN4(VAR34[1], VAR37[1], VAR38[1]);
        VAR17 = VAR39[0];
        VAR18 = VAR39[1];
    }
    VAR8 = VAR2->VAR24.FUN5(VAR2, 0, &VAR5, &VAR6, VAR19, VAR17, VAR18, VAR13, VAR14, VAR15, VAR16, &VAR2->VAR40, VAR2->VAR35, (1 << 16) >> VAR20, VAR23);
    VAR2->VAR35[VAR29][0] = VAR5 << VAR20;
    VAR2->VAR35[VAR29][1] = VAR6 << VAR20;
    return VAR8;
}