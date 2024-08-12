static void FUN1(VAR1 *VAR2, VAR3 *VAR4[3], VAR3 *VAR5[3], int VAR6[3], int VAR7[3], int VAR8, int VAR9, VAR3 *VAR10, int VAR11)
{
    int VAR12, VAR13, VAR14, VAR15;
    const int VAR16 = 1 << VAR2->VAR17;
    for (VAR14 = 0; VAR14 < 3; VAR14++)
    {
        int VAR18 = !!VAR14;
        int VAR19 = VAR8 >> (VAR18 ? VAR2->VAR20 : 0);
        int VAR21 = VAR9 >> (VAR18 ? VAR2->VAR22 : 0);
        int VAR23 = VAR2->VAR24[VAR14];
        int VAR25 = VAR26 >> (VAR18 ? VAR2->VAR20 : 0);
        if (!VAR5[VAR14] || !VAR4[VAR14])
            continue;
        for (VAR13 = 0; VAR13 < VAR21; VAR13++)
        {
            int VAR27 = VAR25 + VAR25 * VAR23 + VAR13 * VAR23;
            memcpy(VAR2->VAR5[VAR14] + VAR27, VAR5[VAR14] + VAR13 * VAR7[VAR14], VAR19);
            for (VAR12 = 0; VAR12 < VAR25; VAR12++)
            {
                VAR2->VAR5[VAR14][VAR27 - VAR12 - 1] = VAR2->VAR5[VAR14][VAR27 + VAR12];
                VAR2->VAR5[VAR14][VAR27 + VAR19 + VAR12] = VAR2->VAR5[VAR14][VAR27 + VAR19 - VAR12 - 1];
            }
        }
        for (VAR13 = 0; VAR13 < VAR25; VAR13++)
        {
            memcpy(VAR2->VAR5[VAR14] + (VAR25 - 1 - VAR13) * VAR23, VAR2->VAR5[VAR14] + (VAR13 + VAR25) * VAR23, VAR23);
            memcpy(VAR2->VAR5[VAR14] + (VAR21 + VAR25 + VAR13) * VAR23, VAR2->VAR5[VAR14] + (VAR21 - VAR13 + VAR25 - 1) * VAR23, VAR23);
        }
        VAR2->VAR28->VAR29[VAR14] = VAR23;
        memset(VAR2->VAR30[VAR14], 0, (VAR21 + 2 * VAR25) * VAR23 * sizeof(VAR31));
    }
    if (VAR2->VAR32)
        VAR2->VAR28->VAR33 = VAR2->VAR32 * VAR34;
    else
    {
        int VAR35 = 0;
        int VAR36 = (VAR9 >> 4) * (VAR9 >> 4);
        for (VAR13 = 0; VAR13 < (VAR9 >> 4); VAR13++)
        {
            for (VAR12 = 0; VAR12 < (VAR8 >> 4); VAR12++)
                VAR35 += VAR10[VAR12 + VAR13 * VAR11];
        }
        VAR2->VAR28->VAR33 = FUN2((VAR35 + VAR36 / 2) / VAR36, VAR2->VAR37) * VAR34;
    }
    VAR2->VAR28->VAR9 = VAR9;
    VAR2->VAR28->VAR8 = VAR8;
    for (VAR14 = 0; VAR14 < VAR16; VAR14++)
    {
        const int VAR38 = VAR39[VAR14 + VAR16 - 1][0];
        const int VAR40 = VAR39[VAR14 + VAR16 - 1][1];
        const int VAR41 = VAR38 >> VAR2->VAR20;
        const int VAR42 = VAR40 >> VAR2->VAR22;
        const int VAR43 = VAR26 >> VAR2->VAR20;
        int VAR39;
        AVPacket VAR44;
        int VAR45;
        FUN3(&VAR44);
        VAR44.VAR46 = VAR2->VAR47;
        VAR44.VAR48 = VAR2->VAR49;
        VAR2->VAR28->VAR46[0] = VAR2->VAR5[0] + VAR38 + VAR40 * VAR2->VAR28->VAR29[0];
        VAR2->VAR28->VAR46[1] = VAR2->VAR5[1] + VAR41 + VAR42 * VAR2->VAR28->VAR29[1];
        VAR2->VAR28->VAR46[2] = VAR2->VAR5[2] + VAR41 + VAR42 * VAR2->VAR28->VAR29[2];
        VAR2->VAR28->VAR50 = VAR2->VAR51[VAR14]->VAR52;
        FUN4(VAR2->VAR51[VAR14], &VAR44, VAR2->VAR28, &VAR45);
        VAR2->VAR53 = VAR2->VAR51[VAR14]->VAR54;
        VAR39 = (VAR26 - VAR38) + (VAR26 - VAR40) * VAR2->VAR53->VAR29[0];
        for (VAR13 = 0; VAR13 < VAR9; VAR13++)
            for (VAR12 = 0; VAR12 < VAR8; VAR12++)
                VAR2->VAR30[0][VAR12 + VAR13 * VAR2->VAR24[0]] += VAR2->VAR53->VAR46[0][VAR12 + VAR13 * VAR2->VAR53->VAR29[0] + VAR39];
        if (!VAR5[2] || !VAR4[2])
            continue;
        VAR39 = (VAR43 - VAR41) + (VAR43 - VAR42) * VAR2->VAR53->VAR29[1];
        for (VAR13 = 0; VAR13 < VAR9 >> VAR2->VAR22; VAR13++)
        {
            for (VAR12 = 0; VAR12 < VAR8 >> VAR2->VAR20; VAR12++)
            {
                VAR2->VAR30[1][VAR12 + VAR13 * VAR2->VAR24[1]] += VAR2->VAR53->VAR46[1][VAR12 + VAR13 * VAR2->VAR53->VAR29[1] + VAR39];
                VAR2->VAR30[2][VAR12 + VAR13 * VAR2->VAR24[2]] += VAR2->VAR53->VAR46[2][VAR12 + VAR13 * VAR2->VAR53->VAR29[2] + VAR39];
            }
        }
    }
    for (VAR15 = 0; VAR15 < 3; VAR15++)
    {
        int VAR18 = !!VAR15;
        if (!VAR4[VAR15])
            continue;
        FUN5(VAR4[VAR15], VAR2->VAR30[VAR15], VAR6[VAR15], VAR2->VAR24[VAR15], VAR8 >> (VAR18 ? VAR2->VAR20 : 0), VAR9 >> (VAR18 ? VAR2->VAR22 : 0), 8 - VAR2->VAR17);
    }
}