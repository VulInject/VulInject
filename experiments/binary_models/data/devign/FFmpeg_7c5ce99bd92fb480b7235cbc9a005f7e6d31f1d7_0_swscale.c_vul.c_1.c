FUN1(VAR1 *VAR2, const VAR3 *VAR4, const VAR3 **VAR5, int VAR6, const VAR3 *VAR7, const VAR3 **VAR8, const VAR3 **VAR9, int VAR10, const VAR3 **VAR11, VAR12 *VAR13, int VAR14, int VAR15, enum PixelFormat VAR16)
{
    const VAR12 *const VAR17 = VAR18[VAR15 & 7];
    VAR12 *VAR19 = VAR2->VAR20[128] + VAR2->VAR21[128];
    int VAR22;
    int VAR23 = 0;
    for (VAR22 = 0; VAR22 < VAR14 - 1; VAR22 += 2)
    {
        int VAR24;
        int VAR25 = 1 << 18;
        int VAR26 = 1 << 18;
        for (VAR24 = 0; VAR24 < VAR6; VAR24++)
        {
            VAR25 += VAR5[VAR24][VAR22] * VAR4[VAR24];
            VAR26 += VAR5[VAR24][VAR22 + 1] * VAR4[VAR24];
        }
        VAR25 >>= 19;
        VAR26 >>= 19;
        if ((VAR25 | VAR26) & 0x100)
        {
            VAR25 = FUN2(VAR25);
            VAR26 = FUN2(VAR26);
        }
        VAR23 += VAR23 + VAR19[VAR25 + VAR17[(VAR22 + 0) & 7]];
        VAR23 += VAR23 + VAR19[VAR26 + VAR17[(VAR22 + 1) & 7]];
        if ((VAR22 & 7) == 6)
        {
            FUN3(*VAR13++, VAR23);
        }
    }
}