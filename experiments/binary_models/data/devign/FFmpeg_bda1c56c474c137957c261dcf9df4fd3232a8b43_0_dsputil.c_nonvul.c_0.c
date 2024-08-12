static inline void FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5, int VAR6, int *VAR7)
{
    int VAR8, VAR9;
    for (VAR8 = 0; VAR8 < 4; VAR8++)
    {
        if (VAR7[VAR8] < 0)
        {
            VAR2 += 4 * VAR4;
            continue;
        }
        for (VAR9 = 0; VAR9 < 4; VAR9++)
        {
            const int VAR10 = VAR2[-1 * VAR3];
            const int VAR11 = VAR2[-2 * VAR3];
            const int VAR12 = VAR2[-3 * VAR3];
            const int VAR13 = VAR2[0];
            const int VAR14 = VAR2[1 * VAR3];
            const int VAR15 = VAR2[2 * VAR3];
            if (FUN2(VAR10 - VAR13) < VAR5 && FUN2(VAR11 - VAR10) < VAR6 && FUN2(VAR14 - VAR13) < VAR6)
            {
                int VAR16 = VAR7[VAR8];
                int VAR17;
                if (FUN2(VAR12 - VAR10) < VAR6)
                {
                    VAR2[-2 * VAR3] = VAR11 + FUN3(((VAR12 + ((VAR10 + VAR13 + 1) >> 1)) >> 1) - VAR11, -VAR7[VAR8], VAR7[VAR8]);
                    VAR16++;
                }
                if (FUN2(VAR15 - VAR13) < VAR6)
                {
                    VAR2[VAR3] = VAR14 + FUN3(((VAR15 + ((VAR10 + VAR13 + 1) >> 1)) >> 1) - VAR14, -VAR7[VAR8], VAR7[VAR8]);
                    VAR16++;
                }
                VAR17 = FUN3((((VAR13 - VAR10) << 2) + (VAR11 - VAR14) + 4) >> 3, -VAR16, VAR16);
                VAR2[-VAR3] = FUN4(VAR10 + VAR17);
                VAR2[0] = FUN4(VAR13 - VAR17);
            }
            VAR2 += VAR4;
        }
    }
}