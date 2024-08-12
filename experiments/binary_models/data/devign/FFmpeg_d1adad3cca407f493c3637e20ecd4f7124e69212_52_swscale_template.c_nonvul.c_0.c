static inline void FUN1(VAR1)(VAR2 *VAR3, VAR2 *VAR4, const VAR2 *VAR5, long VAR6)
{
    int VAR7;
    for (VAR7 = 0; VAR7 < VAR6; VAR7++)
    {
        VAR3[VAR7] = VAR5[2 * VAR7 + 0];
        VAR4[VAR7] = VAR5[2 * VAR7 + 1];
    }
}