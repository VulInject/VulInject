static int FUN1(VAR1 *VAR2, int VAR3, int VAR4, FUN2 (*VAR5)[2], VAR6 *VAR7, int VAR8)
{
    int VAR9, VAR10, VAR11, VAR12;
    int VAR13, VAR14, VAR15, VAR16;
    int VAR17, VAR18, VAR19, VAR20;
    int VAR21 = 0, VAR22 = 0;
    int VAR23[10][2];
    const int VAR24 = 1 + VAR2->VAR25;
    const int VAR26 = VAR2->VAR27 + 2;
    const int VAR28 = (VAR4 + 1) * VAR26 + VAR3 + 1;
    VAR29 *const VAR30 = VAR7->VAR31[0];
    VAR32 *const VAR33 = VAR2->VAR34.VAR33[VAR8] + VAR35;
    int VAR36;
    VAR2->VAR34.VAR37 = FUN3(VAR2, VAR2->VAR38->VAR39);
    VAR2->VAR34.VAR40 = FUN3(VAR2, VAR2->VAR38->VAR41);
    VAR2->VAR34.VAR42 = FUN3(VAR2, VAR2->VAR38->VAR43);
    FUN4(VAR2, &VAR11, &VAR13, &VAR14, &VAR15, &VAR16);
    VAR17 = VAR13 - VAR3 * 16;
    VAR19 = VAR15 - VAR3 * 16;
    VAR18 = VAR14 - VAR4 * 16;
    VAR20 = VAR16 - VAR4 * 16;
    switch (VAR2->VAR44)
    {
    case VAR45:
    default:
        FUN5(VAR2, &VAR9, &VAR10);
        VAR12 = 0;
        VAR9 -= VAR3 * 16;
        VAR10 -= VAR4 * 16;
        break;
    case VAR46:
        VAR12 = FUN6(VAR2, &VAR9, &VAR10, VAR11, VAR13, VAR14, VAR15, VAR16, VAR30);
        VAR9 -= VAR3 * 16;
        VAR10 -= VAR4 * 16;
        break;
    case VAR47:
        VAR12 = FUN7(VAR2, &VAR9, &VAR10, VAR11 / 2, VAR13, VAR14, VAR15, VAR16, VAR30);
        VAR9 -= VAR3 * 16;
        VAR10 -= VAR4 * 16;
        break;
    case VAR48:
        VAR12 = FUN8(VAR2, &VAR9, &VAR10, VAR11 / 2, VAR13, VAR14, VAR15, VAR16, VAR30);
        VAR9 -= VAR3 * 16;
        VAR10 -= VAR4 * 16;
        break;
    case VAR49:
    case VAR50:
    {
        VAR51[0] = VAR5[VAR28 - 1][0];
        VAR51[1] = VAR5[VAR28 - 1][1];
        if (VAR51[0] > (VAR19 << VAR24))
            VAR51[0] = (VAR19 << VAR24);
        if (VAR4)
        {
            VAR52[0] = VAR5[VAR28 - VAR26][0];
            VAR52[1] = VAR5[VAR28 - VAR26][1];
            VAR53[0] = VAR5[VAR28 - VAR26 + 1][0];
            VAR53[1] = VAR5[VAR28 - VAR26 + 1][1];
            if (VAR52[1] > (VAR20 << VAR24))
                VAR52[1] = (VAR20 << VAR24);
            if (VAR53[0] < (VAR17 << VAR24))
                VAR53[0] = (VAR17 << VAR24);
            if (VAR53[1] > (VAR20 << VAR24))
                VAR53[1] = (VAR20 << VAR24);
            VAR54[0] = FUN9(VAR51[0], VAR52[0], VAR53[0]);
            VAR54[1] = FUN9(VAR51[1], VAR52[1], VAR53[1]);
        }
        VAR21 = VAR51[0];
        VAR22 = VAR51[1];
    }
        if (VAR5 == VAR2->VAR55)
        {
            VAR36 = (VAR2->VAR56 << 16) / (VAR2->VAR57 << VAR24);
        }
        else
        {
            VAR36 = ((VAR2->VAR56 - VAR2->VAR57) << 16) / (VAR2->VAR57 << VAR24);
        }
        VAR12 = VAR2->VAR34.VAR58[0](VAR2, 0, &VAR9, &VAR10, VAR23, VAR21, VAR22, VAR17, VAR18, VAR19, VAR20, VAR7, VAR2->VAR59, VAR36, VAR33);
        break;
    }
    VAR12 = VAR2->VAR34.FUN10(VAR2, &VAR9, &VAR10, VAR12, VAR17, VAR18, VAR19, VAR20, VAR21, VAR22, VAR7, 0, 0, VAR33);
    if (VAR2->VAR38->VAR41 != VAR2->VAR38->VAR43 && !VAR2->VAR34.VAR60)
        VAR12 = VAR2->VAR34.FUN11(VAR2, VAR9, VAR10, VAR21, VAR22, VAR7, VAR33);
    VAR5[VAR28][0] = VAR9;
    VAR5[VAR28][1] = VAR10;
    return VAR12;
}