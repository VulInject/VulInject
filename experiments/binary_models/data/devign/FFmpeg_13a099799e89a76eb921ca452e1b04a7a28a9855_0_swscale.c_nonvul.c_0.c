static void FUN1(VAR1 *VAR2, const VAR3 *VAR4, const VAR3 **VAR5, int VAR6, const VAR3 *VAR7, const VAR3 **VAR8, const VAR3 **VAR9, int VAR10, const VAR3 **VAR11, VAR12 *VAR13[4], int VAR14, int VAR15)
{
    VAR12 *VAR16 = VAR13[0], *VAR17 = VAR13[1], *VAR18 = VAR13[2], *VAR19 = VAR20 ? VAR13[3] : NULL;
    int VAR21;
    for (VAR21 = 0; VAR21 < VAR14; VAR21++)
    {
        int VAR22 = 1 << 18;
        int VAR23;
        for (VAR23 = 0; VAR23 < VAR6; VAR23++)
            VAR22 += VAR5[VAR23][VAR21] * VAR4[VAR23];
        VAR16[VAR21] = FUN2(VAR22 >> 19);
    }
    if (VAR17)
        for (VAR21 = 0; VAR21 < VAR15; VAR21++)
        {
            int VAR24 = 1 << 18;
            int VAR25 = 1 << 18;
            int VAR23;
            for (VAR23 = 0; VAR23 < VAR10; VAR23++)
            {
                VAR24 += VAR8[VAR23][VAR21] * VAR7[VAR23];
                VAR25 += VAR9[VAR23][VAR21] * VAR7[VAR23];
            }
            VAR17[VAR21] = FUN2(VAR24 >> 19);
            VAR18[VAR21] = FUN2(VAR25 >> 19);
        }
    if (VAR20 && VAR19)
        for (VAR21 = 0; VAR21 < VAR14; VAR21++)
        {
            int VAR22 = 1 << 18;
            int VAR23;
            for (VAR23 = 0; VAR23 < VAR6; VAR23++)
                VAR22 += VAR11[VAR23][VAR21] * VAR4[VAR23];
            VAR19[VAR21] = FUN2(VAR22 >> 19);
        }
}