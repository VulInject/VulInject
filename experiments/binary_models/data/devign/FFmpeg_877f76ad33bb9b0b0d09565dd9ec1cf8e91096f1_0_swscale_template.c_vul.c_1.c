static inline void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, const VAR6 *VAR7, int VAR8, int VAR9)
{
    int VAR10;
    unsigned int VAR11 = 0;
    for (VAR10 = 0; VAR10 < VAR5; VAR10++)
    {
        register unsigned int VAR12 = VAR11 >> 16;
        register unsigned int VAR13 = (VAR11 & 0xFFFF) >> 9;
        VAR4[VAR10] = (VAR7[VAR12] << 7) + (VAR7[VAR12 + 1] - VAR7[VAR12]) * VAR13;
        VAR11 += VAR9;
    }