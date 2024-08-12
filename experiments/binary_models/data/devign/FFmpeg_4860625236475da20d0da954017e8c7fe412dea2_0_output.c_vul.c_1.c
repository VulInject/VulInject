FUN1(VAR1 *VAR2, const VAR3 *VAR4[2], const VAR3 *VAR5[2], const VAR3 *VAR6[2], const VAR3 *VAR7[2], VAR8 *VAR9, int VAR10, int VAR11, int VAR12, int VAR13, enum PixelFormat VAR14)
{
    const VAR3 *VAR15 = VAR4[0], *VAR16 = VAR4[1], *VAR17 = VAR5[0], *VAR18 = VAR5[1], *VAR19 = VAR6[0], *VAR20 = VAR6[1];
    int VAR21 = 4095 - VAR11;
    int VAR22 = 4095 - VAR12;
    int VAR23;
    for (VAR23 = 0; VAR23 < ((VAR10 + 1) >> 1); VAR23++)
    {
        int VAR24 = (VAR15[VAR23 * 2] * VAR21 + VAR16[VAR23 * 2] * VAR11) >> 19;
        int VAR25 = (VAR15[VAR23 * 2 + 1] * VAR21 + VAR16[VAR23 * 2 + 1] * VAR11) >> 19;
        int VAR26 = (VAR17[VAR23] * VAR22 + VAR18[VAR23] * VAR12) >> 19;
        int VAR27 = (VAR19[VAR23] * VAR22 + VAR20[VAR23] * VAR12) >> 19;
        VAR24 = FUN2(VAR24);
        VAR25 = FUN2(VAR25);
        VAR26 = FUN2(VAR26);
        VAR27 = FUN2(VAR27);
        FUN3(VAR23 * 4, VAR24, VAR26, VAR25, VAR27);
    }
}