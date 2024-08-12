static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5 = 0, VAR6, VAR7, VAR8, VAR9, VAR10;
    float VAR11[128], VAR12[128];
    float *VAR13 = VAR2->VAR14, *VAR15 = VAR2->VAR14 + 128, *VAR16 = VAR2->VAR14 + 128 * 2, *VAR17 = VAR2->VAR14 + 128 * 3;
    const float VAR18 = VAR2->VAR18;
    const float VAR19 = FUN2(1.0f, VAR18 / 120.VAR20);
    VAR21 *VAR22 = &VAR4->VAR23[0];
    VAR21 *VAR24 = &VAR4->VAR23[1];
    if (!VAR4->VAR25)
        return;
    for (VAR7 = 0; VAR7 < VAR22->VAR26.VAR27; VAR7 += VAR22->VAR26.VAR28[VAR7])
    {
        int VAR29 = VAR30;
        int VAR31 = VAR30;
        for (VAR9 = 0; VAR9 < VAR22->VAR26.VAR32; VAR9++)
        {
            if (!VAR22->VAR33[VAR7 * 16 + VAR9] && VAR22->VAR34[VAR7 * 16 + VAR9] < VAR35)
                VAR29 = FUN2(VAR29, VAR22->VAR36[VAR7 * 16 + VAR9]);
            if (!VAR24->VAR33[VAR7 * 16 + VAR9] && VAR24->VAR34[VAR7 * 16 + VAR9] < VAR35)
                VAR31 = FUN2(VAR31, VAR24->VAR36[VAR7 * 16 + VAR9]);
        }
        VAR5 = 0;
        for (VAR9 = 0; VAR9 < VAR22->VAR26.VAR32; VAR9++)
        {
            float VAR37 = FUN3(VAR9 * 17.0f / VAR22->VAR26.VAR32) / 0.0045f;
            VAR4->VAR38[VAR7 * 16 + VAR9] = 0;
            if (!VAR4->VAR23[0].VAR33[VAR7 * 16 + VAR9] && !VAR4->VAR23[1].VAR33[VAR7 * 16 + VAR9])
            {
                float VAR39 = 0.0f, VAR40 = 0.0f;
                for (VAR8 = 0; VAR8 < VAR22->VAR26.VAR28[VAR7]; VAR8++)
                {
                    for (VAR6 = 0; VAR6 < VAR22->VAR26.VAR41[VAR9]; VAR6++)
                    {
                        VAR11[VAR6] = (VAR22->VAR42[VAR5 + (VAR7 + VAR8) * 128 + VAR6] + VAR24->VAR42[VAR5 + (VAR7 + VAR8) * 128 + VAR6]) * 0.5;
                        VAR12[VAR6] = VAR11[VAR6] - VAR24->VAR42[VAR5 + (VAR7 + VAR8) * 128 + VAR6];
                    }
                    FUN4(VAR16, VAR11, VAR22->VAR26.VAR41[VAR9]);
                    FUN4(VAR17, VAR12, VAR22->VAR26.VAR41[VAR9]);
                    for (VAR6 = 0; VAR6 < VAR22->VAR26.VAR41[VAR9]; VAR6++)
                    {
                        VAR39 = FUN5(VAR39, VAR16[VAR6]);
                        VAR40 = FUN5(VAR40, VAR17[VAR6]);
                    }
                }
                for (VAR10 = 0; VAR10 < 4; VAR10++)
                {
                    float VAR43 = 0.0f, VAR44 = 0.0f;
                    int VAR45 = 0, VAR46 = 0;
                    int VAR47;
                    int VAR48, VAR49;
                    int VAR50, VAR51;
                    VAR47 = FUN2(VAR22->VAR36[VAR7 * 16 + VAR9], VAR24->VAR36[VAR7 * 16 + VAR9]);
                    VAR48 = FUN6(VAR47, VAR29, VAR29 + VAR52);
                    VAR49 = FUN6(VAR47 - VAR10 * 3, VAR31, VAR31 + VAR52);
                    VAR50 = FUN7(VAR39, VAR48);
                    VAR51 = FUN7(VAR40, VAR49);
                    if ((VAR48 > VAR47) || (VAR49 > VAR47))
                    {
                        continue;
                    }
                    VAR50 = FUN5(1, VAR50);
                    VAR51 = FUN5(1, VAR51);
                    for (VAR8 = 0; VAR8 < VAR22->VAR26.VAR28[VAR7]; VAR8++)
                    {
                        VAR53 *VAR54 = &VAR2->VAR55.VAR23[VAR2->VAR56 + 0].VAR57[(VAR7 + VAR8) * 16 + VAR9];
                        VAR53 *VAR58 = &VAR2->VAR55.VAR23[VAR2->VAR56 + 1].VAR57[(VAR7 + VAR8) * 16 + VAR9];
                        float VAR59 = FUN2(VAR54->VAR60, VAR58->VAR60);
                        int VAR61, VAR62, VAR63, VAR64;
                        for (VAR6 = 0; VAR6 < VAR22->VAR26.VAR41[VAR9]; VAR6++)
                        {
                            VAR11[VAR6] = (VAR22->VAR42[VAR5 + (VAR7 + VAR8) * 128 + VAR6] + VAR24->VAR42[VAR5 + (VAR7 + VAR8) * 128 + VAR6]) * 0.5;
                            VAR12[VAR6] = VAR11[VAR6] - VAR24->VAR42[VAR5 + (VAR7 + VAR8) * 128 + VAR6];
                        }
                        FUN4(VAR13, VAR22->VAR42 + VAR5 + (VAR7 + VAR8) * 128, VAR22->VAR26.VAR41[VAR9]);
                        FUN4(VAR15, VAR24->VAR42 + VAR5 + (VAR7 + VAR8) * 128, VAR22->VAR26.VAR41[VAR9]);
                        FUN4(VAR16, VAR11, VAR22->VAR26.VAR41[VAR9]);
                        FUN4(VAR17, VAR12, VAR22->VAR26.VAR41[VAR9]);
                        VAR43 += FUN8(VAR2, &VAR22->VAR42[VAR5 + (VAR7 + VAR8) * 128], VAR13, VAR22->VAR26.VAR41[VAR9], VAR22->VAR36[(VAR7 + VAR8) * 16 + VAR9], VAR22->VAR34[(VAR7 + VAR8) * 16 + VAR9], VAR18 / VAR54->VAR60, VAR65, &VAR61, NULL, 0);
                        VAR43 += FUN8(VAR2, &VAR24->VAR42[VAR5 + (VAR7 + VAR8) * 128], VAR15, VAR24->VAR26.VAR41[VAR9], VAR24->VAR36[(VAR7 + VAR8) * 16 + VAR9], VAR24->VAR34[(VAR7 + VAR8) * 16 + VAR9], VAR18 / VAR58->VAR60, VAR65, &VAR62, NULL, 0);
                        VAR44 += FUN8(VAR2, VAR11, VAR16, VAR22->VAR26.VAR41[VAR9], VAR22->VAR36[(VAR7 + VAR8) * 16 + VAR9], VAR22->VAR34[(VAR7 + VAR8) * 16 + VAR9], VAR18 / VAR59, VAR65, &VAR63, NULL, 0);
                        VAR44 += FUN8(VAR2, VAR12, VAR17, VAR24->VAR26.VAR41[VAR9], VAR24->VAR36[(VAR7 + VAR8) * 16 + VAR9], VAR24->VAR34[(VAR7 + VAR8) * 16 + VAR9], VAR19 / (VAR59 * VAR37), VAR65, &VAR64, NULL, 0);
                        VAR45 += VAR61 + VAR62;
                        VAR46 += VAR63 + VAR64;
                        VAR43 -= VAR45;
                        VAR44 -= VAR46;
                    }
                    VAR4->VAR38[VAR7 * 16 + VAR9] = VAR44 <= VAR43 && VAR46 < VAR45;
                    if (VAR4->VAR38[VAR7 * 16 + VAR9])
                    {
                        if (!VAR4->VAR66[VAR7 * 16 + VAR9] && VAR22->VAR34[VAR7 * 16 + VAR9] != VAR67 && VAR24->VAR34[VAR7 * 16 + VAR9] != VAR67)
                        {
                            VAR22->VAR36[VAR7 * 16 + VAR9] = VAR48;
                            VAR24->VAR36[VAR7 * 16 + VAR9] = VAR49;
                            VAR22->VAR34[VAR7 * 16 + VAR9] = VAR50;
                            VAR24->VAR34[VAR7 * 16 + VAR9] = VAR51;
                        }
                        break;
                    }
                    else if (VAR46 > VAR45)
                    {
                        break;
                    }
                }
            }
            VAR5 += VAR22->VAR26.VAR41[VAR9];
        }
    }
}