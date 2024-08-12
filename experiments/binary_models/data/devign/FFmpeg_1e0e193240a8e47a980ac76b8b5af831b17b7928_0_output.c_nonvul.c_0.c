FUN1(VAR1 *VAR2, const VAR3 *VAR4, const VAR3 *VAR5[2], const VAR3 *VAR6[2], const VAR3 *VAR7, VAR8 *VAR9, int VAR10, int VAR11, int VAR12, enum AVPixelFormat VAR13)
{
    const VAR8 *const VAR14 = VAR15[VAR12 & 7];
    int VAR16;
    if (VAR2->VAR17 == VAR18)
    {
        int VAR19 = 0;
        int VAR20 = 0;
        for (VAR16 = 0; VAR16 < VAR10; VAR16 += 2)
        {
            int VAR21;
            VAR21 = ((VAR4[VAR16 + 0] + 64) >> 7);
            VAR21 += (7 * VAR19 + 1 * VAR2->VAR22[0][VAR16] + 5 * VAR2->VAR22[0][VAR16 + 1] + 3 * VAR2->VAR22[0][VAR16 + 2] + 8 - 256) >> 4;
            VAR2->VAR22[0][VAR16] = VAR19;
            VAR20 = 2 * VAR20 + (VAR21 >= 128);
            VAR21 -= 220 * (VAR20 & 1);
            VAR19 = ((VAR4[VAR16 + 1] + 64) >> 7);
            VAR19 += (7 * VAR21 + 1 * VAR2->VAR22[0][VAR16 + 1] + 5 * VAR2->VAR22[0][VAR16 + 2] + 3 * VAR2->VAR22[0][VAR16 + 3] + 8 - 256) >> 4;
            VAR2->VAR22[0][VAR16 + 1] = VAR21;
            VAR20 = 2 * VAR20 + (VAR19 >= 128);
            VAR19 -= 220 * (VAR20 & 1);
            if ((VAR16 & 7) == 6)
                FUN2(*VAR9++, VAR20);
        }
        VAR2->VAR22[0][VAR16] = VAR19;
    }
    else
    {
        for (VAR16 = 0; VAR16 < VAR10; VAR16 += 8)
        {
            int VAR20 = 0;
            FUN3(VAR20, ((VAR4[VAR16 + 0] + 64) >> 7) + VAR14[0]);
            FUN3(VAR20, ((VAR4[VAR16 + 1] + 64) >> 7) + VAR14[1]);
            FUN3(VAR20, ((VAR4[VAR16 + 2] + 64) >> 7) + VAR14[2]);
            FUN3(VAR20, ((VAR4[VAR16 + 3] + 64) >> 7) + VAR14[3]);
            FUN3(VAR20, ((VAR4[VAR16 + 4] + 64) >> 7) + VAR14[4]);
            FUN3(VAR20, ((VAR4[VAR16 + 5] + 64) >> 7) + VAR14[5]);
            FUN3(VAR20, ((VAR4[VAR16 + 6] + 64) >> 7) + VAR14[6]);
            FUN3(VAR20, ((VAR4[VAR16 + 7] + 64) >> 7) + VAR14[7]);
            FUN2(*VAR9++, VAR20);
        }
    }
}