static int FUN1(VAR1 *VAR2, int VAR3, int VAR4, const VAR1 *VAR5, const VAR1 *VAR6)
{
    const VAR1 *VAR7 = VAR2 + VAR3 * VAR4;
    VAR1 *VAR8;
    int VAR9, VAR10, VAR11;
    VAR9 = FUN2(&VAR5);
    if (VAR9 >= VAR4 || VAR3 * VAR9 < 0)
        return -1;
    VAR2 += VAR3 * VAR9;
    VAR10 = FUN2(&VAR5);
    if (VAR2 + VAR10 * VAR3 > VAR7 || VAR5 >= VAR6)
        return -1;
    while (VAR10--)
    {
        VAR8 = VAR2;
        VAR2 += VAR3;
        VAR11 = *VAR5++;
        while (VAR11--)
        {
            if (VAR6 - VAR5 < 3)
                return -1;
            VAR8 += *VAR5++;
            if (VAR8 >= VAR2)
                return -1;
            VAR9 = (VAR12)*VAR5++;
            if (VAR9 >= 0)
            {
                if (VAR8 + VAR9 > VAR2 || VAR6 - VAR5 < VAR9)
                    return -1;
                FUN3(&VAR5, VAR8, VAR9);
            }
            else
            {
                VAR9 = -VAR9;
                if (VAR8 + VAR9 > VAR2 || VAR5 >= VAR6)
                    return -1;
                memset(VAR8, *VAR5++, VAR9);
            }
            VAR8 += VAR9;
        }
    }
    return 0;
}