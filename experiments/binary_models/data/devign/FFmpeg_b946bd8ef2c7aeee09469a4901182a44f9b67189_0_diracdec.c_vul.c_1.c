static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    int VAR7, VAR8, VAR9, VAR10;
    int VAR11[VAR12][4], VAR13[VAR12][4];
    VAR14 *VAR15 = &VAR4->VAR15;
    SliceCoeffs VAR16[VAR12];
    FUN2(VAR15, 8 * VAR2->VAR17.VAR18);
    VAR10 = FUN3(VAR15, 8);
    if (VAR10 > VAR19)
    {
        FUN4(VAR2->VAR20, VAR21, "", VAR10);
        return VAR22;
    }
    for (VAR8 = 0; VAR8 < VAR2->VAR23; VAR8++)
    {
        for (VAR9 = !!VAR8; VAR9 < 4; VAR9++)
        {
            const int VAR24 = FUN5(VAR10 - VAR2->VAR25.VAR24[VAR8][VAR9], 0);
            VAR11[VAR8][VAR9] = VAR26[VAR24];
            VAR13[VAR8][VAR9] = VAR27[VAR24] + 2;
        }
    }
    for (VAR7 = 0; VAR7 < 3; VAR7++)
    {
        int VAR28, VAR29, VAR30 = 0;
        int64_t VAR31 = VAR2->VAR17.VAR32 * FUN3(VAR15, 8);
        int64_t VAR33 = FUN6(VAR15) + 8 * VAR31;
        const VAR5 *VAR34 = FUN7(VAR15);
        if (VAR31 * 8 > FUN8(VAR15))
        {
            FUN4(VAR2->VAR20, VAR21, "");
            return VAR22;
        }
        VAR28 = FUN9(VAR2, VAR4->VAR35, VAR4->VAR36, VAR7, VAR16);
        if (VAR2->VAR37)
            VAR29 = FUN10(VAR2->VAR38, VAR34, VAR31, VAR6, VAR28);
        else
            VAR29 = FUN11(VAR2->VAR38, VAR34, VAR31, VAR6, VAR28);
        if (VAR28 > VAR29)
        {
            const int VAR39 = VAR29 * (1 << (VAR2->VAR37 + 1));
            const int VAR40 = VAR28 * (1 << (VAR2->VAR37 + 1));
            memset(&VAR6[VAR39], 0, VAR40 - VAR39);
        }
        for (VAR8 = 0; VAR8 < VAR2->VAR23; VAR8++)
        {
            const VAR41 *VAR42 = &VAR16[VAR8];
            for (VAR9 = !!VAR8; VAR9 < 4; VAR9++)
            {
                const VAR43 *VAR44 = &VAR2->VAR45[VAR7].VAR46[VAR8][VAR9];
                VAR5 *VAR47 = VAR44->VAR48 + VAR42->VAR49 * VAR44->VAR50 + (VAR42->VAR51 << (VAR2->VAR37 + 1));
                const int VAR52 = VAR2->VAR37 + 2 * (VAR42->VAR53 <= 2);
                VAR2->VAR54.VAR55[VAR52](&VAR6[VAR30], VAR47, VAR44->VAR50, VAR11[VAR8][VAR9], VAR13[VAR8][VAR9], VAR42->VAR56, VAR42->VAR53);
                VAR30 += VAR42->VAR57 << (VAR2->VAR37 + 1);
            }
        }
        FUN2(VAR15, VAR33 - FUN6(VAR15));
    }
    return 0;
}