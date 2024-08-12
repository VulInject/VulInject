static int FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5 = VAR2->VAR6;
    VAR7 *VAR8;
    VAR9 *VAR10;
    int VAR11, VAR12 = 0, VAR13, VAR14;
    int VAR15 = -1;
    int VAR16 = VAR17;
    int VAR18 = 0;
    int64_t VAR19 = VAR5->VAR20;
    VAR21 *VAR22;
    const int64_t VAR23 = FUN2(VAR2->VAR23, 90000, VAR24);
VAR25:
    for (VAR11 = 0; VAR11 < VAR2->VAR26; VAR11++)
    {
        VAR7 *VAR8 = VAR2->VAR27[VAR11];
        VAR9 *VAR10 = VAR8->VAR6;
        const int VAR28 = FUN3(VAR10->VAR29);
        const int VAR30 = VAR10->VAR31 - VAR10->VAR32;
        int VAR33 = 1024LL * VAR30 / VAR10->VAR31;
        VAR21 *VAR34 = VAR10->VAR35;
        if (VAR5->VAR36 > VAR28 && !VAR3 && VAR8->VAR37->VAR38 != VAR39)
            return 0;
        if (VAR28 == 0)
            continue;
        FUN4(VAR28 > 0);
        if (VAR30 < VAR5->VAR36 && !VAR18)
            continue;
        if (VAR34 && VAR34->VAR40 - VAR19 > VAR23)
            continue;
        if (VAR33 > VAR16)
        {
            VAR16 = VAR33;
            VAR15 = VAR11;
            VAR12 = VAR30;
        }
    }
    if (VAR15 < 0)
    {
        int64_t VAR41 = VAR42;
        for (VAR11 = 0; VAR11 < VAR2->VAR26; VAR11++)
        {
            VAR7 *VAR8 = VAR2->VAR27[VAR11];
            VAR9 *VAR10 = VAR8->VAR6;
            VAR21 *VAR43 = VAR10->VAR44;
            if (VAR43 && VAR43->VAR40 < VAR41)
                VAR41 = VAR43->VAR40;
        }
        FUN5(VAR2, "", VAR19 / 90000.0, VAR41 / 90000.0);
        if (VAR41 == VAR42)
            return 0;
        if (VAR19 >= VAR41 + 1 && !VAR18)
        {
            FUN6(VAR2, VAR45, "");
            VAR18 = 1;
        }
        VAR19 = FUN7(VAR41 + 1, VAR19);
        if (FUN8(VAR2, VAR19) < 0)
            return -1;
        goto VAR25;
    }
    assert(VAR15 >= 0);
    VAR8 = VAR2->VAR27[VAR15];
    VAR10 = VAR8->VAR6;
    assert(FUN3(VAR10->VAR29) > 0);
    assert(VAR12 >= VAR5->VAR36 || VAR18);
    VAR22 = VAR10->VAR35;
    if (VAR22->VAR46 == VAR22->VAR47)
    {
        VAR14 = 0;
    }
    else
    {
        VAR14 = VAR22->VAR46;
        VAR22 = VAR22->VAR48;
    }
    if (VAR22)
    {
        FUN5(VAR2, "", VAR22->VAR40 / 90000.0, VAR22->VAR49 / 90000.0, VAR19 / 90000.0, VAR15);
        VAR13 = FUN9(VAR2, VAR15, VAR22->VAR49, VAR22->VAR40, VAR19, VAR14);
    }
    else
    {
        assert(FUN3(VAR10->VAR29) == VAR14);
        VAR13 = FUN9(VAR2, VAR15, VAR50, VAR50, VAR19, VAR14);
    }
    if (VAR5->VAR51)
    {
        int VAR52;
        while ((VAR52 = FUN10(VAR2, VAR10->VAR35->VAR49)) >= VAR5->VAR36)
        {
            FUN11(VAR2);
            VAR5->VAR20 += VAR5->VAR36 * 90000LL / (VAR5->VAR53 * 50LL);
        }
    }
    VAR10->VAR32 += VAR13;
    VAR5->VAR20 += VAR5->VAR36 * 90000LL / (VAR5->VAR53 * 50LL);
    while (VAR10->VAR35 && VAR10->VAR35->VAR46 <= VAR13)
    {
        VAR13 -= VAR10->VAR35->VAR46;
        VAR10->VAR35 = VAR10->VAR35->VAR48;
    }
    if (VAR13)
        VAR10->VAR35->VAR46 -= VAR13;
    if (FUN8(VAR2, VAR5->VAR20) < 0)
        return -1;
    return 1;
}