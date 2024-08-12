static void FUN1(VAR1 *VAR2, const VAR1 *VAR3, int VAR4, int VAR5)
{
    int VAR6, VAR7, VAR8;
    int16_t VAR9;
    int VAR10, VAR11, VAR12, VAR13, VAR14, VAR15, VAR16, VAR17;
    VAR9 = (VAR4 & 0x1f) + 0x20;
    VAR7 = 4 - ((VAR4 << 23) >> 28);
    if (VAR7 > 0)
    {
        VAR8 = 1 << (VAR7 - 1);
        for (VAR6 = 0; VAR6 < VAR5; VAR6 += 8)
        {
            VAR10 = VAR3[VAR6] * VAR9;
            VAR11 = VAR3[VAR6 + 1] * VAR9;
            VAR10 = VAR10 + VAR8;
            VAR12 = VAR3[VAR6 + 2] * VAR9;
            VAR11 = VAR11 + VAR8;
            VAR2[VAR6] = VAR10 >> VAR7;
            VAR13 = VAR3[VAR6 + 3] * VAR9;
            VAR12 = VAR12 + VAR8;
            VAR2[VAR6 + 1] = VAR11 >> VAR7;
            VAR14 = VAR3[VAR6 + 4] * VAR9;
            VAR13 = VAR13 + VAR8;
            VAR2[VAR6 + 2] = VAR12 >> VAR7;
            VAR15 = VAR3[VAR6 + 5] * VAR9;
            VAR14 = VAR14 + VAR8;
            VAR2[VAR6 + 3] = VAR13 >> VAR7;
            VAR16 = VAR3[VAR6 + 6] * VAR9;
            VAR2[VAR6 + 4] = VAR14 >> VAR7;
            VAR15 = VAR15 + VAR8;
            VAR17 = VAR3[VAR6 + 7] * VAR9;
            VAR16 = VAR16 + VAR8;
            VAR2[VAR6 + 5] = VAR15 >> VAR7;
            VAR17 = VAR17 + VAR8;
            VAR2[VAR6 + 6] = VAR16 >> VAR7;
            VAR2[VAR6 + 7] = VAR17 >> VAR7;
        }
    }
    else
    {
        VAR7 = -VAR7;
        for (VAR6 = 0; VAR6 < VAR5; VAR6 += 8)
        {
            VAR10 = VAR3[VAR6] * VAR9;
            VAR11 = VAR3[VAR6 + 1] * VAR9;
            VAR12 = VAR3[VAR6 + 2] * VAR9;
            VAR2[VAR6] = VAR10 << VAR7;
            VAR13 = VAR3[VAR6 + 3] * VAR9;
            VAR2[VAR6 + 1] = VAR11 << VAR7;
            VAR14 = VAR3[VAR6 + 4] * VAR9;
            VAR2[VAR6 + 2] = VAR12 << VAR7;
            VAR15 = VAR3[VAR6 + 5] * VAR9;
            VAR2[VAR6 + 3] = VAR13 << VAR7;
            VAR16 = VAR3[VAR6 + 6] * VAR9;
            VAR2[VAR6 + 4] = VAR14 << VAR7;
            VAR17 = VAR3[VAR6 + 7] * VAR9;
            VAR2[VAR6 + 5] = VAR15 << VAR7;
            VAR2[VAR6 + 6] = VAR16 << VAR7;
            VAR2[VAR6 + 7] = VAR17 << VAR7;
        }
    }
}