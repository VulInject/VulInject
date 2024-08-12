FUN1(VAR1 *VAR2, const VAR3 *VAR4[2], const VAR3 *VAR5[2], const VAR3 *VAR6[2], const VAR3 *VAR7[2], VAR8 *VAR9, int VAR10, int VAR11, int VAR12, int VAR13, enum AVPixelFormat VAR14, int VAR15)
{
    const VAR3 *VAR16 = VAR4[0], *VAR17 = VAR4[1], *VAR18 = VAR5[0], *VAR19 = VAR5[1], *VAR20 = VAR6[0], *VAR21 = VAR6[1], *VAR22 = VAR15 ? VAR7[0] : NULL, *VAR23 = VAR15 ? VAR7[1] : NULL;
    int VAR24 = 4096 - VAR11;
    int VAR25 = 4096 - VAR12;
    int VAR26;
    int VAR27 = (VAR14 == VAR28 || VAR14 == VAR29) ? 3 : 4;
    int VAR30[4] = {0};
    if (VAR14 == VAR31 || VAR14 == VAR32 || VAR14 == VAR33 || VAR14 == VAR34)
        VAR27 = 1;
    for (VAR26 = 0; VAR26 < VAR10; VAR26++)
    {
        int VAR35 = (VAR16[VAR26] * VAR24 + VAR17[VAR26] * VAR11) >> 10;
        int VAR36 = (VAR18[VAR26] * VAR25 + VAR19[VAR26] * VAR12 - (128 << 19)) >> 10;
        int VAR37 = (VAR20[VAR26] * VAR25 + VAR21[VAR26] * VAR12 - (128 << 19)) >> 10;
        int VAR38;
        if (VAR15)
        {
            VAR38 = (VAR22[VAR26] * VAR24 + VAR23[VAR26] * VAR11 + (1 << 18)) >> 19;
            if (VAR38 & 0x100)
                VAR38 = FUN2(VAR38);
        }
        FUN3(VAR2, VAR9, VAR26, VAR35, VAR38, VAR36, VAR37, VAR13, VAR14, VAR15, VAR30);
        VAR9 += VAR27;
    }
    VAR2->VAR39[0][VAR26] = VAR30[0];
    VAR2->VAR39[1][VAR26] = VAR30[1];
    VAR2->VAR39[2][VAR26] = VAR30[2];
}