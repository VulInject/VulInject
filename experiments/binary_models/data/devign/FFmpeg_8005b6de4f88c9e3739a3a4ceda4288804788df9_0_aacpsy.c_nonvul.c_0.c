static VAR1 FUN1(VAR2 *VAR3, const float *VAR4, const float *VAR5, int VAR6, int VAR7)
{
    VAR8 *VAR9 = (VAR8 *)VAR3->VAR10;
    VAR11 *VAR12 = &VAR9->VAR13[VAR6];
    int VAR14 = 0;
    int VAR15 = 1;
    int VAR16[VAR17 + 1] = {0};
    float VAR18[VAR17];
    int VAR19;
    FFPsyWindowInfo VAR20 = {{0}};
    if (VAR5)
    {
        float VAR21[VAR22];
        float const *VAR23 = VAR21;
        float VAR24[(VAR17 + 1) * VAR25];
        float VAR26[(VAR17 + 1) * VAR25];
        float VAR27[VAR17 + 1] = {0};
        const float *VAR28 = VAR5 + (VAR29 / 4 - VAR30);
        int VAR31 = 0;
        FUN2(VAR28, VAR21, VAR32);
        for (VAR19 = 0; VAR19 < VAR25; VAR19++)
        {
            VAR26[VAR19] = VAR12->VAR33[VAR19 + ((VAR17 - 1) * VAR25)];
            assert(VAR12->VAR33[VAR19 + ((VAR17 - 2) * VAR25 + 1)] > 0);
            VAR24[VAR19] = VAR26[VAR19] / VAR12->VAR33[VAR19 + ((VAR17 - 2) * VAR25 + 1)];
            VAR27[0] += VAR26[VAR19];
        }
        for (VAR19 = 0; VAR19 < VAR17 * VAR25; VAR19++)
        {
            float const *const VAR34 = VAR23 + VAR22 / (VAR17 * VAR25);
            float VAR35 = 1.0f;
            for (; VAR23 < VAR34; VAR23++)
                VAR35 = FUN3(VAR35, FUN4(*VAR23));
            VAR12->VAR33[VAR19] = VAR26[VAR19 + VAR25] = VAR35;
            VAR27[1 + VAR19 / VAR25] += VAR35;
            if (VAR35 > VAR26[VAR19 + 1])
                VAR35 = VAR35 / VAR26[VAR19 + 1];
            else if (VAR26[VAR19 + 1] > VAR35 * 10.0f)
                VAR35 = VAR26[VAR19 + 1] / (VAR35 * 10.0f);
            else
                VAR35 = 0.0;
            VAR24[VAR19 + VAR25] = VAR35;
        }
        for (VAR19 = 0; VAR19 < (VAR17 + 1) * VAR25; VAR19++)
            if (!VAR16[VAR19 / VAR25])
                if (VAR24[VAR19] > VAR12->VAR36)
                    VAR16[VAR19 / VAR25] = (VAR19 % VAR25) + 1;
        for (VAR19 = 1; VAR19 < VAR17 + 1; VAR19++)
        {
            float const VAR37 = VAR27[VAR19 - 1];
            float const VAR38 = VAR27[VAR19];
            float const VAR39 = FUN3(VAR37, VAR38);
            if (VAR39 < 40000)
            {
                if (VAR37 < 1.7f * VAR38 && VAR38 < 1.7f * VAR37)
                {
                    if (VAR19 == 1 && VAR16[0] < VAR16[VAR19])
                        VAR16[0] = 0;
                    VAR16[VAR19] = 0;
                }
            }
            VAR31 += VAR16[VAR19];
        }
        if (VAR16[0] <= VAR12->VAR40)
            VAR16[0] = 0;
        VAR31 += VAR16[0];
        if (VAR12->VAR40 == 3 || VAR31)
        {
            VAR15 = 0;
            for (VAR19 = 1; VAR19 < VAR17 + 1; VAR19++)
                if (VAR16[VAR19] && VAR16[VAR19 - 1])
                    VAR16[VAR19] = 0;
        }
    }
    else
    {
        VAR15 = !(VAR7 == VAR41);
    }
    FUN5(VAR12, &VAR20, VAR15);
    VAR20.VAR42[1] = VAR7;
    if (VAR20.VAR42[0] != VAR41)
    {
        float VAR43 = 0.0f;
        VAR20.VAR44 = 1;
        VAR20.VAR14[0] = 1;
        if (VAR20.VAR42[0] == VAR45)
            VAR20.VAR46 = 0;
        else
            VAR20.VAR46 = 1;
        for (VAR19 = 0; VAR19 < 8; VAR19++)
            VAR43 = FUN3(VAR43, VAR18[VAR19]);
        VAR20.VAR43[0] = VAR43;
    }
    else
    {
        int VAR47 = 0;
        VAR20.VAR44 = 8;
        VAR20.VAR46 = 0;
        for (VAR19 = 0; VAR19 < 8; VAR19++)
        {
            if (!((VAR12->VAR48 >> VAR19) & 1))
                VAR47 = VAR19;
            VAR20.VAR14[VAR47]++;
        }
        for (VAR19 = 0; VAR19 < 8; VAR19 += VAR20.VAR14[VAR19])
        {
            int VAR49;
            float VAR43 = 0.0f;
            for (VAR49 = 0; VAR49 < VAR20.VAR14[VAR19]; VAR49++)
                VAR43 = FUN3(VAR43, VAR18[VAR19 + VAR49]);
            for (VAR49 = 0; VAR49 < VAR20.VAR14[VAR19]; VAR49++)
                VAR20.VAR43[VAR19 + VAR49] = VAR43;
        }
    }
    for (VAR19 = 0; VAR19 < 9; VAR19++)
    {
        if (VAR16[VAR19])
        {
            VAR14 = VAR19;
            break;
        }
    }
    VAR12->VAR48 = VAR50[VAR14];
    VAR12->VAR40 = VAR16[8];
    return VAR20;
}