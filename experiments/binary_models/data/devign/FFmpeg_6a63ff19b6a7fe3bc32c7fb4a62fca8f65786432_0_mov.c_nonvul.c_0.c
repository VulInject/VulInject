static int FUN1(VAR1 *VAR2, VAR3 *VAR4, MOVAtom VAR5)
{
    VAR6 *VAR7;
    VAR8 *VAR9;
    int VAR10, VAR11, VAR12;
    if (VAR2->VAR13->VAR14 < 1)
        return 0;
    VAR7 = VAR2->VAR13->VAR15[VAR2->VAR13->VAR14 - 1];
    VAR9 = VAR7->VAR16;
    FUN2(VAR4);
    VAR10 = FUN2(VAR4);
    if (VAR10 >= VAR17 / sizeof(*VAR9->VAR18))
        return -1;
    VAR9->VAR18 = FUN3(VAR10 * sizeof(*VAR9->VAR18));
    if (!VAR9->VAR18)
        return FUN4(VAR19);
    VAR9->VAR20 = VAR10;
    for (VAR11 = 0; VAR11 < VAR9->VAR20; VAR11++)
    {
        VAR21 *VAR22 = &VAR9->VAR18[VAR11];
        uint32_t VAR23 = FUN2(VAR4);
        int64_t VAR24 = FUN5(VAR4) + VAR23 - 4;
        VAR22->VAR25 = FUN6(VAR4);
        FUN2(VAR4);
        FUN7(VAR2->VAR13, "", (char *)&VAR22->VAR25, VAR23);
        if (VAR22->VAR25 == FUN8('', '', '', '') && VAR23 > 150)
        {
            uint16_t VAR26, VAR27;
            char VAR28[28];
            int16_t VAR25;
            FUN9(VAR4, 10);
            VAR26 = FUN10(VAR4);
            VAR26 = FUN11(VAR26, 27);
            FUN12(VAR4, VAR28, 27);
            VAR28[VAR26] = 0;
            FUN13(VAR2->VAR13, VAR29, "", VAR28, VAR26);
            FUN9(VAR4, 112);
            for (VAR25 = 0; VAR25 != -1 && FUN5(VAR4) < VAR24;)
            {
                VAR25 = FUN14(VAR4);
                VAR27 = FUN14(VAR4);
                FUN13(VAR2->VAR13, VAR29, "", VAR25, VAR27);
                if (VAR27 & 1)
                    VAR27 += 1;
                if (VAR25 == 2)
                {
                    FUN15(VAR22->VAR30);
                    VAR22->VAR30 = FUN3(VAR27 + 1);
                    if (!VAR22->VAR30)
                        return FUN4(VAR19);
                    FUN12(VAR4, VAR22->VAR30, VAR27);
                    if (VAR27 > VAR26 && !FUN16(VAR22->VAR30, VAR28, VAR26))
                    {
                        VAR27 -= VAR26;
                        memmove(VAR22->VAR30, VAR22->VAR30 + VAR26, VAR27);
                        VAR22->VAR30[VAR27] = 0;
                    }
                    for (VAR12 = 0; VAR12 < VAR27; VAR12++)
                        if (VAR22->VAR30[VAR12] == '')
                            VAR22->VAR30[VAR12] = '';
                    FUN13(VAR2->VAR13, VAR29, "", VAR22->VAR30);
                }
                else
                    FUN9(VAR4, VAR27);
            }
        }
        FUN17(VAR4, VAR24, VAR31);
    }
    return 0;
}