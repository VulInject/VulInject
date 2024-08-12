static VAR1 FUN1(VAR2 *VAR3, const VAR4 *VAR5, const VAR4 *VAR6, int VAR7, int VAR8)
{
    VAR9 *VAR10 = (VAR9 *)VAR3->VAR11;
    VAR12 *VAR13 = &VAR10->VAR14[VAR7];
    int VAR15 = 0;
    int VAR16 = 1;
    int VAR17[VAR18 + 1] = {0};
    int VAR19;
    FFPsyWindowInfo VAR20;
    memset(&VAR20, 0, sizeof(VAR20));
    if (VAR6)
    {
        float VAR21[VAR22];
        float const *VAR23 = VAR21;
        float VAR24[(VAR18 + 1) * VAR25];
        float VAR26[(VAR18 + 1) * VAR25];
        float VAR27[VAR18 + 1] = {0};
        int VAR28 = VAR3->VAR29->VAR30;
        const VAR4 *VAR31 = VAR6 + (VAR32 / 4 - VAR33) * VAR28;
        int VAR34, VAR35 = 0;
        for (VAR19 = 0; VAR19 < VAR22; VAR19++)
        {
            float VAR36, VAR37;
            VAR36 = VAR31[(VAR19 + ((VAR33 - 1) / 2)) * VAR28];
            VAR37 = 0.0;
            for (VAR34 = 0; VAR34 < ((VAR33 - 1) / 2) - 1; VAR34 += 2)
            {
                VAR36 += VAR38[VAR34] * (VAR31[(VAR19 + VAR34) * VAR28] + VAR31[(VAR19 + VAR33 - VAR34) * VAR28]);
                VAR37 += VAR38[VAR34 + 1] * (VAR31[(VAR19 + VAR34 + 1) * VAR28] + VAR31[(VAR19 + VAR33 - VAR34 - 1) * VAR28]);
            }
            VAR21[VAR19] = VAR36 + VAR37;
        }
        for (VAR19 = 0; VAR19 < VAR25; VAR19++)
        {
            VAR26[VAR19] = VAR13->VAR39[VAR19 + ((VAR18 - 1) * VAR25)];
            assert(VAR13->VAR39[VAR19 + ((VAR18 - 2) * VAR25 + 1)] > 0);
            VAR24[VAR19] = VAR26[VAR19] / VAR13->VAR39[VAR19 + ((VAR18 - 2) * VAR25 + 1)];
            VAR27[0] += VAR26[VAR19];
        }
        for (VAR19 = 0; VAR19 < VAR18 * VAR25; VAR19++)
        {
            float const *const VAR40 = VAR23 + VAR22 / (VAR18 * VAR25);
            float VAR41 = 1.0f;
            for (; VAR23 < VAR40; VAR23++)
                if (VAR41 < FUN2(*VAR23))
                    VAR41 = FUN2(*VAR23);
            VAR13->VAR39[VAR19] = VAR26[VAR19 + VAR25] = VAR41;
            VAR27[1 + VAR19 / VAR25] += VAR41;
            if (VAR41 > VAR26[VAR19 + 1])
                VAR41 = VAR41 / VAR26[VAR19 + 1];
            else if (VAR26[VAR19 + 1] > VAR41 * 10.0f)
                VAR41 = VAR26[VAR19 + 1] / (VAR41 * 10.0f);
            else
                VAR41 = 0.0;
            VAR24[VAR19 + VAR25] = VAR41;
        }
        for (VAR19 = 0; VAR19 < (VAR18 + 1) * VAR25; VAR19++)
            if (!VAR17[VAR19 / VAR25])
                if (VAR24[VAR19] > VAR13->VAR42)
                    VAR17[VAR19 / VAR25] = (VAR19 % VAR25) + 1;
        for (VAR19 = 1; VAR19 < VAR18 + 1; VAR19++)
        {
            float const VAR43 = VAR27[VAR19 - 1];
            float const VAR44 = VAR27[VAR19];
            float const VAR45 = FUN3(VAR43, VAR44);
            if (VAR45 < 40000)
            {
                if (VAR43 < 1.7f * VAR44 && VAR44 < 1.7f * VAR43)
                {
                    if (VAR19 == 1 && VAR17[0] < VAR17[VAR19])
                        VAR17[0] = 0;
                    VAR17[VAR19] = 0;
                }
            }
            VAR35 += VAR17[VAR19];
        }
        if (VAR17[0] <= VAR13->VAR46)
            VAR17[0] = 0;
        VAR35 += VAR17[0];
        if (VAR13->VAR46 == 3 || VAR35)
        {
            VAR16 = 0;
            for (VAR19 = 1; VAR19 < VAR18 + 1; VAR19++)
                if (VAR17[VAR19] && VAR17[VAR19 - 1])
                    VAR17[VAR19] = 0;
        }
    }
    else
    {
        VAR16 = !(VAR8 == VAR47);
    }
    FUN4(VAR13, &VAR20, VAR16);
    VAR20.VAR48[1] = VAR8;
    if (VAR20.VAR48[0] != VAR47)
    {
        VAR20.VAR49 = 1;
        VAR20.VAR15[0] = 1;
        if (VAR20.VAR48[0] == VAR50)
            VAR20.VAR51 = 0;
        else
            VAR20.VAR51 = 1;
    }
    else
    {
        int VAR52 = 0;
        VAR20.VAR49 = 8;
        VAR20.VAR51 = 0;
        for (VAR19 = 0; VAR19 < 8; VAR19++)
        {
            if (!((VAR13->VAR53 >> VAR19) & 1))
                VAR52 = VAR19;
            VAR20.VAR15[VAR52]++;
        }
    }
    for (VAR19 = 0; VAR19 < 9; VAR19++)
    {
        if (VAR17[VAR19])
        {
            VAR15 = VAR19;
            break;
        }
    }
    VAR13->VAR53 = VAR54[VAR15];
    VAR13->VAR46 = VAR17[8];
    return VAR20;
}