static void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6)
{
    int VAR7, VAR8, VAR9;
    for (VAR9 = 0; VAR9 < 3; VAR9++)
    {
        int VAR10 = VAR5 >> !!VAR9;
        int VAR11 = VAR6 >> !!VAR9;
        int VAR12 = VAR4->VAR13[VAR9];
        VAR14 *VAR15 = VAR4->VAR15[VAR9] + VAR10 + VAR11 * VAR12;
        int VAR16 = FUN2(VAR2->VAR17, !!VAR9);
        int VAR18 = FUN2(VAR2->VAR19, !!VAR9);
        int VAR20 = FUN2(VAR4->VAR17, !!VAR9);
        int VAR21 = FUN2(VAR4->VAR19, !!VAR9);
        for (VAR8 = 0; VAR8 < VAR18; VAR8++)
        {
            for (VAR7 = 0; VAR7 < VAR16; VAR7++)
            {
                int VAR22 = 0;
                int VAR23 = 0;
                if (VAR10)
                {
                    int VAR24 = 65536 / (VAR7 + 1);
                    VAR23 += VAR15[-1 + VAR8 * VAR12] * VAR24;
                    VAR22 += VAR24;
                }
                if (VAR11)
                {
                    int VAR24 = 65536 / (VAR8 + 1);
                    VAR23 += VAR15[VAR7 - VAR12] * VAR24;
                    VAR22 += VAR24;
                }
                if (VAR10 + VAR16 < VAR20)
                {
                    int VAR24 = 65536 / (VAR16 - VAR7);
                    VAR23 += VAR15[VAR16 + VAR8 * VAR12] * VAR24;
                    VAR22 += VAR24;
                }
                if (VAR11 + VAR18 < VAR21)
                {
                    int VAR24 = 65536 / (VAR18 - VAR8);
                    VAR23 += VAR15[VAR7 + VAR18 * VAR12] * VAR24;
                    VAR22 += VAR24;
                }
                VAR15[VAR7 + VAR8 * VAR12] = (VAR23 + (VAR22 >> 1)) / VAR22;
            }
        }
    }
}