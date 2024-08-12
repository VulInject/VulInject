FUN1(VAR1 *VAR2, const VAR3 *VAR4, const VAR3 *VAR5[2], const VAR3 *VAR6[2], const VAR3 *VAR7, VAR8 *VAR9, int VAR10, int VAR11, int VAR12, enum PixelFormat VAR13)
{
    const VAR3 *VAR14 = VAR5[0], *VAR15 = VAR5[1], *VAR16 = VAR6[0], *VAR17 = VAR6[1];
    int VAR18;
    if (VAR11 < 2048)
    {
        for (VAR18 = 0; VAR18 < (VAR10 >> 1); VAR18++)
        {
            int VAR19 = (VAR4[VAR18 * 2]) >> 2;
            int VAR20 = (VAR4[VAR18 * 2 + 1]) >> 2;
            int VAR21 = (VAR14[VAR18] + (-128 << 11)) >> 2;
            int VAR22 = (VAR16[VAR18] + (-128 << 11)) >> 2;
            int VAR23, VAR24, VAR25;
            VAR19 -= VAR2->VAR26;
            VAR20 -= VAR2->VAR26;
            VAR19 *= VAR2->VAR27;
            VAR20 *= VAR2->VAR27;
            VAR19 += 1 << 13;
            VAR20 += 1 << 13;
            VAR23 = VAR22 * VAR2->VAR28;
            VAR24 = VAR22 * VAR2->VAR29 + VAR21 * VAR2->VAR30;
            VAR25 = VAR21 * VAR2->VAR31;
            FUN2(&VAR9[0], FUN3(VAR32 + VAR19, 30) >> 14);
            FUN2(&VAR9[1], FUN3(VAR24 + VAR19, 30) >> 14);
            FUN2(&VAR9[2], FUN3(VAR33 + VAR19, 30) >> 14);
            FUN2(&VAR9[3], FUN3(VAR32 + VAR20, 30) >> 14);
            FUN2(&VAR9[4], FUN3(VAR24 + VAR20, 30) >> 14);
            FUN2(&VAR9[5], FUN3(VAR33 + VAR20, 30) >> 14);
            VAR9 += 6;
        }
    }
    else
    {
        for (VAR18 = 0; VAR18 < (VAR10 >> 1); VAR18++)
        {
            int VAR19 = (VAR4[VAR18 * 2]) >> 2;
            int VAR20 = (VAR4[VAR18 * 2 + 1]) >> 2;
            int VAR21 = (VAR14[VAR18] + VAR15[VAR18] + (-128 << 11)) >> 3;
            int VAR22 = (VAR16[VAR18] + VAR17[VAR18] + (-128 << 11)) >> 3;
            int VAR23, VAR24, VAR25;
            VAR19 -= VAR2->VAR26;
            VAR20 -= VAR2->VAR26;
            VAR19 *= VAR2->VAR27;
            VAR20 *= VAR2->VAR27;
            VAR19 += 1 << 13;
            VAR20 += 1 << 13;
            VAR23 = VAR22 * VAR2->VAR28;
            VAR24 = VAR22 * VAR2->VAR29 + VAR21 * VAR2->VAR30;
            VAR25 = VAR21 * VAR2->VAR31;
            FUN2(&VAR9[0], FUN3(VAR32 + VAR19, 30) >> 14);
            FUN2(&VAR9[1], FUN3(VAR24 + VAR19, 30) >> 14);
            FUN2(&VAR9[2], FUN3(VAR33 + VAR19, 30) >> 14);
            FUN2(&VAR9[3], FUN3(VAR32 + VAR20, 30) >> 14);
            FUN2(&VAR9[4], FUN3(VAR24 + VAR20, 30) >> 14);
            FUN2(&VAR9[5], FUN3(VAR33 + VAR20, 30) >> 14);
            VAR9 += 6;
        }
    }
}