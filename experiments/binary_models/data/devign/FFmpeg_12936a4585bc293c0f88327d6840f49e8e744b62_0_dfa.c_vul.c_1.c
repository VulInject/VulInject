static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6)
{
    const VAR3 *VAR7 = VAR4;
    const VAR3 *VAR8 = VAR4 + VAR5 * VAR6;
    int VAR9 = 0x10000, VAR10 = 0;
    int VAR11, VAR12, VAR13;
    unsigned VAR14;
    VAR13 = FUN2(VAR2);
    VAR14 = FUN2(VAR2);
    if (VAR13 == 0 && VAR14 == VAR8 - VAR4)
        return 0;
    if (VAR8 - VAR4 <= VAR14)
        return VAR15;
    VAR4 += VAR14;
    while (VAR13--)
    {
        if (FUN3(VAR2) < 2)
            return VAR15;
        if (VAR9 == 0x10000)
        {
            VAR10 = FUN4(VAR2);
            VAR9 = 1;
        }
        if (VAR8 - VAR4 < 2)
            return VAR15;
        if (VAR10 & VAR9)
        {
            VAR11 = FUN5(VAR2);
            VAR14 = (VAR11 & 0x1FFF) << 1;
            VAR12 = ((VAR11 >> 13) + 2) << 1;
            if (VAR4 - VAR7 < VAR14 || VAR8 - VAR4 < VAR12)
                return VAR15;
            FUN6(VAR4, VAR14, VAR12);
            VAR4 += VAR12;
        }
        else
        {
            *VAR4++ = FUN7(VAR2);
            *VAR4++ = FUN7(VAR2);
        }
        VAR9 <<= 1;
    }
    return 0;
}