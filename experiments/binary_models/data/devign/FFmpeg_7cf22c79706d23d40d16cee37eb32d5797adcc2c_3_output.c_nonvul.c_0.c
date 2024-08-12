FUN1(VAR1 *VAR2, const VAR3 *VAR4, const VAR3 *VAR5[2], const VAR3 *VAR6[2], const VAR3 *VAR7, VAR8 *VAR9, int VAR10, int VAR11, int VAR12, enum AVPixelFormat VAR13, int VAR14, int VAR15)
{
    const VAR3 *VAR16 = VAR5[0], *VAR17 = VAR6[0];
    int VAR18;
    int VAR19 = 0xffff << 14;
    if (VAR11 < 2048)
    {
        for (VAR18 = 0; VAR18 < VAR10; VAR18++)
        {
            int VAR20 = (VAR4[VAR18]) >> 2;
            int VAR21 = (VAR16[VAR18] - (128 << 11)) >> 2;
            int VAR22 = (VAR17[VAR18] - (128 << 11)) >> 2;
            int VAR23, VAR24, VAR25;
            VAR20 -= VAR2->VAR26;
            VAR20 *= VAR2->VAR27;
            VAR20 += 1 << 13;
            if (VAR14)
            {
                VAR19 = VAR7[VAR18] << 11;
                VAR19 += 1 << 13;
            }
            VAR23 = VAR22 * VAR2->VAR28;
            VAR24 = VAR22 * VAR2->VAR29 + VAR21 * VAR2->VAR30;
            VAR25 = VAR21 * VAR2->VAR31;
            FUN2(&VAR9[0], FUN3(VAR32 + VAR20, 30) >> 14);
            FUN2(&VAR9[1], FUN3(VAR24 + VAR20, 30) >> 14);
            FUN2(&VAR9[2], FUN3(VAR33 + VAR20, 30) >> 14);
            if (VAR15)
            {
                FUN2(&VAR9[3], FUN3(VAR19, 30) >> 14);
                VAR9 += 4;
            }
            else
            {
                VAR9 += 3;
            }
        }
    }
    else
    {
        const VAR3 *VAR34 = VAR5[1], *VAR35 = VAR6[1];
        int VAR19 = 0xffff << 14;
        for (VAR18 = 0; VAR18 < VAR10; VAR18++)
        {
            int VAR20 = (VAR4[VAR18]) >> 2;
            int VAR21 = (VAR16[VAR18] + VAR34[VAR18] - (128 << 12)) >> 3;
            int VAR22 = (VAR17[VAR18] + VAR35[VAR18] - (128 << 12)) >> 3;
            int VAR23, VAR24, VAR25;
            VAR20 -= VAR2->VAR26;
            VAR20 *= VAR2->VAR27;
            VAR20 += 1 << 13;
            if (VAR14)
            {
                VAR19 = VAR7[VAR18] << 11;
                VAR19 += 1 << 13;
            }
            VAR23 = VAR22 * VAR2->VAR28;
            VAR24 = VAR22 * VAR2->VAR29 + VAR21 * VAR2->VAR30;
            VAR25 = VAR21 * VAR2->VAR31;
            FUN2(&VAR9[0], FUN3(VAR32 + VAR20, 30) >> 14);
            FUN2(&VAR9[1], FUN3(VAR24 + VAR20, 30) >> 14);
            FUN2(&VAR9[2], FUN3(VAR33 + VAR20, 30) >> 14);
            if (VAR15)
            {
                FUN2(&VAR9[3], FUN3(VAR19, 30) >> 14);
                VAR9 += 4;
            }
            else
            {
                VAR9 += 3;
            }
        }
    }
}