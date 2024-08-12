static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6)
{
    const VAR3 *VAR7 = VAR4 + VAR5 * VAR6;
    VAR3 *VAR8;
    int VAR9, VAR10, VAR11, VAR12, VAR13;
    int VAR14 = 0;
    VAR12 = FUN2(VAR2);
    if (VAR12 > VAR6)
        return VAR15;
    while (VAR12--)
    {
        if (FUN3(VAR2) < 2)
            return VAR15;
        VAR13 = FUN4(VAR2);
        while ((VAR13 & 0xC000) == 0xC000)
        {
            unsigned VAR16 = -(VAR17)VAR13;
            unsigned VAR18 = -((VAR17)VAR13 * VAR5);
            if (VAR7 - VAR4 <= VAR18 || VAR14 + VAR12 + VAR16 > VAR6)
                return VAR15;
            VAR4 += VAR18;
            VAR14 += VAR16;
            VAR13 = FUN2(VAR2);
        }
        if (VAR7 <= VAR4)
            return VAR15;
        if (VAR13 & 0x8000)
        {
            VAR4[VAR5 - 1] = VAR13 & 0xFF;
            VAR13 = FUN2(VAR2);
        }
        VAR8 = VAR4;
        if (VAR7 - VAR4 < VAR5)
            return VAR15;
        VAR4 += VAR5;
        VAR14++;
        while (VAR13--)
        {
            if (VAR4 - VAR8 <= FUN5(VAR2))
                return VAR15;
            VAR8 += FUN6(VAR2);
            VAR9 = (VAR19)FUN6(VAR2);
            if (VAR9 >= 0)
            {
                if (VAR4 - VAR8 < VAR9 * 2)
                    return VAR15;
                if (FUN7(VAR2, VAR8, VAR9 * 2) != VAR9 * 2)
                    return VAR15;
                VAR8 += VAR9 * 2;
            }
            else
            {
                VAR9 = -VAR9;
                if (VAR4 - VAR8 < VAR9 * 2)
                    return VAR15;
                VAR11 = FUN2(VAR2);
                for (VAR10 = 0; VAR10 < VAR9; VAR10++)
                    FUN8(&VAR8, VAR11);
            }
        }
    }
    return 0;
}