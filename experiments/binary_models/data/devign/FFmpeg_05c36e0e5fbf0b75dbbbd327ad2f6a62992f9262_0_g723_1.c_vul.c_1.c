static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR3 *VAR5)
{
    int16_t VAR6[2][VAR7], *VAR8;
    int VAR9[VAR7 + VAR10], *VAR11;
    int VAR12, VAR13, VAR14;
    memcpy(VAR5, VAR2->VAR15, VAR7 * sizeof(*VAR5));
    memcpy(VAR9, VAR2->VAR16, VAR7 * sizeof(*VAR9));
    for (VAR12 = VAR7, VAR13 = 0; VAR13 < VAR17; VAR12 += VAR18, VAR13++)
    {
        for (VAR14 = 0; VAR14 < VAR7; VAR14++)
        {
            VAR6[0][VAR14] = (-VAR4[VAR14] * VAR19[0][VAR14] + (1 << 14)) >> 15;
            VAR6[1][VAR14] = (-VAR4[VAR14] * VAR19[1][VAR14] + (1 << 14)) >> 15;
        }
        FUN2(VAR6[0], VAR6[1], VAR5 + VAR12, VAR9 + VAR12);
        VAR4 += VAR7;
    }
    memcpy(VAR2->VAR15, VAR5 + VAR10, VAR7 * sizeof(*VAR2->VAR15));
    memcpy(VAR2->VAR16, VAR9 + VAR10, VAR7 * sizeof(*VAR2->VAR16));
    VAR8 = VAR5 + VAR7;
    VAR11 = VAR9 + VAR7;
    for (VAR12 = 0; VAR12 < VAR17; VAR12++)
    {
        int16_t VAR20[VAR18];
        int VAR21;
        int VAR22[2];
        int VAR23, VAR24;
        memcpy(VAR20, VAR8, VAR18 * sizeof(*VAR20));
        VAR23 = FUN3(VAR20, VAR18);
        VAR22[0] = FUN4(VAR20, VAR20 + 1, VAR18 - 1, 1);
        VAR22[1] = FUN4(VAR20, VAR20, VAR18, 1);
        VAR21 = VAR22[1] >> 16;
        if (VAR21)
        {
            VAR21 = (VAR22[0] >> 2) / VAR21;
        }
        VAR2->VAR25 = (3 * VAR2->VAR25 + VAR21 + 2) >> 2;
        VAR21 = -VAR2->VAR25 >> 1 & ~3;
        for (VAR13 = 0; VAR13 < VAR18; VAR13++)
        {
            VAR8[VAR13] = FUN5(VAR11[VAR13] + ((VAR11[VAR13 - 1] >> 16) * VAR21 << 1)) >> 16;
        }
        VAR21 = 2 * VAR23 + 4;
        if (VAR21 < 0)
        {
            VAR24 = FUN5((VAR26)VAR22[1] << -VAR21);
        }
        else
            VAR24 = VAR22[1] >> VAR21;
        FUN6(VAR2, VAR8, VAR24);
        VAR8 += VAR18;
        VAR11 += VAR18;
    }
}