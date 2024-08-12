static void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, const VAR6 *VAR7, const VAR3 *VAR8, const VAR3 *VAR9, int VAR10)
{
    int VAR11;
    VAR12 *VAR13 = (VAR12 *)VAR4;
    const VAR14 *VAR15 = (const VAR14 *)VAR7;
    int VAR16 = VAR17[VAR2->VAR18].VAR19[0].VAR20;
    int VAR21 = (VAR16 <= 7) ? 11 : (VAR16 - 4);
    for (VAR11 = 0; VAR11 < VAR5; VAR11++)
    {
        int VAR22;
        int VAR23 = VAR9[VAR11];
        unsigned int VAR24 = 0;
        for (VAR22 = 0; VAR22 < VAR10; VAR22++)
        {
            VAR24 += VAR15[VAR23 + VAR22] * VAR8[VAR10 * VAR11 + VAR22];
        }
        VAR13[VAR11] = FUN2(VAR24 >> VAR21, (1 << 19) - 1);
    }
}