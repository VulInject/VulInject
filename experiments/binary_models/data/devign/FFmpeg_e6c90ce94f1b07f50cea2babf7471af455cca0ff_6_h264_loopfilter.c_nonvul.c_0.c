void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6, VAR7 *VAR8, VAR7 *VAR9, VAR7 *VAR10, unsigned int VAR11, unsigned int VAR12)
{
    const int VAR13 = VAR5 + VAR6 * VAR2->VAR14;
    const int VAR15 = VAR2->VAR16.VAR15[VAR13];
    const int VAR17 = FUN2(VAR15) ? 2 : 4;
    int VAR18 = 0;
    int VAR19 = !(VAR20 && (VAR2->VAR21 & VAR22));
    int VAR23 = 6 * (VAR2->VAR24.VAR25 - 8);
    int VAR26 = 52 + VAR4->VAR27 - VAR23;
    int VAR28 = 52 + VAR4->VAR29 - VAR23;
    if (FUN3(VAR2) && FUN2(VAR15 ^ VAR4->VAR30[VAR31]) && VAR4->VAR30[VAR31])
    {
        FUN4(8, VAR32, VAR33)
        [8];
        int VAR34[2];
        int VAR35[2];
        int VAR36[2];
        int VAR37, VAR38, VAR39;
        int VAR40;
        VAR18 = 1;
        if (FUN5(VAR15))
        {
            FUN6(&VAR33[0], 0x0004000400040004ULL);
            FUN6(&VAR33[4], 0x0004000400040004ULL);
        }
        else
        {
            static const uint8_t VAR41[2][2][8] = {{
                                                        {3 + 4 * 0, 3 + 4 * 0, 3 + 4 * 0, 3 + 4 * 0, 3 + 4 * 1, 3 + 4 * 1, 3 + 4 * 1, 3 + 4 * 1},
                                                        {3 + 4 * 2, 3 + 4 * 2, 3 + 4 * 2, 3 + 4 * 2, 3 + 4 * 3, 3 + 4 * 3, 3 + 4 * 3, 3 + 4 * 3},
                                                    },
                                                    {
                                                        {3 + 4 * 0, 3 + 4 * 1, 3 + 4 * 2, 3 + 4 * 3, 3 + 4 * 0, 3 + 4 * 1, 3 + 4 * 2, 3 + 4 * 3},
                                                        {3 + 4 * 0, 3 + 4 * 1, 3 + 4 * 2, 3 + 4 * 3, 3 + 4 * 0, 3 + 4 * 1, 3 + 4 * 2, 3 + 4 * 3},
                                                    }};
            const VAR7 *VAR42 = VAR41[FUN7(VAR2)][VAR6 & 1];
            for (VAR40 = 0; VAR40 < 8; VAR40++)
            {
                int VAR43 = FUN7(VAR2) ? VAR40 >> 2 : VAR40 & 1;
                int VAR44 = VAR4->VAR45[FUN8(VAR43)];
                int VAR46 = VAR4->VAR30[FUN8(VAR43)];
                if (FUN5(VAR46))
                    VAR33[VAR40] = 4;
                else
                {
                    VAR33[VAR40] = 1 + !!(VAR4->VAR47[12 + 8 * (VAR40 >> 1)] | ((!VAR2->VAR48.VAR49 && FUN9(VAR46)) ? (VAR2->VAR50[VAR44] & (((FUN7(VAR2) ? (VAR40 & 2) : (VAR6 & 1)) ? 8 : 2) << 12)) : VAR2->VAR51[VAR44][VAR42[VAR40]]));
                }
            }
        }
        VAR37 = VAR2->VAR16.VAR52[VAR13];
        VAR38 = VAR2->VAR16.VAR52[VAR4->VAR45[0]];
        VAR39 = VAR2->VAR16.VAR52[VAR4->VAR45[1]];
        VAR34[0] = (VAR37 + VAR38 + 1) >> 1;
        VAR35[0] = (FUN10(VAR2, 0, VAR37) + FUN10(VAR2, 0, VAR38) + 1) >> 1;
        VAR36[0] = (FUN10(VAR2, 1, VAR37) + FUN10(VAR2, 1, VAR38) + 1) >> 1;
        VAR34[1] = (VAR37 + VAR39 + 1) >> 1;
        VAR35[1] = (FUN10(VAR2, 0, VAR37) + FUN10(VAR2, 0, VAR39) + 1) >> 1;
        VAR36[1] = (FUN10(VAR2, 1, VAR37) + FUN10(VAR2, 1, VAR39) + 1) >> 1;
        FUN11(VAR2->VAR53, "", VAR5, VAR6, VAR34[0], VAR34[1], VAR35[0], VAR35[1], VAR36[0], VAR36[1], VAR11, VAR12);
        {
            int VAR40;
            for (VAR40 = 0; VAR40 < 8; VAR40++)
                FUN11(VAR2->VAR53, "", VAR40, VAR33[VAR40]);
            FUN11(VAR2->VAR53, "");
        }
        if (FUN7(VAR2))
        {
            FUN12(VAR2, VAR8, VAR11, VAR33, 1, VAR34[0], VAR26, VAR28, 1);
            FUN12(VAR2, VAR8 + 8 * VAR11, VAR11, VAR33 + 4, 1, VAR34[1], VAR26, VAR28, 1);
            if (VAR19)
            {
                if (FUN13(VAR2))
                {
                    FUN12(VAR2, VAR9, VAR12, VAR33, 1, VAR35[0], VAR26, VAR28, 1);
                    FUN12(VAR2, VAR9 + 8 * VAR12, VAR12, VAR33 + 4, 1, VAR35[1], VAR26, VAR28, 1);
                    FUN12(VAR2, VAR10, VAR12, VAR33, 1, VAR36[0], VAR26, VAR28, 1);
                    FUN12(VAR2, VAR10 + 8 * VAR12, VAR12, VAR33 + 4, 1, VAR36[1], VAR26, VAR28, 1);
                }
                else if (FUN14(VAR2))
                {
                    FUN15(VAR2, VAR9, VAR12, VAR33, 1, VAR35[0], VAR26, VAR28, 1);
                    FUN15(VAR2, VAR9 + 8 * VAR12, VAR12, VAR33 + 4, 1, VAR35[1], VAR26, VAR28, 1);
                    FUN15(VAR2, VAR10, VAR12, VAR33, 1, VAR36[0], VAR26, VAR28, 1);
                    FUN15(VAR2, VAR10 + 8 * VAR12, VAR12, VAR33 + 4, 1, VAR36[1], VAR26, VAR28, 1);
                }
                else
                {
                    FUN15(VAR2, VAR9, VAR12, VAR33, 1, VAR35[0], VAR26, VAR28, 1);
                    FUN15(VAR2, VAR9 + 4 * VAR12, VAR12, VAR33 + 4, 1, VAR35[1], VAR26, VAR28, 1);
                    FUN15(VAR2, VAR10, VAR12, VAR33, 1, VAR36[0], VAR26, VAR28, 1);
                    FUN15(VAR2, VAR10 + 4 * VAR12, VAR12, VAR33 + 4, 1, VAR36[1], VAR26, VAR28, 1);
                }
            }
        }
        else
        {
            FUN12(VAR2, VAR8, 2 * VAR11, VAR33, 2, VAR34[0], VAR26, VAR28, 1);
            FUN12(VAR2, VAR8 + VAR11, 2 * VAR11, VAR33 + 1, 2, VAR34[1], VAR26, VAR28, 1);
            if (VAR19)
            {
                if (FUN13(VAR2))
                {
                    FUN12(VAR2, VAR9, 2 * VAR12, VAR33, 2, VAR35[0], VAR26, VAR28, 1);
                    FUN12(VAR2, VAR9 + VAR12, 2 * VAR12, VAR33 + 1, 2, VAR35[1], VAR26, VAR28, 1);
                    FUN12(VAR2, VAR10, 2 * VAR12, VAR33, 2, VAR36[0], VAR26, VAR28, 1);
                    FUN12(VAR2, VAR10 + VAR12, 2 * VAR12, VAR33 + 1, 2, VAR36[1], VAR26, VAR28, 1);
                }
                else
                {
                    FUN15(VAR2, VAR9, 2 * VAR12, VAR33, 2, VAR35[0], VAR26, VAR28, 1);
                    FUN15(VAR2, VAR9 + VAR12, 2 * VAR12, VAR33 + 1, 2, VAR35[1], VAR26, VAR28, 1);
                    FUN15(VAR2, VAR10, 2 * VAR12, VAR33, 2, VAR36[0], VAR26, VAR28, 1);
                    FUN15(VAR2, VAR10 + VAR12, 2 * VAR12, VAR33 + 1, 2, VAR36[1], VAR26, VAR28, 1);
                }
            }
        }
    }
    {
        int VAR54;
        for (VAR54 = 0; VAR54 < 2; VAR54++)
            FUN16(VAR2, VAR4, VAR5, VAR6, VAR8, VAR9, VAR10, VAR11, VAR12, VAR13, VAR15, VAR17, VAR54 ? 0 : VAR18, VAR26, VAR28, VAR19, VAR54);
    }
    FUN16(VAR2, VAR4, VAR5, VAR6, VAR8, VAR9, VAR10, VAR11, VAR12, VAR13, VAR15, VAR17, VAR18, VAR26, VAR28, VAR19, 0);
    FUN16(VAR2, VAR4, VAR5, VAR6, VAR8, VAR9, VAR10, VAR11, VAR12, VAR13, VAR15, VAR17, 0, VAR26, VAR28, VAR19, 1);
}