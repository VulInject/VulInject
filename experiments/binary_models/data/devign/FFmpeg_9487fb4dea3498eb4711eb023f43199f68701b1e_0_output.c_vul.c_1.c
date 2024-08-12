FUN1(VAR1 *VAR2, const VAR3 *VAR4[2], const VAR3 *VAR5[2], const VAR3 *VAR6[2], const VAR3 *VAR7[2], VAR8 *VAR9, int VAR10, int VAR11, int VAR12, int VAR13, enum PixelFormat VAR14, int VAR15)
{
    const VAR3 *VAR16 = VAR4[0], *VAR17 = VAR4[1], *VAR18 = VAR5[0], *VAR19 = VAR5[1], *VAR20 = VAR6[0], *VAR21 = VAR6[1], *VAR22 = VAR15 ? VAR7[0] : NULL, *VAR23 = VAR15 ? VAR7[1] : NULL;
    int VAR24 = 4095 - VAR11;
    int VAR25 = 4095 - VAR12;
    int VAR26;
    for (VAR26 = 0; VAR26 < (VAR10 >> 1); VAR26++)
    {
        int VAR27 = (VAR16[VAR26 * 2] * VAR24 + VAR17[VAR26 * 2] * VAR11) >> 19;
        int VAR28 = (VAR16[VAR26 * 2 + 1] * VAR24 + VAR17[VAR26 * 2 + 1] * VAR11) >> 19;
        int VAR29 = (VAR18[VAR26] * VAR25 + VAR19[VAR26] * VAR12) >> 19;
        int VAR30 = (VAR20[VAR26] * VAR25 + VAR21[VAR26] * VAR12) >> 19;
        int VAR31, VAR32;
        const void *VAR33 = VAR2->VAR34[VAR30], *VAR35 = (VAR2->VAR36[VAR29] + VAR2->VAR37[VAR30]), *VAR38 = VAR2->VAR39[VAR29];
        if (VAR15)
        {
            VAR31 = (VAR22[VAR26 * 2] * VAR24 + VAR23[VAR26 * 2] * VAR11) >> 19;
            VAR32 = (VAR22[VAR26 * 2 + 1] * VAR24 + VAR23[VAR26 * 2 + 1] * VAR11) >> 19;
        }
        FUN2(VAR9, VAR26, VAR27, VAR28, VAR15 ? VAR31 : 0, VAR15 ? VAR32 : 0, VAR33, VAR35, VAR38, VAR13, VAR14, VAR15);
    }