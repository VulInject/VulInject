FUN1(VAR1 *VAR2, const VAR3 *VAR4[2], const VAR3 *VAR5[2], const VAR3 *VAR6[2], const VAR3 *VAR7[2], VAR8 *VAR9, int VAR10, int VAR11, int VAR12, int VAR13, enum AVPixelFormat VAR14, int VAR15)
{
    const VAR3 *VAR16 = VAR4[0], *VAR17 = VAR4[1], *VAR18 = VAR5[0], *VAR19 = VAR5[1], *VAR20 = VAR6[0], *VAR21 = VAR6[1], *VAR22 = VAR15 ? VAR7[0] : NULL, *VAR23 = VAR15 ? VAR7[1] : NULL;
    int VAR24 = 4096 - VAR11;
    int VAR25 = 4096 - VAR12;
    int VAR26;
    for (VAR26 = 0; VAR26 < ((VAR10 + 1) >> 1); VAR26++)
    {
        int VAR27 = (VAR16[VAR26 * 2] * VAR24 + VAR17[VAR26 * 2] * VAR11) >> 14;
        int VAR28 = (VAR16[VAR26 * 2 + 1] * VAR24 + VAR17[VAR26 * 2 + 1] * VAR11) >> 14;
        int VAR29 = (VAR18[VAR26] * VAR25 + VAR19[VAR26] * VAR12 + (-128 << 23)) >> 14;
        int VAR30 = (VAR20[VAR26] * VAR25 + VAR21[VAR26] * VAR12 + (-128 << 23)) >> 14;
        int VAR31, VAR32;
        int VAR33, VAR34, VAR35;
        VAR27 -= VAR2->VAR36;
        VAR28 -= VAR2->VAR36;
        VAR27 *= VAR2->VAR37;
        VAR28 *= VAR2->VAR37;
        VAR27 += 1 << 13;
        VAR28 += 1 << 13;
        VAR33 = VAR30 * VAR2->VAR38;
        VAR34 = VAR30 * VAR2->VAR39 + VAR29 * VAR2->VAR40;
        VAR35 = VAR29 * VAR2->VAR41;
        if (VAR15)
        {
            VAR31 = (VAR22[VAR26 * 2] * VAR24 + VAR23[VAR26 * 2] * VAR11) >> 1;
            VAR32 = (VAR22[VAR26 * 2 + 1] * VAR24 + VAR23[VAR26 * 2 + 1] * VAR11) >> 1;
            VAR31 += 1 << 13;
            VAR32 += 1 << 13;
        }
        FUN2(&VAR9[0], FUN3(VAR42 + VAR27, 30) >> 14);
        FUN2(&VAR9[1], FUN3(VAR34 + VAR27, 30) >> 14);
        FUN2(&VAR9[2], FUN3(VAR43 + VAR27, 30) >> 14);
        FUN2(&VAR9[3], FUN3(VAR31, 30) >> 14);
        FUN2(&VAR9[4], FUN3(VAR42 + VAR28, 30) >> 14);
        FUN2(&VAR9[5], FUN3(VAR34 + VAR28, 30) >> 14);
        FUN2(&VAR9[6], FUN3(VAR43 + VAR28, 30) >> 14);
        FUN2(&VAR9[7], FUN3(VAR32, 30) >> 14);
        VAR9 += 8;
    }
}