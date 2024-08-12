void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    float VAR5[8 * 22];
    float VAR6[2 * 8 * 100];
    float *VAR7 = VAR6 + 8 * 100;
    int VAR8 = (VAR2->VAR9 << 3) - VAR2->VAR10;
    int VAR11 = 1;
    int VAR12 = 0;
    int VAR13, VAR14;
    for (VAR13 = VAR2->VAR15; VAR13 < VAR2->VAR16; VAR13++)
    {
        uint32_t VAR17[2] = {(1 << VAR2->VAR18) - 1, (1 << VAR2->VAR18) - 1};
        int VAR19 = VAR20[VAR13] << VAR2->VAR21;
        int VAR22 = VAR23[VAR13] << VAR2->VAR21;
        float *VAR24 = VAR2->VAR25[0].VAR26 + VAR19;
        float *VAR27 = (VAR2->VAR28 == 2) ? VAR2->VAR25[1].VAR26 + VAR19 : NULL;
        float *VAR29, *VAR30;
        int VAR31 = FUN2(VAR4);
        int VAR32 = -1;
        int VAR33 = 0;
        if (VAR13 != VAR2->VAR15)
            VAR2->VAR34 -= VAR31;
        VAR2->VAR35 = VAR8 - VAR31 - 1;
        if (VAR13 <= VAR2->VAR36 - 1)
        {
            int VAR37 = VAR2->VAR34 / FUN3(3, VAR2->VAR36 - VAR13);
            VAR33 = FUN4(FUN3(VAR2->VAR35 + 1, VAR2->VAR38[VAR13] + VAR37), 14);
        }
        if ((VAR20[VAR13] - VAR23[VAR13] >= VAR20[VAR2->VAR15] || VAR13 == VAR2->VAR15 + 1) && (VAR11 || VAR12 == 0))
            VAR12 = VAR13;
        if (VAR13 == VAR2->VAR15 + 1)
        {
            int VAR39 = 8 * VAR20[VAR13];
            int VAR40 = 8 * (VAR23[VAR13] - VAR23[VAR13 - 1]);
            memcpy(&VAR6[VAR39], &VAR6[VAR39 - VAR40], VAR40 * sizeof(float));
            if (VAR2->VAR28 == 2)
                memcpy(&VAR7[VAR39], &VAR7[VAR39 - VAR40], VAR40 * sizeof(float));
        }
        if (VAR12 != 0 && (VAR2->VAR41 != VAR42 || VAR2->VAR18 > 1 || VAR2->VAR43[VAR13] < 0))
        {
            int VAR44, VAR45;
            VAR32 = FUN5(VAR20[VAR2->VAR15], VAR20[VAR12] - VAR23[VAR13]);
            VAR44 = VAR12;
            while (VAR20[--VAR44] > VAR32)
                ;
            VAR45 = VAR12 - 1;
            while (++VAR45 < VAR13 && VAR20[VAR45] < VAR32 + VAR23[VAR13])
                ;
            VAR17[0] = VAR17[1] = 0;
            for (VAR14 = VAR44; VAR14 < VAR45; VAR14++)
            {
                VAR17[0] |= VAR2->VAR25[0].VAR46[VAR14];
                VAR17[1] |= VAR2->VAR25[VAR2->VAR28 - 1].VAR46[VAR14];
            }
        }
        if (VAR2->VAR47 && VAR13 == VAR2->VAR48)
        {
            VAR2->VAR47 = 0;
            for (VAR14 = VAR20[VAR2->VAR15] << VAR2->VAR21; VAR14 < VAR19; VAR14++)
                VAR6[VAR14] = (VAR6[VAR14] + VAR7[VAR14]) / 2;
        }
        VAR29 = VAR32 != -1 ? VAR6 + (VAR32 << VAR2->VAR21) : NULL;
        VAR30 = VAR32 != -1 ? VAR7 + (VAR32 << VAR2->VAR21) : NULL;
        if (VAR2->VAR47)
        {
            VAR17[0] = VAR2->VAR49->FUN6(VAR2->VAR49, VAR2, VAR4, VAR13, VAR24, NULL, VAR22, VAR33 >> 1, VAR2->VAR18, VAR29, VAR2->VAR21, VAR6 + VAR19, 0, 1.0f, VAR5, VAR17[0]);
            VAR17[1] = VAR2->VAR49->FUN6(VAR2->VAR49, VAR2, VAR4, VAR13, VAR27, NULL, VAR22, VAR33 >> 1, VAR2->VAR18, VAR30, VAR2->VAR21, VAR7 + VAR19, 0, 1.0f, VAR5, VAR17[1]);
        }
        else
        {
            VAR17[0] = VAR2->VAR49->FUN6(VAR2->VAR49, VAR2, VAR4, VAR13, VAR24, VAR27, VAR22, VAR33 >> 0, VAR2->VAR18, VAR29, VAR2->VAR21, VAR6 + VAR19, 0, 1.0f, VAR5, VAR17[0] | VAR17[1]);
            VAR17[1] = VAR17[0];
        }
        VAR2->VAR25[0].VAR46[VAR13] = (VAR50)VAR17[0];
        VAR2->VAR25[VAR2->VAR28 - 1].VAR46[VAR13] = (VAR50)VAR17[1];
        VAR2->VAR34 += VAR2->VAR38[VAR13] + VAR31;
        VAR11 = (VAR33 > VAR22 << 3);
    }
}