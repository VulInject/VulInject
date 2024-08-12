FUN1(VAR1 *VAR2, const VAR3 *VAR4[2], const VAR3 *VAR5[2], const VAR3 *VAR6[2], const VAR3 *VAR7[2], VAR8 *VAR9, int VAR10, int VAR11, int VAR12, int VAR13)
{
    int VAR14 = VAR7[0] && VAR7[1];
    const VAR3 *VAR15 = VAR4[0], *VAR16 = VAR4[1], *VAR17 = VAR14 ? VAR7[0] : NULL, *VAR18 = VAR14 ? VAR7[1] : NULL;
    int VAR19 = 4096 - VAR11;
    int VAR20;
    for (VAR20 = 0; VAR20 < VAR10; VAR20++)
    {
        int VAR21 = (VAR15[VAR20 * 2] * VAR19 + VAR16[VAR20 * 2] * VAR11) >> 19;
        int VAR22;
        VAR21 = FUN2(VAR21);
        if (VAR14)
        {
            VAR22 = (VAR17[VAR20 * 2] * VAR19 + VAR18[VAR20 * 2] * VAR11) >> 19;
            VAR22 = FUN2(VAR22);
        }
        VAR9[VAR20 * 2] = VAR21;
        VAR9[VAR20 * 2 + 1] = VAR14 ? VAR22 : 255;
    }
}