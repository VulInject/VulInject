static inline void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR3 *VAR5, int VAR6, const VAR7 *VAR8, const VAR7 *VAR9, int VAR10, int VAR11)
{
    int VAR12;
    unsigned int VAR13 = 0;
    for (VAR12 = 0; VAR12 < VAR6; VAR12++)
    {
        register unsigned int VAR14 = VAR13 >> 16;
        register unsigned int VAR15 = (VAR13 & 0xFFFF) >> 9;
        VAR4[VAR12] = (VAR8[VAR14] * (VAR15 ^ 127) + VAR8[VAR14 + 1] * VAR15);
        VAR5[VAR12] = (VAR9[VAR14] * (VAR15 ^ 127) + VAR9[VAR14 + 1] * VAR15);
        VAR13 += VAR11;