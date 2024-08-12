int FUN1(VAR1 *VAR2, const VAR1 *VAR3, int VAR4, int VAR5, enum PixelFormat VAR6, int VAR7, int VAR8, int VAR9, int VAR10, int *VAR11)
{
    VAR12 *VAR13;
    int VAR14;
    int VAR15;
    int VAR16;
    int VAR17, VAR18;
    if (VAR6 < 0 || VAR6 >= VAR19 || !FUN2(VAR6))
        return -1;
    for (VAR17 = 0; VAR17 < 3; VAR17++)
    {
        VAR15 = VAR17 ? VAR20[VAR6].VAR21 : 0;
        VAR14 = VAR17 ? VAR20[VAR6].VAR22 : 0;
        if (VAR7 || VAR9)
        {
            memset(VAR2->VAR23[VAR17], VAR11[VAR17], VAR2->VAR24[VAR17] * (VAR7 >> VAR14) + (VAR9 >> VAR15));
        }
        if (VAR9 || VAR10)
        {
            VAR13 = VAR2->VAR23[VAR17] + VAR2->VAR24[VAR17] * (VAR7 >> VAR14) + (VAR2->VAR24[VAR17] - (VAR10 >> VAR15));
            VAR16 = (VAR4 - 1 - (VAR7 + VAR8)) >> VAR14;
            for (VAR18 = 0; VAR18 < VAR16; VAR18++)
            {
                memset(VAR13, VAR11[VAR17], (VAR9 + VAR10) >> VAR15);
                VAR13 += VAR2->VAR24[VAR17];
            }
        }
        if (VAR3)
        {
            VAR12 *VAR25 = VAR3->VAR23[VAR17];
            VAR13 = VAR2->VAR23[VAR17] + VAR2->VAR24[VAR17] * (VAR7 >> VAR14) + (VAR9 >> VAR15);
            memcpy(VAR13, VAR25, (VAR5 - VAR9 - VAR10) >> VAR15);
            VAR25 += VAR3->VAR24[VAR17];
            VAR13 = VAR2->VAR23[VAR17] + VAR2->VAR24[VAR17] * (VAR7 >> VAR14) + (VAR2->VAR24[VAR17] - (VAR10 >> VAR15));
            VAR16 = (VAR4 - 1 - (VAR7 + VAR8)) >> VAR14;
            for (VAR18 = 0; VAR18 < VAR16; VAR18++)
            {
                memset(VAR13, VAR11[VAR17], (VAR9 + VAR10) >> VAR15);
                memcpy(VAR13 + ((VAR9 + VAR10) >> VAR15), VAR25, (VAR5 - VAR9 - VAR10) >> VAR15);
                VAR25 += VAR3->VAR24[VAR17];
                VAR13 += VAR2->VAR24[VAR17];
            }
        }
        if (VAR8 || VAR10)
        {
            VAR13 = VAR2->VAR23[VAR17] + VAR2->VAR24[VAR17] * ((VAR4 - VAR8) >> VAR14) - (VAR10 >> VAR15);
            memset(VAR13, VAR11[VAR17], VAR2->VAR24[VAR17] * (VAR8 >> VAR14) + (VAR10 >> VAR15));
        }
    }
    return 0;
}