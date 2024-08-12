FUN1(VAR1 *VAR2, const VAR3 *VAR4, const VAR3 **VAR5, int VAR6, const VAR3 *VAR7, const VAR3 **VAR8, const VAR3 **VAR9, int VAR10, const VAR3 **VAR11, VAR12 *VAR13, int VAR14, int VAR15, enum AVPixelFormat VAR16)
{
    const VAR12 *const VAR17 = VAR18[VAR15 & 7];
    int VAR19;
    unsigned VAR20 = 0;
    int VAR21 = 0;
    for (VAR19 = 0; VAR19 < VAR14; VAR19 += 2)
    {
        int VAR22;
        int VAR23 = 1 << 18;
        int VAR24 = 1 << 18;
        for (VAR22 = 0; VAR22 < VAR6; VAR22++)
        {
            VAR23 += VAR5[VAR22][VAR19] * VAR4[VAR22];
            VAR24 += VAR5[VAR22][VAR19 + 1] * VAR4[VAR22];
        }
        VAR23 >>= 19;
        VAR24 >>= 19;
        if ((VAR23 | VAR24) & 0x100)
        {
            VAR23 = FUN2(VAR23);
            VAR24 = FUN2(VAR24);
        }
        if (VAR2->VAR25 == VAR26)
        {
            VAR23 += (7 * VAR21 + 1 * VAR2->VAR27[0][VAR19] + 5 * VAR2->VAR27[0][VAR19 + 1] + 3 * VAR2->VAR27[0][VAR19 + 2] + 8 - 256) >> 4;
            VAR2->VAR27[0][VAR19] = VAR21;
            VAR20 = 2 * VAR20 + (VAR23 >= 128);
            VAR23 -= 220 * (VAR20 & 1);
            VAR21 = VAR24 + ((7 * VAR23 + 1 * VAR2->VAR27[0][VAR19 + 1] + 5 * VAR2->VAR27[0][VAR19 + 2] + 3 * VAR2->VAR27[0][VAR19 + 3] + 8 - 256) >> 4);
            VAR2->VAR27[0][VAR19 + 1] = VAR23;
            VAR20 = 2 * VAR20 + (VAR21 >= 128);
            VAR21 -= 220 * (VAR20 & 1);
        }
        else
        {
            FUN3(VAR20, VAR23 + VAR17[(VAR19 + 0) & 7]);
            FUN3(VAR20, VAR24 + VAR17[(VAR19 + 1) & 7]);
        }
        if ((VAR19 & 7) == 6)
        {
            FUN4(*VAR13++, VAR20);
        }
    }
    VAR2->VAR27[0][VAR19] = VAR21;
    if (VAR19 & 6)
    {
        FUN4(*VAR13, VAR20);
    }
}