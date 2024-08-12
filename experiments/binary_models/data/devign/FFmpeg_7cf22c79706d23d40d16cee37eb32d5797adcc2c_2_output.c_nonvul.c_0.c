FUN1(VAR1 *VAR2, const VAR3 *VAR4, const VAR5 **VAR6, int VAR7, const VAR3 *VAR8, const VAR5 **VAR9, const VAR5 **VAR10, int VAR11, const VAR5 **VAR12, VAR13 *VAR14, int VAR15, int VAR16, enum AVPixelFormat VAR17, int VAR18, int VAR19)
{
    int VAR20;
    int VAR21 = 0xffff << 14;
    for (VAR20 = 0; VAR20 < VAR15; VAR20++)
    {
        int VAR22;
        int VAR23 = -0x40000000;
        int VAR24 = -(128 << 23);
        int VAR25 = -(128 << 23);
        int VAR26, VAR27, VAR28;
        for (VAR22 = 0; VAR22 < VAR7; VAR22++)
        {
            VAR23 += VAR6[VAR22][VAR20] * (unsigned)VAR4[VAR22];
        }
        for (VAR22 = 0; VAR22 < VAR11; VAR22++)
        {
            ;
            VAR24 += VAR9[VAR22][VAR20] * (unsigned)VAR8[VAR22];
            VAR25 += VAR10[VAR22][VAR20] * (unsigned)VAR8[VAR22];
        }
        if (VAR18)
        {
            VAR21 = -0x40000000;
            for (VAR22 = 0; VAR22 < VAR7; VAR22++)
            {
                VAR21 += VAR12[VAR22][VAR20] * (unsigned)VAR4[VAR22];
            }
            VAR21 >>= 1;
            VAR21 += 0x20002000;
        }
        VAR23 >>= 14;
        VAR23 += 0x10000;
        VAR24 >>= 14;
        VAR25 >>= 14;
        VAR23 -= VAR2->VAR29;
        VAR23 *= VAR2->VAR30;
        VAR23 += 1 << 13;
        VAR26 = VAR25 * VAR2->VAR31;
        VAR27 = VAR25 * VAR2->VAR32 + VAR24 * VAR2->VAR33;
        VAR28 = VAR24 * VAR2->VAR34;
        FUN2(&VAR14[0], FUN3(VAR35 + VAR23, 30) >> 14);
        FUN2(&VAR14[1], FUN3(VAR27 + VAR23, 30) >> 14);
        FUN2(&VAR14[2], FUN3(VAR36 + VAR23, 30) >> 14);
        if (VAR19)
        {
            FUN2(&VAR14[3], FUN3(VAR21, 30) >> 14);
            VAR14 += 4;
        }
        else
        {
            VAR14 += 3;
        }
    }
}