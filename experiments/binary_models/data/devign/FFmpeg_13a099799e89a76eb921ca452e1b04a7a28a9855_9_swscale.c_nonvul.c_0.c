static void FUN1(VAR1 *VAR2, const VAR3 *VAR4, const VAR3 **VAR5, int VAR6, const VAR3 *VAR7, const VAR3 **VAR8, const VAR3 **VAR9, int VAR10, const VAR3 **VAR11, VAR12 *VAR13[4], int VAR14, int VAR15)
{
    VAR12 *VAR16 = VAR13[0], *VAR17 = VAR13[1];
    enum PixelFormat VAR18 = VAR2->VAR18;
    int VAR19;
    for (VAR19 = 0; VAR19 < VAR14; VAR19++)
    {
        int VAR20 = 1 << 18;
        int VAR21;
        for (VAR21 = 0; VAR21 < VAR6; VAR21++)
            VAR20 += VAR5[VAR21][VAR19] * VAR4[VAR21];
        VAR16[VAR19] = FUN2(VAR20 >> 19);
    }
    if (!VAR17)
        return;
    if (VAR18 == VAR22)
        for (VAR19 = 0; VAR19 < VAR15; VAR19++)
        {
            int VAR23 = 1 << 18;
            int VAR24 = 1 << 18;
            int VAR21;
            for (VAR21 = 0; VAR21 < VAR10; VAR21++)
            {
                VAR23 += VAR8[VAR21][VAR19] * VAR7[VAR21];
                VAR24 += VAR9[VAR21][VAR19] * VAR7[VAR21];
            }
            VAR17[2 * VAR19] = FUN2(VAR23 >> 19);
            VAR17[2 * VAR19 + 1] = FUN2(VAR24 >> 19);
        }
    else
        for (VAR19 = 0; VAR19 < VAR15; VAR19++)
        {
            int VAR23 = 1 << 18;
            int VAR24 = 1 << 18;
            int VAR21;
            for (VAR21 = 0; VAR21 < VAR10; VAR21++)
            {
                VAR23 += VAR8[VAR21][VAR19] * VAR7[VAR21];
                VAR24 += VAR9[VAR21][VAR19] * VAR7[VAR21];
            }
            VAR17[2 * VAR19] = FUN2(VAR24 >> 19);
            VAR17[2 * VAR19 + 1] = FUN2(VAR23 >> 19);
        }
}