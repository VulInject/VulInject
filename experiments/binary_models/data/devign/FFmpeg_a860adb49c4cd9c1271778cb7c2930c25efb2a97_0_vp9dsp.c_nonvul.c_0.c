static void FUN1(void)
{
    FUN2(VAR1, VAR2, [72 * 72 * 2]);
    FUN2(VAR1, VAR3, [64 * 64 * 2]);
    FUN2(VAR1, VAR4, [64 * 64 * 2]);
    VP9DSPContext VAR5;
    int VAR6, VAR7, VAR8, VAR9, VAR10, VAR11;
    FUN3(void, VAR1 *VAR12, ptrdiff_t VAR13, const VAR1 *VAR14, ptrdiff_t VAR15, int VAR16, int VAR17, int VAR18);
    static const char *const VAR19[4] = {"", "", "", ""};
    static const char *const VAR20[2][2] = {{"", ""}, {"", ""}};
    static const char *const VAR21[2] = {"", ""};
    char VAR22[256];
    for (VAR6 = 0; VAR6 < 2; VAR6++)
    {
        for (VAR8 = 8; VAR8 <= 12; VAR8 += 2)
        {
            FUN4(&VAR5, VAR8, 0);
            for (VAR7 = 0; VAR7 < 5; VAR7++)
            {
                int VAR23 = 64 >> VAR7;
                for (VAR9 = 0; VAR9 < 4; VAR9++)
                {
                    for (VAR10 = 0; VAR10 < 2; VAR10++)
                    {
                        for (VAR11 = 0; VAR11 < 2; VAR11++)
                        {
                            if (VAR10 || VAR11)
                            {
                                snprintf(VAR22, sizeof(VAR22), "", VAR21[VAR6], VAR19[VAR9], VAR23, VAR20[VAR11][VAR10]);
                            }
                            else
                            {
                                snprintf(VAR22, sizeof(VAR22), "", VAR21[VAR6], VAR23);
                            }
                            if (FUN5(VAR5.VAR24[VAR7][VAR9][VAR6][VAR10][VAR11], "", VAR22, VAR8))
                            {
                                int VAR17 = VAR10 ? 1 + (FUN6() % 14) : 0;
                                int VAR18 = VAR11 ? 1 + (FUN6() % 14) : 0;
                                FUN7();
                                FUN8(VAR3, VAR23 * VAR25, VAR26, VAR27 * VAR25, VAR23, VAR17, VAR18);
                                FUN9(VAR4, VAR23 * VAR25, VAR26, VAR27 * VAR25, VAR23, VAR17, VAR18);
                                if (memcmp(VAR3, VAR4, VAR28))
                                    FUN10();
                                if (VAR9 >= 1 && VAR9 <= 2)
                                    continue;
                                if (VAR8 == 12 && VAR9 == 3)
                                    continue;
                                FUN11(VAR4, VAR23 * VAR25, VAR26, VAR27 * VAR25, VAR23, VAR17, VAR18);
                            }
                        }
                    }
                }
            }
        }
    }
    FUN12("");
}