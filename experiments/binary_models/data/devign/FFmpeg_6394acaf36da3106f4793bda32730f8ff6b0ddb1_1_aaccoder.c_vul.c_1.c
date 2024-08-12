static void FUN1(VAR1 *VAR2, VAR3 *VAR4, const float VAR5)
{
    int VAR6 = 0, VAR7, VAR8, VAR9, VAR10;
    float VAR11[128], VAR12[128];
    float *VAR13 = VAR2->VAR14, *VAR15 = VAR2->VAR14 + 128, *VAR16 = VAR2->VAR14 + 128 * 2, *VAR17 = VAR2->VAR14 + 128 * 3;
    VAR18 *VAR19 = &VAR4->VAR20[0];
    VAR18 *VAR21 = &VAR4->VAR20[1];
    if (!VAR4->VAR22)
        return;
    for (VAR8 = 0; VAR8 < VAR19->VAR23.VAR24; VAR8 += VAR19->VAR23.VAR25[VAR8])
    {
        for (VAR10 = 0; VAR10 < VAR19->VAR23.VAR26; VAR10++)
        {
            if (!VAR4->VAR20[0].VAR27[VAR8 * 16 + VAR10] && !VAR4->VAR20[1].VAR27[VAR8 * 16 + VAR10])
            {
                float VAR28 = 0.0f, VAR29 = 0.0f;
                for (VAR9 = 0; VAR9 < VAR19->VAR23.VAR25[VAR8]; VAR9++)
                {
                    VAR30 *VAR31 = &VAR2->VAR32.VAR20[VAR2->VAR33 + 0].VAR34[(VAR8 + VAR9) * 16 + VAR10];
                    VAR30 *VAR35 = &VAR2->VAR32.VAR20[VAR2->VAR33 + 1].VAR34[(VAR8 + VAR9) * 16 + VAR10];
                    float VAR36 = FUN2(VAR31->VAR37, VAR35->VAR37);
                    float VAR38 = FUN3(VAR31->VAR37, VAR35->VAR37);
                    for (VAR7 = 0; VAR7 < VAR19->VAR23.VAR39[VAR10]; VAR7++)
                    {
                        VAR11[VAR7] = (VAR19->VAR40[VAR6 + VAR9 * 128 + VAR7] + VAR21->VAR40[VAR6 + VAR9 * 128 + VAR7]) * 0.5;
                        VAR12[VAR7] = VAR11[VAR7] - VAR21->VAR40[VAR6 + VAR9 * 128 + VAR7];
                    }
                    FUN4(VAR13, VAR19->VAR40 + VAR6 + VAR9 * 128, VAR19->VAR23.VAR39[VAR10]);
                    FUN4(VAR15, VAR21->VAR40 + VAR6 + VAR9 * 128, VAR19->VAR23.VAR39[VAR10]);
                    FUN4(VAR16, VAR11, VAR19->VAR23.VAR39[VAR10]);
                    FUN4(VAR17, VAR12, VAR19->VAR23.VAR39[VAR10]);
                    VAR28 += FUN5(VAR2, VAR19->VAR40 + VAR6 + VAR9 * 128, VAR13, VAR19->VAR23.VAR39[VAR10], VAR19->VAR41[(VAR8 + VAR9) * 16 + VAR10], VAR19->VAR42[(VAR8 + VAR9) * 16 + VAR10], VAR5 / VAR31->VAR37, VAR43, NULL);
                    VAR28 += FUN5(VAR2, VAR21->VAR40 + VAR6 + VAR9 * 128, VAR15, VAR21->VAR23.VAR39[VAR10], VAR21->VAR41[(VAR8 + VAR9) * 16 + VAR10], VAR21->VAR42[(VAR8 + VAR9) * 16 + VAR10], VAR5 / VAR35->VAR37, VAR43, NULL);
                    VAR29 += FUN5(VAR2, VAR11, VAR16, VAR19->VAR23.VAR39[VAR10], VAR19->VAR41[(VAR8 + VAR9) * 16 + VAR10], VAR19->VAR42[(VAR8 + VAR9) * 16 + VAR10], VAR5 / VAR38, VAR43, NULL);
                    VAR29 += FUN5(VAR2, VAR12, VAR17, VAR21->VAR23.VAR39[VAR10], VAR21->VAR41[(VAR8 + VAR9) * 16 + VAR10], VAR21->VAR42[(VAR8 + VAR9) * 16 + VAR10], VAR5 / VAR36, VAR43, NULL);
                }
                VAR4->VAR44[VAR8 * 16 + VAR10] = VAR29 < VAR28;
            }
            VAR6 += VAR19->VAR23.VAR39[VAR10];
        }
    }
}