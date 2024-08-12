static int FUN1(VAR1 *VAR2, int VAR3, int64_t VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    VAR9 *VAR10;
    int VAR11, VAR12;
    int64_t VAR13;
    VAR14 *VAR15;
    if (!VAR7->VAR16)
    {
        FUN2(VAR2);
        VAR7->VAR16 = 1;
    }
    assert(VAR3 >= 0);
    VAR10 = VAR2->VAR17[VAR3];
    VAR15 = VAR10->VAR8;
    VAR12 = FUN3(VAR10, VAR4 * FUN4(VAR15->VAR18, 1), VAR5);
    if (VAR12 < 0)
        return VAR19;
    VAR13 = VAR10->VAR20[VAR12].VAR13;
    VAR4 = VAR10->VAR20[VAR12].VAR4 / FUN4(VAR15->VAR18, 1);
    FUN5(VAR2, "" VAR21 "" VAR21 "", VAR4, VAR12, VAR10->VAR20[VAR12].VAR4);
    if (VAR22 && VAR7->VAR23)
    {
        assert(VAR3 == 0);
        FUN6(VAR7->VAR23, VAR4);
        FUN7(VAR2->VAR24, VAR13, VAR25);
        VAR7->VAR3 = -1;
        return 0;
    }
    for (VAR11 = 0; VAR11 < VAR2->VAR26; VAR11++)
    {
        VAR9 *VAR27 = VAR2->VAR17[VAR11];
        VAR14 *VAR28 = VAR27->VAR8;
        VAR28->VAR29 = VAR28->VAR30 = 0;
        if (VAR28->VAR31)
        {
            FUN8(VAR10, VAR27, VAR4);
            continue;
        }
        if (VAR27->VAR32 <= 0)
            continue;
        assert((VAR33)VAR27->VAR34.VAR35 * VAR28->VAR36 == (VAR33)VAR27->VAR34.VAR37 * VAR28->VAR38);
        VAR12 = FUN3(VAR27, FUN9(VAR4, VAR10->VAR34, VAR27->VAR34) * FUN4(VAR28->VAR18, 1), VAR5 | VAR39);
        if (VAR12 < 0)
            VAR12 = 0;
        if (!VAR7->VAR40)
        {
            while (VAR12 > 0 && VAR27->VAR20[VAR12].VAR13 > VAR13)
                VAR12--;
            while (VAR12 + 1 < VAR27->VAR32 && VAR27->VAR20[VAR12].VAR13 < VAR13)
                VAR12++;
        }
        FUN5(VAR2, "" VAR21 "" VAR21 "", VAR4, VAR12, VAR27->VAR20[VAR12].VAR4);
        VAR28->VAR41 = VAR27->VAR20[VAR12].VAR4;
    }
    FUN7(VAR2->VAR24, VAR13, VAR25);
    VAR7->VAR3 = -1;
    return 0;
}