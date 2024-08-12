static int FUN1(VAR1 *VAR2, int VAR3, int64_t VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    VAR9 *VAR10;
    int VAR11, VAR12;
    int64_t VAR13, VAR14;
    VAR15 *VAR16;
    if (VAR7->VAR17)
        VAR3 = 0;
    if (!VAR7->VAR18)
    {
        FUN2(VAR2);
        VAR7->VAR18 |= 1;
    }
    FUN3(VAR3 >= 0);
    VAR10 = VAR2->VAR19[VAR3];
    VAR16 = VAR10->VAR8;
    VAR12 = FUN4(VAR10, VAR4 * FUN5(VAR16->VAR20, 1), VAR5);
    if (VAR12 < 0)
    {
        if (VAR10->VAR21 > 0)
            FUN6(VAR2, VAR22, "" VAR23 "" VAR23 "" VAR23 "", VAR4 * FUN5(VAR16->VAR20, 1), VAR10->VAR24[0].VAR4, VAR10->VAR24[VAR10->VAR21 - 1].VAR4);
        return VAR25;
    }
    VAR13 = VAR10->VAR24[VAR12].VAR13;
    VAR4 = VAR10->VAR24[VAR12].VAR4 / FUN5(VAR16->VAR20, 1);
    FUN6(VAR2, VAR26, "" VAR23 "" VAR23 "", VAR4, VAR12, VAR10->VAR24[VAR12].VAR4);
    if (VAR27 && VAR7->VAR17)
    {
        if (FUN7(VAR2->VAR28, VAR13, VAR29) < 0)
            return -1;
        FUN8(VAR7->VAR17, VAR4);
        VAR7->VAR3 = -1;
        return 0;
    }
    VAR14 = VAR13;
    for (VAR11 = 0; VAR11 < VAR2->VAR30; VAR11++)
    {
        VAR9 *VAR31 = VAR2->VAR19[VAR11];
        VAR15 *VAR32 = VAR31->VAR8;
        VAR32->VAR33 = VAR32->VAR34 = 0;
        if (VAR32->VAR35)
        {
            FUN9(VAR10, VAR31, VAR4);
            continue;
        }
        if (VAR31->VAR21 <= 0)
            continue;
        FUN3(FUN10(FUN11(VAR31->VAR36) - VAR32->VAR37 / (double)VAR32->VAR38) < FUN11(VAR31->VAR36) * 0.00000001);
        VAR12 = FUN4(VAR31, FUN12(VAR4, VAR10->VAR36, VAR31->VAR36) * FUN5(VAR32->VAR20, 1), VAR5 | VAR39 | (VAR31->VAR40->VAR41 != VAR42 ? VAR43 : 0));
        if (VAR12 < 0)
            VAR12 = 0;
        VAR32->VAR44 = VAR31->VAR24[VAR12].VAR13;
        VAR14 = FUN13(VAR14, VAR32->VAR44);
    }
    for (VAR11 = 0; VAR11 < VAR2->VAR30; VAR11++)
    {
        VAR9 *VAR31 = VAR2->VAR19[VAR11];
        VAR15 *VAR32 = VAR31->VAR8;
        if (VAR32->VAR35 || VAR31->VAR21 <= 0)
            continue;
        VAR12 = FUN4(VAR31, FUN12(VAR4, VAR10->VAR36, VAR31->VAR36) * FUN5(VAR32->VAR20, 1), VAR5 | VAR39 | (VAR31->VAR40->VAR41 != VAR42 ? VAR43 : 0));
        if (VAR12 < 0)
            VAR12 = 0;
        while (!VAR7->VAR45 && VAR12 > 0 && VAR31->VAR24[VAR12 - 1].VAR13 >= VAR14)
            VAR12--;
        VAR32->VAR46 = VAR31->VAR24[VAR12].VAR4;
    }
    if (FUN7(VAR2->VAR28, VAR14, VAR29) < 0)
    {
        FUN6(VAR2, VAR47, "");
        return -1;
    }
    VAR7->VAR3 = -1;
    VAR7->VAR48 = VAR49;
    return 0;
}