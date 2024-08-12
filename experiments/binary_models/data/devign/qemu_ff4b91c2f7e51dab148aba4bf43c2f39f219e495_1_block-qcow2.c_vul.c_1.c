static int FUN1(uint64_t VAR1, int VAR2, VAR3 *VAR4, uint64_t VAR5)
{
    int VAR6;
    uint64_t VAR7 = FUN2(VAR4[0]) & ~VAR5;
    if (!VAR7)
        return 0;
    for (VAR6 = 0; VAR6 < VAR1; VAR6++)
        if (VAR7 + VAR6 * VAR2 != (FUN2(VAR4[VAR6]) & ~VAR5))
            break;
    return VAR6;
}