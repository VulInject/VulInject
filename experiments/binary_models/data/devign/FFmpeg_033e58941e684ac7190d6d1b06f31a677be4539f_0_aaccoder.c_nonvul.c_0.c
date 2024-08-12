static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8;
    int VAR9, VAR10, VAR11, VAR12, VAR13, VAR14 = 0;
    float *VAR15 = &VAR2->VAR16[0 * 128], *VAR17 = &VAR2->VAR16[1 * 128];
    float *VAR18 = &VAR2->VAR16[3 * 128];
    const float VAR19 = VAR2->VAR19;
    const float VAR20 = VAR4->VAR21 / (1024.0f / VAR6->VAR22.VAR23) / 2.0f;
    const float VAR24 = VAR25 * (100.0f / VAR19);
    const float VAR26 = VAR27 * (VAR19 / 100.VAR28);
    for (VAR9 = 0; VAR9 < VAR6->VAR22.VAR23; VAR9 += VAR6->VAR22.VAR29[VAR9])
    {
        VAR13 = 0;
        for (VAR10 = 0; VAR10 < VAR6->VAR22.VAR30; VAR10++)
        {
            int VAR31, VAR32 = 0;
            float VAR33 = 0.0f, VAR34 = 0.0f, VAR35;
            float VAR36 = 0.0f, VAR37 = 0.0f, VAR38 = 0.0f;
            if (VAR13 * VAR20 < VAR39)
            {
                VAR13 += VAR6->VAR22.VAR40[VAR10];
                continue;
            }
            for (VAR11 = 0; VAR11 < VAR6->VAR22.VAR29[VAR9]; VAR11++)
            {
                VAR8 = &VAR2->VAR41.VAR42[VAR2->VAR43].VAR44[(VAR9 + VAR11) * 16 + VAR10];
                VAR36 += VAR8->VAR36;
                VAR38 += VAR8->VAR38;
                VAR37 += VAR8->VAR37;
            }
            VAR6->VAR45[VAR9 * 16 + VAR10] = VAR36;
            if (VAR6->VAR46[VAR9 * 16 + VAR10])
            {
                VAR32 = 1;
            }
            else if (VAR36 < VAR37)
            {
                VAR32 = 1;
            }
            else if (VAR38 > VAR26)
            {
                VAR32 = 0;
            }
            else if (VAR36 < VAR37 * VAR24)
            {
                VAR32 = 1;
            }
            if (!VAR32 || !VAR36)
            {
                VAR13 += VAR6->VAR22.VAR40[VAR10];
                continue;
            }
            VAR31 = FUN2(FUN3(FUN4(VAR36) * 2), -100, 155);
            VAR35 = -VAR47[VAR31 + VAR48];
            for (VAR11 = 0; VAR11 < VAR6->VAR22.VAR29[VAR9]; VAR11++)
            {
                float VAR49, VAR50;
                VAR8 = &VAR2->VAR41.VAR42[VAR2->VAR43 + 0].VAR44[(VAR9 + VAR11) * 16 + VAR10];
                for (VAR12 = 0; VAR12 < VAR6->VAR22.VAR40[VAR10]; VAR12++)
                    VAR15[VAR12] = VAR2->VAR51 = FUN5(VAR2->VAR51);
                VAR49 = VAR2->VAR52->FUN6(VAR15, VAR15, VAR6->VAR22.VAR40[VAR10]);
                VAR50 = VAR35 / FUN7(VAR49);
                VAR2->VAR52->FUN8(VAR15, VAR15, VAR50, VAR6->VAR22.VAR40[VAR10]);
                FUN9(VAR18, &VAR6->VAR53[VAR13 + (VAR9 + VAR11) * 128], VAR6->VAR22.VAR40[VAR10]);
                FUN9(VAR17, VAR15, VAR6->VAR22.VAR40[VAR10]);
                VAR33 += FUN10(VAR2, &VAR6->VAR53[VAR13 + (VAR9 + VAR11) * 128], VAR18, VAR6->VAR22.VAR40[VAR10], VAR6->VAR54[(VAR9 + VAR11) * 16 + VAR10], VAR6->VAR55[(VAR9 + VAR11) * 16 + VAR10], VAR19 / VAR8->VAR37, VAR56, NULL, 0);
                VAR34 += FUN10(VAR2, VAR15, VAR17, VAR6->VAR22.VAR40[VAR10], VAR31, VAR57, VAR19 / VAR8->VAR37, VAR56, NULL, 0);
            }
            if (VAR34 < VAR33)
            {
                VAR6->VAR58[VAR9 * 16 + VAR10] = VAR57;
                VAR6->VAR46[VAR9 * 16 + VAR10] = 0;
                if (VAR6->VAR58[VAR9 * 16 + VAR10 - 1] != VAR57 && VAR6->VAR58[VAR9 * 16 + VAR10 - 2] == VAR57)
                {
                    VAR6->VAR58[VAR9 * 16 + VAR10 - 1] = VAR57;
                    VAR6->VAR46[VAR9 * 16 + VAR10 - 1] = 0;
                }
                VAR14++;
            }
            VAR13 += VAR6->VAR22.VAR40[VAR10];
        }
    }
}