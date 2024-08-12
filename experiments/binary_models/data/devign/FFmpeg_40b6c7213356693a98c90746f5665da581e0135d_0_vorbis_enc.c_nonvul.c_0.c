static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, int *VAR7, float *VAR8, int VAR9)
{
    int VAR10 = 255 / VAR4->VAR11 + 1;
    int VAR12[VAR4->VAR13];
    int VAR14, VAR15;
    int VAR16, VAR17;
    FUN2(VAR6, 1, 1);
    FUN2(VAR6, FUN3(VAR10 - 1), VAR7[0]);
    FUN2(VAR6, FUN3(VAR10 - 1), VAR7[1]);
    VAR12[0] = VAR12[1] = 1;
    for (VAR14 = 2; VAR14 < VAR4->VAR13; VAR14++)
    {
        int VAR18 = FUN4(VAR4->VAR19[VAR4->VAR19[VAR14].VAR20].VAR21, VAR7[VAR4->VAR19[VAR14].VAR20], VAR4->VAR19[VAR4->VAR19[VAR14].VAR22].VAR21, VAR7[VAR4->VAR19[VAR14].VAR22], VAR4->VAR19[VAR14].VAR21);
        int VAR23 = VAR10 - VAR18;
        int VAR24 = VAR18;
        int VAR25 = FUN5(VAR23, VAR24);
        if (VAR18 == VAR7[VAR14])
        {
            VAR12[VAR14] = 0;
            continue;
        }
        else
        {
            if (!VAR12[VAR4->VAR19[VAR14].VAR20])
                VAR12[VAR4->VAR19[VAR14].VAR20] = -1;
            if (!VAR12[VAR4->VAR19[VAR14].VAR22])
                VAR12[VAR4->VAR19[VAR14].VAR22] = -1;
        }
        if (VAR7[VAR14] > VAR18)
        {
            if (VAR7[VAR14] - VAR18 > VAR25)
                VAR12[VAR14] = VAR7[VAR14] - VAR18 + VAR24;
            else
                VAR12[VAR14] = (VAR7[VAR14] - VAR18) << 1;
        }
        else
        {
            if (VAR18 - VAR7[VAR14] > VAR25)
                VAR12[VAR14] = VAR18 - VAR7[VAR14] + VAR23 - 1;
            else
                VAR12[VAR14] = ((VAR18 - VAR7[VAR14]) << 1) - 1;
        }
    }
    VAR15 = 2;
    for (VAR14 = 0; VAR14 < VAR4->VAR26; VAR14++)
    {
        VAR27 *VAR28 = &VAR4->VAR29[VAR4->VAR30[VAR14]];
        int VAR31, VAR32 = 0, VAR33 = 1 << VAR28->VAR34;
        if (VAR28->VAR34)
        {
            VAR35 *VAR36 = &VAR2->VAR37[VAR28->VAR38];
            int VAR39 = 0;
            for (VAR31 = 0; VAR31 < VAR28->VAR40; VAR31++)
            {
                int VAR41;
                for (VAR41 = 0; VAR41 < VAR33; VAR41++)
                {
                    int VAR42 = 1;
                    if (VAR28->VAR43[VAR41] != -1)
                        VAR42 = VAR2->VAR37[VAR28->VAR43[VAR41]].VAR44;
                    if (VAR12[VAR15 + VAR31] < VAR42)
                        break;
                }
                assert(VAR41 != VAR33);
                VAR32 |= VAR41 << VAR39;
                VAR39 += VAR28->VAR34;
            }
            assert(VAR32 < VAR36->VAR44);
            FUN2(VAR6, VAR36->VAR45[VAR32].VAR46, VAR36->VAR45[VAR32].VAR47);
        }
        for (VAR31 = 0; VAR31 < VAR28->VAR40; VAR31++)
        {
            int VAR36 = VAR28->VAR43[VAR32 & (VAR33 - 1)];
            int VAR48 = VAR12[VAR15++];
            VAR32 >>= VAR28->VAR34;
            if (VAR36 == -1)
                continue;
            if (VAR48 == -1)
                VAR48 = 0;
            assert(VAR48 < VAR2->VAR37[VAR36].VAR44);
            assert(VAR48 >= 0);
            FUN2(VAR6, VAR2->VAR37[VAR36].VAR45[VAR48].VAR46, VAR2->VAR37[VAR36].VAR45[VAR48].VAR47);
        }
    }
    VAR16 = 0;
    VAR17 = VAR7[0] * VAR4->VAR11;
    for (VAR14 = 1; VAR14 < VAR4->VAR13; VAR14++)
    {
        int VAR49 = VAR4->VAR19[VAR14].VAR50;
        if (VAR12[VAR49])
        {
            FUN6(VAR16, VAR17, VAR4->VAR19[VAR49].VAR21, VAR7[VAR49] * VAR4->VAR11, VAR8, VAR9);
            VAR16 = VAR4->VAR19[VAR49].VAR21;
            VAR17 = VAR7[VAR49] * VAR4->VAR11;
        }
        if (VAR16 >= VAR9)
            break;
    }
    if (VAR16 < VAR9)
        FUN6(VAR16, VAR17, VAR9, VAR17, VAR8, VAR9);
}