void FUN1(VAR1 *VAR2, unsigned char VAR3[VAR4], float VAR5[VAR6])
{
    int VAR7, VAR8;
    float VAR9[VAR10], VAR11[VAR10];
    float *VAR12, *VAR13, *VAR14, VAR15, VAR16;
    int VAR17[VAR18];
    unsigned char VAR19;
    FUN2(&VAR2->VAR20, VAR3, VAR4 * 8);
    VAR13 = VAR9;
    VAR14 = VAR11;
    VAR15 = VAR21[FUN3(&VAR2->VAR20, 6)];
    for (VAR7 = 0; VAR7 < VAR22; VAR7++)
    {
        if (VAR7 > 0)
            VAR15 += VAR23[FUN3(&VAR2->VAR20, 5)];
        VAR16 = FUN4(2, VAR15 / 2048);
        for (VAR8 = 0; VAR8 < VAR24[VAR7]; VAR8++)
        {
            *VAR13++ = VAR15;
            *VAR14++ = VAR16;
        }
    }
    FUN5(VAR9, VAR17);
    for (VAR7 = 0; VAR7 < 2; VAR7++)
    {
        VAR12 = VAR5 + VAR7 * VAR18;
        FUN2(&VAR2->VAR20, VAR3, VAR4 * 8);
        FUN6(&VAR2->VAR20, VAR25 + VAR7 * VAR26);
        for (VAR8 = 0; VAR8 < VAR10; VAR8++)
        {
            if (VAR17[VAR8] <= 0)
            {
                VAR12[VAR8] = VAR27 * VAR11[VAR8];
                if (FUN7(&VAR2->VAR28) & 1)
                    VAR12[VAR8] *= -1.0;
            }
            else
            {
                VAR19 = FUN3(&VAR2->VAR20, VAR17[VAR8]);
                VAR12[VAR8] = VAR29[(1 << VAR17[VAR8]) - 1 + VAR19] * VAR11[VAR8];
            }
        }
        memset(&VAR12[VAR10], 0, (VAR18 - VAR10) * sizeof(float));
        VAR2->VAR30.VAR31.FUN8(&VAR2->VAR30, VAR2->VAR32, VAR12, VAR2->VAR33);
        memcpy(&VAR12[0], &VAR2->VAR32[VAR18 + VAR18 / 2], (VAR18 / 2) * sizeof(float));
        memcpy(&VAR12[VAR18 / 2], &VAR2->VAR32[0], (VAR18 / 2) * sizeof(float));
        FUN9(VAR2, VAR2->VAR34, VAR12);
    }
}