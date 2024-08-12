static inline void FUN1(VAR1)(VAR2 *VAR3, VAR4 *VAR5, long VAR6, const VAR7 *VAR8, int VAR9, int VAR10)
{
    int VAR11;
    unsigned int VAR12 = 0;
    for (VAR11 = 0; VAR11 < VAR6; VAR11++)
    {
        register unsigned int VAR13 = VAR12 >> 16;
        register unsigned int VAR14 = (VAR12 & 0xFFFF) >> 9;
        VAR5[VAR11] = (VAR8[VAR13] << 7) + (VAR8[VAR13 + 1] - VAR8[VAR13]) * VAR14;
        VAR12 += VAR10;
    }
}