static int FUN1(VAR1 *VAR2, VAR3 *VAR4, uint64_t VAR5, int VAR6, int VAR7)
{
    int VAR8 = VAR6 & ~(VAR9 - 1);
    int VAR10 = (8 * VAR6) & ~511;
    int VAR11 = (8 * (VAR6 + VAR7) + 511) & ~511;
    size_t VAR12 = VAR11 - VAR10;
    int VAR13;
    FUN2(VAR2->VAR14, VAR15);
    VAR13 = FUN3(VAR2->VAR14, VAR5 + VAR10, &VAR4[VAR8], VAR12);
    if (VAR13 < 0)
    {
        return VAR13;
    }
    return 0;
}