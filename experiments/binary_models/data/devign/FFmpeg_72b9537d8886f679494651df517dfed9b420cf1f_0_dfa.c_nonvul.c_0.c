static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6)
{
    const VAR3 *VAR7 = VAR4;
    const VAR3 *VAR8 = VAR4 + VAR5 * VAR6;
    int VAR9 = 0x10000, VAR10 = 0;
    int VAR11, VAR12, VAR13, VAR14, VAR15;
    VAR15 = FUN2(VAR2);
    while (VAR15--)
    {
        if (FUN3(VAR2) < 2)
            return -1;
        if (VAR9 == 0x10000)
        {
            VAR10 = FUN4(VAR2);
            VAR9 = 1;
        }
        if (VAR8 - VAR4 < VAR5 + 2)
            return -1;
        if (VAR10 & VAR9)
        {
            VAR12 = FUN2(VAR2);
            VAR13 = (VAR12 & 0x1FFF) << 2;
            VAR14 = ((VAR12 >> 13) + 2) << 1;
            if (VAR4 - VAR7 < VAR13 || VAR8 - VAR4 < VAR14 * 2 + VAR5)
                return -1;
            for (VAR11 = 0; VAR11 < VAR14; VAR11++)
            {
                VAR4[0] = VAR4[1] = VAR4[VAR5] = VAR4[VAR5 + 1] = VAR4[-VAR13];
                VAR4 += 2;
            }
        }
        else if (VAR10 & (VAR9 << 1))
        {
            VAR4 += FUN2(VAR2) * 2;
        }
        else
        {
            VAR4[0] = VAR4[1] = VAR4[VAR5] = VAR4[VAR5 + 1] = FUN5(VAR2);
            VAR4 += 2;
            VAR4[0] = VAR4[1] = VAR4[VAR5] = VAR4[VAR5 + 1] = FUN5(VAR2);
            VAR4 += 2;
        }
        VAR9 <<= 2;
    }
    return 0;
}