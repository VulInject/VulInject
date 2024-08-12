static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6, int VAR7, int VAR8)
{
    int VAR9 = 0, VAR10 = 0, VAR11 = 0;
    if (!VAR6)
    {
        int VAR12, VAR13, VAR14, VAR15, VAR16;
        VAR17 = FUN2(VAR2) << 4;
        VAR16 = FUN2(VAR2);
        VAR17 |= VAR16 >> 4;
        VAR18 = (VAR16 & 0xF) << 8;
        VAR18 |= FUN2(VAR2);
        FUN3(VAR12, VAR14)
        FUN3(VAR13, VAR15) if (VAR14 >= VAR7 || VAR15 >= VAR8 || VAR12 > VAR14 || VAR13 > VAR15) return VAR19;
        VAR4 += VAR12 + VAR5 * VAR13;
        VAR7 = VAR14 - VAR12 + 1;
        VAR8 = VAR15 - VAR13 + 1;
        if (VAR13)
            VAR11 = 1;
    }
    do
    {
        VAR3 *VAR20 = VAR4;
        do
        {
            if (VAR10-- < 1)
            {
                int VAR18 = FUN2(VAR2);
                if (VAR18 < 128)
                    VAR9 = VAR18 << 8 | FUN2(VAR2);
                else if (VAR18 > 129)
                {
                    VAR10 = 0;
                    while (VAR18-- > 130)
                        VAR10 = (VAR10 << 8) + FUN2(VAR2) + 1;
                    if (VAR9 == -2)
                    {
                        int VAR21 = FUN4((unsigned)VAR10, VAR4 + VAR7 - VAR20);
                        VAR10 -= VAR21;
                        VAR20 += VAR21;
                    }
                }
                else
                    VAR9 = 127 - VAR18;
            }
            if (VAR9 >= 0)
                *VAR20 = VAR9;
            else if (VAR9 == -1 && VAR11)
                *VAR20 = *(VAR20 - VAR5);
        } while (++VAR20 < VAR4 + VAR7);
        VAR4 += VAR5;
        VAR11 = 1;
    } while (--VAR8);
    return 0;
}