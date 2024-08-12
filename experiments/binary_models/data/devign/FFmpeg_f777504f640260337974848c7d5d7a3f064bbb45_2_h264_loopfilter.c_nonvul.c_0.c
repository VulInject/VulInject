void FUN1(VAR1 *VAR2, int VAR3, int VAR4, VAR5 *VAR6, VAR5 *VAR7, VAR5 *VAR8, unsigned int VAR9, unsigned int VAR10)
{
    const int VAR11 = VAR3 + VAR4 * VAR2->VAR12;
    const int VAR13 = VAR2->VAR14.VAR13[VAR11];
    const int VAR15 = FUN2(VAR13) ? 2 : 4;
    int VAR16 = 0;
    av_unused int VAR17;
    int VAR18 = !(VAR19 && (VAR2->VAR20 & VAR21));
    int VAR22 = 6 * (VAR2->VAR23.VAR24 - 8);
    int VAR25 = 52 + VAR2->VAR26 - VAR22;
    int VAR27 = 52 + VAR2->VAR28 - VAR22;
    if (FUN3(VAR2) && FUN2(VAR13 ^ VAR2->VAR29[VAR30]) && VAR2->VAR29[VAR30])
    {
        FUN4(8, VAR31, VAR32)
        [8];
        int VAR33[2];
        int VAR34[2];
        int VAR35[2];
        int VAR36, VAR37, VAR38;
        int VAR39;
        VAR16 = 1;
        if (FUN5(VAR13))
        {
            FUN6(&VAR32[0], 0x0004000400040004ULL);
            FUN6(&VAR32[4], 0x0004000400040004ULL);
        }
        else
        {
            static const uint8_t VAR40[2][2][8] = {{
                                                        {3 + 4 * 0, 3 + 4 * 0, 3 + 4 * 0, 3 + 4 * 0, 3 + 4 * 1, 3 + 4 * 1, 3 + 4 * 1, 3 + 4 * 1},
                                                        {3 + 4 * 2, 3 + 4 * 2, 3 + 4 * 2, 3 + 4 * 2, 3 + 4 * 3, 3 + 4 * 3, 3 + 4 * 3, 3 + 4 * 3},
                                                    },
                                                    {
                                                        {3 + 4 * 0, 3 + 4 * 1, 3 + 4 * 2, 3 + 4 * 3, 3 + 4 * 0, 3 + 4 * 1, 3 + 4 * 2, 3 + 4 * 3},
                                                        {3 + 4 * 0, 3 + 4 * 1, 3 + 4 * 2, 3 + 4 * 3, 3 + 4 * 0, 3 + 4 * 1, 3 + 4 * 2, 3 + 4 * 3},
                                                    }};
            const VAR5 *VAR41 = VAR40[FUN7(VAR2)][VAR4 & 1];
            for (VAR39 = 0; VAR39 < 8; VAR39++)
            {
                int VAR42 = FUN7(VAR2) ? VAR39 >> 2 : VAR39 & 1;
                int VAR43 = VAR2->VAR44[FUN8(VAR42)];
                int VAR45 = VAR2->VAR29[FUN8(VAR42)];
                if (FUN5(VAR45))
                    VAR32[VAR39] = 4;
                else
                {
                    VAR32[VAR39] = 1 + !!(VAR2->VAR46[12 + 8 * (VAR39 >> 1)] | ((!VAR2->VAR47.VAR48 && FUN9(VAR45)) ? (VAR2->VAR49[VAR43] & (((FUN7(VAR2) ? (VAR39 & 2) : (VAR4 & 1)) ? 8 : 2) << 12)) : VAR2->VAR50[VAR43][VAR41[VAR39]]));
                }
            }
        }
        VAR36 = VAR2->VAR14.VAR51[VAR11];
        VAR37 = VAR2->VAR14.VAR51[VAR2->VAR44[0]];
        VAR38 = VAR2->VAR14.VAR51[VAR2->VAR44[1]];
        VAR33[0] = (VAR36 + VAR37 + 1) >> 1;
        VAR34[0] = (FUN10(VAR2, 0, VAR36) + FUN10(VAR2, 0, VAR37) + 1) >> 1;
        VAR35[0] = (FUN10(VAR2, 1, VAR36) + FUN10(VAR2, 1, VAR37) + 1) >> 1;
        VAR33[1] = (VAR36 + VAR38 + 1) >> 1;
        VAR34[1] = (FUN10(VAR2, 0, VAR36) + FUN10(VAR2, 0, VAR38) + 1) >> 1;
        VAR35[1] = (FUN10(VAR2, 1, VAR36) + FUN10(VAR2, 1, VAR38) + 1) >> 1;
        FUN11(VAR2->VAR52, "", VAR3, VAR4, VAR33[0], VAR33[1], VAR34[0], VAR34[1], VAR35[0], VAR35[1], VAR9, VAR10);
        {
            int VAR39;
            for (VAR39 = 0; VAR39 < 8; VAR39++)
                FUN11(VAR2->VAR52, "", VAR39, VAR32[VAR39]);
            FUN11(VAR2->VAR52, "");
        }
        if (FUN7(VAR2))
        {
            FUN12(VAR2, VAR6, VAR9, VAR32, 1, VAR33[0], VAR25, VAR27, 1);
            FUN12(VAR2, VAR6 + 8 * VAR9, VAR9, VAR32 + 4, 1, VAR33[1], VAR25, VAR27, 1);
            if (VAR18)
            {
                if (FUN13(VAR2))
                {
                    FUN12(VAR2, VAR7, VAR10, VAR32, 1, VAR34[0], VAR25, VAR27, 1);
                    FUN12(VAR2, VAR7 + 8 * VAR10, VAR10, VAR32 + 4, 1, VAR34[1], VAR25, VAR27, 1);
                    FUN12(VAR2, VAR8, VAR10, VAR32, 1, VAR35[0], VAR25, VAR27, 1);
                    FUN12(VAR2, VAR8 + 8 * VAR10, VAR10, VAR32 + 4, 1, VAR35[1], VAR25, VAR27, 1);
                }
                else if (FUN14(VAR2))
                {
                    FUN15(VAR2, VAR7, VAR10, VAR32, 1, VAR34[0], VAR25, VAR27, 1);
                    FUN15(VAR2, VAR7 + 8 * VAR10, VAR10, VAR32 + 4, 1, VAR34[1], VAR25, VAR27, 1);
                    FUN15(VAR2, VAR8, VAR10, VAR32, 1, VAR35[0], VAR25, VAR27, 1);
                    FUN15(VAR2, VAR8 + 8 * VAR10, VAR10, VAR32 + 4, 1, VAR35[1], VAR25, VAR27, 1);
                }
                else
                {
                    FUN15(VAR2, VAR7, VAR10, VAR32, 1, VAR34[0], VAR25, VAR27, 1);
                    FUN15(VAR2, VAR7 + 4 * VAR10, VAR10, VAR32 + 4, 1, VAR34[1], VAR25, VAR27, 1);
                    FUN15(VAR2, VAR8, VAR10, VAR32, 1, VAR35[0], VAR25, VAR27, 1);
                    FUN15(VAR2, VAR8 + 4 * VAR10, VAR10, VAR32 + 4, 1, VAR35[1], VAR25, VAR27, 1);
                }
            }
        }
        else
        {
            FUN12(VAR2, VAR6, 2 * VAR9, VAR32, 2, VAR33[0], VAR25, VAR27, 1);
            FUN12(VAR2, VAR6 + VAR9, 2 * VAR9, VAR32 + 1, 2, VAR33[1], VAR25, VAR27, 1);
            if (VAR18)
            {
                if (FUN13(VAR2))
                {
                    FUN12(VAR2, VAR7, 2 * VAR10, VAR32, 2, VAR34[0], VAR25, VAR27, 1);
                    FUN12(VAR2, VAR7 + VAR10, 2 * VAR10, VAR32 + 1, 2, VAR34[1], VAR25, VAR27, 1);
                    FUN12(VAR2, VAR8, 2 * VAR10, VAR32, 2, VAR35[0], VAR25, VAR27, 1);
                    FUN12(VAR2, VAR8 + VAR10, 2 * VAR10, VAR32 + 1, 2, VAR35[1], VAR25, VAR27, 1);
                }
                else
                {
                    FUN15(VAR2, VAR7, 2 * VAR10, VAR32, 2, VAR34[0], VAR25, VAR27, 1);
                    FUN15(VAR2, VAR7 + VAR10, 2 * VAR10, VAR32 + 1, 2, VAR34[1], VAR25, VAR27, 1);
                    FUN15(VAR2, VAR8, 2 * VAR10, VAR32, 2, VAR35[0], VAR25, VAR27, 1);
                    FUN15(VAR2, VAR8 + VAR10, 2 * VAR10, VAR32 + 1, 2, VAR35[1], VAR25, VAR27, 1);
                }
            }
        }
    }
    for (VAR17 = 0; VAR17 < 2; VAR17++)
        FUN16(VAR2, VAR3, VAR4, VAR6, VAR7, VAR8, VAR9, VAR10, VAR11, VAR13, VAR15, VAR17 ? 0 : VAR16, VAR25, VAR27, VAR18, VAR17);
    FUN16(VAR2, VAR3, VAR4, VAR6, VAR7, VAR8, VAR9, VAR10, VAR11, VAR13, VAR15, VAR16, VAR25, VAR27, VAR18, 0);
    FUN16(VAR2, VAR3, VAR4, VAR6, VAR7, VAR8, VAR9, VAR10, VAR11, VAR13, VAR15, 0, VAR25, VAR27, VAR18, 1);
}