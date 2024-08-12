static int FUN1(VAR1 *VAR2, int VAR3, const VAR4 *VAR5, int VAR6, int64_t VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    VAR11 *VAR12 = &VAR9->VAR12[VAR3];
    VAR13 *VAR14 = &VAR2->VAR15;
    int VAR16 = 0, VAR17 = 0;
    VAR18 *VAR19;
    int64_t VAR20, VAR21;
    int VAR22, VAR23, VAR24, VAR25, VAR26, VAR27, VAR28;
    const int64_t VAR29 = FUN2(VAR14);
    if (VAR3 > VAR2->VAR30)
        return 1;
    VAR7 = (FUN3(VAR7, VAR12->VAR31, VAR12->VAR32) + VAR33 / 2) / VAR33;
    VAR19 = &VAR2->VAR34[VAR3]->VAR35;
    VAR16 = VAR19->VAR36->VAR16;
    VAR21 = VAR7 - VAR12->VAR37;
    VAR22 = 0;
    if (VAR29 + VAR6 + 20 - FUN4(VAR9->VAR38[1], VAR9->VAR38[2]) > VAR39)
        VAR22 = 1;
    if (VAR16)
    {
        if (VAR22 == 1 && VAR29 + VAR6 - VAR9->VAR38[2] > VAR40)
            VAR22 = 2;
        if (!VAR12->VAR41)
            VAR22 = 2;
    }
    if (VAR22 > 0)
    {
        FUN5(VAR9, VAR14, 0, 0);
        FUN6(VAR2);
        VAR17 = 1;
    }
    VAR20 = VAR7 & ((1 << VAR12->VAR42) - 1);
    VAR23 = VAR43;
    VAR24 = -1;
    for (VAR26 = 0; VAR26 < 256; VAR26++)
    {
        int VAR44 = VAR9->VAR24[VAR26].VAR44;
        int VAR45 = VAR12->VAR41;
        int VAR46 = 0;
        VAR27 = VAR9->VAR24[VAR26].VAR27;
        VAR28 = VAR9->VAR24[VAR26].VAR28;
        VAR25 = VAR9->VAR24[VAR26].VAR25;
        if (VAR44 == 0)
            VAR46 += FUN7(VAR3);
        else if (VAR44 - 1 != VAR3)
            continue;
        if (VAR25 & VAR47)
        {
            if (VAR25 & VAR48)
                VAR45 = !VAR45;
        }
        else
        {
            VAR45 = !!(VAR25 & VAR48);
        }
        assert(VAR16 == 0 || VAR16 == 1);
        if (VAR45 != VAR16)
            continue;
        if ((!!(VAR25 & VAR49)) != (VAR22 > 0))
            continue;
        if (VAR27 <= VAR28)
        {
            int VAR50 = VAR12->VAR51[VAR28 - VAR27];
            if (VAR50 != VAR6)
                continue;
        }
        else
        {
            if (VAR6 % VAR27 != VAR28)
                continue;
            if (VAR25 & VAR52)
                VAR46 += FUN7(VAR6 / VAR27);
            else if (VAR6 / VAR27)
                continue;
        }
        if (VAR17 != ((VAR25 & VAR53) && (VAR25 & VAR54)))
            continue;
        if (VAR25 & VAR53)
        {
            if (VAR25 & VAR54)
            {
                VAR46 += FUN7(VAR7);
            }
            else
            {
                VAR46 += FUN7(VAR20);
            }
        }
        else
        {
            int VAR55 = VAR12->VAR56[(VAR25 & 12) >> 2];
            if (VAR55 != VAR7 - VAR12->VAR37)
                continue;
            assert(VAR22 == 0);
        }
        if (VAR46 < VAR23)
        {
            VAR23 = VAR46;
            VAR24 = VAR26;
        }
    }
    assert(VAR24 != -1);
    VAR25 = VAR9->VAR24[VAR24].VAR25;
    VAR27 = VAR9->VAR24[VAR24].VAR27;
    VAR28 = VAR9->VAR24[VAR24].VAR28;
    VAR23 /= 7;
    VAR23++;
    if (VAR22 > 0)
    {
        VAR23 += 4;
        if (VAR22 > 1)
            VAR23 += 8;
    }
    FUN8(VAR2, VAR57, "", VAR16, VAR22, VAR17 ? 2 : ((VAR25 & VAR53) ? 1 : 0), VAR24, VAR23, VAR6, VAR3, VAR25, VAR27, VAR28, VAR9->VAR24[VAR24].VAR44, (int)(VAR7 - VAR12->VAR37));
    if (VAR22 == 2)
        FUN9(VAR14, VAR58);
    FUN10(VAR14, VAR24);
    if (VAR22 > 0)
        FUN11(VAR9, VAR14, FUN4(VAR6 + 20, VAR39), 0);
    if (VAR9->VAR24[VAR24].VAR44 == 0)
        FUN12(VAR14, VAR3);
    if (VAR25 & VAR53)
    {
        if (VAR25 & VAR54)
            FUN12(VAR14, VAR7);
        else
            FUN12(VAR14, VAR20);
    }
    if (VAR25 & VAR52)
        FUN12(VAR14, VAR6 / VAR27);
    if (VAR6 > VAR39)
    {
        assert(VAR22 > 0);
        FUN5(VAR9, VAR14, VAR6, 0);
    }
    FUN13(VAR14, VAR5, VAR6);
    update(VAR9, VAR3, VAR29, VAR22, VAR24, VAR16, VAR6, VAR7);
    return 0;
}