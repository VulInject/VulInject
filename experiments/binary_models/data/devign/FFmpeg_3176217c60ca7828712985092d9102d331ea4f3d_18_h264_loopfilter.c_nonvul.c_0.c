void FUN1(const VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6, VAR7 *VAR8, VAR7 *VAR9, VAR7 *VAR10, unsigned int VAR11, unsigned int VAR12)
{
    const int VAR13 = VAR5 + VAR6 * VAR2->VAR14;
    const int VAR15 = VAR2->VAR16.VAR15[VAR13];
    const int VAR17 = FUN2(VAR15) ? 2 : 4;
    int VAR18 = 0;
    int VAR19 = !(VAR20 && (VAR2->VAR21 & VAR22));
    int VAR23 = 6 * (VAR2->VAR24.VAR25->VAR26 - 8);
    int VAR27 = 52 + VAR4->VAR28 - VAR23;
    int VAR29 = 52 + VAR4->VAR30 - VAR23;
    if (FUN3(VAR2) && FUN2(VAR15 ^ VAR4->VAR31[VAR32]) && VAR4->VAR31[VAR32])
    {
        FUN4(8, VAR33, VAR34)
        [8];
        int VAR35[2];
        int VAR36[2];
        int VAR37[2];
        int VAR38, VAR39, VAR40;
        int VAR41;
        VAR18 = 1;
        if (FUN5(VAR15))
        {
            FUN6(&VAR34[0], 0x0004000400040004ULL);
            FUN6(&VAR34[4], 0x0004000400040004ULL);
        }
        else
        {
            static const uint8_t VAR42[2][2][8] = {{
                                                        {3 + 4 * 0, 3 + 4 * 0, 3 + 4 * 0, 3 + 4 * 0, 3 + 4 * 1, 3 + 4 * 1, 3 + 4 * 1, 3 + 4 * 1},
                                                        {3 + 4 * 2, 3 + 4 * 2, 3 + 4 * 2, 3 + 4 * 2, 3 + 4 * 3, 3 + 4 * 3, 3 + 4 * 3, 3 + 4 * 3},
                                                    },
                                                    {
                                                        {3 + 4 * 0, 3 + 4 * 1, 3 + 4 * 2, 3 + 4 * 3, 3 + 4 * 0, 3 + 4 * 1, 3 + 4 * 2, 3 + 4 * 3},
                                                        {3 + 4 * 0, 3 + 4 * 1, 3 + 4 * 2, 3 + 4 * 3, 3 + 4 * 0, 3 + 4 * 1, 3 + 4 * 2, 3 + 4 * 3},
                                                    }};
            const VAR7 *VAR43 = VAR42[FUN7(VAR4)][VAR6 & 1];
            for (VAR41 = 0; VAR41 < 8; VAR41++)
            {
                int VAR44 = FUN7(VAR4) ? VAR41 >> 2 : VAR41 & 1;
                int VAR45 = VAR4->VAR46[FUN8(VAR44)];
                int VAR47 = VAR4->VAR31[FUN8(VAR44)];
                if (FUN5(VAR47))
                    VAR34[VAR41] = 4;
                else
                {
                    VAR34[VAR41] = 1 + !!(VAR4->VAR48[12 + 8 * (VAR41 >> 1)] | ((!VAR2->VAR24.VAR49->VAR50 && FUN9(VAR47)) ? (VAR2->VAR51[VAR45] & (((FUN7(VAR4) ? (VAR41 & 2) : (VAR6 & 1)) ? 8 : 2) << 12)) : VAR2->VAR52[VAR45][VAR43[VAR41]]));
                }
            }
        }
        VAR38 = VAR2->VAR16.VAR53[VAR13];
        VAR39 = VAR2->VAR16.VAR53[VAR4->VAR46[0]];
        VAR40 = VAR2->VAR16.VAR53[VAR4->VAR46[1]];
        VAR35[0] = (VAR38 + VAR39 + 1) >> 1;
        VAR36[0] = (FUN10(VAR2, 0, VAR38) + FUN10(VAR2, 0, VAR39) + 1) >> 1;
        VAR37[0] = (FUN10(VAR2, 1, VAR38) + FUN10(VAR2, 1, VAR39) + 1) >> 1;
        VAR35[1] = (VAR38 + VAR40 + 1) >> 1;
        VAR36[1] = (FUN10(VAR2, 0, VAR38) + FUN10(VAR2, 0, VAR40) + 1) >> 1;
        VAR37[1] = (FUN10(VAR2, 1, VAR38) + FUN10(VAR2, 1, VAR40) + 1) >> 1;
        FUN11(VAR2->VAR54, "", VAR5, VAR6, VAR35[0], VAR35[1], VAR36[0], VAR36[1], VAR37[0], VAR37[1], VAR11, VAR12);
        {
            int VAR41;
            for (VAR41 = 0; VAR41 < 8; VAR41++)
                FUN11(VAR2->VAR54, "", VAR41, VAR34[VAR41]);
            FUN11(VAR2->VAR54, "");
        }
        if (FUN7(VAR4))
        {
            FUN12(VAR2, VAR8, VAR11, VAR34, 1, VAR35[0], VAR27, VAR29, 1);
            FUN12(VAR2, VAR8 + 8 * VAR11, VAR11, VAR34 + 4, 1, VAR35[1], VAR27, VAR29, 1);
            if (VAR19)
            {
                if (FUN13(VAR2))
                {
                    FUN12(VAR2, VAR9, VAR12, VAR34, 1, VAR36[0], VAR27, VAR29, 1);
                    FUN12(VAR2, VAR9 + 8 * VAR12, VAR12, VAR34 + 4, 1, VAR36[1], VAR27, VAR29, 1);
                    FUN12(VAR2, VAR10, VAR12, VAR34, 1, VAR37[0], VAR27, VAR29, 1);
                    FUN12(VAR2, VAR10 + 8 * VAR12, VAR12, VAR34 + 4, 1, VAR37[1], VAR27, VAR29, 1);
                }
                else if (FUN14(VAR2))
                {
                    FUN15(VAR2, VAR9, VAR12, VAR34, 1, VAR36[0], VAR27, VAR29, 1);
                    FUN15(VAR2, VAR9 + 8 * VAR12, VAR12, VAR34 + 4, 1, VAR36[1], VAR27, VAR29, 1);
                    FUN15(VAR2, VAR10, VAR12, VAR34, 1, VAR37[0], VAR27, VAR29, 1);
                    FUN15(VAR2, VAR10 + 8 * VAR12, VAR12, VAR34 + 4, 1, VAR37[1], VAR27, VAR29, 1);
                }
                else
                {
                    FUN15(VAR2, VAR9, VAR12, VAR34, 1, VAR36[0], VAR27, VAR29, 1);
                    FUN15(VAR2, VAR9 + 4 * VAR12, VAR12, VAR34 + 4, 1, VAR36[1], VAR27, VAR29, 1);
                    FUN15(VAR2, VAR10, VAR12, VAR34, 1, VAR37[0], VAR27, VAR29, 1);
                    FUN15(VAR2, VAR10 + 4 * VAR12, VAR12, VAR34 + 4, 1, VAR37[1], VAR27, VAR29, 1);
                }
            }
        }
        else
        {
            FUN12(VAR2, VAR8, 2 * VAR11, VAR34, 2, VAR35[0], VAR27, VAR29, 1);
            FUN12(VAR2, VAR8 + VAR11, 2 * VAR11, VAR34 + 1, 2, VAR35[1], VAR27, VAR29, 1);
            if (VAR19)
            {
                if (FUN13(VAR2))
                {
                    FUN12(VAR2, VAR9, 2 * VAR12, VAR34, 2, VAR36[0], VAR27, VAR29, 1);
                    FUN12(VAR2, VAR9 + VAR12, 2 * VAR12, VAR34 + 1, 2, VAR36[1], VAR27, VAR29, 1);
                    FUN12(VAR2, VAR10, 2 * VAR12, VAR34, 2, VAR37[0], VAR27, VAR29, 1);
                    FUN12(VAR2, VAR10 + VAR12, 2 * VAR12, VAR34 + 1, 2, VAR37[1], VAR27, VAR29, 1);
                }
                else
                {
                    FUN15(VAR2, VAR9, 2 * VAR12, VAR34, 2, VAR36[0], VAR27, VAR29, 1);
                    FUN15(VAR2, VAR9 + VAR12, 2 * VAR12, VAR34 + 1, 2, VAR36[1], VAR27, VAR29, 1);
                    FUN15(VAR2, VAR10, 2 * VAR12, VAR34, 2, VAR37[0], VAR27, VAR29, 1);
                    FUN15(VAR2, VAR10 + VAR12, 2 * VAR12, VAR34 + 1, 2, VAR37[1], VAR27, VAR29, 1);
                }
            }
        }
    }
    {
        int VAR55;
        for (VAR55 = 0; VAR55 < 2; VAR55++)
            FUN16(VAR2, VAR4, VAR5, VAR6, VAR8, VAR9, VAR10, VAR11, VAR12, VAR13, VAR15, VAR17, VAR55 ? 0 : VAR18, VAR27, VAR29, VAR19, VAR55);
    }
    FUN16(VAR2, VAR4, VAR5, VAR6, VAR8, VAR9, VAR10, VAR11, VAR12, VAR13, VAR15, VAR17, VAR18, VAR27, VAR29, VAR19, 0);
    FUN16(VAR2, VAR4, VAR5, VAR6, VAR8, VAR9, VAR10, VAR11, VAR12, VAR13, VAR15, VAR17, 0, VAR27, VAR29, VAR19, 1);
}