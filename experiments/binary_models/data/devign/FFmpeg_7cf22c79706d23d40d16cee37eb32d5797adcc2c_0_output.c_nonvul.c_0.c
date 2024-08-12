FUN1(VAR1 *VAR2, const VAR3 *VAR4[2], const VAR3 *VAR5[2], const VAR3 *VAR6[2], const VAR3 *VAR7[2], VAR8 *VAR9, int VAR10, int VAR11, int VAR12, int VAR13, enum AVPixelFormat VAR14, int VAR15, int VAR16)
{
    const VAR3 *VAR17 = VAR4[0], *VAR18 = VAR4[1], *VAR19 = VAR5[0], *VAR20 = VAR5[1], *VAR21 = VAR6[0], *VAR22 = VAR6[1], *VAR23 = VAR15 ? VAR7[0] : NULL, *VAR24 = VAR15 ? VAR7[1] : NULL;
    int VAR25 = 4096 - VAR11;
    int VAR26 = 4096 - VAR12;
    int VAR27;
    int VAR28 = 0xffff << 14, VAR29 = 0xffff << 14;
    for (VAR27 = 0; VAR27 < ((VAR10 + 1) >> 1); VAR27++)
    {
        int VAR30 = (VAR17[VAR27 * 2] * VAR25 + VAR18[VAR27 * 2] * VAR11) >> 14;
        int VAR31 = (VAR17[VAR27 * 2 + 1] * VAR25 + VAR18[VAR27 * 2 + 1] * VAR11) >> 14;
        int VAR32 = (VAR19[VAR27] * VAR26 + VAR20[VAR27] * VAR12 - (128 << 23)) >> 14;
        int VAR33 = (VAR21[VAR27] * VAR26 + VAR22[VAR27] * VAR12 - (128 << 23)) >> 14;
        int VAR34, VAR35, VAR36;
        VAR30 -= VAR2->VAR37;
        VAR31 -= VAR2->VAR37;
        VAR30 *= VAR2->VAR38;
        VAR31 *= VAR2->VAR38;
        VAR30 += 1 << 13;
        VAR31 += 1 << 13;
        VAR34 = VAR33 * VAR2->VAR39;
        VAR35 = VAR33 * VAR2->VAR40 + VAR32 * VAR2->VAR41;
        VAR36 = VAR32 * VAR2->VAR42;
        if (VAR15)
        {
            VAR28 = (VAR23[VAR27 * 2] * VAR25 + VAR24[VAR27 * 2] * VAR11) >> 1;
            VAR29 = (VAR23[VAR27 * 2 + 1] * VAR25 + VAR24[VAR27 * 2 + 1] * VAR11) >> 1;
            VAR28 += 1 << 13;
            VAR29 += 1 << 13;
        }
        FUN2(&VAR9[0], FUN3(VAR43 + VAR30, 30) >> 14);
        FUN2(&VAR9[1], FUN3(VAR35 + VAR30, 30) >> 14);
        FUN2(&VAR9[2], FUN3(VAR44 + VAR30, 30) >> 14);
        if (VAR16)
        {
            FUN2(&VAR9[3], FUN3(VAR28, 30) >> 14);
            FUN2(&VAR9[4], FUN3(VAR43 + VAR31, 30) >> 14);
            FUN2(&VAR9[5], FUN3(VAR35 + VAR31, 30) >> 14);
            FUN2(&VAR9[6], FUN3(VAR44 + VAR31, 30) >> 14);
            FUN2(&VAR9[7], FUN3(VAR29, 30) >> 14);
            VAR9 += 8;
        }
        else
        {
            FUN2(&VAR9[3], FUN3(VAR43 + VAR31, 30) >> 14);
            FUN2(&VAR9[4], FUN3(VAR35 + VAR31, 30) >> 14);
            FUN2(&VAR9[5], FUN3(VAR44 + VAR31, 30) >> 14);
            VAR9 += 6;
        }
    }
}