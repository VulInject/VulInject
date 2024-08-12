static int FUN1(VAR1 *VAR2, int VAR3, int VAR4, const VAR1 *VAR5, const VAR1 *VAR6)
{
    const VAR1 *VAR7 = VAR2;
    const VAR1 *VAR8 = VAR2 + VAR3 * VAR4;
    int VAR9 = 0x10000, VAR10 = 0;
    int VAR11, VAR12, VAR13, VAR14;
    VAR14 = FUN2(&VAR5);
    VAR2 += FUN2(&VAR5);
    if (VAR2 < VAR7 || VAR2 > VAR8)
        return -1;
    while (VAR14--)
    {
        if (VAR9 == 0x10000)
        {
            if (VAR5 >= VAR6)
                return -1;
            VAR10 = FUN3(&VAR5);
            VAR9 = 1;
        }
        if (VAR6 - VAR5 < 2 || VAR8 - VAR2 < 2)
            return -1;
        if (VAR10 & VAR9)
        {
            VAR11 = FUN3(&VAR5);
            VAR12 = (VAR11 & 0x1FFF) << 1;
            VAR13 = ((VAR11 >> 13) + 2) << 1;
            if (VAR2 - VAR7 < VAR12 || VAR8 - VAR2 < VAR13)
                return -1;
            FUN4(VAR2, VAR12, VAR13);
            VAR2 += VAR13;
        }
        else
        {
            *VAR2++ = *VAR5++;
            *VAR2++ = *VAR5++;
        }
        VAR9 <<= 1;
    }
    return 0;
}