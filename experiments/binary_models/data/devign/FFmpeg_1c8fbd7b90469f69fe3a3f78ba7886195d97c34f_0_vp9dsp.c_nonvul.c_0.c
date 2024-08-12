static void FUN1(void)
{
    FUN2(VAR1, VAR2, [32 * 32 * 2]);
    FUN2(VAR1, VAR3, [32 * 32 * 2]);
    FUN2(VAR1, VAR4, [32 * 32 * 2]);
    FUN2(VAR1, VAR5, [32 * 32 * 2]);
    FUN2(VAR6, VAR7, [32 * 32 * 2]);
    FUN2(VAR6, VAR8, [32 * 32 * 2]);
    FUN2(VAR6, VAR9, [32 * 32 * 2]);
    FUN3(VAR10 | VAR11, void, VAR1 *VAR3, ptrdiff_t VAR12, VAR6 *VAR13, int VAR14);
    VP9DSPContext VAR15;
    int VAR16, VAR17, VAR18, VAR19, VAR20, VAR21;
    static const char *const VAR22[VAR23] = {[VAR24] = "", [VAR25] = "", [VAR26] = "", [VAR27] = ""};
    for (VAR20 = 8; VAR20 <= 12; VAR20 += 2)
    {
        FUN4(&VAR15, VAR20, 0);
        for (VAR18 = VAR28; VAR18 <= VAR29; VAR18++)
        {
            int VAR30 = 4 << (VAR18 & 3);
            int VAR31 = VAR18 < VAR32 ? VAR23 : 1;
            for (VAR19 = 0; VAR19 < VAR31; VAR19++)
            {
                for (VAR21 = (VAR19 == 0 && VAR18 < 4) ? 1 : VAR30; VAR21 <= VAR30; VAR21 <<= 1)
                {
                    if (FUN5(VAR15.VAR33[VAR18][VAR19], "", VAR18 == 4 ? "" : VAR22[VAR19], VAR30, VAR30, VAR21, VAR20))
                    {
                        int VAR14;
                        FUN6();
                        FUN7(VAR7, VAR18, VAR19, VAR30, VAR20);
                        if (VAR21 < VAR30)
                        {
                            VAR14 = FUN8(VAR8, VAR7, VAR18, VAR19, VAR30, VAR21, VAR20);
                        }
                        else
                        {
                            VAR14 = VAR30 * VAR30;
                            memcpy(VAR8, VAR7, VAR30 * VAR30 * VAR34);
                        }
                        memcpy(VAR4, VAR3, VAR30 * VAR30 * VAR35);
                        memcpy(VAR5, VAR3, VAR30 * VAR30 * VAR35);
                        memcpy(VAR9, VAR8, VAR30 * VAR30 * VAR34);
                        FUN9(VAR4, VAR30 * VAR35, VAR8, VAR14);
                        FUN10(VAR5, VAR30 * VAR35, VAR9, VAR14);
                        if (memcmp(VAR4, VAR5, VAR30 * VAR30 * VAR35) || !FUN11(VAR8, VAR30 * VAR30 * VAR34) || !FUN11(VAR9, VAR30 * VAR30 * VAR34))
                            FUN12();
                        FUN13(VAR3, VAR30 * VAR35, VAR7, VAR14);
                    }
                }
            }
        }
    }
    FUN14("");
}