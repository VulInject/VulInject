static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8;
    int VAR9, VAR10, VAR11, VAR12;
    float *VAR13 = &VAR2->VAR14[0 * 128], *VAR15 = &VAR2->VAR14[1 * 128];
    float *VAR16 = &VAR2->VAR14[3 * 128];
    const float VAR17 = VAR2->VAR17;
    const float VAR18 = VAR4->VAR19 / (1024.0f / VAR6->VAR20.VAR21) / 2.0f;
    const float VAR22 = VAR23 * (100.0f / VAR17);
    const float VAR24 = VAR25 * (VAR17 / 100.VAR26);
    if (VAR6->VAR20.VAR27[0] == VAR28)
        return;
    for (VAR9 = 0; VAR9 < VAR6->VAR20.VAR21; VAR9 += VAR6->VAR20.VAR29[VAR9])
    {
        for (VAR10 = 0; VAR10 < VAR6->VAR20.VAR30; VAR10++)
        {
            int VAR31;
            float VAR32 = 0.0f, VAR33 = 0.0f, VAR34;
            float VAR35 = 0.0f, VAR36, VAR37;
            float VAR38 = 0.0f, VAR39 = 0.0f, VAR40 = 0.0f;
            const int VAR41 = VAR6->VAR20.VAR42[VAR9 * 16 + VAR10];
            const float VAR43 = VAR41 * VAR18;
            const float VAR44 = FUN2(0.88f * VAR43 / VAR45, 1.0f);
            if (VAR43 < VAR45 || VAR4->VAR46 && VAR43 >= VAR4->VAR46)
                continue;
            for (VAR11 = 0; VAR11 < VAR6->VAR20.VAR29[VAR9]; VAR11++)
            {
                VAR8 = &VAR2->VAR47.VAR48[VAR2->VAR49].VAR50[(VAR9 + VAR11) * 16 + VAR10];
                VAR38 += VAR8->VAR51;
                VAR40 += VAR8->VAR40;
                VAR39 += VAR8->VAR39;
            }
            VAR37 = FUN3(2.5f * VAR45 / VAR43, 1.27f);
            if (VAR6->VAR52[VAR9 * 16 + VAR10] || VAR40 < VAR24 || VAR38 > VAR39 * VAR22 * VAR44)
            {
                VAR6->VAR53[VAR9 * 16 + VAR10] = VAR38;
                continue;
            }
            VAR31 = FUN4(FUN5(FUN6(VAR38) * 2), -100, 155);
            VAR34 = -VAR54[VAR31 + VAR55];
            for (VAR11 = 0; VAR11 < VAR6->VAR20.VAR29[VAR9]; VAR11++)
            {
                float VAR56, VAR57;
                const int VAR58 = VAR6->VAR20.VAR42[(VAR9 + VAR11) * 16 + VAR10];
                VAR8 = &VAR2->VAR47.VAR48[VAR2->VAR49].VAR50[(VAR9 + VAR11) * 16 + VAR10];
                for (VAR12 = 0; VAR12 < VAR6->VAR20.VAR59[VAR10]; VAR12++)
                    VAR13[VAR12] = VAR2->VAR60 = FUN7(VAR2->VAR60);
                VAR56 = VAR2->VAR61->FUN8(VAR13, VAR13, VAR6->VAR20.VAR59[VAR10]);
                VAR57 = VAR34 / FUN9(VAR56);
                VAR2->VAR61->FUN10(VAR13, VAR13, VAR57, VAR6->VAR20.VAR59[VAR10]);
                VAR35 += VAR2->VAR61->FUN8(VAR13, VAR13, VAR6->VAR20.VAR59[VAR10]);
                FUN11(VAR16, &VAR6->VAR62[VAR58], VAR6->VAR20.VAR59[VAR10]);
                FUN11(VAR15, VAR13, VAR6->VAR20.VAR59[VAR10]);
                VAR32 += FUN12(VAR2, &VAR6->VAR62[VAR58], VAR16, VAR6->VAR20.VAR59[VAR10], VAR6->VAR63[(VAR9 + VAR11) * 16 + VAR10], VAR6->VAR64[(VAR9 + VAR11) * 16 + VAR10], VAR17 / VAR8->VAR39, VAR65, NULL, 0);
                VAR33 += FUN12(VAR2, VAR13, VAR15, VAR6->VAR20.VAR59[VAR10], VAR31, VAR66, VAR17 / VAR8->VAR39, VAR65, NULL, 0);
            }
            VAR36 = VAR38 / VAR35;
            VAR6->VAR53[VAR9 * 16 + VAR10] = VAR36 * VAR38;
            if (VAR36 > 0.85f && VAR36 < 1.25f && VAR32 / VAR33 > VAR37)
            {
                VAR6->VAR67[VAR9 * 16 + VAR10] = VAR66;
                VAR6->VAR52[VAR9 * 16 + VAR10] = 0;
                if (VAR6->VAR67[VAR9 * 16 + VAR10 - 1] != VAR66 && VAR6->VAR67[VAR9 * 16 + VAR10 - 2] == VAR66)
                {
                    VAR6->VAR67[VAR9 * 16 + VAR10 - 1] = VAR66;
                    VAR6->VAR52[VAR9 * 16 + VAR10 - 1] = 0;
                }
            }
        }
    }
}