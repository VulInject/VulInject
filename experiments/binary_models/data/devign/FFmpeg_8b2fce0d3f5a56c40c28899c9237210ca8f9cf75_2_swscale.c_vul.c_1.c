static inline void FUN1(VAR1 *VAR2, VAR1 **VAR3, int VAR4, VAR1 *VAR5, VAR1 **VAR6, int VAR7, VAR8 *VAR9, VAR8 *VAR10, VAR8 *VAR11, int VAR12, int VAR13)
{
    int VAR14;
    for (VAR14 = 0; VAR14 < VAR12; VAR14++)
    {
        int VAR15 = 1 << 18;
        int VAR16;
        for (VAR16 = 0; VAR16 < VAR4; VAR16++)
            VAR15 += VAR3[VAR16][VAR14] * VAR2[VAR16];
        VAR9[VAR14] = FUN2(VAR15 >> 19);
    }
    if (VAR10)
        for (VAR14 = 0; VAR14 < VAR13; VAR14++)
        {
            int VAR17 = 1 << 18;
            int VAR18 = 1 << 18;
            int VAR16;
            for (VAR16 = 0; VAR16 < VAR7; VAR16++)
            {
                VAR17 += VAR6[VAR16][VAR14] * VAR5[VAR16];
                VAR18 += VAR6[VAR16][VAR14 + 2048] * VAR5[VAR16];
            }
            VAR10[VAR14] = FUN2(VAR17 >> 19);
            VAR11[VAR14] = FUN2(VAR18 >> 19);
        }
}