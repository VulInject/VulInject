static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5;
    int VAR6 = VAR2->VAR7[VAR2->VAR8 - 1][0];
    int VAR9 = VAR2->VAR7[VAR2->VAR8 - 1][1];
    int VAR10;
    VAR3 *VAR11 = VAR2->VAR12;
    VAR3 *VAR13 = VAR4;
    VAR11 += 5;
    for (VAR10 = 0; VAR10 < VAR6 * VAR9; VAR10++)
        VAR13[VAR10] *= 1 << VAR14;
    for (VAR5 = 0; VAR5 < VAR2->VAR8; VAR5++)
    {
        int VAR15 = VAR2->VAR7[VAR5][0], VAR16 = VAR2->VAR7[VAR5][1], VAR17 = VAR2->VAR18[VAR5][0], VAR19 = VAR2->VAR18[VAR5][1], VAR20;
        VAR3 *VAR21;
        VAR21 = VAR11 + VAR17;
        for (VAR20 = 0; VAR20 < VAR16; VAR20++)
        {
            int VAR10, VAR22 = 0;
            for (VAR10 = VAR17; VAR10 < VAR15; VAR10 += 2, VAR22++)
                VAR21[VAR10] = ((VAR13[VAR6 * VAR20 + VAR22] * VAR23) + (1 << 15)) >> 16;
            for (VAR10 = 1 - VAR17; VAR10 < VAR15; VAR10 += 2, VAR22++)
                VAR21[VAR10] = VAR13[VAR6 * VAR20 + VAR22];
            FUN2(VAR11, VAR17, VAR17 + VAR15);
            for (VAR10 = 0; VAR10 < VAR15; VAR10++)
                VAR13[VAR6 * VAR20 + VAR10] = VAR21[VAR10];
        }
        VAR21 = VAR11 + VAR19;
        for (VAR20 = 0; VAR20 < VAR15; VAR20++)
        {
            int VAR10, VAR22 = 0;
            for (VAR10 = VAR19; VAR10 < VAR16; VAR10 += 2, VAR22++)
                VAR21[VAR10] = ((VAR13[VAR6 * VAR22 + VAR20] * VAR23) + (1 << 15)) >> 16;
            for (VAR10 = 1 - VAR19; VAR10 < VAR16; VAR10 += 2, VAR22++)
                VAR21[VAR10] = VAR13[VAR6 * VAR22 + VAR20];
            FUN2(VAR11, VAR19, VAR19 + VAR16);
            for (VAR10 = 0; VAR10 < VAR16; VAR10++)
                VAR13[VAR6 * VAR10 + VAR20] = VAR21[VAR10];
        }
    }
    for (VAR10 = 0; VAR10 < VAR6 * VAR9; VAR10++)
        VAR13[VAR10] = (VAR13[VAR10] + ((1 << VAR14) >> 1)) >> VAR14;
}