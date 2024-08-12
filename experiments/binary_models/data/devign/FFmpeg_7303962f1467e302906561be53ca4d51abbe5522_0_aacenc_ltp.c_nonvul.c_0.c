void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    int VAR6, VAR7, VAR8, VAR9, VAR10 = 0, VAR11 = 0;
    int VAR12 = -(15 + FUN2(VAR4->VAR13.VAR14, VAR15));
    float *VAR16 = &VAR2->VAR17[128 * 0], *VAR18 = &VAR2->VAR17[128 * 1];
    float *VAR19 = &VAR2->VAR17[128 * 2];
    const int VAR20 = FUN2(VAR4->VAR13.VAR14, VAR15);
    if (VAR4->VAR13.VAR21[0] == VAR22)
    {
        if (VAR4->VAR13.VAR23.VAR24)
        {
            memset(&VAR4->VAR25[0], 0.0f, 3072 * sizeof(VAR4->VAR25[0]));
            memset(&VAR4->VAR13.VAR23, 0, sizeof(VAR26));
        }
        return;
    }
    if (!VAR4->VAR13.VAR23.VAR24)
        return;
    for (VAR6 = 0; VAR6 < VAR4->VAR13.VAR27; VAR6 += VAR4->VAR13.VAR28[VAR6])
    {
        VAR10 = 0;
        for (VAR7 = 0; VAR7 < VAR4->VAR13.VAR29; VAR7++)
        {
            int VAR30 = 0, VAR31 = 0;
            float VAR32 = 0.0f, VAR33 = 0.0f;
            if (VAR6 * 16 + VAR7 > VAR20)
            {
                VAR10 += VAR4->VAR13.VAR34[VAR7];
                continue;
            }
            for (VAR8 = 0; VAR8 < VAR4->VAR13.VAR28[VAR6]; VAR8++)
            {
                int VAR35, VAR36;
                VAR37 *VAR38 = &VAR2->VAR39.VAR40[VAR2->VAR41].VAR42[(VAR6 + VAR8) * 16 + VAR7];
                for (VAR9 = 0; VAR9 < VAR4->VAR13.VAR34[VAR7]; VAR9++)
                    VAR18[VAR9] = VAR4->VAR43[VAR10 + (VAR6 + VAR8) * 128 + VAR9] - VAR4->VAR25[VAR10 + (VAR6 + VAR8) * 128 + VAR9];
                FUN3(VAR16, &VAR4->VAR43[VAR10 + (VAR6 + VAR8) * 128], VAR4->VAR13.VAR34[VAR7]);
                FUN3(VAR19, VAR18, VAR4->VAR13.VAR34[VAR7]);
                VAR32 += FUN4(VAR2, &VAR4->VAR43[VAR10 + (VAR6 + VAR8) * 128], VAR16, VAR4->VAR13.VAR34[VAR7], VAR4->VAR44[(VAR6 + VAR8) * 16 + VAR7], VAR4->VAR45[(VAR6 + VAR8) * 16 + VAR7], VAR2->VAR46 / VAR38->VAR47, VAR48, &VAR35, NULL, 0);
                VAR33 += FUN4(VAR2, VAR18, VAR19, VAR4->VAR13.VAR34[VAR7], VAR4->VAR44[(VAR6 + VAR8) * 16 + VAR7], VAR4->VAR45[(VAR6 + VAR8) * 16 + VAR7], VAR2->VAR46 / VAR38->VAR47, VAR48, &VAR36, NULL, 0);
                VAR30 += VAR35;
                VAR31 += VAR36;
            }
            if (VAR33 < VAR32 && VAR31 < VAR30)
            {
                for (VAR8 = 0; VAR8 < VAR4->VAR13.VAR28[VAR6]; VAR8++)
                    for (VAR9 = 0; VAR9 < VAR4->VAR13.VAR34[VAR7]; VAR9++)
                        VAR4->VAR43[VAR10 + (VAR6 + VAR8) * 128 + VAR9] -= VAR4->VAR25[VAR10 + (VAR6 + VAR8) * 128 + VAR9];
                VAR4->VAR13.VAR23.VAR49[VAR6 * 16 + VAR7] = 1;
                VAR12 += VAR30 - VAR31;
                VAR11++;
            }
            VAR10 += VAR4->VAR13.VAR34[VAR7];
        }
    }
    VAR4->VAR13.VAR23.VAR50 = !!VAR11 && (VAR12 >= 0);
    VAR4->VAR13.VAR51 = !!VAR4->VAR13.VAR23.VAR50;
    if (!VAR4->VAR13.VAR23.VAR50 && !!VAR11)
    {
        for (VAR6 = 0; VAR6 < VAR4->VAR13.VAR27; VAR6 += VAR4->VAR13.VAR28[VAR6])
        {
            VAR10 = 0;
            for (VAR7 = 0; VAR7 < VAR4->VAR13.VAR29; VAR7++)
            {
                if (VAR4->VAR13.VAR23.VAR49[VAR6 * 16 + VAR7])
                {
                    for (VAR8 = 0; VAR8 < VAR4->VAR13.VAR28[VAR6]; VAR8++)
                    {
                        for (VAR9 = 0; VAR9 < VAR4->VAR13.VAR34[VAR7]; VAR9++)
                        {
                            VAR4->VAR43[VAR10 + (VAR6 + VAR8) * 128 + VAR9] += VAR4->VAR25[VAR10 + (VAR6 + VAR8) * 128 + VAR9];
                        }
                    }
                }
                VAR10 += VAR4->VAR13.VAR34[VAR7];
            }
        }
    }
}