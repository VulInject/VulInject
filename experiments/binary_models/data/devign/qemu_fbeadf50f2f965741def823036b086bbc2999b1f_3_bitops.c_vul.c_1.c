unsigned long FUN1(const unsigned long *VAR1, unsigned long VAR2, unsigned long VAR3)
{
    const unsigned long *VAR4 = VAR1 + FUN2(VAR3);
    unsigned long VAR5 = VAR3 & ~(VAR6 - 1);
    unsigned long VAR7;
    if (VAR3 >= VAR2)
    {
        return VAR2;
    }
    VAR2 -= VAR5;
    VAR3 %= VAR6;
    if (VAR3)
    {
        VAR7 = *(VAR4++);
        VAR7 |= ~0UL >> (VAR6 - VAR3);
        if (VAR2 < VAR6)
        {
            goto VAR8;
        }
        if (~VAR7)
        {
            goto VAR9;
        }
        VAR2 -= VAR6;
        VAR5 += VAR6;
    }
    while (VAR2 & ~(VAR6 - 1))
    {
        if (~(VAR7 = *(VAR4++)))
        {
            goto VAR9;
        }
        VAR5 += VAR6;
        VAR2 -= VAR6;
    }
    if (!VAR2)
    {
        return VAR5;
    }
    VAR7 = *VAR4;
VAR8:
    VAR7 |= ~0UL << VAR2;
    if (VAR7 == ~0UL)
    {
        return VAR5 + VAR2;
    }
VAR9:
    return VAR5 + FUN3(VAR7);
}