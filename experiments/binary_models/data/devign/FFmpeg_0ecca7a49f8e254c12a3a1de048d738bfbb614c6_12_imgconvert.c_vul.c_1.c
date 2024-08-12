int FUN1(const VAR1 *VAR2, int VAR3, int VAR4, int VAR5, unsigned char *VAR6, int VAR7)
{
    VAR8 *VAR9 = &VAR10[VAR3];
    int VAR11, VAR12, VAR13, VAR14, VAR15;
    const unsigned char *VAR16;
    int VAR17 = FUN2(VAR3, VAR4, VAR5);
    if (VAR17 > VAR7)
        return -1;
    if (VAR9->VAR18 == VAR19 || VAR9->VAR18 == VAR20)
    {
        if (VAR3 == VAR21 || VAR3 == VAR22 || VAR3 == VAR23 || VAR3 == VAR24)
            VAR13 = VAR4 * 2;
        else if (VAR3 == VAR25)
            VAR13 = VAR4 + VAR4 / 2;
        else if (VAR3 == VAR26)
            VAR13 = VAR4;
        else
            VAR13 = VAR4 * (VAR9->VAR27 * VAR9->VAR28 / 8);
        VAR15 = 1;
        VAR14 = VAR5;
    }
    else
    {
        VAR15 = VAR9->VAR28;
        VAR13 = (VAR4 * VAR9->VAR27 + 7) / 8;
        VAR14 = VAR5;
    }
    for (VAR11 = 0; VAR11 < VAR15; VAR11++)
    {
        if (VAR11 == 1)
        {
            VAR13 = VAR4 >> VAR9->VAR29;
            VAR14 = VAR5 >> VAR9->VAR30;
        }
        VAR16 = VAR2->VAR31[VAR11];
        for (VAR12 = 0; VAR12 < VAR14; VAR12++)
        {
            memcpy(VAR6, VAR16, VAR13);
            VAR6 += VAR13;
            VAR16 += VAR2->VAR32[VAR11];
        }
    }
    if (VAR9->VAR18 == VAR20)
        memcpy((unsigned char *)(((VAR33)VAR6 + 3) & ~3), VAR2->VAR31[1], 256 * 4);
    return VAR17;
}