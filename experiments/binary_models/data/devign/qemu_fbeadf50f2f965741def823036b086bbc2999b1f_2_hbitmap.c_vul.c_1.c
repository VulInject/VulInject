unsigned long FUN1(VAR1 *VAR2)
{
    size_t VAR3 = VAR2->VAR3;
    const VAR4 *VAR5 = VAR2->VAR5;
    unsigned VAR6 = VAR7 - 1;
    unsigned long VAR8;
    do
    {
        VAR8 = VAR2->VAR8[--VAR6];
        VAR3 >>= VAR9;
    } while (VAR8 == 0);
    if (VAR6 == 0 && VAR8 == (1UL << (VAR10 - 1)))
    {
        return 0;
    }
    for (; VAR6 < VAR7 - 1; VAR6++)
    {
        VAR3 = (VAR3 << VAR9) + FUN2(VAR8) - 1;
        VAR2->VAR8[VAR6] = VAR8 & (VAR8 - 1);
        VAR8 = VAR5->VAR11[VAR6 + 1][VAR3];
    }
    VAR2->VAR3 = VAR3;
    FUN3(VAR2->VAR5, VAR2, VAR3, VAR8);
    assert(VAR8);
    return VAR8;
}