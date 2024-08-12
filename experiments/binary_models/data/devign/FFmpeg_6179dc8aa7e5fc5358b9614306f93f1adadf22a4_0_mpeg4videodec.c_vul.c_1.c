static inline int FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5 = &VAR2->VAR6;
    int VAR7, VAR8, VAR9, VAR10, VAR11, VAR12, VAR13;
    int VAR14 = 1 << (VAR5->VAR15 + 4);
    const int VAR16 = VAR5->VAR17;
    if (VAR5->VAR18 & VAR19)
        VAR14 >>= VAR5->VAR20;
    if (VAR5->VAR21 == 1)
    {
        if (VAR2->VAR22 == 500 && VAR2->VAR23 == 413)
            VAR10 = VAR5->VAR24[0][VAR3] / (1 << (VAR16 - VAR5->VAR20));
        else
            VAR10 = FUN2(VAR5->VAR24[0][VAR3] << VAR5->VAR20, VAR16);
    }
    else
    {
        VAR11 = VAR5->VAR25[VAR3][0];
        VAR12 = VAR5->VAR25[VAR3][1];
        VAR13 = VAR2->VAR26[0];
        if (VAR3)
            VAR12 -= 1 << (VAR13 + VAR16 + 1);
        else
            VAR11 -= 1 << (VAR13 + VAR16 + 1);
        VAR9 = VAR5->VAR24[0][VAR3] + VAR11 * VAR5->VAR27 * 16 + VAR12 * VAR5->VAR28 * 16;
        VAR10 = 0;
        for (VAR8 = 0; VAR8 < 16; VAR8++)
        {
            int VAR29;
            VAR29 = VAR9 + VAR12 * VAR8;
            for (VAR7 = 0; VAR7 < 16; VAR7++)
            {
                VAR10 += VAR29 >> VAR13;
                VAR29 += VAR11;
            }
        }
        VAR10 = FUN2(VAR10, VAR16 + 8 - VAR5->VAR20);
    }
    if (VAR10 < -VAR14)
        VAR10 = -VAR14;
    else if (VAR10 >= VAR14)
        VAR10 = VAR14 - 1;
    return VAR10;
}