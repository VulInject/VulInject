static inline void FUN1(VAR1)(VAR2 *VAR3, VAR2 *VAR4, const VAR2 *VAR5, const VAR2 *VAR6, long VAR7, VAR8 *VAR9)
{
    int VAR10;
    for (VAR10 = 0; VAR10 < VAR7; VAR10++)
    {
        VAR3[VAR10] = VAR5[2 * VAR10];
        VAR4[VAR10] = VAR6[2 * VAR10];
    }
}