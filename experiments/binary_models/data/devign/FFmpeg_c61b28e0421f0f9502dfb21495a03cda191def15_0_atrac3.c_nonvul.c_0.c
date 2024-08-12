static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, float **VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    int VAR9, VAR10, VAR11;
    VAR3 *VAR12;
    if (VAR7->VAR13 == VAR14)
    {
        VAR3 *VAR15;
        int VAR16, VAR17;
        VAR17 = (VAR2->VAR18 / VAR2->VAR19) * 2;
        for (VAR11 = 0; VAR11 < VAR2->VAR19; VAR11 = VAR11 + 2)
        {
            VAR16 = VAR11 / 2;
            VAR15 = VAR4 + VAR16 * VAR17;
            FUN2(&VAR7->VAR20, VAR15, VAR17 * 8);
            VAR9 = FUN3(VAR7, &VAR7->VAR20, &VAR7->VAR21[VAR11], VAR5[VAR11], VAR11, VAR14);
            if (VAR9 != 0)
                return VAR9;
            if (VAR15 == VAR7->VAR22)
            {
                VAR3 *VAR23 = VAR7->VAR22 + VAR17 - 1;
                VAR12 = VAR7->VAR22;
                for (VAR10 = 0; VAR10 < VAR17 / 2; VAR10++, VAR12++, VAR23--)
                    FUN4(VAR3, *VAR12, *VAR23);
            }
            else
            {
                const VAR3 *VAR23 = VAR15 + VAR17 - 1;
                for (VAR10 = 0; VAR10 < VAR17; VAR10++)
                    VAR7->VAR22[VAR10] = *VAR23--;
            }
            VAR12 = VAR7->VAR22;
            for (VAR10 = 4; *VAR12 == 0xF8; VAR10++, VAR12++)
            {
                if (VAR10 >= VAR17)
                    return VAR24;
            }
            FUN5(&VAR7->VAR20, VAR12, VAR7->VAR22 + VAR17 - VAR12);
            memmove(VAR7->VAR25[VAR16], &VAR7->VAR25[VAR16][2], 4 * sizeof(*VAR7->VAR25[VAR16]));
            VAR7->VAR25[VAR16][4] = FUN6(&VAR7->VAR20);
            VAR7->VAR25[VAR16][5] = FUN7(&VAR7->VAR20, 3);
            for (VAR10 = 0; VAR10 < 4; VAR10++)
            {
                VAR7->VAR26[VAR16][VAR10] = VAR7->VAR27[VAR16][VAR10];
                VAR7->VAR27[VAR16][VAR10] = VAR7->VAR28[VAR16][VAR10];
                VAR7->VAR28[VAR16][VAR10] = FUN7(&VAR7->VAR20, 2);
            }
            VAR9 = FUN3(VAR7, &VAR7->VAR20, &VAR7->VAR21[VAR11 + 1], VAR5[VAR11 + 1], VAR11 + 1, VAR14);
            if (VAR9 != 0)
                return VAR9;
            FUN8(VAR5[VAR11], VAR5[VAR11 + 1], VAR7->VAR26[VAR16], VAR7->VAR27[VAR16]);
            FUN9(VAR5[VAR11], VAR5[VAR11 + 1], VAR7->VAR25[VAR16]);
        }
    }
    else
    {
        for (VAR10 = 0; VAR10 < VAR2->VAR19; VAR10++)
        {
            FUN2(&VAR7->VAR20, VAR4 + VAR10 * VAR2->VAR18 / VAR2->VAR19, VAR2->VAR18 * 8 / VAR2->VAR19);
            VAR9 = FUN3(VAR7, &VAR7->VAR20, &VAR7->VAR21[VAR10], VAR5[VAR10], VAR10, VAR7->VAR13);
            if (VAR9 != 0)
                return VAR9;
        }
    }
    for (VAR10 = 0; VAR10 < VAR2->VAR19; VAR10++)
    {
        float *VAR29 = VAR5[VAR10];
        float *VAR30 = VAR29 + 256;
        float *VAR31 = VAR30 + 256;
        float *VAR32 = VAR31 + 256;
        FUN10(VAR29, VAR30, 256, VAR29, VAR7->VAR21[VAR10].VAR33, VAR7->VAR34);
        FUN10(VAR32, VAR31, 256, VAR31, VAR7->VAR21[VAR10].VAR35, VAR7->VAR34);
        FUN10(VAR29, VAR31, 512, VAR29, VAR7->VAR21[VAR10].VAR36, VAR7->VAR34);
    }
    return 0;
}