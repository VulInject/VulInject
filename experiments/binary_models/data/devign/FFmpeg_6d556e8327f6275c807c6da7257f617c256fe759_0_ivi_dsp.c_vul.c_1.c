void FUN1(const VAR1 *VAR2, VAR3 *VAR4, const int VAR5, const int VAR6)
{
    int VAR7, VAR8, VAR9, VAR10, VAR11, VAR12, VAR13, VAR14, VAR15, VAR16, VAR17;
    const VAR18 *VAR19, *VAR20, *VAR21, *VAR22;
    int32_t VAR23;
    VAR23 = VAR2->VAR24[0].VAR23;
    VAR19 = VAR2->VAR24[0].VAR25;
    VAR20 = VAR2->VAR24[1].VAR25;
    VAR21 = VAR2->VAR24[2].VAR25;
    VAR22 = VAR2->VAR24[3].VAR25;
    for (VAR8 = 0; VAR8 < VAR2->VAR26; VAR8 += 2)
    {
        for (VAR7 = 0, VAR9 = 0; VAR7 < VAR2->VAR27; VAR7 += 2, VAR9++)
        {
            VAR10 = VAR19[VAR9];
            VAR11 = VAR20[VAR9];
            VAR12 = VAR21[VAR9];
            VAR13 = VAR22[VAR9];
            VAR14 = (VAR10 + VAR11 + VAR12 + VAR13 + 2) >> 2;
            VAR15 = (VAR10 + VAR11 - VAR12 - VAR13 + 2) >> 2;
            VAR16 = (VAR10 - VAR11 + VAR12 - VAR13 + 2) >> 2;
            VAR17 = (VAR10 - VAR11 - VAR12 + VAR13 + 2) >> 2;
            VAR4[VAR7] = FUN2(VAR14 + 128);
            VAR4[VAR7 + 1] = FUN2(VAR15 + 128);
            VAR4[VAR5 + VAR7] = FUN2(VAR16 + 128);
            VAR4[VAR5 + VAR7 + 1] = FUN2(VAR17 + 128);
        }
        VAR4 += VAR5 << 1;
        VAR19 += VAR23;
        VAR20 += VAR23;
        VAR21 += VAR23;
        VAR22 += VAR23;
    }
}