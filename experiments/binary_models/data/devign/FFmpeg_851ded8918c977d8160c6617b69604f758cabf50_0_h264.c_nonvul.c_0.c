static int FUN1(VAR1 *VAR2)
{
    VAR3 *const VAR4 = &VAR2->VAR4;
    const int VAR5 = VAR4->VAR5;
    const int VAR6 = VAR4->VAR6 & ~1;
    const int VAR7 = VAR5 - 1 + VAR6 * VAR4->VAR8;
    const int VAR9 = VAR5 + (VAR6 - 2) * VAR4->VAR8;
    unsigned int VAR10 = 0;
    if (VAR2->VAR11[VAR7] == VAR2->VAR12 && FUN2(VAR4->VAR13.VAR14[VAR7]))
    {
        VAR10 += 1;
    }
    if (VAR2->VAR11[VAR9] == VAR2->VAR12 && FUN2(VAR4->VAR13.VAR14[VAR9]))
    {
        VAR10 += 1;
    }
    return FUN3(&VAR2->VAR15, &VAR2->VAR16[70 + VAR10]);
}