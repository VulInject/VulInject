FUN1(VAR1 *VAR2, const VAR3 *VAR4[2], const VAR3 *VAR5[2], const VAR3 *VAR6[2], const VAR3 *VAR7[2], VAR8 *VAR9, int VAR10, int VAR11, int VAR12, int VAR13, enum PixelFormat VAR14)
{
    const VAR3 *VAR15 = VAR4[0], *VAR16 = VAR4[1];
    const VAR8 *const VAR17 = VAR18[VAR13 & 7];
    int VAR19 = 4095 - VAR11;
    int VAR20;
    for (VAR20 = 0; VAR20 < VAR10; VAR20 += 8)
    {
        int VAR21, VAR22 = 0;
        VAR21 = (VAR15[VAR20 + 0] * VAR19 + VAR16[VAR20 + 0] * VAR11) >> 19;
        FUN2(VAR22, VAR21 + VAR17[0]);
        VAR21 = (VAR15[VAR20 + 1] * VAR19 + VAR16[VAR20 + 1] * VAR11) >> 19;
        FUN2(VAR22, VAR21 + VAR17[1]);
        VAR21 = (VAR15[VAR20 + 2] * VAR19 + VAR16[VAR20 + 2] * VAR11) >> 19;
        FUN2(VAR22, VAR21 + VAR17[2]);
        VAR21 = (VAR15[VAR20 + 3] * VAR19 + VAR16[VAR20 + 3] * VAR11) >> 19;
        FUN2(VAR22, VAR21 + VAR17[3]);
        VAR21 = (VAR15[VAR20 + 4] * VAR19 + VAR16[VAR20 + 4] * VAR11) >> 19;
        FUN2(VAR22, VAR21 + VAR17[4]);
        VAR21 = (VAR15[VAR20 + 5] * VAR19 + VAR16[VAR20 + 5] * VAR11) >> 19;
        FUN2(VAR22, VAR21 + VAR17[5]);
        VAR21 = (VAR15[VAR20 + 6] * VAR19 + VAR16[VAR20 + 6] * VAR11) >> 19;
        FUN2(VAR22, VAR21 + VAR17[6]);
        VAR21 = (VAR15[VAR20 + 7] * VAR19 + VAR16[VAR20 + 7] * VAR11) >> 19;
        FUN2(VAR22, VAR21 + VAR17[7]);
        FUN3(*VAR9++, VAR22);
    }
}