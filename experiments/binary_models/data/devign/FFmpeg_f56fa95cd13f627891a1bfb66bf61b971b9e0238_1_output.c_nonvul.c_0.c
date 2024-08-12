FUN1(VAR1 *VAR2, const VAR3 *VAR4, const VAR3 *VAR5[2], const VAR3 *VAR6[2], const VAR3 *VAR7, VAR8 *VAR9, int VAR10, int VAR11, int VAR12, enum AVPixelFormat VAR13)
{
    const VAR3 *VAR14 = VAR5[0], *VAR15 = VAR6[0];
    int VAR16;
    if (VAR11 < 2048)
    {
        for (VAR16 = 0; VAR16 < ((VAR10 + 1) >> 1); VAR16++)
        {
            int VAR17 = (VAR4[VAR16 * 2]) >> 2;
            int VAR18 = (VAR4[VAR16 * 2 + 1]) >> 2;
            int VAR19 = (VAR14[VAR16] + FUN2(-128, 11)) >> 2;
            int VAR20 = (VAR15[VAR16] + FUN2(-128, 11)) >> 2;
            int VAR21, VAR22, VAR23;
            VAR17 -= VAR2->VAR24;
            VAR18 -= VAR2->VAR24;
            VAR17 *= VAR2->VAR25;
            VAR18 *= VAR2->VAR25;
            VAR17 += 1 << 13;
            VAR18 += 1 << 13;
            VAR21 = VAR20 * VAR2->VAR26;
            VAR22 = VAR20 * VAR2->VAR27 + VAR19 * VAR2->VAR28;
            VAR23 = VAR19 * VAR2->VAR29;
            FUN3(&VAR9[0], FUN4(VAR30 + VAR17, 30) >> 14);
            FUN3(&VAR9[1], FUN4(VAR22 + VAR17, 30) >> 14);
            FUN3(&VAR9[2], FUN4(VAR31 + VAR17, 30) >> 14);
            FUN3(&VAR9[3], FUN4(VAR30 + VAR18, 30) >> 14);
            FUN3(&VAR9[4], FUN4(VAR22 + VAR18, 30) >> 14);
            FUN3(&VAR9[5], FUN4(VAR31 + VAR18, 30) >> 14);
            VAR9 += 6;
        }
    }
    else
    {
        const VAR3 *VAR32 = VAR5[1], *VAR33 = VAR6[1];
        for (VAR16 = 0; VAR16 < ((VAR10 + 1) >> 1); VAR16++)
        {
            int VAR17 = (VAR4[VAR16 * 2]) >> 2;
            int VAR18 = (VAR4[VAR16 * 2 + 1]) >> 2;
            int VAR19 = (VAR14[VAR16] + VAR32[VAR16] + FUN2(-128, 12)) >> 3;
            int VAR20 = (VAR15[VAR16] + VAR33[VAR16] + FUN2(-128, 12)) >> 3;
            int VAR21, VAR22, VAR23;
            VAR17 -= VAR2->VAR24;
            VAR18 -= VAR2->VAR24;
            VAR17 *= VAR2->VAR25;
            VAR18 *= VAR2->VAR25;
            VAR17 += 1 << 13;
            VAR18 += 1 << 13;
            VAR21 = VAR20 * VAR2->VAR26;
            VAR22 = VAR20 * VAR2->VAR27 + VAR19 * VAR2->VAR28;
            VAR23 = VAR19 * VAR2->VAR29;
            FUN3(&VAR9[0], FUN4(VAR30 + VAR17, 30) >> 14);
            FUN3(&VAR9[1], FUN4(VAR22 + VAR17, 30) >> 14);
            FUN3(&VAR9[2], FUN4(VAR31 + VAR17, 30) >> 14);
            FUN3(&VAR9[3], FUN4(VAR30 + VAR18, 30) >> 14);
            FUN3(&VAR9[4], FUN4(VAR22 + VAR18, 30) >> 14);
            FUN3(&VAR9[5], FUN4(VAR31 + VAR18, 30) >> 14);
            VAR9 += 6;
        }
    }
}