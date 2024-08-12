int FUN1(VAR1 *VAR2[4], enum PixelFormat VAR3, int VAR4, VAR1 *VAR5, const int VAR6[4])
{
    int VAR7, VAR8, VAR9[4], VAR10[4];
    const VAR11 *VAR12 = &VAR13[VAR3];
    memset(VAR2, 0, sizeof(VAR2[0]) * 4);
    memset(VAR9, 0, sizeof(VAR9));
    memset(VAR10, 0, sizeof(VAR10));
    if ((unsigned)VAR3 >= VAR14 || VAR12->VAR15 & VAR16)
        return FUN2(VAR17);
    VAR2[0] = VAR5;
    if (VAR6[0] > (VAR18 - 1024) / VAR4)
        return FUN2(VAR17);
    VAR9[0] = VAR6[0] * VAR4;
    if (VAR12->VAR15 & VAR19)
    {
        VAR9[0] = (VAR9[0] + 3) & ~3;
        VAR2[1] = VAR5 + VAR9[0];
        return VAR9[0] + 256 * 4;
    }
    for (VAR7 = 0; VAR7 < 4; VAR7++)
        VAR10[VAR12->VAR20[VAR7].VAR21] = 1;
    VAR8 = VAR9[0];
    for (VAR7 = 1; VAR7 < 4 && VAR10[VAR7]; VAR7++)
    {
        int VAR22, VAR23 = (VAR7 == 1 || VAR7 == 2) ? VAR12->VAR24 : 0;
        VAR2[VAR7] = VAR2[VAR7 - 1] + VAR9[VAR7 - 1];
        VAR22 = (VAR4 + (1 << VAR23) - 1) >> VAR23;
        if (VAR6[VAR7] > VAR18 / VAR22)
            return FUN2(VAR17);
        VAR9[VAR7] = VAR22 * VAR6[VAR7];
        if (VAR8 > VAR18 - VAR9[VAR7])
            return FUN2(VAR17);
        VAR8 += VAR9[VAR7];
    }
    return VAR8;
}