static inline void FUN1(VAR1)(VAR2 *VAR3, const VAR2 *VAR4, long VAR5, VAR6 *VAR7)
{
    int VAR8;
    for (VAR8 = 0; VAR8 < VAR5; VAR8++)
        VAR3[VAR8] = VAR4[2 * VAR8 + 1];
}