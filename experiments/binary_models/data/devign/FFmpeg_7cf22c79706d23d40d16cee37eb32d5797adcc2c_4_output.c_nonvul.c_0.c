FUN1(VAR1 *VAR2, const VAR3 *VAR4, const VAR3 *VAR5[2], const VAR3 *VAR6[2], const VAR3 *VAR7, VAR8 *VAR9, int VAR10, int VAR11, int VAR12, enum AVPixelFormat VAR13, int VAR14, int VAR15)
{
    const VAR3 *VAR16 = VAR5[0], *VAR17 = VAR6[0];
    int VAR18;
    int VAR19 = 0xffff << 14, VAR20 = 0xffff << 14;
    if (VAR11 < 2048)
    {
        for (VAR18 = 0; VAR18 < ((VAR10 + 1) >> 1); VAR18++)
        {
            int VAR21 = (VAR4[VAR18 * 2]) >> 2;
            int VAR22 = (VAR4[VAR18 * 2 + 1]) >> 2;
            int VAR23 = (VAR16[VAR18] - (128 << 11)) >> 2;
            int VAR24 = (VAR17[VAR18] - (128 << 11)) >> 2;
            int VAR25, VAR26, VAR27;
            VAR21 -= VAR2->VAR28;
            VAR22 -= VAR2->VAR28;
            VAR21 *= VAR2->VAR29;
            VAR22 *= VAR2->VAR29;
            VAR21 += 1 << 13;
            VAR22 += 1 << 13;
            if (VAR14)
            {
                VAR19 = VAR7[VAR18 * 2] << 11;
                VAR20 = VAR7[VAR18 * 2 + 1] << 11;
                VAR19 += 1 << 13;
                VAR20 += 1 << 13;
            }
            VAR25 = VAR24 * VAR2->VAR30;
            VAR26 = VAR24 * VAR2->VAR31 + VAR23 * VAR2->VAR32;
            VAR27 = VAR23 * VAR2->VAR33;
            FUN2(&VAR9[0], FUN3(VAR34 + VAR21, 30) >> 14);
            FUN2(&VAR9[1], FUN3(VAR26 + VAR21, 30) >> 14);
            FUN2(&VAR9[2], FUN3(VAR35 + VAR21, 30) >> 14);
            if (VAR15)
            {
                FUN2(&VAR9[3], FUN3(VAR19, 30) >> 14);
                FUN2(&VAR9[4], FUN3(VAR34 + VAR22, 30) >> 14);
                FUN2(&VAR9[5], FUN3(VAR26 + VAR22, 30) >> 14);
                FUN2(&VAR9[6], FUN3(VAR35 + VAR22, 30) >> 14);
                FUN2(&VAR9[7], FUN3(VAR20, 30) >> 14);
                VAR9 += 8;
            }
            else
            {
                FUN2(&VAR9[3], FUN3(VAR34 + VAR22, 30) >> 14);
                FUN2(&VAR9[4], FUN3(VAR26 + VAR22, 30) >> 14);
                FUN2(&VAR9[5], FUN3(VAR35 + VAR22, 30) >> 14);
                VAR9 += 6;
            }
        }
    }
    else
    {
        const VAR3 *VAR36 = VAR5[1], *VAR37 = VAR6[1];
        int VAR19 = 0xffff << 14, VAR20 = 0xffff << 14;
        for (VAR18 = 0; VAR18 < ((VAR10 + 1) >> 1); VAR18++)
        {
            int VAR21 = (VAR4[VAR18 * 2]) >> 2;
            int VAR22 = (VAR4[VAR18 * 2 + 1]) >> 2;
            int VAR23 = (VAR16[VAR18] + VAR36[VAR18] - (128 << 12)) >> 3;
            int VAR24 = (VAR17[VAR18] + VAR37[VAR18] - (128 << 12)) >> 3;
            int VAR25, VAR26, VAR27;
            VAR21 -= VAR2->VAR28;
            VAR22 -= VAR2->VAR28;
            VAR21 *= VAR2->VAR29;
            VAR22 *= VAR2->VAR29;
            VAR21 += 1 << 13;
            VAR22 += 1 << 13;
            if (VAR14)
            {
                VAR19 = VAR7[VAR18 * 2] << 11;
                VAR20 = VAR7[VAR18 * 2 + 1] << 11;
                VAR19 += 1 << 13;
                VAR20 += 1 << 13;
            }
            VAR25 = VAR24 * VAR2->VAR30;
            VAR26 = VAR24 * VAR2->VAR31 + VAR23 * VAR2->VAR32;
            VAR27 = VAR23 * VAR2->VAR33;
            FUN2(&VAR9[0], FUN3(VAR34 + VAR21, 30) >> 14);
            FUN2(&VAR9[1], FUN3(VAR26 + VAR21, 30) >> 14);
            FUN2(&VAR9[2], FUN3(VAR35 + VAR21, 30) >> 14);
            if (VAR15)
            {
                FUN2(&VAR9[3], FUN3(VAR19, 30) >> 14);
                FUN2(&VAR9[4], FUN3(VAR34 + VAR22, 30) >> 14);
                FUN2(&VAR9[5], FUN3(VAR26 + VAR22, 30) >> 14);
                FUN2(&VAR9[6], FUN3(VAR35 + VAR22, 30) >> 14);
                FUN2(&VAR9[7], FUN3(VAR20, 30) >> 14);
                VAR9 += 8;
            }
            else
            {
                FUN2(&VAR9[3], FUN3(VAR34 + VAR22, 30) >> 14);
                FUN2(&VAR9[4], FUN3(VAR26 + VAR22, 30) >> 14);
                FUN2(&VAR9[5], FUN3(VAR35 + VAR22, 30) >> 14);
                VAR9 += 6;
            }
        }
    }
}