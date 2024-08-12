void FUN1(VAR1 *VAR2, const VAR3 *VAR4[4], const int VAR5[4], const VAR3 *VAR6[4], const int VAR7[4], int VAR8, int VAR9, double VAR10[4])
{
    int VAR11, VAR12, VAR13;
    for (VAR12 = 0; VAR12 < VAR2->VAR14; VAR12++)
    {
        const int VAR15 = VAR2->VAR16[VAR12];
        const int VAR17 = VAR2->VAR18[VAR12];
        const VAR3 *VAR19 = VAR4[VAR12];
        const VAR3 *VAR20 = VAR6[VAR12];
        const int VAR21 = VAR7[VAR12];
        const int VAR22 = VAR5[VAR12];
        int VAR23 = 0;
        for (VAR11 = 0; VAR11 < VAR17; VAR11++)
        {
            for (VAR13 = 0; VAR13 < VAR15; VAR13++)
                VAR23 += FUN2(VAR19[VAR13] - VAR20[VAR13]);
            VAR20 += VAR21;
            VAR19 += VAR22;
        }
        VAR10[VAR12] = VAR23 / (double)(VAR15 * VAR17);
    }
}