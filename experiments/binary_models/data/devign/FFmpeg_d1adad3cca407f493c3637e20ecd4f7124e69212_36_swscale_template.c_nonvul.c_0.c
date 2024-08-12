static inline void FUN1(VAR1)(VAR2 *VAR3, int VAR4, const VAR5 *VAR6, int VAR7, int VAR8, const VAR2 *VAR9, const VAR2 *VAR10, long VAR11)
{
    FUN2(VAR3, VAR4, VAR6, VAR7, VAR8, VAR9, VAR10, VAR11);
    int VAR12;
    for (VAR12 = 0; VAR12 < VAR4; VAR12++)
    {
        int VAR13;
        int VAR14 = VAR10[VAR12];
        int VAR15 = 0;
        for (VAR13 = 0; VAR13 < VAR11; VAR13++)
        {
            VAR15 += ((int)VAR6[VAR14 + VAR13]) * VAR9[VAR11 * VAR12 + VAR13];
        }
        VAR3[VAR12] = FUN3(VAR15 >> 7, (1 << 15) - 1);
    }
}