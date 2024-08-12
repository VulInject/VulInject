static int FUN1(VAR1 *VAR2, int VAR3, int64_t VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    VAR9 *VAR10;
    int VAR11, VAR12;
    int64_t VAR13, VAR14;
    VAR15 *VAR16;
    if (!VAR7->VAR17)
    {
        FUN2(VAR2);
        VAR7->VAR17 = 1;
    }
    assert(VAR3 >= 0);
    VAR10 = VAR2->VAR18[VAR3];
    VAR16 = VAR10->VAR8;
    VAR12 = FUN3(VAR10, VAR4 * FUN4(VAR16->VAR19, 1), VAR5);
    if (VAR12 < 0)
        return -1;
    VAR13 = VAR10->VAR20[VAR12].VAR13;
    VAR4 = VAR10->VAR20[VAR12].VAR4 / FUN4(VAR16->VAR19, 1);
    if (VAR21 && VAR7->VAR22)
    {
        assert(VAR3 == 0);
        FUN5(VAR7->VAR22, VAR4);
        FUN6(VAR2->VAR23, VAR13, VAR24);
        VAR7->VAR3 = -1;
        return 0;
    }
    VAR14 = VAR13;
    for (VAR11 = 0; VAR11 < VAR2->VAR25; VAR11++)
    {
        VAR9 *VAR26 = VAR2->VAR18[VAR11];
        VAR15 *VAR27 = VAR26->VAR8;
        VAR27->VAR28 = VAR27->VAR29 = 0;
        if (VAR27->VAR30)
        {
            FUN7(VAR10, VAR26, VAR4);
            continue;
        }
        if (VAR26->VAR31 <= 0)
            continue;
        assert((VAR32)VAR26->VAR33.VAR34 * VAR27->VAR35 == (VAR32)VAR26->VAR33.VAR36 * VAR27->VAR37);
        VAR12 = FUN3(VAR26, FUN8(VAR4, VAR10->VAR33, VAR26->VAR33) * FUN4(VAR27->VAR19, 1), VAR5 | VAR38 | (VAR26->VAR39->VAR40 != VAR41 ? VAR42 : 0));
        if (VAR12 < 0)
            VAR12 = 0;
        VAR27->VAR43 = VAR26->VAR20[VAR12].VAR13;
        VAR14 = FUN9(VAR14, VAR27->VAR43);
    }
    for (VAR11 = 0; VAR11 < VAR2->VAR25; VAR11++)
    {
        VAR9 *VAR26 = VAR2->VAR18[VAR11];
        VAR15 *VAR27 = VAR26->VAR8;
        if (VAR27->VAR30 || VAR26->VAR31 <= 0)
            continue;
        VAR12 = FUN3(VAR26, FUN8(VAR4, VAR10->VAR33, VAR26->VAR33) * FUN4(VAR27->VAR19, 1), VAR5 | VAR38 | (VAR26->VAR39->VAR40 != VAR41 ? VAR42 : 0));
        if (VAR12 < 0)
            VAR12 = 0;
        while (!VAR7->VAR44 && VAR12 > 0 && VAR26->VAR20[VAR12 - 1].VAR13 >= VAR14)
            VAR12--;
        VAR27->VAR45 = VAR26->VAR20[VAR12].VAR4;
    }
    FUN6(VAR2->VAR23, VAR14, VAR24);
    VAR7->VAR3 = -1;
    VAR7->VAR46 = VAR47;
    return 0;
}