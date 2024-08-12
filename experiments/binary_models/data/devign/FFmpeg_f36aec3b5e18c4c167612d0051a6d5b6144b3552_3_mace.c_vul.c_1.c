static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, const VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9 = VAR3;
    VAR10 *VAR11 = VAR2->VAR12;
    int VAR13, VAR14;
    for (VAR13 = 0; VAR13 < VAR2->VAR15; VAR13++)
    {
        VAR8 *VAR16 = VAR9 + VAR13;
        for (VAR14 = 0; VAR14 < VAR7 / VAR2->VAR15; VAR14++)
        {
            uint8_t VAR17 = VAR6[VAR13 + VAR14 * VAR2->VAR15];
            FUN2(&VAR11->VAR18[VAR13], VAR16, VAR17 >> 5, VAR19, VAR20, 8, VAR2->VAR15);
            VAR16 += VAR2->VAR15 << 1;
            FUN2(&VAR11->VAR18[VAR13], VAR16, (VAR17 >> 3) & 3, VAR21, VAR22, 4, VAR2->VAR15);
            VAR16 += VAR2->VAR15 << 1;
            FUN2(&VAR11->VAR18[VAR13], VAR16, VAR17 & 7, VAR19, VAR20, 8, VAR2->VAR15);
            VAR16 += VAR2->VAR15 << 1;
        }
    }
    *VAR4 = 2 * 6 * VAR7;
    return VAR7;
}