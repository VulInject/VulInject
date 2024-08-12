static void FUN1()
{
    FUN2(VAR1, VAR2, [32 + 16 * 16 * 2]);
    FUN2(VAR1, VAR3, [32 + 16 * 16 * 2]);
    VP9DSPContext VAR4;
    int VAR5, VAR6, VAR7, VAR8;
    static const char *const VAR9[2] = {"", ""};
    int VAR10[2] = {20, 28}, VAR11[2] = {10, 16}, VAR12[2] = {7, 11}, VAR13[2] = {1, 1};
    FUN3(void, VAR1 *VAR14, ptrdiff_t VAR15, int VAR10, int VAR11, int VAR12);
    for (VAR8 = 8; VAR8 <= 12; VAR8 += 2)
    {
        FUN4(&VAR4, VAR8, 0);
        for (VAR5 = 0; VAR5 < 2; VAR5++)
        {
            VAR1 *VAR16, *VAR17;
            int VAR18 = (VAR5 ? 8 * 8 : 8) * VAR19;
            int VAR20 = (VAR5 ? 8 * 8 : 16) * VAR19;
            VAR16 = VAR2 + VAR20;
            VAR17 = VAR3 + VAR20;
            for (VAR6 = 0; VAR6 < 3; VAR6++)
            {
                if (FUN5(VAR4.VAR21[VAR6][VAR5], "", VAR9[VAR5], 4 << VAR6, VAR8))
                {
                    FUN6(0, 0, 8);
                    memcpy(VAR17 - VAR18, VAR16 - VAR18, 16 * 8 * VAR19);
                    FUN7(VAR16, 16 * VAR19 >> VAR5, VAR10[0], VAR11[0], VAR12[0]);
                    FUN8(VAR17, 16 * VAR19 >> VAR5, VAR10[0], VAR11[0], VAR12[0]);
                    if (memcmp(VAR16 - VAR18, VAR17 - VAR18, 16 * 8 * VAR19))
                        FUN9();
                    FUN10(VAR17, 16 * VAR19 >> VAR5, VAR10[0], VAR11[0], VAR12[0]);
                }
            }
            VAR18 = (VAR5 ? 16 * 8 : 8) * VAR19;
            VAR20 = (VAR5 ? 16 * 8 : 16) * VAR19;
            if (FUN5(VAR4.VAR22[VAR5], "", VAR9[VAR5], VAR8))
            {
                FUN6(0, 0, 16);
                FUN6(0, 8, 16);
                memcpy(VAR17 - VAR18, VAR16 - VAR18, 16 * 16 * VAR19);
                FUN7(VAR16, 16 * VAR19, VAR10[0], VAR11[0], VAR12[0]);
                FUN8(VAR17, 16 * VAR19, VAR10[0], VAR11[0], VAR12[0]);
                if (memcmp(VAR16 - VAR18, VAR17 - VAR18, 16 * 16 * VAR19))
                    FUN9();
                FUN10(VAR17, 16 * VAR19, VAR10[0], VAR11[0], VAR12[0]);
            }
            for (VAR6 = 0; VAR6 < 2; VAR6++)
            {
                for (VAR7 = 0; VAR7 < 2; VAR7++)
                {
                    if (FUN5(VAR4.VAR23[VAR6][VAR7][VAR5], "", VAR9[VAR5], 4 << VAR6, 4 << VAR7, VAR8))
                    {
                        FUN6(0, 0, 16);
                        FUN6(1, 8, 16);
                        memcpy(VAR17 - VAR18, VAR16 - VAR18, 16 * 16 * VAR19);
                        FUN7(VAR16, 16 * VAR19, FUN11(VAR10), FUN11(VAR11), FUN11(VAR12));
                        FUN8(VAR17, 16 * VAR19, FUN11(VAR10), FUN11(VAR11), FUN11(VAR12));
                        if (memcmp(VAR16 - VAR18, VAR17 - VAR18, 16 * 16 * VAR19))
                            FUN9();
                        FUN10(VAR17, 16 * VAR19, FUN11(VAR10), FUN11(VAR11), FUN11(VAR12));
                    }
                }
            }
        }
    }
    FUN12("");
}