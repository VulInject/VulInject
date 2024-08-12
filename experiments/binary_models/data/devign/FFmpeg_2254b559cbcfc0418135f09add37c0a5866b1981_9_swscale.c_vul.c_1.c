static void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, const VAR6 *VAR7, const VAR3 *VAR8, const VAR3 *VAR9, int VAR10)
{
    int VAR11;
    const VAR12 *VAR13 = (const VAR12 *)VAR7;
    int VAR14 = VAR15[VAR2->VAR16].VAR17[0].VAR18;
    for (VAR11 = 0; VAR11 < VAR5; VAR11++)
    {
        int VAR19;
        int VAR20 = VAR9[VAR11];
        int VAR21 = 0;
        for (VAR19 = 0; VAR19 < VAR10; VAR19++)
        {
            VAR21 += VAR13[VAR20 + VAR19] * VAR8[VAR10 * VAR11 + VAR19];
        }
        VAR4[VAR11] = FUN2(VAR21 >> VAR14, (1 << 15) - 1);
    }
}