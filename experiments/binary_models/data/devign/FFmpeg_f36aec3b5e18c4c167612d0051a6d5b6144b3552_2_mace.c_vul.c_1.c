static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, const VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9 = VAR3;
    VAR10 *VAR11 = VAR2->VAR12;
    int VAR13, VAR14, VAR15;
    for (VAR13 = 0; VAR13 < VAR2->VAR16; VAR13++)
    {
        VAR8 *VAR17 = VAR9 + VAR13;
        for (VAR14 = 0; VAR14 < VAR7 / 2 / VAR2->VAR16; VAR14++)
            for (VAR15 = 0; VAR15 < 2; VAR15++)
            {
                uint8_t VAR18 = VAR6[VAR13 * 2 + VAR14 * 2 * VAR2->VAR16 + VAR15];
                FUN2(&VAR11->VAR19[VAR13], VAR17, VAR18 & 7, VAR20, VAR21, 8, VAR2->VAR16);
                VAR17 += VAR2->VAR16;
                FUN2(&VAR11->VAR19[VAR13], VAR17, (VAR18 >> 3) & 3, VAR22, VAR23, 4, VAR2->VAR16);
                VAR17 += VAR2->VAR16;
                FUN2(&VAR11->VAR19[VAR13], VAR17, VAR18 >> 5, VAR20, VAR21, 8, VAR2->VAR16);
                VAR17 += VAR2->VAR16;
            }
    }
    *VAR4 = 2 * 3 * VAR7;
    return VAR7;
}