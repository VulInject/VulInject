FUN1(VAR1 *VAR2, const VAR3 *VAR4[2], const VAR3 *VAR5[2], const VAR3 *VAR6[2], const VAR3 *VAR7[2], VAR8 *VAR9, int VAR10, int VAR11, int VAR12, int VAR13, enum AVPixelFormat VAR14)
{
    const VAR3 *VAR15 = VAR4[0], *VAR16 = VAR4[1];
    const VAR8 *const VAR17 = VAR18[VAR13 & 7];
    int VAR19 = 4096 - VAR11;
    int VAR20;
    if (VAR2->VAR21 == VAR22)
    {
        int VAR23 = 0;
        int VAR24 = 0;
        for (VAR20 = 0; VAR20 < VAR10; VAR20 += 2)
        {
            int VAR25;
            VAR25 = (VAR15[VAR20 + 0] * VAR19 + VAR16[VAR20 + 0] * VAR11) >> 19;
            VAR25 += (7 * VAR23 + 1 * VAR2->VAR26[0][VAR20] + 5 * VAR2->VAR26[0][VAR20 + 1] + 3 * VAR2->VAR26[0][VAR20 + 2] + 8 - 256) >> 4;
            VAR2->VAR26[0][VAR20] = VAR23;
            VAR24 = 2 * VAR24 + (VAR25 >= 128);
            VAR25 -= 220 * (VAR24 & 1);
            VAR23 = (VAR15[VAR20 + 1] * VAR19 + VAR16[VAR20 + 1] * VAR11) >> 19;
            VAR23 += (7 * VAR25 + 1 * VAR2->VAR26[0][VAR20 + 1] + 5 * VAR2->VAR26[0][VAR20 + 2] + 3 * VAR2->VAR26[0][VAR20 + 3] + 8 - 256) >> 4;
            VAR2->VAR26[0][VAR20 + 1] = VAR25;
            VAR24 = 2 * VAR24 + (VAR23 >= 128);
            VAR23 -= 220 * (VAR24 & 1);
            if ((VAR20 & 7) == 6)
                FUN2(*VAR9++, VAR24);
        }
        VAR2->VAR26[0][VAR20] = VAR23;
    }
    else
    {
        for (VAR20 = 0; VAR20 < VAR10; VAR20 += 8)
        {
            int VAR25, VAR24 = 0;
            VAR25 = (VAR15[VAR20 + 0] * VAR19 + VAR16[VAR20 + 0] * VAR11) >> 19;
            FUN3(VAR24, VAR25 + VAR17[0]);
            VAR25 = (VAR15[VAR20 + 1] * VAR19 + VAR16[VAR20 + 1] * VAR11) >> 19;
            FUN3(VAR24, VAR25 + VAR17[1]);
            VAR25 = (VAR15[VAR20 + 2] * VAR19 + VAR16[VAR20 + 2] * VAR11) >> 19;
            FUN3(VAR24, VAR25 + VAR17[2]);
            VAR25 = (VAR15[VAR20 + 3] * VAR19 + VAR16[VAR20 + 3] * VAR11) >> 19;
            FUN3(VAR24, VAR25 + VAR17[3]);
            VAR25 = (VAR15[VAR20 + 4] * VAR19 + VAR16[VAR20 + 4] * VAR11) >> 19;
            FUN3(VAR24, VAR25 + VAR17[4]);
            VAR25 = (VAR15[VAR20 + 5] * VAR19 + VAR16[VAR20 + 5] * VAR11) >> 19;
            FUN3(VAR24, VAR25 + VAR17[5]);
            VAR25 = (VAR15[VAR20 + 6] * VAR19 + VAR16[VAR20 + 6] * VAR11) >> 19;
            FUN3(VAR24, VAR25 + VAR17[6]);
            VAR25 = (VAR15[VAR20 + 7] * VAR19 + VAR16[VAR20 + 7] * VAR11) >> 19;
            FUN3(VAR24, VAR25 + VAR17[7]);
            FUN2(*VAR9++, VAR24);
        }
    }
}