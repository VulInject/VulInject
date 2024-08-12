static void FUN1(VAR1 *VAR2, uint32_t VAR3, int VAR4, int VAR5, int VAR6, int VAR7)
{
    const int VAR8 = VAR2->VAR8[0] / sizeof(VAR9);
    const VAR9 *VAR10 = (VAR9 *)VAR2->VAR11[0] + VAR5 * VAR8;
    const VAR9 *VAR12, *VAR13 = VAR10 + (VAR5 + VAR7) * VAR8;
    VAR9 *VAR14;
    for (; VAR10 < VAR13; VAR10 += VAR8)
    {
        VAR14 = (VAR9 *)VAR10 + VAR4;
        VAR12 = VAR14 + VAR6;
        for (; VAR14 < VAR12; VAR14++)
            *VAR14 = VAR3;
    }
}