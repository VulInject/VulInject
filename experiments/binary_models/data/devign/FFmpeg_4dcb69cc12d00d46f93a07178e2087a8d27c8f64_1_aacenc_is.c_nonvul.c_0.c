void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = &VAR6->VAR9[0];
    VAR7 *VAR10 = &VAR6->VAR9[1];
    int VAR11 = 0, VAR12 = 0, VAR13, VAR14, VAR15, VAR16, VAR17 = -1;
    const float VAR18 = VAR4->VAR19 / (1024.0f / VAR8->VAR20.VAR21) / 2.0f;
    uint8_t VAR22[128];
    if (!VAR6->VAR23)
        return;
    FUN2(VAR10, VAR22);
    for (VAR13 = 0; VAR13 < VAR8->VAR20.VAR21; VAR13 += VAR8->VAR20.VAR24[VAR13])
    {
        VAR11 = 0;
        for (VAR15 = 0; VAR15 < VAR8->VAR20.VAR25; VAR15++)
        {
            if (VAR11 * VAR18 > VAR26 * (VAR2->VAR27 / 170.0f) && VAR6->VAR9[0].VAR28[VAR13 * 16 + VAR15] != VAR29 && !VAR6->VAR9[0].VAR30[VAR13 * 16 + VAR15] && VAR6->VAR9[1].VAR28[VAR13 * 16 + VAR15] != VAR29 && !VAR6->VAR9[1].VAR30[VAR13 * 16 + VAR15] && FUN3(VAR10, VAR22, VAR17, VAR13 * 16 + VAR15))
            {
                float VAR31 = 0.0f, VAR32 = 0.0f, VAR33 = 0.0f, VAR34 = 0.0f;
                struct AACISError VAR35, VAR36, *VAR37;
                for (VAR14 = 0; VAR14 < VAR8->VAR20.VAR24[VAR13]; VAR14++)
                {
                    for (VAR16 = 0; VAR16 < VAR8->VAR20.VAR38[VAR15]; VAR16++)
                    {
                        float VAR39 = FUN4(VAR8->VAR40[VAR11 + (VAR13 + VAR14) * 128 + VAR16]);
                        float VAR41 = FUN4(VAR10->VAR40[VAR11 + (VAR13 + VAR14) * 128 + VAR16]);
                        VAR31 += VAR39 * VAR39;
                        VAR32 += VAR41 * VAR41;
                        VAR33 += (VAR39 + VAR41) * (VAR39 + VAR41);
                        VAR34 += (VAR39 - VAR41) * (VAR39 - VAR41);
                    }
                }
                VAR35 = FUN5(VAR2, VAR6, VAR11, VAR13, VAR15, VAR31, VAR32, VAR34, 0, -1);
                VAR36 = FUN5(VAR2, VAR6, VAR11, VAR13, VAR15, VAR31, VAR32, VAR33, 0, +1);
                VAR37 = (VAR35.VAR42 && VAR35.VAR43 < VAR36.VAR43) ? &VAR35 : &VAR36;
                if (VAR37->VAR42)
                {
                    VAR6->VAR44[VAR13 * 16 + VAR15] = 1;
                    VAR6->VAR45[VAR13 * 16 + VAR15] = 0;
                    VAR6->VAR9[0].VAR46[VAR13 * 16 + VAR15] = FUN6(VAR31 / VAR37->VAR33);
                    VAR6->VAR9[1].VAR46[VAR13 * 16 + VAR15] = VAR31 / VAR32;
                    VAR6->VAR9[1].VAR28[VAR13 * 16 + VAR15] = (VAR37->VAR47 > 0) ? VAR48 : VAR49;
                    VAR12++;
                }
            }
            if (!VAR10->VAR30[VAR13 * 16 + VAR15] && VAR10->VAR28[VAR13 * 16 + VAR15] < VAR50)
                VAR17 = VAR10->VAR51[VAR13 * 16 + VAR15];
            VAR11 += VAR8->VAR20.VAR38[VAR15];
        }
    }
    VAR6->VAR52 = !!VAR12;
}