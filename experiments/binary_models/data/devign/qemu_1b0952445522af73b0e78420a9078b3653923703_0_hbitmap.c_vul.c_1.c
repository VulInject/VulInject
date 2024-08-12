void FUN1(VAR1 *VAR2, const VAR3 *VAR4, uint64_t VAR5)
{
    unsigned VAR6, VAR7;
    uint64_t VAR8;
    VAR2->VAR4 = VAR4;
    VAR8 = VAR5 >> VAR4->VAR9;
    VAR2->VAR8 = VAR8 >> VAR10;
    VAR2->VAR9 = VAR4->VAR9;
    for (VAR6 = VAR11; VAR6-- > 0;)
    {
        VAR7 = VAR8 & (VAR12 - 1);
        VAR8 >>= VAR10;
        VAR2->VAR13[VAR6] = VAR4->VAR14[VAR6][VAR8] & ~((1UL << VAR7) - 1);
        if (VAR6 != VAR11 - 1)
        {
            VAR2->VAR13[VAR6] &= ~(1UL << VAR7);
        }
    }