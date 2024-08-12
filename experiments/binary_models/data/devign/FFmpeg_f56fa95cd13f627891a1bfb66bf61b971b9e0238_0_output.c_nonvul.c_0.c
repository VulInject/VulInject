FUN1(VAR1 *VAR2, const VAR3 *VAR4[2], const VAR3 *VAR5[2], const VAR3 *VAR6[2], const VAR3 *VAR7[2], VAR8 *VAR9, int VAR10, int VAR11, int VAR12, int VAR13, enum AVPixelFormat VAR14)
{
    const VAR3 *VAR15 = VAR4[0], *VAR16 = VAR4[1], *VAR17 = VAR5[0], *VAR18 = VAR5[1], *VAR19 = VAR6[0], *VAR20 = VAR6[1];
    int VAR21 = 4096 - VAR11;
    int VAR22 = 4096 - VAR12;
    int VAR23;
    for (VAR23 = 0; VAR23 < ((VAR10 + 1) >> 1); VAR23++)
    {
        int VAR24 = (VAR15[VAR23 * 2] * VAR21 + VAR16[VAR23 * 2] * VAR11) >> 14;
        int VAR25 = (VAR15[VAR23 * 2 + 1] * VAR21 + VAR16[VAR23 * 2 + 1] * VAR11) >> 14;
        int VAR26 = (VAR17[VAR23] * VAR22 + VAR18[VAR23] * VAR12 + FUN2(-128, 23)) >> 14;
        int VAR27 = (VAR19[VAR23] * VAR22 + VAR20[VAR23] * VAR12 + FUN2(-128, 23)) >> 14;
        int VAR28, VAR29, VAR30;
        VAR24 -= VAR2->VAR31;
        VAR25 -= VAR2->VAR31;
        VAR24 *= VAR2->VAR32;
        VAR25 *= VAR2->VAR32;
        VAR24 += 1 << 13;
        VAR25 += 1 << 13;
        VAR28 = VAR27 * VAR2->VAR33;
        VAR29 = VAR27 * VAR2->VAR34 + VAR26 * VAR2->VAR35;
        VAR30 = VAR26 * VAR2->VAR36;
        FUN3(&VAR9[0], FUN4(VAR37 + VAR24, 30) >> 14);
        FUN3(&VAR9[1], FUN4(VAR29 + VAR24, 30) >> 14);
        FUN3(&VAR9[2], FUN4(VAR38 + VAR24, 30) >> 14);
        FUN3(&VAR9[3], FUN4(VAR37 + VAR25, 30) >> 14);
        FUN3(&VAR9[4], FUN4(VAR29 + VAR25, 30) >> 14);
        FUN3(&VAR9[5], FUN4(VAR38 + VAR25, 30) >> 14);
        VAR9 += 6;
    }
}