static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6, ptrdiff_t VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    VAR11 *VAR12 = &VAR9->VAR13;
    unsigned VAR14, VAR15, VAR16, VAR17 = 0, VAR18 = 0;
    int64_t VAR19, VAR20 = 3;
    int VAR21, VAR22, VAR23 = 0;
    while (VAR18 < VAR5)
    {
        VAR15 = FUN2(FUN3((VAR20 >> 8) + 3) ^ 0x1F, 14);
        VAR14 = FUN4(VAR12, 0, 8);
        if (VAR14 < 8)
        {
            VAR19 = FUN5(VAR12, VAR15);
            if (VAR19 <= 1)
            {
                FUN6(VAR12, VAR15 - 1);
                VAR22 = ((1 << VAR15) - 1) * VAR14;
            }
            else
            {
                FUN6(VAR12, VAR15);
                VAR22 = VAR19 + ((1 << VAR15) - 1) * VAR14 - 1;
            }
        }
        else
        {
            VAR22 = FUN7(VAR12, 16);
        }
        VAR19 = -((VAR22 + VAR23) & 1) | 1;
        VAR4[VAR17++] = VAR19 * ((VAR22 + VAR23 + 1) >> 1);
        VAR18++;
        if (VAR17 == VAR6)
        {
            VAR17 = 0;
            VAR4 += VAR7;
        }
        VAR20 = 120 * (VAR22 + VAR23) + VAR20 - (120 * VAR20 >> 8);
        VAR23 = 0;
        if (VAR20 * 4 > 0xFF || VAR18 >= VAR5)
            continue;
        VAR15 = ((VAR20 + 8) >> 5) + (VAR20 ? FUN3(VAR20) : 32) - 24;
        VAR22 = FUN8(16383, VAR15);
        VAR14 = FUN4(VAR12, 0, 8);
        if (VAR14 > 7)
        {
            VAR21 = FUN7(VAR12, 16);
        }
        else
        {
            VAR19 = FUN5(VAR12, VAR15);
            if (VAR19 > 1)
            {
                FUN6(VAR12, VAR15);
                VAR21 = VAR19 + VAR22 * VAR14 - 1;
            }
            else
            {
                FUN6(VAR12, VAR15 - 1);
                VAR21 = VAR22 * VAR14;
            }
        }
        if (VAR21 > VAR5 - VAR18)
            return VAR24;
        VAR18 += VAR21;
        for (VAR16 = 0; VAR16 < VAR21; VAR16++)
        {
            VAR4[VAR17++] = 0;
            if (VAR17 == VAR6)
            {
                VAR17 = 0;
                VAR4 += VAR7;
            }
        }
        VAR20 = 0;
        VAR23 = VAR21 < 0xFFFF ? 1 : 0;
    }
    FUN9(VAR12);
    return FUN10(VAR12) >> 3;
}