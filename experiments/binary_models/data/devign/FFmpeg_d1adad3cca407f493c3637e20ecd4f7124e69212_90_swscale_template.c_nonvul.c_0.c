static inline void FUN1(VAR1)(VAR2 *VAR3, const VAR2 *VAR4, long VAR5, VAR6 *VAR7)
{
    int VAR8;
    for (VAR8 = 0; VAR8 < VAR5; VAR8++)
    {
        int VAR9 = VAR4[VAR8 * 3 + 0];
        int VAR10 = VAR4[VAR8 * 3 + 1];
        int VAR11 = VAR4[VAR8 * 3 + 2];
        VAR3[VAR8] = ((VAR12 * VAR9 + VAR13 * VAR10 + VAR14 * VAR11 + (33 << (VAR15 - 1))) >> VAR15);
    }
}