int FUN1(VAR1 *VAR2, int VAR3, int VAR4, FUN2 (*VAR5)[2], VAR6 *VAR7, int VAR8)
{
    int VAR9, VAR10, VAR11, VAR12;
    int VAR13, VAR14, VAR15, VAR16;
    int VAR17, VAR18, VAR19, VAR20;
    int VAR21 = 0, VAR22 = 0;
    int VAR23[10][2];
    const int VAR24 = 1 + VAR2->VAR25;
    const int VAR26 = VAR2->VAR27 + 2;
    const int VAR28 = (VAR4 + 1) * VAR26 + VAR3 + 1;
    FUN3(VAR2, &VAR11, &VAR13, &VAR14, &VAR15, &VAR16, VAR8);
    VAR17 = VAR13 - VAR3 * 16;
    VAR19 = VAR15 - VAR3 * 16;
    VAR18 = VAR14 - VAR4 * 16;
    VAR20 = VAR16 - VAR4 * 16;
    switch (VAR2->VAR29)
    {
    case VAR30:
    default:
        FUN4(VAR2, &VAR9, &VAR10);
        VAR12 = 0;
        VAR9 -= VAR3 * 16;
        VAR10 -= VAR4 * 16;
        break;
    case VAR31:
        VAR12 = FUN5(VAR2, &VAR9, &VAR10, VAR11, VAR13, VAR14, VAR15, VAR16, VAR7);
        VAR9 -= VAR3 * 16;
        VAR10 -= VAR4 * 16;
        break;
    case VAR32:
        VAR12 = FUN6(VAR2, &VAR9, &VAR10, VAR11 / 2, VAR13, VAR14, VAR15, VAR16, VAR7);
        VAR9 -= VAR3 * 16;
        VAR10 -= VAR4 * 16;
        break;
    case VAR33:
        VAR12 = FUN7(VAR2, &VAR9, &VAR10, VAR11 / 2, VAR13, VAR14, VAR15, VAR16, VAR7);
        VAR9 -= VAR3 * 16;
        VAR10 -= VAR4 * 16;
        break;
    case VAR34:
    case VAR35:
    {
        VAR36[0] = VAR5[VAR28][0];
        VAR36[1] = VAR5[VAR28][1];
        VAR37[0] = VAR5[VAR28 - 1][0];
        VAR37[1] = VAR5[VAR28 - 1][1];
        VAR38[0] = VAR5[VAR28 + 1][0];
        VAR38[1] = VAR5[VAR28 + 1][1];
        VAR39[0] = VAR5[VAR28 + VAR26][0];
        VAR39[1] = VAR5[VAR28 + VAR26][1];
        if (VAR37[0] > (VAR19 << VAR24))
            VAR37[0] = (VAR19 << VAR24);
        if (VAR38[0] < (VAR17 << VAR24))
            VAR38[0] = (VAR17 << VAR24);
        if (VAR39[1] < (VAR18 << VAR24))
            VAR39[1] = (VAR18 << VAR24);
        if ((VAR4 == 0 || VAR2->VAR40))
        {
        }
        else
        {
            VAR41[0] = VAR5[VAR28 - VAR26][0];
            VAR41[1] = VAR5[VAR28 - VAR26][1];
            VAR42[0] = VAR5[VAR28 - VAR26 + 1][0];
            VAR42[1] = VAR5[VAR28 - VAR26 + 1][1];
            if (VAR41[1] > (VAR20 << VAR24))
                VAR41[1] = (VAR20 << VAR24);
            if (VAR42[0] < (VAR17 << VAR24))
                VAR42[0] = (VAR17 << VAR24);
            if (VAR42[1] > (VAR20 << VAR24))
                VAR42[1] = (VAR20 << VAR24);
            VAR43[0] = FUN8(VAR37[0], VAR41[0], VAR42[0]);
            VAR43[1] = FUN8(VAR37[1], VAR41[1], VAR42[1]);
        }
        VAR21 = VAR37[0];
        VAR22 = VAR37[1];
    }
        VAR12 = FUN9(VAR2, &VAR9, &VAR10, VAR23, VAR21, VAR22, VAR17, VAR18, VAR19, VAR20, VAR7);
        break;
    }
    VAR12 = FUN10(VAR2, &VAR9, &VAR10, VAR12, VAR17, VAR18, VAR19, VAR20, VAR21, VAR22, VAR7, VAR44, VAR45, VAR46, 0);
    VAR5[VAR28][0] = VAR9;
    VAR5[VAR28][1] = VAR10;
    return VAR12;
}