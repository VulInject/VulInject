static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5 = 0, VAR6, VAR7, VAR8, VAR9;
    float VAR10[128], VAR11[128];
    float *VAR12 = VAR2->VAR13, *VAR14 = VAR2->VAR13 + 128, *VAR15 = VAR2->VAR13 + 128 * 2, *VAR16 = VAR2->VAR13 + 128 * 3;
    const float VAR17 = VAR2->VAR17;
    VAR18 *VAR19 = &VAR4->VAR20[0];
    VAR18 *VAR21 = &VAR4->VAR20[1];
    if (!VAR4->VAR22)
        return;
    for (VAR7 = 0; VAR7 < VAR19->VAR23.VAR24; VAR7 += VAR19->VAR23.VAR25[VAR7])
    {
        VAR5 = 0;
        for (VAR9 = 0; VAR9 < VAR19->VAR23.VAR26; VAR9++)
        {
            if (!VAR4->VAR20[0].VAR27[VAR7 * 16 + VAR9] && !VAR4->VAR20[1].VAR27[VAR7 * 16 + VAR9])
            {
                float VAR28 = 0.0f, VAR29 = 0.0f;
                for (VAR8 = 0; VAR8 < VAR19->VAR23.VAR25[VAR7]; VAR8++)
                {
                    VAR30 *VAR31 = &VAR2->VAR32.VAR20[VAR2->VAR33 + 0].VAR34[(VAR7 + VAR8) * 16 + VAR9];
                    VAR30 *VAR35 = &VAR2->VAR32.VAR20[VAR2->VAR33 + 1].VAR34[(VAR7 + VAR8) * 16 + VAR9];
                    float VAR36 = FUN2(VAR31->VAR37, VAR35->VAR37);
                    float VAR38 = FUN3(VAR31->VAR37, VAR35->VAR37);
                    for (VAR6 = 0; VAR6 < VAR19->VAR23.VAR39[VAR9]; VAR6 += 4)
                    {
                        VAR10[VAR6] = (VAR19->VAR40[VAR5 + VAR8 * 128 + VAR6] + VAR21->VAR40[VAR5 + VAR8 * 128 + VAR6]) * 0.5;
                        VAR10[VAR6 + 1] = (VAR19->VAR40[VAR5 + VAR8 * 128 + VAR6 + 1] + VAR21->VAR40[VAR5 + VAR8 * 128 + VAR6 + 1]) * 0.5;
                        VAR10[VAR6 + 2] = (VAR19->VAR40[VAR5 + VAR8 * 128 + VAR6 + 2] + VAR21->VAR40[VAR5 + VAR8 * 128 + VAR6 + 2]) * 0.5;
                        VAR10[VAR6 + 3] = (VAR19->VAR40[VAR5 + VAR8 * 128 + VAR6 + 3] + VAR21->VAR40[VAR5 + VAR8 * 128 + VAR6 + 3]) * 0.5;
                        VAR11[VAR6] = VAR10[VAR6] - VAR21->VAR40[VAR5 + VAR8 * 128 + VAR6];
                        VAR11[VAR6 + 1] = VAR10[VAR6 + 1] - VAR21->VAR40[VAR5 + VAR8 * 128 + VAR6 + 1];
                        VAR11[VAR6 + 2] = VAR10[VAR6 + 2] - VAR21->VAR40[VAR5 + VAR8 * 128 + VAR6 + 2];
                        VAR11[VAR6 + 3] = VAR10[VAR6 + 3] - VAR21->VAR40[VAR5 + VAR8 * 128 + VAR6 + 3];
                    }
                    FUN4(VAR12, VAR19->VAR40 + VAR5 + (VAR7 + VAR8) * 128, VAR19->VAR23.VAR39[VAR9]);
                    FUN4(VAR14, VAR21->VAR40 + VAR5 + (VAR7 + VAR8) * 128, VAR19->VAR23.VAR39[VAR9]);
                    FUN4(VAR15, VAR10, VAR19->VAR23.VAR39[VAR9]);
                    FUN4(VAR16, VAR11, VAR19->VAR23.VAR39[VAR9]);
                    VAR28 += FUN5(VAR2, &VAR19->VAR40[VAR5 + (VAR7 + VAR8) * 128], VAR12, VAR19->VAR23.VAR39[VAR9], VAR19->VAR41[(VAR7 + VAR8) * 16 + VAR9], VAR19->VAR42[(VAR7 + VAR8) * 16 + VAR9], VAR17 / VAR31->VAR37, VAR43, NULL, NULL, 0);
                    VAR28 += FUN5(VAR2, &VAR21->VAR40[VAR5 + (VAR7 + VAR8) * 128], VAR14, VAR21->VAR23.VAR39[VAR9], VAR21->VAR41[(VAR7 + VAR8) * 16 + VAR9], VAR21->VAR42[(VAR7 + VAR8) * 16 + VAR9], VAR17 / VAR35->VAR37, VAR43, NULL, NULL, 0);
                    VAR29 += FUN5(VAR2, VAR10, VAR15, VAR19->VAR23.VAR39[VAR9], VAR19->VAR41[(VAR7 + VAR8) * 16 + VAR9], VAR19->VAR42[(VAR7 + VAR8) * 16 + VAR9], VAR17 / VAR38, VAR43, NULL, NULL, 0);
                    VAR29 += FUN5(VAR2, VAR11, VAR16, VAR21->VAR23.VAR39[VAR9], VAR21->VAR41[(VAR7 + VAR8) * 16 + VAR9], VAR21->VAR42[(VAR7 + VAR8) * 16 + VAR9], VAR17 / VAR36, VAR43, NULL, NULL, 0);
                }
                VAR4->VAR44[VAR7 * 16 + VAR9] = VAR29 < VAR28;
            }
            VAR5 += VAR19->VAR23.VAR39[VAR9];
        }
    }
}