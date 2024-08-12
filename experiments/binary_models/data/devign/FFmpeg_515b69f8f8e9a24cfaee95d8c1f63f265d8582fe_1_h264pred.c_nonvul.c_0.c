static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR3 *VAR5, int VAR6, int VAR7, int VAR8)
{
    if (VAR7 == 1 && VAR9[VAR6] == VAR10)
    {
        int VAR11;
        FUN2(void, VAR3 *VAR12, int VAR13, int VAR14, ptrdiff_t VAR15);
        for (VAR11 = 0; VAR11 < 12; VAR11++)
        {
            if (FUN3(VAR2->VAR16[VAR11], "", VAR17[VAR6][VAR11]))
            {
                int VAR18;
                for (VAR18 = 0; VAR18 <= 0xc000; VAR18 += 0x4000)
                {
                    int VAR19 = VAR18 & 0x8000;
                    int VAR20 = VAR18 & 0x4000;
                    if ((VAR11 == VAR21 || VAR11 == VAR22) && !VAR19)
                        continue;
                    FUN4();
                    FUN5(VAR23, VAR19, VAR20, 24 * VAR24);
                    FUN6(VAR25, VAR19, VAR20, 24 * VAR24);
                    if (memcmp(VAR4, VAR5, VAR26))
                        FUN7();
                    FUN8(VAR25, VAR19, VAR20, 24 * VAR24);
                }
            }
        }
    }
}