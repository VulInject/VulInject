static inline int FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4;
    const int VAR5 = VAR2->VAR6.VAR7;
    const int VAR8 = 1 << VAR5;
    const int VAR9 = VAR8 << ((4 - VAR5) & 3);
    const int VAR10 = 0xeeeeeeef & ((1U << VAR5) - 1);
    VAR2->VAR11 = FUN2(15 * VAR8 * sizeof(*VAR2->VAR11));
    if (!VAR2->VAR11)
        return 1;
    VAR2->VAR12 = FUN2(15 * VAR8 * sizeof(*VAR2->VAR12));
    if (!VAR2->VAR12)
        return 1;
    for (VAR3 = 0; VAR3 < VAR8; VAR3++)
    {
        for (VAR4 = 0; VAR4 < 15; VAR4++)
        {
            const int VAR13 = ((VAR8 * VAR4) / 15 + VAR3) >> VAR5;
            const int VAR14 = (((VAR4 * VAR9) / 15) + (VAR3 * VAR10)) >> VAR5;
            const int VAR15 = 15 * VAR3 + (VAR4 - VAR13 * 15) * (1 << VAR5);
            const int VAR16 = VAR3 * VAR10 * 15 + VAR4 * VAR9 - 15 * VAR14 * VAR8;
            VAR2->VAR11[VAR3 * 15 + VAR4] = VAR15;
            VAR2->VAR12[VAR16] = VAR8 * VAR4 + VAR3;
        }
    }
    return 0;
}