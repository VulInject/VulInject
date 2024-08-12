void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = &VAR6->VAR9[0];
    VAR7 *VAR10 = &VAR6->VAR9[1];
    int VAR11 = 0, VAR12 = 0, VAR13, VAR14, VAR15, VAR16;
    const float VAR17 = VAR4->VAR18 / (1024.0f / VAR8->VAR19.VAR20) / 2.0f;
    if (!VAR6->VAR21)
        return;
    for (VAR13 = 0; VAR13 < VAR8->VAR19.VAR20; VAR13 += VAR8->VAR19.VAR22[VAR13])
    {
        VAR11 = 0;
        for (VAR15 = 0; VAR15 < VAR8->VAR19.VAR23; VAR15++)
        {
            if (VAR11 * VAR17 > VAR24 * (VAR2->VAR25 / 170.0f) && VAR6->VAR9[0].VAR26[VAR13 * 16 + VAR15] != VAR27 && !VAR6->VAR9[0].VAR28[VAR13 * 16 + VAR15] && VAR6->VAR9[1].VAR26[VAR13 * 16 + VAR15] != VAR27 && !VAR6->VAR9[1].VAR28[VAR13 * 16 + VAR15])
            {
                float VAR29 = 0.0f, VAR30 = 0.0f, VAR31 = 0.0f;
                struct AACISError VAR32, VAR33, *VAR34;
                if (VAR8->VAR26[VAR13 * 16 + VAR15] == VAR27 || VAR10->VAR26[VAR13 * 16 + VAR15] == VAR27)
                {
                    VAR11 += VAR8->VAR19.VAR35[VAR15];
                    continue;
                }
                for (VAR14 = 0; VAR14 < VAR8->VAR19.VAR22[VAR13]; VAR14++)
                {
                    for (VAR16 = 0; VAR16 < VAR8->VAR19.VAR35[VAR15]; VAR16++)
                    {
                        float VAR36 = FUN2(VAR8->VAR37[VAR11 + (VAR13 + VAR14) * 128 + VAR16]);
                        float VAR38 = FUN2(VAR10->VAR37[VAR11 + (VAR13 + VAR14) * 128 + VAR16]);
                        VAR29 += VAR36 * VAR36;
                        VAR30 += VAR38 * VAR38;
                        VAR31 += (VAR36 + VAR38) * (VAR36 + VAR38);
                    }
                }
                VAR32 = FUN3(VAR2, VAR6, VAR11, VAR13, VAR15, VAR29, VAR30, VAR31, 0, -1);
                VAR33 = FUN3(VAR2, VAR6, VAR11, VAR13, VAR15, VAR29, VAR30, VAR31, 0, +1);
                VAR34 = VAR32.VAR39 < VAR33.VAR39 ? &VAR32 : &VAR33;
                if (VAR34->VAR40)
                {
                    VAR6->VAR41[VAR13 * 16 + VAR15] = 1;
                    VAR6->VAR9[0].VAR42[VAR13 * 16 + VAR15] = FUN4(VAR29 / VAR31);
                    VAR6->VAR9[1].VAR42[VAR13 * 16 + VAR15] = VAR29 / VAR30;
                    VAR6->VAR9[1].VAR26[VAR13 * 16 + VAR15] = VAR34->VAR43 ? VAR44 : VAR45;
                    VAR12++;
                }
            }
            VAR11 += VAR8->VAR19.VAR35[VAR15];
        }
    }
    VAR6->VAR46 = !!VAR12;
}