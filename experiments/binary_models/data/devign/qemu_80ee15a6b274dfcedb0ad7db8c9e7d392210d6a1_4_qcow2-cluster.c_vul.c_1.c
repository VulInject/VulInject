static int FUN1(uint64_t VAR1, int VAR2, VAR3 *VAR4, uint64_t VAR5, uint64_t VAR6)
{
    int VAR7;
    uint64_t VAR8 = FUN2(VAR4[0]) & ~VAR6;
    if (!VAR8)
        return 0;
    for (VAR7 = VAR5; VAR7 < VAR5 + VAR1; VAR7++)
        if (VAR8 + VAR7 * VAR2 != (FUN2(VAR4[VAR7]) & ~VAR6))
            break;
    return (VAR7 - VAR5);
}